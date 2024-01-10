                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-large
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _Init_UART
                                     13 	.globl __sdcc_external_startup
                                     14 	.globl _writeToDecoder
                                     15 	.globl _writeToIOExpander
                                     16 	.globl _i2c_init
                                     17 	.globl _getchar
                                     18 	.globl _CY
                                     19 	.globl _AC
                                     20 	.globl _F0
                                     21 	.globl _RS1
                                     22 	.globl _RS0
                                     23 	.globl _OV
                                     24 	.globl _F1
                                     25 	.globl _P
                                     26 	.globl _PS
                                     27 	.globl _PT1
                                     28 	.globl _PX1
                                     29 	.globl _PT0
                                     30 	.globl _PX0
                                     31 	.globl _RD
                                     32 	.globl _WR
                                     33 	.globl _T1
                                     34 	.globl _T0
                                     35 	.globl _INT1
                                     36 	.globl _INT0
                                     37 	.globl _TXD
                                     38 	.globl _RXD
                                     39 	.globl _P3_7
                                     40 	.globl _P3_6
                                     41 	.globl _P3_5
                                     42 	.globl _P3_4
                                     43 	.globl _P3_3
                                     44 	.globl _P3_2
                                     45 	.globl _P3_1
                                     46 	.globl _P3_0
                                     47 	.globl _EA
                                     48 	.globl _ES
                                     49 	.globl _ET1
                                     50 	.globl _EX1
                                     51 	.globl _ET0
                                     52 	.globl _EX0
                                     53 	.globl _P2_7
                                     54 	.globl _P2_6
                                     55 	.globl _P2_5
                                     56 	.globl _P2_4
                                     57 	.globl _P2_3
                                     58 	.globl _P2_2
                                     59 	.globl _P2_1
                                     60 	.globl _P2_0
                                     61 	.globl _SM0
                                     62 	.globl _SM1
                                     63 	.globl _SM2
                                     64 	.globl _REN
                                     65 	.globl _TB8
                                     66 	.globl _RB8
                                     67 	.globl _TI
                                     68 	.globl _RI
                                     69 	.globl _P1_7
                                     70 	.globl _P1_6
                                     71 	.globl _P1_5
                                     72 	.globl _P1_4
                                     73 	.globl _P1_3
                                     74 	.globl _P1_2
                                     75 	.globl _P1_1
                                     76 	.globl _P1_0
                                     77 	.globl _TF1
                                     78 	.globl _TR1
                                     79 	.globl _TF0
                                     80 	.globl _TR0
                                     81 	.globl _IE1
                                     82 	.globl _IT1
                                     83 	.globl _IE0
                                     84 	.globl _IT0
                                     85 	.globl _P0_7
                                     86 	.globl _P0_6
                                     87 	.globl _P0_5
                                     88 	.globl _P0_4
                                     89 	.globl _P0_3
                                     90 	.globl _P0_2
                                     91 	.globl _P0_1
                                     92 	.globl _P0_0
                                     93 	.globl _TXD0
                                     94 	.globl _RXD0
                                     95 	.globl _BREG_F7
                                     96 	.globl _BREG_F6
                                     97 	.globl _BREG_F5
                                     98 	.globl _BREG_F4
                                     99 	.globl _BREG_F3
                                    100 	.globl _BREG_F2
                                    101 	.globl _BREG_F1
                                    102 	.globl _BREG_F0
                                    103 	.globl _P5_7
                                    104 	.globl _P5_6
                                    105 	.globl _P5_5
                                    106 	.globl _P5_4
                                    107 	.globl _P5_3
                                    108 	.globl _P5_2
                                    109 	.globl _P5_1
                                    110 	.globl _P5_0
                                    111 	.globl _P4_7
                                    112 	.globl _P4_6
                                    113 	.globl _P4_5
                                    114 	.globl _P4_4
                                    115 	.globl _P4_3
                                    116 	.globl _P4_2
                                    117 	.globl _P4_1
                                    118 	.globl _P4_0
                                    119 	.globl _PX0L
                                    120 	.globl _PT0L
                                    121 	.globl _PX1L
                                    122 	.globl _PT1L
                                    123 	.globl _PSL
                                    124 	.globl _PT2L
                                    125 	.globl _PPCL
                                    126 	.globl _EC
                                    127 	.globl _CCF0
                                    128 	.globl _CCF1
                                    129 	.globl _CCF2
                                    130 	.globl _CCF3
                                    131 	.globl _CCF4
                                    132 	.globl _CR
                                    133 	.globl _CF
                                    134 	.globl _TF2
                                    135 	.globl _EXF2
                                    136 	.globl _RCLK
                                    137 	.globl _TCLK
                                    138 	.globl _EXEN2
                                    139 	.globl _TR2
                                    140 	.globl _C_T2
                                    141 	.globl _CP_RL2
                                    142 	.globl _T2CON_7
                                    143 	.globl _T2CON_6
                                    144 	.globl _T2CON_5
                                    145 	.globl _T2CON_4
                                    146 	.globl _T2CON_3
                                    147 	.globl _T2CON_2
                                    148 	.globl _T2CON_1
                                    149 	.globl _T2CON_0
                                    150 	.globl _PT2
                                    151 	.globl _ET2
                                    152 	.globl _B
                                    153 	.globl _ACC
                                    154 	.globl _PSW
                                    155 	.globl _IP
                                    156 	.globl _P3
                                    157 	.globl _IE
                                    158 	.globl _P2
                                    159 	.globl _SBUF
                                    160 	.globl _SCON
                                    161 	.globl _P1
                                    162 	.globl _TH1
                                    163 	.globl _TH0
                                    164 	.globl _TL1
                                    165 	.globl _TL0
                                    166 	.globl _TMOD
                                    167 	.globl _TCON
                                    168 	.globl _PCON
                                    169 	.globl _DPH
                                    170 	.globl _DPL
                                    171 	.globl _SP
                                    172 	.globl _P0
                                    173 	.globl _SBUF0
                                    174 	.globl _DP0L
                                    175 	.globl _DP0H
                                    176 	.globl _EECON
                                    177 	.globl _KBF
                                    178 	.globl _KBE
                                    179 	.globl _KBLS
                                    180 	.globl _BRL
                                    181 	.globl _BDRCON
                                    182 	.globl _T2MOD
                                    183 	.globl _SPDAT
                                    184 	.globl _SPSTA
                                    185 	.globl _SPCON
                                    186 	.globl _SADEN
                                    187 	.globl _SADDR
                                    188 	.globl _WDTPRG
                                    189 	.globl _WDTRST
                                    190 	.globl _P5
                                    191 	.globl _P4
                                    192 	.globl _IPH1
                                    193 	.globl _IPL1
                                    194 	.globl _IPH0
                                    195 	.globl _IPL0
                                    196 	.globl _IEN1
                                    197 	.globl _IEN0
                                    198 	.globl _CMOD
                                    199 	.globl _CL
                                    200 	.globl _CH
                                    201 	.globl _CCON
                                    202 	.globl _CCAPM4
                                    203 	.globl _CCAPM3
                                    204 	.globl _CCAPM2
                                    205 	.globl _CCAPM1
                                    206 	.globl _CCAPM0
                                    207 	.globl _CCAP4L
                                    208 	.globl _CCAP3L
                                    209 	.globl _CCAP2L
                                    210 	.globl _CCAP1L
                                    211 	.globl _CCAP0L
                                    212 	.globl _CCAP4H
                                    213 	.globl _CCAP3H
                                    214 	.globl _CCAP2H
                                    215 	.globl _CCAP1H
                                    216 	.globl _CCAP0H
                                    217 	.globl _CKCON1
                                    218 	.globl _CKCON0
                                    219 	.globl _CKRL
                                    220 	.globl _AUXR1
                                    221 	.globl _AUXR
                                    222 	.globl _TH2
                                    223 	.globl _TL2
                                    224 	.globl _RCAP2H
                                    225 	.globl _RCAP2L
                                    226 	.globl _T2CON
                                    227 ;--------------------------------------------------------
                                    228 ; special function registers
                                    229 ;--------------------------------------------------------
                                    230 	.area RSEG    (ABS,DATA)
      000000                        231 	.org 0x0000
                           0000C8   232 _T2CON	=	0x00c8
                           0000CA   233 _RCAP2L	=	0x00ca
                           0000CB   234 _RCAP2H	=	0x00cb
                           0000CC   235 _TL2	=	0x00cc
                           0000CD   236 _TH2	=	0x00cd
                           00008E   237 _AUXR	=	0x008e
                           0000A2   238 _AUXR1	=	0x00a2
                           000097   239 _CKRL	=	0x0097
                           00008F   240 _CKCON0	=	0x008f
                           0000AF   241 _CKCON1	=	0x00af
                           0000FA   242 _CCAP0H	=	0x00fa
                           0000FB   243 _CCAP1H	=	0x00fb
                           0000FC   244 _CCAP2H	=	0x00fc
                           0000FD   245 _CCAP3H	=	0x00fd
                           0000FE   246 _CCAP4H	=	0x00fe
                           0000EA   247 _CCAP0L	=	0x00ea
                           0000EB   248 _CCAP1L	=	0x00eb
                           0000EC   249 _CCAP2L	=	0x00ec
                           0000ED   250 _CCAP3L	=	0x00ed
                           0000EE   251 _CCAP4L	=	0x00ee
                           0000DA   252 _CCAPM0	=	0x00da
                           0000DB   253 _CCAPM1	=	0x00db
                           0000DC   254 _CCAPM2	=	0x00dc
                           0000DD   255 _CCAPM3	=	0x00dd
                           0000DE   256 _CCAPM4	=	0x00de
                           0000D8   257 _CCON	=	0x00d8
                           0000F9   258 _CH	=	0x00f9
                           0000E9   259 _CL	=	0x00e9
                           0000D9   260 _CMOD	=	0x00d9
                           0000A8   261 _IEN0	=	0x00a8
                           0000B1   262 _IEN1	=	0x00b1
                           0000B8   263 _IPL0	=	0x00b8
                           0000B7   264 _IPH0	=	0x00b7
                           0000B2   265 _IPL1	=	0x00b2
                           0000B3   266 _IPH1	=	0x00b3
                           0000C0   267 _P4	=	0x00c0
                           0000E8   268 _P5	=	0x00e8
                           0000A6   269 _WDTRST	=	0x00a6
                           0000A7   270 _WDTPRG	=	0x00a7
                           0000A9   271 _SADDR	=	0x00a9
                           0000B9   272 _SADEN	=	0x00b9
                           0000C3   273 _SPCON	=	0x00c3
                           0000C4   274 _SPSTA	=	0x00c4
                           0000C5   275 _SPDAT	=	0x00c5
                           0000C9   276 _T2MOD	=	0x00c9
                           00009B   277 _BDRCON	=	0x009b
                           00009A   278 _BRL	=	0x009a
                           00009C   279 _KBLS	=	0x009c
                           00009D   280 _KBE	=	0x009d
                           00009E   281 _KBF	=	0x009e
                           0000D2   282 _EECON	=	0x00d2
                           000083   283 _DP0H	=	0x0083
                           000082   284 _DP0L	=	0x0082
                           000099   285 _SBUF0	=	0x0099
                           000080   286 _P0	=	0x0080
                           000081   287 _SP	=	0x0081
                           000082   288 _DPL	=	0x0082
                           000083   289 _DPH	=	0x0083
                           000087   290 _PCON	=	0x0087
                           000088   291 _TCON	=	0x0088
                           000089   292 _TMOD	=	0x0089
                           00008A   293 _TL0	=	0x008a
                           00008B   294 _TL1	=	0x008b
                           00008C   295 _TH0	=	0x008c
                           00008D   296 _TH1	=	0x008d
                           000090   297 _P1	=	0x0090
                           000098   298 _SCON	=	0x0098
                           000099   299 _SBUF	=	0x0099
                           0000A0   300 _P2	=	0x00a0
                           0000A8   301 _IE	=	0x00a8
                           0000B0   302 _P3	=	0x00b0
                           0000B8   303 _IP	=	0x00b8
                           0000D0   304 _PSW	=	0x00d0
                           0000E0   305 _ACC	=	0x00e0
                           0000F0   306 _B	=	0x00f0
                                    307 ;--------------------------------------------------------
                                    308 ; special function bits
                                    309 ;--------------------------------------------------------
                                    310 	.area RSEG    (ABS,DATA)
      000000                        311 	.org 0x0000
                           0000AD   312 _ET2	=	0x00ad
                           0000BD   313 _PT2	=	0x00bd
                           0000C8   314 _T2CON_0	=	0x00c8
                           0000C9   315 _T2CON_1	=	0x00c9
                           0000CA   316 _T2CON_2	=	0x00ca
                           0000CB   317 _T2CON_3	=	0x00cb
                           0000CC   318 _T2CON_4	=	0x00cc
                           0000CD   319 _T2CON_5	=	0x00cd
                           0000CE   320 _T2CON_6	=	0x00ce
                           0000CF   321 _T2CON_7	=	0x00cf
                           0000C8   322 _CP_RL2	=	0x00c8
                           0000C9   323 _C_T2	=	0x00c9
                           0000CA   324 _TR2	=	0x00ca
                           0000CB   325 _EXEN2	=	0x00cb
                           0000CC   326 _TCLK	=	0x00cc
                           0000CD   327 _RCLK	=	0x00cd
                           0000CE   328 _EXF2	=	0x00ce
                           0000CF   329 _TF2	=	0x00cf
                           0000DF   330 _CF	=	0x00df
                           0000DE   331 _CR	=	0x00de
                           0000DC   332 _CCF4	=	0x00dc
                           0000DB   333 _CCF3	=	0x00db
                           0000DA   334 _CCF2	=	0x00da
                           0000D9   335 _CCF1	=	0x00d9
                           0000D8   336 _CCF0	=	0x00d8
                           0000AE   337 _EC	=	0x00ae
                           0000BE   338 _PPCL	=	0x00be
                           0000BD   339 _PT2L	=	0x00bd
                           0000BC   340 _PSL	=	0x00bc
                           0000BB   341 _PT1L	=	0x00bb
                           0000BA   342 _PX1L	=	0x00ba
                           0000B9   343 _PT0L	=	0x00b9
                           0000B8   344 _PX0L	=	0x00b8
                           0000C0   345 _P4_0	=	0x00c0
                           0000C1   346 _P4_1	=	0x00c1
                           0000C2   347 _P4_2	=	0x00c2
                           0000C3   348 _P4_3	=	0x00c3
                           0000C4   349 _P4_4	=	0x00c4
                           0000C5   350 _P4_5	=	0x00c5
                           0000C6   351 _P4_6	=	0x00c6
                           0000C7   352 _P4_7	=	0x00c7
                           0000E8   353 _P5_0	=	0x00e8
                           0000E9   354 _P5_1	=	0x00e9
                           0000EA   355 _P5_2	=	0x00ea
                           0000EB   356 _P5_3	=	0x00eb
                           0000EC   357 _P5_4	=	0x00ec
                           0000ED   358 _P5_5	=	0x00ed
                           0000EE   359 _P5_6	=	0x00ee
                           0000EF   360 _P5_7	=	0x00ef
                           0000F0   361 _BREG_F0	=	0x00f0
                           0000F1   362 _BREG_F1	=	0x00f1
                           0000F2   363 _BREG_F2	=	0x00f2
                           0000F3   364 _BREG_F3	=	0x00f3
                           0000F4   365 _BREG_F4	=	0x00f4
                           0000F5   366 _BREG_F5	=	0x00f5
                           0000F6   367 _BREG_F6	=	0x00f6
                           0000F7   368 _BREG_F7	=	0x00f7
                           0000B0   369 _RXD0	=	0x00b0
                           0000B1   370 _TXD0	=	0x00b1
                           000080   371 _P0_0	=	0x0080
                           000081   372 _P0_1	=	0x0081
                           000082   373 _P0_2	=	0x0082
                           000083   374 _P0_3	=	0x0083
                           000084   375 _P0_4	=	0x0084
                           000085   376 _P0_5	=	0x0085
                           000086   377 _P0_6	=	0x0086
                           000087   378 _P0_7	=	0x0087
                           000088   379 _IT0	=	0x0088
                           000089   380 _IE0	=	0x0089
                           00008A   381 _IT1	=	0x008a
                           00008B   382 _IE1	=	0x008b
                           00008C   383 _TR0	=	0x008c
                           00008D   384 _TF0	=	0x008d
                           00008E   385 _TR1	=	0x008e
                           00008F   386 _TF1	=	0x008f
                           000090   387 _P1_0	=	0x0090
                           000091   388 _P1_1	=	0x0091
                           000092   389 _P1_2	=	0x0092
                           000093   390 _P1_3	=	0x0093
                           000094   391 _P1_4	=	0x0094
                           000095   392 _P1_5	=	0x0095
                           000096   393 _P1_6	=	0x0096
                           000097   394 _P1_7	=	0x0097
                           000098   395 _RI	=	0x0098
                           000099   396 _TI	=	0x0099
                           00009A   397 _RB8	=	0x009a
                           00009B   398 _TB8	=	0x009b
                           00009C   399 _REN	=	0x009c
                           00009D   400 _SM2	=	0x009d
                           00009E   401 _SM1	=	0x009e
                           00009F   402 _SM0	=	0x009f
                           0000A0   403 _P2_0	=	0x00a0
                           0000A1   404 _P2_1	=	0x00a1
                           0000A2   405 _P2_2	=	0x00a2
                           0000A3   406 _P2_3	=	0x00a3
                           0000A4   407 _P2_4	=	0x00a4
                           0000A5   408 _P2_5	=	0x00a5
                           0000A6   409 _P2_6	=	0x00a6
                           0000A7   410 _P2_7	=	0x00a7
                           0000A8   411 _EX0	=	0x00a8
                           0000A9   412 _ET0	=	0x00a9
                           0000AA   413 _EX1	=	0x00aa
                           0000AB   414 _ET1	=	0x00ab
                           0000AC   415 _ES	=	0x00ac
                           0000AF   416 _EA	=	0x00af
                           0000B0   417 _P3_0	=	0x00b0
                           0000B1   418 _P3_1	=	0x00b1
                           0000B2   419 _P3_2	=	0x00b2
                           0000B3   420 _P3_3	=	0x00b3
                           0000B4   421 _P3_4	=	0x00b4
                           0000B5   422 _P3_5	=	0x00b5
                           0000B6   423 _P3_6	=	0x00b6
                           0000B7   424 _P3_7	=	0x00b7
                           0000B0   425 _RXD	=	0x00b0
                           0000B1   426 _TXD	=	0x00b1
                           0000B2   427 _INT0	=	0x00b2
                           0000B3   428 _INT1	=	0x00b3
                           0000B4   429 _T0	=	0x00b4
                           0000B5   430 _T1	=	0x00b5
                           0000B6   431 _WR	=	0x00b6
                           0000B7   432 _RD	=	0x00b7
                           0000B8   433 _PX0	=	0x00b8
                           0000B9   434 _PT0	=	0x00b9
                           0000BA   435 _PX1	=	0x00ba
                           0000BB   436 _PT1	=	0x00bb
                           0000BC   437 _PS	=	0x00bc
                           0000D0   438 _P	=	0x00d0
                           0000D1   439 _F1	=	0x00d1
                           0000D2   440 _OV	=	0x00d2
                           0000D3   441 _RS0	=	0x00d3
                           0000D4   442 _RS1	=	0x00d4
                           0000D5   443 _F0	=	0x00d5
                           0000D6   444 _AC	=	0x00d6
                           0000D7   445 _CY	=	0x00d7
                                    446 ;--------------------------------------------------------
                                    447 ; overlayable register banks
                                    448 ;--------------------------------------------------------
                                    449 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        450 	.ds 8
                                    451 ;--------------------------------------------------------
                                    452 ; internal ram data
                                    453 ;--------------------------------------------------------
                                    454 	.area DSEG    (DATA)
                                    455 ;--------------------------------------------------------
                                    456 ; overlayable items in internal ram
                                    457 ;--------------------------------------------------------
                                    458 ;--------------------------------------------------------
                                    459 ; Stack segment in internal ram
                                    460 ;--------------------------------------------------------
                                    461 	.area	SSEG
      000008                        462 __start__stack:
      000008                        463 	.ds	1
                                    464 
                                    465 ;--------------------------------------------------------
                                    466 ; indirectly addressable internal ram data
                                    467 ;--------------------------------------------------------
                                    468 	.area ISEG    (DATA)
                                    469 ;--------------------------------------------------------
                                    470 ; absolute internal ram data
                                    471 ;--------------------------------------------------------
                                    472 	.area IABS    (ABS,DATA)
                                    473 	.area IABS    (ABS,DATA)
                                    474 ;--------------------------------------------------------
                                    475 ; bit data
                                    476 ;--------------------------------------------------------
                                    477 	.area BSEG    (BIT)
                                    478 ;--------------------------------------------------------
                                    479 ; paged external ram data
                                    480 ;--------------------------------------------------------
                                    481 	.area PSEG    (PAG,XDATA)
                                    482 ;--------------------------------------------------------
                                    483 ; external ram data
                                    484 ;--------------------------------------------------------
                                    485 	.area XSEG    (XDATA)
      000009                        486 _main_x_65537_60:
      000009                        487 	.ds 1
      00000A                        488 _main_y_65537_60:
      00000A                        489 	.ds 1
                                    490 ;--------------------------------------------------------
                                    491 ; absolute external ram data
                                    492 ;--------------------------------------------------------
                                    493 	.area XABS    (ABS,XDATA)
                                    494 ;--------------------------------------------------------
                                    495 ; external initialized ram data
                                    496 ;--------------------------------------------------------
                                    497 	.area XISEG   (XDATA)
                                    498 	.area HOME    (CODE)
                                    499 	.area GSINIT0 (CODE)
                                    500 	.area GSINIT1 (CODE)
                                    501 	.area GSINIT2 (CODE)
                                    502 	.area GSINIT3 (CODE)
                                    503 	.area GSINIT4 (CODE)
                                    504 	.area GSINIT5 (CODE)
                                    505 	.area GSINIT  (CODE)
                                    506 	.area GSFINAL (CODE)
                                    507 	.area CSEG    (CODE)
                                    508 ;--------------------------------------------------------
                                    509 ; interrupt vector
                                    510 ;--------------------------------------------------------
                                    511 	.area HOME    (CODE)
      006000                        512 __interrupt_vect:
      006000 02 60 06         [24]  513 	ljmp	__sdcc_gsinit_startup
                                    514 ;--------------------------------------------------------
                                    515 ; global & static initialisations
                                    516 ;--------------------------------------------------------
                                    517 	.area HOME    (CODE)
                                    518 	.area GSINIT  (CODE)
                                    519 	.area GSFINAL (CODE)
                                    520 	.area GSINIT  (CODE)
                                    521 	.globl __sdcc_gsinit_startup
                                    522 	.globl __sdcc_program_startup
                                    523 	.globl __start__stack
                                    524 	.globl __mcs51_genXINIT
                                    525 	.globl __mcs51_genXRAMCLEAR
                                    526 	.globl __mcs51_genRAMCLEAR
                                    527 	.area GSFINAL (CODE)
      00605F 02 60 03         [24]  528 	ljmp	__sdcc_program_startup
                                    529 ;--------------------------------------------------------
                                    530 ; Home
                                    531 ;--------------------------------------------------------
                                    532 	.area HOME    (CODE)
                                    533 	.area HOME    (CODE)
      006003                        534 __sdcc_program_startup:
      006003 02 61 A9         [24]  535 	ljmp	_main
                                    536 ;	return from main will return to caller
                                    537 ;--------------------------------------------------------
                                    538 ; code
                                    539 ;--------------------------------------------------------
                                    540 	.area CSEG    (CODE)
                                    541 ;------------------------------------------------------------
                                    542 ;Allocation info for local variables in function '_sdcc_external_startup'
                                    543 ;------------------------------------------------------------
                                    544 ;	main.c:24: _sdcc_external_startup()
                                    545 ;	-----------------------------------------
                                    546 ;	 function _sdcc_external_startup
                                    547 ;	-----------------------------------------
      006196                        548 __sdcc_external_startup:
                           000007   549 	ar7 = 0x07
                           000006   550 	ar6 = 0x06
                           000005   551 	ar5 = 0x05
                           000004   552 	ar4 = 0x04
                           000003   553 	ar3 = 0x03
                           000002   554 	ar2 = 0x02
                           000001   555 	ar1 = 0x01
                           000000   556 	ar0 = 0x00
                                    557 ;	main.c:26: AUXR  = 3U<<2;
      006196 75 8E 0C         [24]  558 	mov	_AUXR,#0x0c
                                    559 ;	main.c:27: return 0;
      006199 90 00 00         [24]  560 	mov	dptr,#0x0000
                                    561 ;	main.c:28: }
      00619C 22               [24]  562 	ret
                                    563 ;------------------------------------------------------------
                                    564 ;Allocation info for local variables in function 'Init_UART'
                                    565 ;------------------------------------------------------------
                                    566 ;	main.c:30: void Init_UART(void)
                                    567 ;	-----------------------------------------
                                    568 ;	 function Init_UART
                                    569 ;	-----------------------------------------
      00619D                        570 _Init_UART:
                                    571 ;	main.c:34: TMOD =0x20;         /*Setting to timer0 mode*/
      00619D 75 89 20         [24]  572 	mov	_TMOD,#0x20
                                    573 ;	main.c:35: TH1 = 0xFD;         /*Setting timer higher byte*/
      0061A0 75 8D FD         [24]  574 	mov	_TH1,#0xfd
                                    575 ;	main.c:36: SCON = 0x50;        /*Setting timer lower byte*/
      0061A3 75 98 50         [24]  576 	mov	_SCON,#0x50
                                    577 ;	main.c:37: TR1 = 1;            /*Start timer*/
                                    578 ;	assignBit
      0061A6 D2 8E            [12]  579 	setb	_TR1
                                    580 ;	main.c:38: }
      0061A8 22               [24]  581 	ret
                                    582 ;------------------------------------------------------------
                                    583 ;Allocation info for local variables in function 'main'
                                    584 ;------------------------------------------------------------
                                    585 ;directionString           Allocated with name '_main_directionString_65537_60'
                                    586 ;x                         Allocated with name '_main_x_65537_60'
                                    587 ;y                         Allocated with name '_main_y_65537_60'
                                    588 ;direction_int             Allocated with name '_main_direction_int_65537_60'
                                    589 ;------------------------------------------------------------
                                    590 ;	main.c:47: void main(void)
                                    591 ;	-----------------------------------------
                                    592 ;	 function main
                                    593 ;	-----------------------------------------
      0061A9                        594 _main:
                                    595 ;	main.c:49: Init_UART();
      0061A9 12 61 9D         [24]  596 	lcall	_Init_UART
                                    597 ;	main.c:50: i2c_init();
      0061AC 12 60 62         [24]  598 	lcall	_i2c_init
                                    599 ;	main.c:51: CMOD |= CPS0; /*Run in fperif/2*/
      0061AF 43 D9 02         [24]  600 	orl	_CMOD,#0x02
                                    601 ;	main.c:53: uint8_t x=0, y =0; /*Coordinates (x,y)*/
      0061B2 90 00 09         [24]  602 	mov	dptr,#_main_x_65537_60
      0061B5 E4               [12]  603 	clr	a
      0061B6 F0               [24]  604 	movx	@dptr,a
      0061B7 90 00 0A         [24]  605 	mov	dptr,#_main_y_65537_60
      0061BA F0               [24]  606 	movx	@dptr,a
                                    607 ;	main.c:55: writeToIOExpander(y);
      0061BB 75 82 00         [24]  608 	mov	dpl,#0x00
      0061BE 12 63 00         [24]  609 	lcall	_writeToIOExpander
                                    610 ;	main.c:56: writeToDecoder(x);
      0061C1 75 82 00         [24]  611 	mov	dpl,#0x00
      0061C4 12 63 3A         [24]  612 	lcall	_writeToDecoder
                                    613 ;	main.c:57: while(1)
      0061C7                        614 00116$:
                                    615 ;	main.c:59: directionString = getchar();
      0061C7 12 62 59         [24]  616 	lcall	_getchar
      0061CA AE 82            [24]  617 	mov	r6,dpl
                                    618 ;	main.c:61: direction_int = directionString -'0'; /*Converting from string to integer*/
      0061CC EE               [12]  619 	mov	a,r6
      0061CD 24 D0            [12]  620 	add	a,#0xd0
      0061CF FF               [12]  621 	mov	r7,a
                                    622 ;	main.c:63: switch(direction_int)  /*Increment/Decrement coordinates (x,y) based on the direction*/
      0061D0 BF 01 02         [24]  623 	cjne	r7,#0x01,00156$
      0061D3 80 0F            [24]  624 	sjmp	00101$
      0061D5                        625 00156$:
      0061D5 BF 02 02         [24]  626 	cjne	r7,#0x02,00157$
      0061D8 80 1A            [24]  627 	sjmp	00104$
      0061DA                        628 00157$:
      0061DA BF 03 02         [24]  629 	cjne	r7,#0x03,00158$
      0061DD 80 39            [24]  630 	sjmp	00110$
      0061DF                        631 00158$:
                                    632 ;	main.c:65: case UP:
      0061DF BF 04 44         [24]  633 	cjne	r7,#0x04,00114$
      0061E2 80 22            [24]  634 	sjmp	00107$
      0061E4                        635 00101$:
                                    636 ;	main.c:66: if(y>0)
      0061E4 90 00 0A         [24]  637 	mov	dptr,#_main_y_65537_60
      0061E7 E0               [24]  638 	movx	a,@dptr
      0061E8 FF               [12]  639 	mov	r7,a
      0061E9 E0               [24]  640 	movx	a,@dptr
      0061EA 60 3A            [24]  641 	jz	00114$
                                    642 ;	main.c:67: y--;
      0061EC EF               [12]  643 	mov	a,r7
      0061ED 14               [12]  644 	dec	a
      0061EE 90 00 0A         [24]  645 	mov	dptr,#_main_y_65537_60
      0061F1 F0               [24]  646 	movx	@dptr,a
                                    647 ;	main.c:68: break;
                                    648 ;	main.c:70: case DOWN:
      0061F2 80 32            [24]  649 	sjmp	00114$
      0061F4                        650 00104$:
                                    651 ;	main.c:71: if(y<3)
      0061F4 90 00 0A         [24]  652 	mov	dptr,#_main_y_65537_60
      0061F7 E0               [24]  653 	movx	a,@dptr
      0061F8 FF               [12]  654 	mov	r7,a
      0061F9 BF 03 00         [24]  655 	cjne	r7,#0x03,00161$
      0061FC                        656 00161$:
      0061FC 50 28            [24]  657 	jnc	00114$
                                    658 ;	main.c:72: y++;
      0061FE 90 00 0A         [24]  659 	mov	dptr,#_main_y_65537_60
      006201 EF               [12]  660 	mov	a,r7
      006202 04               [12]  661 	inc	a
      006203 F0               [24]  662 	movx	@dptr,a
                                    663 ;	main.c:73: break;
                                    664 ;	main.c:75: case RIGHT:
      006204 80 20            [24]  665 	sjmp	00114$
      006206                        666 00107$:
                                    667 ;	main.c:76: if(x<3)
      006206 90 00 09         [24]  668 	mov	dptr,#_main_x_65537_60
      006209 E0               [24]  669 	movx	a,@dptr
      00620A FF               [12]  670 	mov	r7,a
      00620B BF 03 00         [24]  671 	cjne	r7,#0x03,00163$
      00620E                        672 00163$:
      00620E 50 16            [24]  673 	jnc	00114$
                                    674 ;	main.c:77: x++;
      006210 90 00 09         [24]  675 	mov	dptr,#_main_x_65537_60
      006213 EF               [12]  676 	mov	a,r7
      006214 04               [12]  677 	inc	a
      006215 F0               [24]  678 	movx	@dptr,a
                                    679 ;	main.c:78: break;
                                    680 ;	main.c:80: case LEFT:
      006216 80 0E            [24]  681 	sjmp	00114$
      006218                        682 00110$:
                                    683 ;	main.c:81: if(x>0)
      006218 90 00 09         [24]  684 	mov	dptr,#_main_x_65537_60
      00621B E0               [24]  685 	movx	a,@dptr
      00621C FF               [12]  686 	mov	r7,a
      00621D E0               [24]  687 	movx	a,@dptr
      00621E 60 06            [24]  688 	jz	00114$
                                    689 ;	main.c:82: x--;
      006220 EF               [12]  690 	mov	a,r7
      006221 14               [12]  691 	dec	a
      006222 90 00 09         [24]  692 	mov	dptr,#_main_x_65537_60
      006225 F0               [24]  693 	movx	@dptr,a
                                    694 ;	main.c:87: }
      006226                        695 00114$:
                                    696 ;	main.c:88: writeToIOExpander(y);
      006226 90 00 0A         [24]  697 	mov	dptr,#_main_y_65537_60
      006229 E0               [24]  698 	movx	a,@dptr
      00622A F5 82            [12]  699 	mov	dpl,a
      00622C 12 63 00         [24]  700 	lcall	_writeToIOExpander
                                    701 ;	main.c:89: writeToDecoder(x);
      00622F 90 00 09         [24]  702 	mov	dptr,#_main_x_65537_60
      006232 E0               [24]  703 	movx	a,@dptr
      006233 F5 82            [12]  704 	mov	dpl,a
      006235 12 63 3A         [24]  705 	lcall	_writeToDecoder
                                    706 ;	main.c:92: }
      006238 80 8D            [24]  707 	sjmp	00116$
                                    708 	.area CSEG    (CODE)
                                    709 	.area CONST   (CODE)
                                    710 	.area XINIT   (CODE)
                                    711 	.area CABS    (ABS,CODE)
