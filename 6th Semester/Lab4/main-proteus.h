000     @SCRATCH
001     @SCRATCH
001     _RETURN_
002     @SCRATCH
003     @SCRATCH
004     @INTERRUPT_AREA
005     @INTERRUPT_AREA
006     @INTERRUPT_AREA
007     @INTERRUPT_AREA
008     @INTERRUPT_AREA
009     @INTERRUPT_AREA
00A     @INTERRUPT_AREA
00B     @INTERRUPT_AREA
00C     @INTERRUPT_AREA
00D     @INTERRUPT_AREA
00E     @INTERRUPT_AREA
00F     @INTERRUPT_AREA
010     @INTERRUPT_AREA
011     @INTERRUPT_AREA
012     @INTERRUPT_AREA
013     @INTERRUPT_AREA
014     @INTERRUPT_AREA
015     @INTERRUPT_AREA
016     rb.@SCRATCH1
017     @delay_ms1.P1
F81     PORTB
F83     PSP_DATA
F83     PORTD
FB4.6   C1OUT
FB4.7   C2OUT
FBB     CCP_2
FBB     CCP_2_LOW
FBC     CCP_2_HIGH
FBE     CCP_1
FBE     CCP_1_LOW
FBF     CCP_1_HIGH
FE1-FE2 @READ_PACKED_MEMORY.P1
FE1-FE2 @WRITE_PACKED_MEMORY.P2
FE9-FEA @WRITE_PACKED_MEMORY.P1
FE9-FEA @READ_PROGRAM_MEMORY.P2
FE9-FEA @WRITE_PROGRAM_MEMORY.P3
FE9-FEA @READ_PACKED_MEMORY.P4
FF6-FF8 @WRITE_PROGRAM_MEMORY.P1
FF6-FF8 @READ_PROGRAM_MEMORY.P2

ROM Allocation:
0008A6  @delay_ms1
0008D2  rb
000908  init
00091C  main
00091C  @cinit1
000930  @cinit2

Project Directory:
    E:\Di-Pa\ask5\

Project Files:
    ask5.c                                                  [05-���-23 02:23  CRC=F7E9378D]
    main.h                                                  [05-���-23 01:49  CRC=0813682B]
    C:\Program Files\PICC\Devices\18F4550.h                 [09-���-13 15:40  CRC=A157EDDE]

Source signature=42AC7B74

Units:
    ask5 (main)

Compiler Settings:
    Processor:      PIC18F4550
    Pointer Size:   16
    ADC Range:      0-1023
    Opt Level:      9
    Short,Int,Long: UNSIGNED: 1,8,16
    Float,Double:   32,32

Output Files:
    XREF file:   ask5.xsym
    Errors:      ask5.err
    Ext Symbols: ask5.esym
    INHX32:      ask5.hex
    Symbols:     ask5.sym
    List:        ask5.lst
    Debug/COFF:  ask5.cof
    Project:     ask5.ccspjt
    Call Tree:   ask5.tre
    Statistics:  ask5.STA
                     //USB voltage regulator enabled
//#FUSES ICPRT                     //ICPRT enabled
#FUSES WRTB
#FUSES NOICPRT 
#FUSES NOLPT1OSC
#FUSES CCP2B3 
#FUSES NOCPB
#FUSES NOCPD
#FUSES NOWRTC
#FUSES NOWRTD
#FUSES NOEBTR
#FUSES NOEBTRB              

/* systm clock is 48 MHz */
#use delay(clock=48000000,RESTART_WDT)
/* --- BEGIN: changes required for bootloader ------------------------------ */

/* ------------------------------------------------------------------------- */
/* map reset vector and interrupt vector                                     */
/* 0x000-0x7FF is used by the bootloader. The bootloader maps the original   */
/* reset vecotr (0x000) to 0x800 and the reset vector (0x008) to 0x800.      */
/* ------------------------------------------------------------------------- */
#build (reset=0x000, interrupt=0x008)

/* ------------------------------------------------------------------------- */
/* reserve boot block area                                                   */
/* This memory range is used by the bootloader, so the application must not  */
/* use this area.                                                            */
/* ------------------------------------------------------------------------- */
//#org 0  , 0x000 {}

/* --- END: changes required for bootloader -------------------------------- */




