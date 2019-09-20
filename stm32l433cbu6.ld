/* Program Entry, set to mark it as "used" and avoid gcc warnings */
ENTRY(Startup_ResetHandler)


/* Memory Spaces Definitions */
MEMORY
{
	FLASH    (RX)  : ORIGIN = 0x08000000, LENGTH = 128K
    SRAM     (RWX) : ORIGIN = 0x20000000, LENGTH = 64K
}


/* code/data sections */
SECTIONS
{
	/* basic memory layout: SRAM */
	__sram_size     = LENGTH(SRAM);
	__sram_addr     = ORIGIN(SRAM);

	/* basic memory layout: FLASH */
	__flash_size    = LENGTH(FLASH);
	__flash_addr    = ORIGIN(FLASH);
	
    /*
     * FLASH MEMORY AREA
     */
	

    /* flash code starts here */
    __flash_code_addr = __flash_addr;

    /* code */
    .flash_code : 
	{
		/* exception & interrupt vectors */
        __flash_vectors = .;
        /* make sure that these stay in the output file */
        KEEP(*(.flash_vectors))
        
		/* image header follows the array, and is aligned to 16 bytes */
        . = ALIGN(0x10);
        __image_header_addr = .;
        /* keep the header info */
        KEEP(*(.image_header))
        __image_checksum_addr = .;
        /* keep the checksum */
        KEEP(*(.image_checksum))
        __image_checksum_offs = __image_checksum_addr - __image_header_addr;
        
        /* Program code */
        *(.text)                    
        *(.text.*)
		*(.stub .gnu.linkonce.t.*)
        *(.glue_7)         /* glue arm to thumb code */
        *(.glue_7t)        /* glue thumb to arm code */  
        /* read-only data */
        *(.rodata .rodata.*)
    } > FLASH
    
	.ARM.exidx : 
	{
		*(.ARM.exidx* .gnu.linkonce.armexidx.*)
	} > FLASH
	
	.ARM.extab : { 
        *(.ARM.extab* .gnu.linkonce.armextab.*)
    } > FLASH
    
        /* flash code ends here */
    __flash_code_size = . - __flash_code_addr;
    /* all data/code to be initialized from flash will go here */ 
    __flash_sram_init_src_addr = .;

    
    /*
     * SRAM MEMORY AREA
     */
    
    /* SRAM memory (uninitialized data) */
    .bss (NOLOAD) :
    {
        *(.bss)       
        *(.bss.*)
        *(COMMON)
        /* align code to 4 bytes */
        . = ALIGN(4); 
    } > SRAM
    
    /* flash initialized data starting location */
    __flash_sram_init_dst_addr = .;
    
    /* code in sram memory */
    .ram_code : AT (__flash_sram_init_src_addr)
    {
        /* ram code */
        *(.ram_code)       
        *(.ram_code.*)
        /* align code to 4 bytes */
        . = ALIGN(4);
    } > SRAM
    
    /* initialized data in sram memory */
    .data : AT (__flash_sram_init_src_addr + SIZEOF(.ram_code))
    {      
        /* data memory */             
        *(.data)                    
        *(.data.*)
		/* put a memory guard here */
        *(.mem_guard)
        KEEP(*(.mem_guard))
        /* align code to 4 bytes */
        . = ALIGN(4); 
    } > SRAM
    
    /* flash initialized data size */
    __flash_sram_init_size = . - __flash_sram_init_dst_addr;
    /* complete flash image size */
    __flash_image_size = __flash_code_size + __flash_sram_init_size;

    /* bss start-end */
    __bss_addr = ADDR(.bss);
    __bss_size = SIZEOF(.bss);
    
    /* stack pointer */
    __stack = ORIGIN(SRAM) + LENGTH(SRAM);
	
	/* sanity check */
    ASSERT(__flash_image_size <= LENGTH(FLASH), 
        "FLASH MEMORY LIMIT EXCEEDED")
} 
