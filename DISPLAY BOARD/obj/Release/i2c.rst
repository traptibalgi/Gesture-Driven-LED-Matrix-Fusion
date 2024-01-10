                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module i2c
                                      6 	.optsdcc -mmcs51 --model-large
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _TF1
                                     12 	.globl _TR1
                                     13 	.globl _TF0
                                     14 	.globl _TR0
                                     15 	.globl _IE1
                                     16 	.globl _IT1
                                     17 	.globl _IE0
                                     18 	.globl _IT0
                                     19 	.globl _SM0
                                     20 	.globl _SM1
                                     21 	.globl _SM2
                                     22 	.globl _REN
                                     23 	.globl _TB8
                                     24 	.globl _RB8
                                     25 	.globl _TI
                                     26 	.globl _RI
                                     27 	.globl _CY
                                     28 	.globl _AC
                                     29 	.globl _F0
                                     30 	.globl _RS1
                                     31 	.globl _RS0
                                     32 	.globl _OV
                                     33 	.globl _F1
                                     34 	.globl _P
                                     35 	.globl _RD
                                     36 	.globl _WR
                                     37 	.globl _T1
                                     38 	.globl _T0
                                     39 	.globl _INT1
                                     40 	.globl _INT0
                                     41 	.globl _TXD0
                                     42 	.globl _TXD
                                     43 	.globl _RXD0
                                     44 	.globl _RXD
                                     45 	.globl _P3_7
                                     46 	.globl _P3_6
                                     47 	.globl _P3_5
                                     48 	.globl _P3_4
                                     49 	.globl _P3_3
                                     50 	.globl _P3_2
                                     51 	.globl _P3_1
                                     52 	.globl _P3_0
                                     53 	.globl _P2_7
                                     54 	.globl _P2_6
                                     55 	.globl _P2_5
                                     56 	.globl _P2_4
                                     57 	.globl _P2_3
                                     58 	.globl _P2_2
                                     59 	.globl _P2_1
                                     60 	.globl _P2_0
                                     61 	.globl _P1_7
                                     62 	.globl _P1_6
                                     63 	.globl _P1_5
                                     64 	.globl _P1_4
                                     65 	.globl _P1_3
                                     66 	.globl _P1_2
                                     67 	.globl _P1_1
                                     68 	.globl _P1_0
                                     69 	.globl _P0_7
                                     70 	.globl _P0_6
                                     71 	.globl _P0_5
                                     72 	.globl _P0_4
                                     73 	.globl _P0_3
                                     74 	.globl _P0_2
                                     75 	.globl _P0_1
                                     76 	.globl _P0_0
                                     77 	.globl _PS
                                     78 	.globl _PT1
                                     79 	.globl _PX1
                                     80 	.globl _PT0
                                     81 	.globl _PX0
                                     82 	.globl _EA
                                     83 	.globl _ES
                                     84 	.globl _ET1
                                     85 	.globl _EX1
                                     86 	.globl _ET0
                                     87 	.globl _EX0
                                     88 	.globl _BREG_F7
                                     89 	.globl _BREG_F6
                                     90 	.globl _BREG_F5
                                     91 	.globl _BREG_F4
                                     92 	.globl _BREG_F3
                                     93 	.globl _BREG_F2
                                     94 	.globl _BREG_F1
                                     95 	.globl _BREG_F0
                                     96 	.globl _P5_7
                                     97 	.globl _P5_6
                                     98 	.globl _P5_5
                                     99 	.globl _P5_4
                                    100 	.globl _P5_3
                                    101 	.globl _P5_2
                                    102 	.globl _P5_1
                                    103 	.globl _P5_0
                                    104 	.globl _P4_7
                                    105 	.globl _P4_6
                                    106 	.globl _P4_5
                                    107 	.globl _P4_4
                                    108 	.globl _P4_3
                                    109 	.globl _P4_2
                                    110 	.globl _P4_1
                                    111 	.globl _P4_0
                                    112 	.globl _PX0L
                                    113 	.globl _PT0L
                                    114 	.globl _PX1L
                                    115 	.globl _PT1L
                                    116 	.globl _PSL
                                    117 	.globl _PT2L
                                    118 	.globl _PPCL
                                    119 	.globl _EC
                                    120 	.globl _CCF0
                                    121 	.globl _CCF1
                                    122 	.globl _CCF2
                                    123 	.globl _CCF3
                                    124 	.globl _CCF4
                                    125 	.globl _CR
                                    126 	.globl _CF
                                    127 	.globl _TF2
                                    128 	.globl _EXF2
                                    129 	.globl _RCLK
                                    130 	.globl _TCLK
                                    131 	.globl _EXEN2
                                    132 	.globl _TR2
                                    133 	.globl _C_T2
                                    134 	.globl _CP_RL2
                                    135 	.globl _T2CON_7
                                    136 	.globl _T2CON_6
                                    137 	.globl _T2CON_5
                                    138 	.globl _T2CON_4
                                    139 	.globl _T2CON_3
                                    140 	.globl _T2CON_2
                                    141 	.globl _T2CON_1
                                    142 	.globl _T2CON_0
                                    143 	.globl _PT2
                                    144 	.globl _ET2
                                    145 	.globl _TMOD
                                    146 	.globl _TL1
                                    147 	.globl _TL0
                                    148 	.globl _TH1
                                    149 	.globl _TH0
                                    150 	.globl _TCON
                                    151 	.globl _SP
                                    152 	.globl _SCON
                                    153 	.globl _SBUF0
                                    154 	.globl _SBUF
                                    155 	.globl _PSW
                                    156 	.globl _PCON
                                    157 	.globl _P3
                                    158 	.globl _P2
                                    159 	.globl _P1
                                    160 	.globl _P0
                                    161 	.globl _IP
                                    162 	.globl _IE
                                    163 	.globl _DP0L
                                    164 	.globl _DPL
                                    165 	.globl _DP0H
                                    166 	.globl _DPH
                                    167 	.globl _B
                                    168 	.globl _ACC
                                    169 	.globl _EECON
                                    170 	.globl _KBF
                                    171 	.globl _KBE
                                    172 	.globl _KBLS
                                    173 	.globl _BRL
                                    174 	.globl _BDRCON
                                    175 	.globl _T2MOD
                                    176 	.globl _SPDAT
                                    177 	.globl _SPSTA
                                    178 	.globl _SPCON
                                    179 	.globl _SADEN
                                    180 	.globl _SADDR
                                    181 	.globl _WDTPRG
                                    182 	.globl _WDTRST
                                    183 	.globl _P5
                                    184 	.globl _P4
                                    185 	.globl _IPH1
                                    186 	.globl _IPL1
                                    187 	.globl _IPH0
                                    188 	.globl _IPL0
                                    189 	.globl _IEN1
                                    190 	.globl _IEN0
                                    191 	.globl _CMOD
                                    192 	.globl _CL
                                    193 	.globl _CH
                                    194 	.globl _CCON
                                    195 	.globl _CCAPM4
                                    196 	.globl _CCAPM3
                                    197 	.globl _CCAPM2
                                    198 	.globl _CCAPM1
                                    199 	.globl _CCAPM0
                                    200 	.globl _CCAP4L
                                    201 	.globl _CCAP3L
                                    202 	.globl _CCAP2L
                                    203 	.globl _CCAP1L
                                    204 	.globl _CCAP0L
                                    205 	.globl _CCAP4H
                                    206 	.globl _CCAP3H
                                    207 	.globl _CCAP2H
                                    208 	.globl _CCAP1H
                                    209 	.globl _CCAP0H
                                    210 	.globl _CKCON1
                                    211 	.globl _CKCON0
                                    212 	.globl _CKRL
                                    213 	.globl _AUXR1
                                    214 	.globl _AUXR
                                    215 	.globl _TH2
                                    216 	.globl _TL2
                                    217 	.globl _RCAP2H
                                    218 	.globl _RCAP2L
                                    219 	.globl _T2CON
                                    220 	.globl _i2c_init
                                    221 	.globl _i2c_start
                                    222 	.globl _i2c_Restart
                                    223 	.globl _i2c_stop
                                    224 	.globl _i2c_write
                                    225 	.globl _i2c_read
                                    226 	.globl _delay
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
                           0000E0   283 _ACC	=	0x00e0
                           0000F0   284 _B	=	0x00f0
                           000083   285 _DPH	=	0x0083
                           000083   286 _DP0H	=	0x0083
                           000082   287 _DPL	=	0x0082
                           000082   288 _DP0L	=	0x0082
                           0000A8   289 _IE	=	0x00a8
                           0000B8   290 _IP	=	0x00b8
                           000080   291 _P0	=	0x0080
                           000090   292 _P1	=	0x0090
                           0000A0   293 _P2	=	0x00a0
                           0000B0   294 _P3	=	0x00b0
                           000087   295 _PCON	=	0x0087
                           0000D0   296 _PSW	=	0x00d0
                           000099   297 _SBUF	=	0x0099
                           000099   298 _SBUF0	=	0x0099
                           000098   299 _SCON	=	0x0098
                           000081   300 _SP	=	0x0081
                           000088   301 _TCON	=	0x0088
                           00008C   302 _TH0	=	0x008c
                           00008D   303 _TH1	=	0x008d
                           00008A   304 _TL0	=	0x008a
                           00008B   305 _TL1	=	0x008b
                           000089   306 _TMOD	=	0x0089
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
                           0000A8   369 _EX0	=	0x00a8
                           0000A9   370 _ET0	=	0x00a9
                           0000AA   371 _EX1	=	0x00aa
                           0000AB   372 _ET1	=	0x00ab
                           0000AC   373 _ES	=	0x00ac
                           0000AF   374 _EA	=	0x00af
                           0000B8   375 _PX0	=	0x00b8
                           0000B9   376 _PT0	=	0x00b9
                           0000BA   377 _PX1	=	0x00ba
                           0000BB   378 _PT1	=	0x00bb
                           0000BC   379 _PS	=	0x00bc
                           000080   380 _P0_0	=	0x0080
                           000081   381 _P0_1	=	0x0081
                           000082   382 _P0_2	=	0x0082
                           000083   383 _P0_3	=	0x0083
                           000084   384 _P0_4	=	0x0084
                           000085   385 _P0_5	=	0x0085
                           000086   386 _P0_6	=	0x0086
                           000087   387 _P0_7	=	0x0087
                           000090   388 _P1_0	=	0x0090
                           000091   389 _P1_1	=	0x0091
                           000092   390 _P1_2	=	0x0092
                           000093   391 _P1_3	=	0x0093
                           000094   392 _P1_4	=	0x0094
                           000095   393 _P1_5	=	0x0095
                           000096   394 _P1_6	=	0x0096
                           000097   395 _P1_7	=	0x0097
                           0000A0   396 _P2_0	=	0x00a0
                           0000A1   397 _P2_1	=	0x00a1
                           0000A2   398 _P2_2	=	0x00a2
                           0000A3   399 _P2_3	=	0x00a3
                           0000A4   400 _P2_4	=	0x00a4
                           0000A5   401 _P2_5	=	0x00a5
                           0000A6   402 _P2_6	=	0x00a6
                           0000A7   403 _P2_7	=	0x00a7
                           0000B0   404 _P3_0	=	0x00b0
                           0000B1   405 _P3_1	=	0x00b1
                           0000B2   406 _P3_2	=	0x00b2
                           0000B3   407 _P3_3	=	0x00b3
                           0000B4   408 _P3_4	=	0x00b4
                           0000B5   409 _P3_5	=	0x00b5
                           0000B6   410 _P3_6	=	0x00b6
                           0000B7   411 _P3_7	=	0x00b7
                           0000B0   412 _RXD	=	0x00b0
                           0000B0   413 _RXD0	=	0x00b0
                           0000B1   414 _TXD	=	0x00b1
                           0000B1   415 _TXD0	=	0x00b1
                           0000B2   416 _INT0	=	0x00b2
                           0000B3   417 _INT1	=	0x00b3
                           0000B4   418 _T0	=	0x00b4
                           0000B5   419 _T1	=	0x00b5
                           0000B6   420 _WR	=	0x00b6
                           0000B7   421 _RD	=	0x00b7
                           0000D0   422 _P	=	0x00d0
                           0000D1   423 _F1	=	0x00d1
                           0000D2   424 _OV	=	0x00d2
                           0000D3   425 _RS0	=	0x00d3
                           0000D4   426 _RS1	=	0x00d4
                           0000D5   427 _F0	=	0x00d5
                           0000D6   428 _AC	=	0x00d6
                           0000D7   429 _CY	=	0x00d7
                           000098   430 _RI	=	0x0098
                           000099   431 _TI	=	0x0099
                           00009A   432 _RB8	=	0x009a
                           00009B   433 _TB8	=	0x009b
                           00009C   434 _REN	=	0x009c
                           00009D   435 _SM2	=	0x009d
                           00009E   436 _SM1	=	0x009e
                           00009F   437 _SM0	=	0x009f
                           000088   438 _IT0	=	0x0088
                           000089   439 _IE0	=	0x0089
                           00008A   440 _IT1	=	0x008a
                           00008B   441 _IE1	=	0x008b
                           00008C   442 _TR0	=	0x008c
                           00008D   443 _TF0	=	0x008d
                           00008E   444 _TR1	=	0x008e
                           00008F   445 _TF1	=	0x008f
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
                                    459 ; indirectly addressable internal ram data
                                    460 ;--------------------------------------------------------
                                    461 	.area ISEG    (DATA)
                                    462 ;--------------------------------------------------------
                                    463 ; absolute internal ram data
                                    464 ;--------------------------------------------------------
                                    465 	.area IABS    (ABS,DATA)
                                    466 	.area IABS    (ABS,DATA)
                                    467 ;--------------------------------------------------------
                                    468 ; bit data
                                    469 ;--------------------------------------------------------
                                    470 	.area BSEG    (BIT)
                                    471 ;--------------------------------------------------------
                                    472 ; paged external ram data
                                    473 ;--------------------------------------------------------
                                    474 	.area PSEG    (PAG,XDATA)
                                    475 ;--------------------------------------------------------
                                    476 ; external ram data
                                    477 ;--------------------------------------------------------
                                    478 	.area XSEG    (XDATA)
      000005                        479 _i2c_write_byte_65536_60:
      000005                        480 	.ds 1
      000006                        481 _i2c_read_RxData_65536_67:
      000006                        482 	.ds 1
      000007                        483 _delay_d_65536_70:
      000007                        484 	.ds 2
                                    485 ;--------------------------------------------------------
                                    486 ; absolute external ram data
                                    487 ;--------------------------------------------------------
                                    488 	.area XABS    (ABS,XDATA)
                                    489 ;--------------------------------------------------------
                                    490 ; external initialized ram data
                                    491 ;--------------------------------------------------------
                                    492 	.area XISEG   (XDATA)
                                    493 	.area HOME    (CODE)
                                    494 	.area GSINIT0 (CODE)
                                    495 	.area GSINIT1 (CODE)
                                    496 	.area GSINIT2 (CODE)
                                    497 	.area GSINIT3 (CODE)
                                    498 	.area GSINIT4 (CODE)
                                    499 	.area GSINIT5 (CODE)
                                    500 	.area GSINIT  (CODE)
                                    501 	.area GSFINAL (CODE)
                                    502 	.area CSEG    (CODE)
                                    503 ;--------------------------------------------------------
                                    504 ; global & static initialisations
                                    505 ;--------------------------------------------------------
                                    506 	.area HOME    (CODE)
                                    507 	.area GSINIT  (CODE)
                                    508 	.area GSFINAL (CODE)
                                    509 	.area GSINIT  (CODE)
                                    510 ;--------------------------------------------------------
                                    511 ; Home
                                    512 ;--------------------------------------------------------
                                    513 	.area HOME    (CODE)
                                    514 	.area HOME    (CODE)
                                    515 ;--------------------------------------------------------
                                    516 ; code
                                    517 ;--------------------------------------------------------
                                    518 	.area CSEG    (CODE)
                                    519 ;------------------------------------------------------------
                                    520 ;Allocation info for local variables in function 'i2c_init'
                                    521 ;------------------------------------------------------------
                                    522 ;	i2c.c:24: void i2c_init(void)
                                    523 ;	-----------------------------------------
                                    524 ;	 function i2c_init
                                    525 ;	-----------------------------------------
      006062                        526 _i2c_init:
                           000007   527 	ar7 = 0x07
                           000006   528 	ar6 = 0x06
                           000005   529 	ar5 = 0x05
                           000004   530 	ar4 = 0x04
                           000003   531 	ar3 = 0x03
                           000002   532 	ar2 = 0x02
                           000001   533 	ar1 = 0x01
                           000000   534 	ar0 = 0x00
                                    535 ;	i2c.c:27: SDA = 1;
                                    536 ;	assignBit
      006062 D2 94            [12]  537 	setb	_P1_4
                                    538 ;	i2c.c:28: SCL = 1;
                                    539 ;	assignBit
      006064 D2 90            [12]  540 	setb	_P1_0
                                    541 ;	i2c.c:29: }
      006066 22               [24]  542 	ret
                                    543 ;------------------------------------------------------------
                                    544 ;Allocation info for local variables in function 'i2c_start'
                                    545 ;------------------------------------------------------------
                                    546 ;	i2c.c:39: void i2c_start(void)
                                    547 ;	-----------------------------------------
                                    548 ;	 function i2c_start
                                    549 ;	-----------------------------------------
      006067                        550 _i2c_start:
                                    551 ;	i2c.c:44: SDA = 1;
                                    552 ;	assignBit
      006067 D2 94            [12]  553 	setb	_P1_4
                                    554 ;	i2c.c:45: SCL = 1;
                                    555 ;	assignBit
      006069 D2 90            [12]  556 	setb	_P1_0
                                    557 ;	i2c.c:46: delay(HalfBit);
      00606B 90 00 02         [24]  558 	mov	dptr,#0x0002
      00606E 12 61 68         [24]  559 	lcall	_delay
                                    560 ;	i2c.c:47: SDA =0;
                                    561 ;	assignBit
      006071 C2 94            [12]  562 	clr	_P1_4
                                    563 ;	i2c.c:48: delay(HalfBit);
      006073 90 00 02         [24]  564 	mov	dptr,#0x0002
                                    565 ;	i2c.c:49: }
      006076 02 61 68         [24]  566 	ljmp	_delay
                                    567 ;------------------------------------------------------------
                                    568 ;Allocation info for local variables in function 'i2c_Restart'
                                    569 ;------------------------------------------------------------
                                    570 ;	i2c.c:59: void i2c_Restart(void) /*Restart sequence for i2c*/
                                    571 ;	-----------------------------------------
                                    572 ;	 function i2c_Restart
                                    573 ;	-----------------------------------------
      006079                        574 _i2c_Restart:
                                    575 ;	i2c.c:61: SCL =0;
                                    576 ;	assignBit
      006079 C2 90            [12]  577 	clr	_P1_0
                                    578 ;	i2c.c:62: delay(HalfBit/2);
      00607B 90 00 01         [24]  579 	mov	dptr,#0x0001
      00607E 12 61 68         [24]  580 	lcall	_delay
                                    581 ;	i2c.c:63: SDA =1;
                                    582 ;	assignBit
      006081 D2 94            [12]  583 	setb	_P1_4
                                    584 ;	i2c.c:64: delay(HalfBit/2);
      006083 90 00 01         [24]  585 	mov	dptr,#0x0001
      006086 12 61 68         [24]  586 	lcall	_delay
                                    587 ;	i2c.c:66: SCL = 1;
                                    588 ;	assignBit
      006089 D2 90            [12]  589 	setb	_P1_0
                                    590 ;	i2c.c:67: delay(HalfBit/2);
      00608B 90 00 01         [24]  591 	mov	dptr,#0x0001
      00608E 12 61 68         [24]  592 	lcall	_delay
                                    593 ;	i2c.c:68: SDA =0;
                                    594 ;	assignBit
      006091 C2 94            [12]  595 	clr	_P1_4
                                    596 ;	i2c.c:69: delay(HalfBit/2);
      006093 90 00 01         [24]  597 	mov	dptr,#0x0001
                                    598 ;	i2c.c:70: }
      006096 02 61 68         [24]  599 	ljmp	_delay
                                    600 ;------------------------------------------------------------
                                    601 ;Allocation info for local variables in function 'i2c_stop'
                                    602 ;------------------------------------------------------------
                                    603 ;	i2c.c:80: void i2c_stop(void) /*When SCL is high, SDA should go from Low to HIGH*/
                                    604 ;	-----------------------------------------
                                    605 ;	 function i2c_stop
                                    606 ;	-----------------------------------------
      006099                        607 _i2c_stop:
                                    608 ;	i2c.c:82: SCL= 0;
                                    609 ;	assignBit
      006099 C2 90            [12]  610 	clr	_P1_0
                                    611 ;	i2c.c:83: delay(HalfBit/2);
      00609B 90 00 01         [24]  612 	mov	dptr,#0x0001
      00609E 12 61 68         [24]  613 	lcall	_delay
                                    614 ;	i2c.c:84: SDA = 0;
                                    615 ;	assignBit
      0060A1 C2 94            [12]  616 	clr	_P1_4
                                    617 ;	i2c.c:85: delay(HalfBit/2);
      0060A3 90 00 01         [24]  618 	mov	dptr,#0x0001
      0060A6 12 61 68         [24]  619 	lcall	_delay
                                    620 ;	i2c.c:86: SCL =1;
                                    621 ;	assignBit
      0060A9 D2 90            [12]  622 	setb	_P1_0
                                    623 ;	i2c.c:87: delay(HalfBit/2);
      0060AB 90 00 01         [24]  624 	mov	dptr,#0x0001
      0060AE 12 61 68         [24]  625 	lcall	_delay
                                    626 ;	i2c.c:88: SDA= 1;
                                    627 ;	assignBit
      0060B1 D2 94            [12]  628 	setb	_P1_4
                                    629 ;	i2c.c:89: delay(HalfBit/2);
      0060B3 90 00 01         [24]  630 	mov	dptr,#0x0001
                                    631 ;	i2c.c:91: }
      0060B6 02 61 68         [24]  632 	ljmp	_delay
                                    633 ;------------------------------------------------------------
                                    634 ;Allocation info for local variables in function 'i2c_write'
                                    635 ;------------------------------------------------------------
                                    636 ;byte                      Allocated with name '_i2c_write_byte_65536_60'
                                    637 ;i                         Allocated with name '_i2c_write_i_65536_61'
                                    638 ;------------------------------------------------------------
                                    639 ;	i2c.c:101: __bit i2c_write(uint8_t byte)
                                    640 ;	-----------------------------------------
                                    641 ;	 function i2c_write
                                    642 ;	-----------------------------------------
      0060B9                        643 _i2c_write:
      0060B9 E5 82            [12]  644 	mov	a,dpl
      0060BB 90 00 05         [24]  645 	mov	dptr,#_i2c_write_byte_65536_60
      0060BE F0               [24]  646 	movx	@dptr,a
                                    647 ;	i2c.c:104: for(i=0; i<8;i++)
      0060BF 7E 00            [12]  648 	mov	r6,#0x00
      0060C1 7F 00            [12]  649 	mov	r7,#0x00
      0060C3                        650 00105$:
                                    651 ;	i2c.c:106: SCL = 0;                /*Data changes when clock is low*/
                                    652 ;	assignBit
      0060C3 C2 90            [12]  653 	clr	_P1_0
                                    654 ;	i2c.c:107: delay(HalfBit/2);
      0060C5 90 00 01         [24]  655 	mov	dptr,#0x0001
      0060C8 C0 07            [24]  656 	push	ar7
      0060CA C0 06            [24]  657 	push	ar6
      0060CC 12 61 68         [24]  658 	lcall	_delay
                                    659 ;	i2c.c:108: if( byte > 0x7F)
      0060CF 90 00 05         [24]  660 	mov	dptr,#_i2c_write_byte_65536_60
      0060D2 E0               [24]  661 	movx	a,@dptr
      0060D3 24 80            [12]  662 	add	a,#0xff - 0x7f
                                    663 ;	i2c.c:110: SDA = 1;
                                    664 ;	assignBit
                                    665 ;	i2c.c:115: SDA = 0;
                                    666 ;	assignBit
      0060D5 92 94            [24]  667 	mov	_P1_4,c
                                    668 ;	i2c.c:117: byte = byte<<1;
      0060D7 90 00 05         [24]  669 	mov	dptr,#_i2c_write_byte_65536_60
      0060DA E0               [24]  670 	movx	a,@dptr
      0060DB 25 E0            [12]  671 	add	a,acc
      0060DD F0               [24]  672 	movx	@dptr,a
                                    673 ;	i2c.c:118: delay(HalfBit/2);
      0060DE 90 00 01         [24]  674 	mov	dptr,#0x0001
      0060E1 12 61 68         [24]  675 	lcall	_delay
                                    676 ;	i2c.c:119: SCL =1;             /*Clock goes high and the data is sampled at the */
                                    677 ;	assignBit
      0060E4 D2 90            [12]  678 	setb	_P1_0
                                    679 ;	i2c.c:120: delay(HalfBit);
      0060E6 90 00 02         [24]  680 	mov	dptr,#0x0002
      0060E9 12 61 68         [24]  681 	lcall	_delay
      0060EC D0 06            [24]  682 	pop	ar6
      0060EE D0 07            [24]  683 	pop	ar7
                                    684 ;	i2c.c:104: for(i=0; i<8;i++)
      0060F0 0E               [12]  685 	inc	r6
      0060F1 BE 00 01         [24]  686 	cjne	r6,#0x00,00123$
      0060F4 0F               [12]  687 	inc	r7
      0060F5                        688 00123$:
      0060F5 C3               [12]  689 	clr	c
      0060F6 EE               [12]  690 	mov	a,r6
      0060F7 94 08            [12]  691 	subb	a,#0x08
      0060F9 EF               [12]  692 	mov	a,r7
      0060FA 64 80            [12]  693 	xrl	a,#0x80
      0060FC 94 80            [12]  694 	subb	a,#0x80
      0060FE 40 C3            [24]  695 	jc	00105$
                                    696 ;	i2c.c:122: SCL = 0;
                                    697 ;	assignBit
      006100 C2 90            [12]  698 	clr	_P1_0
                                    699 ;	i2c.c:123: SDA =1;
                                    700 ;	assignBit
      006102 D2 94            [12]  701 	setb	_P1_4
                                    702 ;	i2c.c:124: delay(HalfBit);
      006104 90 00 02         [24]  703 	mov	dptr,#0x0002
      006107 12 61 68         [24]  704 	lcall	_delay
                                    705 ;	i2c.c:125: SCL =1;
                                    706 ;	assignBit
      00610A D2 90            [12]  707 	setb	_P1_0
                                    708 ;	i2c.c:126: delay(HalfBit);
      00610C 90 00 02         [24]  709 	mov	dptr,#0x0002
      00610F 12 61 68         [24]  710 	lcall	_delay
                                    711 ;	i2c.c:127: return SDA;
      006112 A2 94            [12]  712 	mov	c,_P1_4
                                    713 ;	i2c.c:128: }
      006114 22               [24]  714 	ret
                                    715 ;------------------------------------------------------------
                                    716 ;Allocation info for local variables in function 'i2c_read'
                                    717 ;------------------------------------------------------------
                                    718 ;i                         Allocated with name '_i2c_read_i_65536_67'
                                    719 ;d                         Allocated with name '_i2c_read_d_65536_67'
                                    720 ;RxData                    Allocated with name '_i2c_read_RxData_65536_67'
                                    721 ;------------------------------------------------------------
                                    722 ;	i2c.c:138: uint8_t i2c_read(void)
                                    723 ;	-----------------------------------------
                                    724 ;	 function i2c_read
                                    725 ;	-----------------------------------------
      006115                        726 _i2c_read:
                                    727 ;	i2c.c:140: uint8_t i, d, RxData =0;
      006115 90 00 06         [24]  728 	mov	dptr,#_i2c_read_RxData_65536_67
      006118 E4               [12]  729 	clr	a
      006119 F0               [24]  730 	movx	@dptr,a
                                    731 ;	i2c.c:141: for(i=0; i<8; i++) /*Read the i2c data on the bus*/
      00611A 7F 00            [12]  732 	mov	r7,#0x00
      00611C                        733 00102$:
                                    734 ;	i2c.c:143: SCL =0;
                                    735 ;	assignBit
      00611C C2 90            [12]  736 	clr	_P1_0
                                    737 ;	i2c.c:144: SDA=1;
                                    738 ;	assignBit
      00611E D2 94            [12]  739 	setb	_P1_4
                                    740 ;	i2c.c:145: delay(HalfBit);
      006120 90 00 02         [24]  741 	mov	dptr,#0x0002
      006123 C0 07            [24]  742 	push	ar7
      006125 12 61 68         [24]  743 	lcall	_delay
                                    744 ;	i2c.c:146: SCL =1;
                                    745 ;	assignBit
      006128 D2 90            [12]  746 	setb	_P1_0
                                    747 ;	i2c.c:147: delay(HalfBit/2);
      00612A 90 00 01         [24]  748 	mov	dptr,#0x0001
      00612D 12 61 68         [24]  749 	lcall	_delay
      006130 D0 07            [24]  750 	pop	ar7
                                    751 ;	i2c.c:148: d = SDA;
      006132 A2 94            [12]  752 	mov	c,_P1_4
      006134 E4               [12]  753 	clr	a
      006135 33               [12]  754 	rlc	a
      006136 FE               [12]  755 	mov	r6,a
                                    756 ;	i2c.c:149: RxData |= (d<<(7-i));
      006137 8F 05            [24]  757 	mov	ar5,r7
      006139 74 07            [12]  758 	mov	a,#0x07
      00613B C3               [12]  759 	clr	c
      00613C 9D               [12]  760 	subb	a,r5
      00613D FD               [12]  761 	mov	r5,a
      00613E 8D F0            [24]  762 	mov	b,r5
      006140 05 F0            [12]  763 	inc	b
      006142 EE               [12]  764 	mov	a,r6
      006143 80 02            [24]  765 	sjmp	00117$
      006145                        766 00115$:
      006145 25 E0            [12]  767 	add	a,acc
      006147                        768 00117$:
      006147 D5 F0 FB         [24]  769 	djnz	b,00115$
      00614A FD               [12]  770 	mov	r5,a
      00614B 90 00 06         [24]  771 	mov	dptr,#_i2c_read_RxData_65536_67
      00614E E0               [24]  772 	movx	a,@dptr
      00614F 4D               [12]  773 	orl	a,r5
      006150 F0               [24]  774 	movx	@dptr,a
                                    775 ;	i2c.c:150: delay(HalfBit/2);
      006151 90 00 01         [24]  776 	mov	dptr,#0x0001
      006154 C0 07            [24]  777 	push	ar7
      006156 12 61 68         [24]  778 	lcall	_delay
      006159 D0 07            [24]  779 	pop	ar7
                                    780 ;	i2c.c:141: for(i=0; i<8; i++) /*Read the i2c data on the bus*/
      00615B 0F               [12]  781 	inc	r7
      00615C BF 08 00         [24]  782 	cjne	r7,#0x08,00118$
      00615F                        783 00118$:
      00615F 40 BB            [24]  784 	jc	00102$
                                    785 ;	i2c.c:152: return RxData;
      006161 90 00 06         [24]  786 	mov	dptr,#_i2c_read_RxData_65536_67
      006164 E0               [24]  787 	movx	a,@dptr
                                    788 ;	i2c.c:153: }
      006165 F5 82            [12]  789 	mov	dpl,a
      006167 22               [24]  790 	ret
                                    791 ;------------------------------------------------------------
                                    792 ;Allocation info for local variables in function 'delay'
                                    793 ;------------------------------------------------------------
                                    794 ;d                         Allocated with name '_delay_d_65536_70'
                                    795 ;i                         Allocated with name '_delay_i_131072_72'
                                    796 ;------------------------------------------------------------
                                    797 ;	i2c.c:163: void delay(int d) /*Delay function*/
                                    798 ;	-----------------------------------------
                                    799 ;	 function delay
                                    800 ;	-----------------------------------------
      006168                        801 _delay:
      006168 AF 83            [24]  802 	mov	r7,dph
      00616A E5 82            [12]  803 	mov	a,dpl
      00616C 90 00 07         [24]  804 	mov	dptr,#_delay_d_65536_70
      00616F F0               [24]  805 	movx	@dptr,a
      006170 EF               [12]  806 	mov	a,r7
      006171 A3               [24]  807 	inc	dptr
      006172 F0               [24]  808 	movx	@dptr,a
                                    809 ;	i2c.c:165: for(int i=0; i<d; i++);
      006173 90 00 07         [24]  810 	mov	dptr,#_delay_d_65536_70
      006176 E0               [24]  811 	movx	a,@dptr
      006177 FE               [12]  812 	mov	r6,a
      006178 A3               [24]  813 	inc	dptr
      006179 E0               [24]  814 	movx	a,@dptr
      00617A FF               [12]  815 	mov	r7,a
      00617B 7C 00            [12]  816 	mov	r4,#0x00
      00617D 7D 00            [12]  817 	mov	r5,#0x00
      00617F                        818 00103$:
      00617F C3               [12]  819 	clr	c
      006180 EC               [12]  820 	mov	a,r4
      006181 9E               [12]  821 	subb	a,r6
      006182 ED               [12]  822 	mov	a,r5
      006183 64 80            [12]  823 	xrl	a,#0x80
      006185 8F F0            [24]  824 	mov	b,r7
      006187 63 F0 80         [24]  825 	xrl	b,#0x80
      00618A 95 F0            [12]  826 	subb	a,b
      00618C 50 07            [24]  827 	jnc	00101$
      00618E 0C               [12]  828 	inc	r4
      00618F BC 00 ED         [24]  829 	cjne	r4,#0x00,00103$
      006192 0D               [12]  830 	inc	r5
      006193 80 EA            [24]  831 	sjmp	00103$
      006195                        832 00101$:
                                    833 ;	i2c.c:166: return;
                                    834 ;	i2c.c:167: }
      006195 22               [24]  835 	ret
                                    836 	.area CSEG    (CODE)
                                    837 	.area CONST   (CODE)
                                    838 	.area XINIT   (CODE)
                                    839 	.area CABS    (ABS,CODE)
