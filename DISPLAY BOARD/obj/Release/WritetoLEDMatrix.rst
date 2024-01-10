                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module WritetoLEDMatrix
                                      6 	.optsdcc -mmcs51 --model-large
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _i2c_write
                                     12 	.globl _i2c_stop
                                     13 	.globl _i2c_start
                                     14 	.globl _TF1
                                     15 	.globl _TR1
                                     16 	.globl _TF0
                                     17 	.globl _TR0
                                     18 	.globl _IE1
                                     19 	.globl _IT1
                                     20 	.globl _IE0
                                     21 	.globl _IT0
                                     22 	.globl _SM0
                                     23 	.globl _SM1
                                     24 	.globl _SM2
                                     25 	.globl _REN
                                     26 	.globl _TB8
                                     27 	.globl _RB8
                                     28 	.globl _TI
                                     29 	.globl _RI
                                     30 	.globl _CY
                                     31 	.globl _AC
                                     32 	.globl _F0
                                     33 	.globl _RS1
                                     34 	.globl _RS0
                                     35 	.globl _OV
                                     36 	.globl _F1
                                     37 	.globl _P
                                     38 	.globl _RD
                                     39 	.globl _WR
                                     40 	.globl _T1
                                     41 	.globl _T0
                                     42 	.globl _INT1
                                     43 	.globl _INT0
                                     44 	.globl _TXD0
                                     45 	.globl _TXD
                                     46 	.globl _RXD0
                                     47 	.globl _RXD
                                     48 	.globl _P3_7
                                     49 	.globl _P3_6
                                     50 	.globl _P3_5
                                     51 	.globl _P3_4
                                     52 	.globl _P3_3
                                     53 	.globl _P3_2
                                     54 	.globl _P3_1
                                     55 	.globl _P3_0
                                     56 	.globl _P2_7
                                     57 	.globl _P2_6
                                     58 	.globl _P2_5
                                     59 	.globl _P2_4
                                     60 	.globl _P2_3
                                     61 	.globl _P2_2
                                     62 	.globl _P2_1
                                     63 	.globl _P2_0
                                     64 	.globl _P1_7
                                     65 	.globl _P1_6
                                     66 	.globl _P1_5
                                     67 	.globl _P1_4
                                     68 	.globl _P1_3
                                     69 	.globl _P1_2
                                     70 	.globl _P1_1
                                     71 	.globl _P1_0
                                     72 	.globl _P0_7
                                     73 	.globl _P0_6
                                     74 	.globl _P0_5
                                     75 	.globl _P0_4
                                     76 	.globl _P0_3
                                     77 	.globl _P0_2
                                     78 	.globl _P0_1
                                     79 	.globl _P0_0
                                     80 	.globl _PS
                                     81 	.globl _PT1
                                     82 	.globl _PX1
                                     83 	.globl _PT0
                                     84 	.globl _PX0
                                     85 	.globl _EA
                                     86 	.globl _ES
                                     87 	.globl _ET1
                                     88 	.globl _EX1
                                     89 	.globl _ET0
                                     90 	.globl _EX0
                                     91 	.globl _BREG_F7
                                     92 	.globl _BREG_F6
                                     93 	.globl _BREG_F5
                                     94 	.globl _BREG_F4
                                     95 	.globl _BREG_F3
                                     96 	.globl _BREG_F2
                                     97 	.globl _BREG_F1
                                     98 	.globl _BREG_F0
                                     99 	.globl _P5_7
                                    100 	.globl _P5_6
                                    101 	.globl _P5_5
                                    102 	.globl _P5_4
                                    103 	.globl _P5_3
                                    104 	.globl _P5_2
                                    105 	.globl _P5_1
                                    106 	.globl _P5_0
                                    107 	.globl _P4_7
                                    108 	.globl _P4_6
                                    109 	.globl _P4_5
                                    110 	.globl _P4_4
                                    111 	.globl _P4_3
                                    112 	.globl _P4_2
                                    113 	.globl _P4_1
                                    114 	.globl _P4_0
                                    115 	.globl _PX0L
                                    116 	.globl _PT0L
                                    117 	.globl _PX1L
                                    118 	.globl _PT1L
                                    119 	.globl _PSL
                                    120 	.globl _PT2L
                                    121 	.globl _PPCL
                                    122 	.globl _EC
                                    123 	.globl _CCF0
                                    124 	.globl _CCF1
                                    125 	.globl _CCF2
                                    126 	.globl _CCF3
                                    127 	.globl _CCF4
                                    128 	.globl _CR
                                    129 	.globl _CF
                                    130 	.globl _TF2
                                    131 	.globl _EXF2
                                    132 	.globl _RCLK
                                    133 	.globl _TCLK
                                    134 	.globl _EXEN2
                                    135 	.globl _TR2
                                    136 	.globl _C_T2
                                    137 	.globl _CP_RL2
                                    138 	.globl _T2CON_7
                                    139 	.globl _T2CON_6
                                    140 	.globl _T2CON_5
                                    141 	.globl _T2CON_4
                                    142 	.globl _T2CON_3
                                    143 	.globl _T2CON_2
                                    144 	.globl _T2CON_1
                                    145 	.globl _T2CON_0
                                    146 	.globl _PT2
                                    147 	.globl _ET2
                                    148 	.globl _TMOD
                                    149 	.globl _TL1
                                    150 	.globl _TL0
                                    151 	.globl _TH1
                                    152 	.globl _TH0
                                    153 	.globl _TCON
                                    154 	.globl _SP
                                    155 	.globl _SCON
                                    156 	.globl _SBUF0
                                    157 	.globl _SBUF
                                    158 	.globl _PSW
                                    159 	.globl _PCON
                                    160 	.globl _P3
                                    161 	.globl _P2
                                    162 	.globl _P1
                                    163 	.globl _P0
                                    164 	.globl _IP
                                    165 	.globl _IE
                                    166 	.globl _DP0L
                                    167 	.globl _DPL
                                    168 	.globl _DP0H
                                    169 	.globl _DPH
                                    170 	.globl _B
                                    171 	.globl _ACC
                                    172 	.globl _EECON
                                    173 	.globl _KBF
                                    174 	.globl _KBE
                                    175 	.globl _KBLS
                                    176 	.globl _BRL
                                    177 	.globl _BDRCON
                                    178 	.globl _T2MOD
                                    179 	.globl _SPDAT
                                    180 	.globl _SPSTA
                                    181 	.globl _SPCON
                                    182 	.globl _SADEN
                                    183 	.globl _SADDR
                                    184 	.globl _WDTPRG
                                    185 	.globl _WDTRST
                                    186 	.globl _P5
                                    187 	.globl _P4
                                    188 	.globl _IPH1
                                    189 	.globl _IPL1
                                    190 	.globl _IPH0
                                    191 	.globl _IPL0
                                    192 	.globl _IEN1
                                    193 	.globl _IEN0
                                    194 	.globl _CMOD
                                    195 	.globl _CL
                                    196 	.globl _CH
                                    197 	.globl _CCON
                                    198 	.globl _CCAPM4
                                    199 	.globl _CCAPM3
                                    200 	.globl _CCAPM2
                                    201 	.globl _CCAPM1
                                    202 	.globl _CCAPM0
                                    203 	.globl _CCAP4L
                                    204 	.globl _CCAP3L
                                    205 	.globl _CCAP2L
                                    206 	.globl _CCAP1L
                                    207 	.globl _CCAP0L
                                    208 	.globl _CCAP4H
                                    209 	.globl _CCAP3H
                                    210 	.globl _CCAP2H
                                    211 	.globl _CCAP1H
                                    212 	.globl _CCAP0H
                                    213 	.globl _CKCON1
                                    214 	.globl _CKCON0
                                    215 	.globl _CKRL
                                    216 	.globl _AUXR1
                                    217 	.globl _AUXR
                                    218 	.globl _TH2
                                    219 	.globl _TL2
                                    220 	.globl _RCAP2H
                                    221 	.globl _RCAP2L
                                    222 	.globl _T2CON
                                    223 	.globl _writeToIOExpander
                                    224 	.globl _writeToDecoder
                                    225 ;--------------------------------------------------------
                                    226 ; special function registers
                                    227 ;--------------------------------------------------------
                                    228 	.area RSEG    (ABS,DATA)
      000000                        229 	.org 0x0000
                           0000C8   230 _T2CON	=	0x00c8
                           0000CA   231 _RCAP2L	=	0x00ca
                           0000CB   232 _RCAP2H	=	0x00cb
                           0000CC   233 _TL2	=	0x00cc
                           0000CD   234 _TH2	=	0x00cd
                           00008E   235 _AUXR	=	0x008e
                           0000A2   236 _AUXR1	=	0x00a2
                           000097   237 _CKRL	=	0x0097
                           00008F   238 _CKCON0	=	0x008f
                           0000AF   239 _CKCON1	=	0x00af
                           0000FA   240 _CCAP0H	=	0x00fa
                           0000FB   241 _CCAP1H	=	0x00fb
                           0000FC   242 _CCAP2H	=	0x00fc
                           0000FD   243 _CCAP3H	=	0x00fd
                           0000FE   244 _CCAP4H	=	0x00fe
                           0000EA   245 _CCAP0L	=	0x00ea
                           0000EB   246 _CCAP1L	=	0x00eb
                           0000EC   247 _CCAP2L	=	0x00ec
                           0000ED   248 _CCAP3L	=	0x00ed
                           0000EE   249 _CCAP4L	=	0x00ee
                           0000DA   250 _CCAPM0	=	0x00da
                           0000DB   251 _CCAPM1	=	0x00db
                           0000DC   252 _CCAPM2	=	0x00dc
                           0000DD   253 _CCAPM3	=	0x00dd
                           0000DE   254 _CCAPM4	=	0x00de
                           0000D8   255 _CCON	=	0x00d8
                           0000F9   256 _CH	=	0x00f9
                           0000E9   257 _CL	=	0x00e9
                           0000D9   258 _CMOD	=	0x00d9
                           0000A8   259 _IEN0	=	0x00a8
                           0000B1   260 _IEN1	=	0x00b1
                           0000B8   261 _IPL0	=	0x00b8
                           0000B7   262 _IPH0	=	0x00b7
                           0000B2   263 _IPL1	=	0x00b2
                           0000B3   264 _IPH1	=	0x00b3
                           0000C0   265 _P4	=	0x00c0
                           0000E8   266 _P5	=	0x00e8
                           0000A6   267 _WDTRST	=	0x00a6
                           0000A7   268 _WDTPRG	=	0x00a7
                           0000A9   269 _SADDR	=	0x00a9
                           0000B9   270 _SADEN	=	0x00b9
                           0000C3   271 _SPCON	=	0x00c3
                           0000C4   272 _SPSTA	=	0x00c4
                           0000C5   273 _SPDAT	=	0x00c5
                           0000C9   274 _T2MOD	=	0x00c9
                           00009B   275 _BDRCON	=	0x009b
                           00009A   276 _BRL	=	0x009a
                           00009C   277 _KBLS	=	0x009c
                           00009D   278 _KBE	=	0x009d
                           00009E   279 _KBF	=	0x009e
                           0000D2   280 _EECON	=	0x00d2
                           0000E0   281 _ACC	=	0x00e0
                           0000F0   282 _B	=	0x00f0
                           000083   283 _DPH	=	0x0083
                           000083   284 _DP0H	=	0x0083
                           000082   285 _DPL	=	0x0082
                           000082   286 _DP0L	=	0x0082
                           0000A8   287 _IE	=	0x00a8
                           0000B8   288 _IP	=	0x00b8
                           000080   289 _P0	=	0x0080
                           000090   290 _P1	=	0x0090
                           0000A0   291 _P2	=	0x00a0
                           0000B0   292 _P3	=	0x00b0
                           000087   293 _PCON	=	0x0087
                           0000D0   294 _PSW	=	0x00d0
                           000099   295 _SBUF	=	0x0099
                           000099   296 _SBUF0	=	0x0099
                           000098   297 _SCON	=	0x0098
                           000081   298 _SP	=	0x0081
                           000088   299 _TCON	=	0x0088
                           00008C   300 _TH0	=	0x008c
                           00008D   301 _TH1	=	0x008d
                           00008A   302 _TL0	=	0x008a
                           00008B   303 _TL1	=	0x008b
                           000089   304 _TMOD	=	0x0089
                                    305 ;--------------------------------------------------------
                                    306 ; special function bits
                                    307 ;--------------------------------------------------------
                                    308 	.area RSEG    (ABS,DATA)
      000000                        309 	.org 0x0000
                           0000AD   310 _ET2	=	0x00ad
                           0000BD   311 _PT2	=	0x00bd
                           0000C8   312 _T2CON_0	=	0x00c8
                           0000C9   313 _T2CON_1	=	0x00c9
                           0000CA   314 _T2CON_2	=	0x00ca
                           0000CB   315 _T2CON_3	=	0x00cb
                           0000CC   316 _T2CON_4	=	0x00cc
                           0000CD   317 _T2CON_5	=	0x00cd
                           0000CE   318 _T2CON_6	=	0x00ce
                           0000CF   319 _T2CON_7	=	0x00cf
                           0000C8   320 _CP_RL2	=	0x00c8
                           0000C9   321 _C_T2	=	0x00c9
                           0000CA   322 _TR2	=	0x00ca
                           0000CB   323 _EXEN2	=	0x00cb
                           0000CC   324 _TCLK	=	0x00cc
                           0000CD   325 _RCLK	=	0x00cd
                           0000CE   326 _EXF2	=	0x00ce
                           0000CF   327 _TF2	=	0x00cf
                           0000DF   328 _CF	=	0x00df
                           0000DE   329 _CR	=	0x00de
                           0000DC   330 _CCF4	=	0x00dc
                           0000DB   331 _CCF3	=	0x00db
                           0000DA   332 _CCF2	=	0x00da
                           0000D9   333 _CCF1	=	0x00d9
                           0000D8   334 _CCF0	=	0x00d8
                           0000AE   335 _EC	=	0x00ae
                           0000BE   336 _PPCL	=	0x00be
                           0000BD   337 _PT2L	=	0x00bd
                           0000BC   338 _PSL	=	0x00bc
                           0000BB   339 _PT1L	=	0x00bb
                           0000BA   340 _PX1L	=	0x00ba
                           0000B9   341 _PT0L	=	0x00b9
                           0000B8   342 _PX0L	=	0x00b8
                           0000C0   343 _P4_0	=	0x00c0
                           0000C1   344 _P4_1	=	0x00c1
                           0000C2   345 _P4_2	=	0x00c2
                           0000C3   346 _P4_3	=	0x00c3
                           0000C4   347 _P4_4	=	0x00c4
                           0000C5   348 _P4_5	=	0x00c5
                           0000C6   349 _P4_6	=	0x00c6
                           0000C7   350 _P4_7	=	0x00c7
                           0000E8   351 _P5_0	=	0x00e8
                           0000E9   352 _P5_1	=	0x00e9
                           0000EA   353 _P5_2	=	0x00ea
                           0000EB   354 _P5_3	=	0x00eb
                           0000EC   355 _P5_4	=	0x00ec
                           0000ED   356 _P5_5	=	0x00ed
                           0000EE   357 _P5_6	=	0x00ee
                           0000EF   358 _P5_7	=	0x00ef
                           0000F0   359 _BREG_F0	=	0x00f0
                           0000F1   360 _BREG_F1	=	0x00f1
                           0000F2   361 _BREG_F2	=	0x00f2
                           0000F3   362 _BREG_F3	=	0x00f3
                           0000F4   363 _BREG_F4	=	0x00f4
                           0000F5   364 _BREG_F5	=	0x00f5
                           0000F6   365 _BREG_F6	=	0x00f6
                           0000F7   366 _BREG_F7	=	0x00f7
                           0000A8   367 _EX0	=	0x00a8
                           0000A9   368 _ET0	=	0x00a9
                           0000AA   369 _EX1	=	0x00aa
                           0000AB   370 _ET1	=	0x00ab
                           0000AC   371 _ES	=	0x00ac
                           0000AF   372 _EA	=	0x00af
                           0000B8   373 _PX0	=	0x00b8
                           0000B9   374 _PT0	=	0x00b9
                           0000BA   375 _PX1	=	0x00ba
                           0000BB   376 _PT1	=	0x00bb
                           0000BC   377 _PS	=	0x00bc
                           000080   378 _P0_0	=	0x0080
                           000081   379 _P0_1	=	0x0081
                           000082   380 _P0_2	=	0x0082
                           000083   381 _P0_3	=	0x0083
                           000084   382 _P0_4	=	0x0084
                           000085   383 _P0_5	=	0x0085
                           000086   384 _P0_6	=	0x0086
                           000087   385 _P0_7	=	0x0087
                           000090   386 _P1_0	=	0x0090
                           000091   387 _P1_1	=	0x0091
                           000092   388 _P1_2	=	0x0092
                           000093   389 _P1_3	=	0x0093
                           000094   390 _P1_4	=	0x0094
                           000095   391 _P1_5	=	0x0095
                           000096   392 _P1_6	=	0x0096
                           000097   393 _P1_7	=	0x0097
                           0000A0   394 _P2_0	=	0x00a0
                           0000A1   395 _P2_1	=	0x00a1
                           0000A2   396 _P2_2	=	0x00a2
                           0000A3   397 _P2_3	=	0x00a3
                           0000A4   398 _P2_4	=	0x00a4
                           0000A5   399 _P2_5	=	0x00a5
                           0000A6   400 _P2_6	=	0x00a6
                           0000A7   401 _P2_7	=	0x00a7
                           0000B0   402 _P3_0	=	0x00b0
                           0000B1   403 _P3_1	=	0x00b1
                           0000B2   404 _P3_2	=	0x00b2
                           0000B3   405 _P3_3	=	0x00b3
                           0000B4   406 _P3_4	=	0x00b4
                           0000B5   407 _P3_5	=	0x00b5
                           0000B6   408 _P3_6	=	0x00b6
                           0000B7   409 _P3_7	=	0x00b7
                           0000B0   410 _RXD	=	0x00b0
                           0000B0   411 _RXD0	=	0x00b0
                           0000B1   412 _TXD	=	0x00b1
                           0000B1   413 _TXD0	=	0x00b1
                           0000B2   414 _INT0	=	0x00b2
                           0000B3   415 _INT1	=	0x00b3
                           0000B4   416 _T0	=	0x00b4
                           0000B5   417 _T1	=	0x00b5
                           0000B6   418 _WR	=	0x00b6
                           0000B7   419 _RD	=	0x00b7
                           0000D0   420 _P	=	0x00d0
                           0000D1   421 _F1	=	0x00d1
                           0000D2   422 _OV	=	0x00d2
                           0000D3   423 _RS0	=	0x00d3
                           0000D4   424 _RS1	=	0x00d4
                           0000D5   425 _F0	=	0x00d5
                           0000D6   426 _AC	=	0x00d6
                           0000D7   427 _CY	=	0x00d7
                           000098   428 _RI	=	0x0098
                           000099   429 _TI	=	0x0099
                           00009A   430 _RB8	=	0x009a
                           00009B   431 _TB8	=	0x009b
                           00009C   432 _REN	=	0x009c
                           00009D   433 _SM2	=	0x009d
                           00009E   434 _SM1	=	0x009e
                           00009F   435 _SM0	=	0x009f
                           000088   436 _IT0	=	0x0088
                           000089   437 _IE0	=	0x0089
                           00008A   438 _IT1	=	0x008a
                           00008B   439 _IE1	=	0x008b
                           00008C   440 _TR0	=	0x008c
                           00008D   441 _TF0	=	0x008d
                           00008E   442 _TR1	=	0x008e
                           00008F   443 _TF1	=	0x008f
                                    444 ;--------------------------------------------------------
                                    445 ; overlayable register banks
                                    446 ;--------------------------------------------------------
                                    447 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        448 	.ds 8
                                    449 ;--------------------------------------------------------
                                    450 ; internal ram data
                                    451 ;--------------------------------------------------------
                                    452 	.area DSEG    (DATA)
                                    453 ;--------------------------------------------------------
                                    454 ; overlayable items in internal ram
                                    455 ;--------------------------------------------------------
                                    456 ;--------------------------------------------------------
                                    457 ; indirectly addressable internal ram data
                                    458 ;--------------------------------------------------------
                                    459 	.area ISEG    (DATA)
                                    460 ;--------------------------------------------------------
                                    461 ; absolute internal ram data
                                    462 ;--------------------------------------------------------
                                    463 	.area IABS    (ABS,DATA)
                                    464 	.area IABS    (ABS,DATA)
                                    465 ;--------------------------------------------------------
                                    466 ; bit data
                                    467 ;--------------------------------------------------------
                                    468 	.area BSEG    (BIT)
                                    469 ;--------------------------------------------------------
                                    470 ; paged external ram data
                                    471 ;--------------------------------------------------------
                                    472 	.area PSEG    (PAG,XDATA)
                                    473 ;--------------------------------------------------------
                                    474 ; external ram data
                                    475 ;--------------------------------------------------------
                                    476 	.area XSEG    (XDATA)
      000010                        477 _writeToIOExpander_y_65536_51:
      000010                        478 	.ds 1
      000011                        479 _writeToDecoder_x_65536_53:
      000011                        480 	.ds 1
                                    481 ;--------------------------------------------------------
                                    482 ; absolute external ram data
                                    483 ;--------------------------------------------------------
                                    484 	.area XABS    (ABS,XDATA)
                                    485 ;--------------------------------------------------------
                                    486 ; external initialized ram data
                                    487 ;--------------------------------------------------------
                                    488 	.area XISEG   (XDATA)
                                    489 	.area HOME    (CODE)
                                    490 	.area GSINIT0 (CODE)
                                    491 	.area GSINIT1 (CODE)
                                    492 	.area GSINIT2 (CODE)
                                    493 	.area GSINIT3 (CODE)
                                    494 	.area GSINIT4 (CODE)
                                    495 	.area GSINIT5 (CODE)
                                    496 	.area GSINIT  (CODE)
                                    497 	.area GSFINAL (CODE)
                                    498 	.area CSEG    (CODE)
                                    499 ;--------------------------------------------------------
                                    500 ; global & static initialisations
                                    501 ;--------------------------------------------------------
                                    502 	.area HOME    (CODE)
                                    503 	.area GSINIT  (CODE)
                                    504 	.area GSFINAL (CODE)
                                    505 	.area GSINIT  (CODE)
                                    506 ;--------------------------------------------------------
                                    507 ; Home
                                    508 ;--------------------------------------------------------
                                    509 	.area HOME    (CODE)
                                    510 	.area HOME    (CODE)
                                    511 ;--------------------------------------------------------
                                    512 ; code
                                    513 ;--------------------------------------------------------
                                    514 	.area CSEG    (CODE)
                                    515 ;------------------------------------------------------------
                                    516 ;Allocation info for local variables in function 'writeToIOExpander'
                                    517 ;------------------------------------------------------------
                                    518 ;y                         Allocated with name '_writeToIOExpander_y_65536_51'
                                    519 ;i2cIOexpander_wr_address  Allocated with name '_writeToIOExpander_i2cIOexpander_wr_address_65536_52'
                                    520 ;i2cIOexpander_rd_address  Allocated with name '_writeToIOExpander_i2cIOexpander_rd_address_65536_52'
                                    521 ;ports                     Allocated with name '_writeToIOExpander_ports_65536_52'
                                    522 ;------------------------------------------------------------
                                    523 ;	WritetoLEDMatrix.c:24: void writeToIOExpander(uint8_t y)
                                    524 ;	-----------------------------------------
                                    525 ;	 function writeToIOExpander
                                    526 ;	-----------------------------------------
      006300                        527 _writeToIOExpander:
                           000007   528 	ar7 = 0x07
                           000006   529 	ar6 = 0x06
                           000005   530 	ar5 = 0x05
                           000004   531 	ar4 = 0x04
                           000003   532 	ar3 = 0x03
                           000002   533 	ar2 = 0x02
                           000001   534 	ar1 = 0x01
                           000000   535 	ar0 = 0x00
      006300 E5 82            [12]  536 	mov	a,dpl
      006302 90 00 10         [24]  537 	mov	dptr,#_writeToIOExpander_y_65536_51
      006305 F0               [24]  538 	movx	@dptr,a
                                    539 ;	WritetoLEDMatrix.c:29: i2c_start(); /*Start I2C communication*/
      006306 12 60 67         [24]  540 	lcall	_i2c_start
                                    541 ;	WritetoLEDMatrix.c:30: while(i2c_write(i2cIOexpander_wr_address));
      006309                        542 00101$:
      006309 75 82 70         [24]  543 	mov	dpl,#0x70
      00630C 12 60 B9         [24]  544 	lcall	_i2c_write
      00630F 40 F8            [24]  545 	jc	00101$
                                    546 ;	WritetoLEDMatrix.c:31: while(i2c_write(ports));
      006311                        547 00104$:
      006311 75 82 00         [24]  548 	mov	dpl,#0x00
      006314 12 60 B9         [24]  549 	lcall	_i2c_write
      006317 40 F8            [24]  550 	jc	00104$
                                    551 ;	WritetoLEDMatrix.c:32: ports = (1<<y);     /*Selecting row of LED to be turned ON*/
      006319 90 00 10         [24]  552 	mov	dptr,#_writeToIOExpander_y_65536_51
      00631C E0               [24]  553 	movx	a,@dptr
      00631D FF               [12]  554 	mov	r7,a
      00631E 8F F0            [24]  555 	mov	b,r7
      006320 05 F0            [12]  556 	inc	b
      006322 74 01            [12]  557 	mov	a,#0x01
      006324 80 02            [24]  558 	sjmp	00136$
      006326                        559 00134$:
      006326 25 E0            [12]  560 	add	a,acc
      006328                        561 00136$:
      006328 D5 F0 FB         [24]  562 	djnz	b,00134$
      00632B FF               [12]  563 	mov	r7,a
                                    564 ;	WritetoLEDMatrix.c:33: while(i2c_write(ports));
      00632C                        565 00107$:
      00632C 8F 82            [24]  566 	mov	dpl,r7
      00632E C0 07            [24]  567 	push	ar7
      006330 12 60 B9         [24]  568 	lcall	_i2c_write
      006333 D0 07            [24]  569 	pop	ar7
      006335 40 F5            [24]  570 	jc	00107$
                                    571 ;	WritetoLEDMatrix.c:34: i2c_stop();
                                    572 ;	WritetoLEDMatrix.c:35: }
      006337 02 60 99         [24]  573 	ljmp	_i2c_stop
                                    574 ;------------------------------------------------------------
                                    575 ;Allocation info for local variables in function 'writeToDecoder'
                                    576 ;------------------------------------------------------------
                                    577 ;x                         Allocated with name '_writeToDecoder_x_65536_53'
                                    578 ;------------------------------------------------------------
                                    579 ;	WritetoLEDMatrix.c:45: void writeToDecoder(uint8_t x)
                                    580 ;	-----------------------------------------
                                    581 ;	 function writeToDecoder
                                    582 ;	-----------------------------------------
      00633A                        583 _writeToDecoder:
      00633A E5 82            [12]  584 	mov	a,dpl
      00633C 90 00 11         [24]  585 	mov	dptr,#_writeToDecoder_x_65536_53
      00633F F0               [24]  586 	movx	@dptr,a
                                    587 ;	WritetoLEDMatrix.c:48: if(x & (0x01))          /*Selecting the Column of the LED to be turned ON*/
      006340 E0               [24]  588 	movx	a,@dptr
      006341 30 E0 04         [24]  589 	jnb	acc.0,00102$
                                    590 ;	WritetoLEDMatrix.c:49: Decoder_A = 1;
                                    591 ;	assignBit
      006344 D2 92            [12]  592 	setb	_P1_2
      006346 80 02            [24]  593 	sjmp	00103$
      006348                        594 00102$:
                                    595 ;	WritetoLEDMatrix.c:52: Decoder_A = 0;
                                    596 ;	assignBit
      006348 C2 92            [12]  597 	clr	_P1_2
      00634A                        598 00103$:
                                    599 ;	WritetoLEDMatrix.c:54: if(x & (0x02))
      00634A 90 00 11         [24]  600 	mov	dptr,#_writeToDecoder_x_65536_53
      00634D E0               [24]  601 	movx	a,@dptr
      00634E 30 E1 03         [24]  602 	jnb	acc.1,00105$
                                    603 ;	WritetoLEDMatrix.c:55: Decoder_B = 1;
                                    604 ;	assignBit
      006351 D2 93            [12]  605 	setb	_P1_3
      006353 22               [24]  606 	ret
      006354                        607 00105$:
                                    608 ;	WritetoLEDMatrix.c:58: Decoder_B = 0;
                                    609 ;	assignBit
      006354 C2 93            [12]  610 	clr	_P1_3
                                    611 ;	WritetoLEDMatrix.c:59: }
      006356 22               [24]  612 	ret
                                    613 	.area CSEG    (CODE)
                                    614 	.area CONST   (CODE)
                                    615 	.area XINIT   (CODE)
                                    616 	.area CABS    (ABS,CODE)
