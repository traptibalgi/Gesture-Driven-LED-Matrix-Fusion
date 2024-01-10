                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module uart
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
                                    220 	.globl _putchar
                                    221 	.globl _getchar
                                    222 	.globl _putstr
                                    223 	.globl _echo
                                    224 ;--------------------------------------------------------
                                    225 ; special function registers
                                    226 ;--------------------------------------------------------
                                    227 	.area RSEG    (ABS,DATA)
      000000                        228 	.org 0x0000
                           0000C8   229 _T2CON	=	0x00c8
                           0000CA   230 _RCAP2L	=	0x00ca
                           0000CB   231 _RCAP2H	=	0x00cb
                           0000CC   232 _TL2	=	0x00cc
                           0000CD   233 _TH2	=	0x00cd
                           00008E   234 _AUXR	=	0x008e
                           0000A2   235 _AUXR1	=	0x00a2
                           000097   236 _CKRL	=	0x0097
                           00008F   237 _CKCON0	=	0x008f
                           0000AF   238 _CKCON1	=	0x00af
                           0000FA   239 _CCAP0H	=	0x00fa
                           0000FB   240 _CCAP1H	=	0x00fb
                           0000FC   241 _CCAP2H	=	0x00fc
                           0000FD   242 _CCAP3H	=	0x00fd
                           0000FE   243 _CCAP4H	=	0x00fe
                           0000EA   244 _CCAP0L	=	0x00ea
                           0000EB   245 _CCAP1L	=	0x00eb
                           0000EC   246 _CCAP2L	=	0x00ec
                           0000ED   247 _CCAP3L	=	0x00ed
                           0000EE   248 _CCAP4L	=	0x00ee
                           0000DA   249 _CCAPM0	=	0x00da
                           0000DB   250 _CCAPM1	=	0x00db
                           0000DC   251 _CCAPM2	=	0x00dc
                           0000DD   252 _CCAPM3	=	0x00dd
                           0000DE   253 _CCAPM4	=	0x00de
                           0000D8   254 _CCON	=	0x00d8
                           0000F9   255 _CH	=	0x00f9
                           0000E9   256 _CL	=	0x00e9
                           0000D9   257 _CMOD	=	0x00d9
                           0000A8   258 _IEN0	=	0x00a8
                           0000B1   259 _IEN1	=	0x00b1
                           0000B8   260 _IPL0	=	0x00b8
                           0000B7   261 _IPH0	=	0x00b7
                           0000B2   262 _IPL1	=	0x00b2
                           0000B3   263 _IPH1	=	0x00b3
                           0000C0   264 _P4	=	0x00c0
                           0000E8   265 _P5	=	0x00e8
                           0000A6   266 _WDTRST	=	0x00a6
                           0000A7   267 _WDTPRG	=	0x00a7
                           0000A9   268 _SADDR	=	0x00a9
                           0000B9   269 _SADEN	=	0x00b9
                           0000C3   270 _SPCON	=	0x00c3
                           0000C4   271 _SPSTA	=	0x00c4
                           0000C5   272 _SPDAT	=	0x00c5
                           0000C9   273 _T2MOD	=	0x00c9
                           00009B   274 _BDRCON	=	0x009b
                           00009A   275 _BRL	=	0x009a
                           00009C   276 _KBLS	=	0x009c
                           00009D   277 _KBE	=	0x009d
                           00009E   278 _KBF	=	0x009e
                           0000D2   279 _EECON	=	0x00d2
                           0000E0   280 _ACC	=	0x00e0
                           0000F0   281 _B	=	0x00f0
                           000083   282 _DPH	=	0x0083
                           000083   283 _DP0H	=	0x0083
                           000082   284 _DPL	=	0x0082
                           000082   285 _DP0L	=	0x0082
                           0000A8   286 _IE	=	0x00a8
                           0000B8   287 _IP	=	0x00b8
                           000080   288 _P0	=	0x0080
                           000090   289 _P1	=	0x0090
                           0000A0   290 _P2	=	0x00a0
                           0000B0   291 _P3	=	0x00b0
                           000087   292 _PCON	=	0x0087
                           0000D0   293 _PSW	=	0x00d0
                           000099   294 _SBUF	=	0x0099
                           000099   295 _SBUF0	=	0x0099
                           000098   296 _SCON	=	0x0098
                           000081   297 _SP	=	0x0081
                           000088   298 _TCON	=	0x0088
                           00008C   299 _TH0	=	0x008c
                           00008D   300 _TH1	=	0x008d
                           00008A   301 _TL0	=	0x008a
                           00008B   302 _TL1	=	0x008b
                           000089   303 _TMOD	=	0x0089
                                    304 ;--------------------------------------------------------
                                    305 ; special function bits
                                    306 ;--------------------------------------------------------
                                    307 	.area RSEG    (ABS,DATA)
      000000                        308 	.org 0x0000
                           0000AD   309 _ET2	=	0x00ad
                           0000BD   310 _PT2	=	0x00bd
                           0000C8   311 _T2CON_0	=	0x00c8
                           0000C9   312 _T2CON_1	=	0x00c9
                           0000CA   313 _T2CON_2	=	0x00ca
                           0000CB   314 _T2CON_3	=	0x00cb
                           0000CC   315 _T2CON_4	=	0x00cc
                           0000CD   316 _T2CON_5	=	0x00cd
                           0000CE   317 _T2CON_6	=	0x00ce
                           0000CF   318 _T2CON_7	=	0x00cf
                           0000C8   319 _CP_RL2	=	0x00c8
                           0000C9   320 _C_T2	=	0x00c9
                           0000CA   321 _TR2	=	0x00ca
                           0000CB   322 _EXEN2	=	0x00cb
                           0000CC   323 _TCLK	=	0x00cc
                           0000CD   324 _RCLK	=	0x00cd
                           0000CE   325 _EXF2	=	0x00ce
                           0000CF   326 _TF2	=	0x00cf
                           0000DF   327 _CF	=	0x00df
                           0000DE   328 _CR	=	0x00de
                           0000DC   329 _CCF4	=	0x00dc
                           0000DB   330 _CCF3	=	0x00db
                           0000DA   331 _CCF2	=	0x00da
                           0000D9   332 _CCF1	=	0x00d9
                           0000D8   333 _CCF0	=	0x00d8
                           0000AE   334 _EC	=	0x00ae
                           0000BE   335 _PPCL	=	0x00be
                           0000BD   336 _PT2L	=	0x00bd
                           0000BC   337 _PSL	=	0x00bc
                           0000BB   338 _PT1L	=	0x00bb
                           0000BA   339 _PX1L	=	0x00ba
                           0000B9   340 _PT0L	=	0x00b9
                           0000B8   341 _PX0L	=	0x00b8
                           0000C0   342 _P4_0	=	0x00c0
                           0000C1   343 _P4_1	=	0x00c1
                           0000C2   344 _P4_2	=	0x00c2
                           0000C3   345 _P4_3	=	0x00c3
                           0000C4   346 _P4_4	=	0x00c4
                           0000C5   347 _P4_5	=	0x00c5
                           0000C6   348 _P4_6	=	0x00c6
                           0000C7   349 _P4_7	=	0x00c7
                           0000E8   350 _P5_0	=	0x00e8
                           0000E9   351 _P5_1	=	0x00e9
                           0000EA   352 _P5_2	=	0x00ea
                           0000EB   353 _P5_3	=	0x00eb
                           0000EC   354 _P5_4	=	0x00ec
                           0000ED   355 _P5_5	=	0x00ed
                           0000EE   356 _P5_6	=	0x00ee
                           0000EF   357 _P5_7	=	0x00ef
                           0000F0   358 _BREG_F0	=	0x00f0
                           0000F1   359 _BREG_F1	=	0x00f1
                           0000F2   360 _BREG_F2	=	0x00f2
                           0000F3   361 _BREG_F3	=	0x00f3
                           0000F4   362 _BREG_F4	=	0x00f4
                           0000F5   363 _BREG_F5	=	0x00f5
                           0000F6   364 _BREG_F6	=	0x00f6
                           0000F7   365 _BREG_F7	=	0x00f7
                           0000A8   366 _EX0	=	0x00a8
                           0000A9   367 _ET0	=	0x00a9
                           0000AA   368 _EX1	=	0x00aa
                           0000AB   369 _ET1	=	0x00ab
                           0000AC   370 _ES	=	0x00ac
                           0000AF   371 _EA	=	0x00af
                           0000B8   372 _PX0	=	0x00b8
                           0000B9   373 _PT0	=	0x00b9
                           0000BA   374 _PX1	=	0x00ba
                           0000BB   375 _PT1	=	0x00bb
                           0000BC   376 _PS	=	0x00bc
                           000080   377 _P0_0	=	0x0080
                           000081   378 _P0_1	=	0x0081
                           000082   379 _P0_2	=	0x0082
                           000083   380 _P0_3	=	0x0083
                           000084   381 _P0_4	=	0x0084
                           000085   382 _P0_5	=	0x0085
                           000086   383 _P0_6	=	0x0086
                           000087   384 _P0_7	=	0x0087
                           000090   385 _P1_0	=	0x0090
                           000091   386 _P1_1	=	0x0091
                           000092   387 _P1_2	=	0x0092
                           000093   388 _P1_3	=	0x0093
                           000094   389 _P1_4	=	0x0094
                           000095   390 _P1_5	=	0x0095
                           000096   391 _P1_6	=	0x0096
                           000097   392 _P1_7	=	0x0097
                           0000A0   393 _P2_0	=	0x00a0
                           0000A1   394 _P2_1	=	0x00a1
                           0000A2   395 _P2_2	=	0x00a2
                           0000A3   396 _P2_3	=	0x00a3
                           0000A4   397 _P2_4	=	0x00a4
                           0000A5   398 _P2_5	=	0x00a5
                           0000A6   399 _P2_6	=	0x00a6
                           0000A7   400 _P2_7	=	0x00a7
                           0000B0   401 _P3_0	=	0x00b0
                           0000B1   402 _P3_1	=	0x00b1
                           0000B2   403 _P3_2	=	0x00b2
                           0000B3   404 _P3_3	=	0x00b3
                           0000B4   405 _P3_4	=	0x00b4
                           0000B5   406 _P3_5	=	0x00b5
                           0000B6   407 _P3_6	=	0x00b6
                           0000B7   408 _P3_7	=	0x00b7
                           0000B0   409 _RXD	=	0x00b0
                           0000B0   410 _RXD0	=	0x00b0
                           0000B1   411 _TXD	=	0x00b1
                           0000B1   412 _TXD0	=	0x00b1
                           0000B2   413 _INT0	=	0x00b2
                           0000B3   414 _INT1	=	0x00b3
                           0000B4   415 _T0	=	0x00b4
                           0000B5   416 _T1	=	0x00b5
                           0000B6   417 _WR	=	0x00b6
                           0000B7   418 _RD	=	0x00b7
                           0000D0   419 _P	=	0x00d0
                           0000D1   420 _F1	=	0x00d1
                           0000D2   421 _OV	=	0x00d2
                           0000D3   422 _RS0	=	0x00d3
                           0000D4   423 _RS1	=	0x00d4
                           0000D5   424 _F0	=	0x00d5
                           0000D6   425 _AC	=	0x00d6
                           0000D7   426 _CY	=	0x00d7
                           000098   427 _RI	=	0x0098
                           000099   428 _TI	=	0x0099
                           00009A   429 _RB8	=	0x009a
                           00009B   430 _TB8	=	0x009b
                           00009C   431 _REN	=	0x009c
                           00009D   432 _SM2	=	0x009d
                           00009E   433 _SM1	=	0x009e
                           00009F   434 _SM0	=	0x009f
                           000088   435 _IT0	=	0x0088
                           000089   436 _IE0	=	0x0089
                           00008A   437 _IT1	=	0x008a
                           00008B   438 _IE1	=	0x008b
                           00008C   439 _TR0	=	0x008c
                           00008D   440 _TF0	=	0x008d
                           00008E   441 _TR1	=	0x008e
                           00008F   442 _TF1	=	0x008f
                                    443 ;--------------------------------------------------------
                                    444 ; overlayable register banks
                                    445 ;--------------------------------------------------------
                                    446 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        447 	.ds 8
                                    448 ;--------------------------------------------------------
                                    449 ; internal ram data
                                    450 ;--------------------------------------------------------
                                    451 	.area DSEG    (DATA)
                                    452 ;--------------------------------------------------------
                                    453 ; overlayable items in internal ram
                                    454 ;--------------------------------------------------------
                                    455 ;--------------------------------------------------------
                                    456 ; indirectly addressable internal ram data
                                    457 ;--------------------------------------------------------
                                    458 	.area ISEG    (DATA)
                                    459 ;--------------------------------------------------------
                                    460 ; absolute internal ram data
                                    461 ;--------------------------------------------------------
                                    462 	.area IABS    (ABS,DATA)
                                    463 	.area IABS    (ABS,DATA)
                                    464 ;--------------------------------------------------------
                                    465 ; bit data
                                    466 ;--------------------------------------------------------
                                    467 	.area BSEG    (BIT)
                                    468 ;--------------------------------------------------------
                                    469 ; paged external ram data
                                    470 ;--------------------------------------------------------
                                    471 	.area PSEG    (PAG,XDATA)
                                    472 ;--------------------------------------------------------
                                    473 ; external ram data
                                    474 ;--------------------------------------------------------
                                    475 	.area XSEG    (XDATA)
      00000B                        476 _putchar_c_65536_46:
      00000B                        477 	.ds 2
      00000D                        478 _putstr_s_65536_50:
      00000D                        479 	.ds 3
                                    480 ;--------------------------------------------------------
                                    481 ; absolute external ram data
                                    482 ;--------------------------------------------------------
                                    483 	.area XABS    (ABS,XDATA)
                                    484 ;--------------------------------------------------------
                                    485 ; external initialized ram data
                                    486 ;--------------------------------------------------------
                                    487 	.area XISEG   (XDATA)
                                    488 	.area HOME    (CODE)
                                    489 	.area GSINIT0 (CODE)
                                    490 	.area GSINIT1 (CODE)
                                    491 	.area GSINIT2 (CODE)
                                    492 	.area GSINIT3 (CODE)
                                    493 	.area GSINIT4 (CODE)
                                    494 	.area GSINIT5 (CODE)
                                    495 	.area GSINIT  (CODE)
                                    496 	.area GSFINAL (CODE)
                                    497 	.area CSEG    (CODE)
                                    498 ;--------------------------------------------------------
                                    499 ; global & static initialisations
                                    500 ;--------------------------------------------------------
                                    501 	.area HOME    (CODE)
                                    502 	.area GSINIT  (CODE)
                                    503 	.area GSFINAL (CODE)
                                    504 	.area GSINIT  (CODE)
                                    505 ;--------------------------------------------------------
                                    506 ; Home
                                    507 ;--------------------------------------------------------
                                    508 	.area HOME    (CODE)
                                    509 	.area HOME    (CODE)
                                    510 ;--------------------------------------------------------
                                    511 ; code
                                    512 ;--------------------------------------------------------
                                    513 	.area CSEG    (CODE)
                                    514 ;------------------------------------------------------------
                                    515 ;Allocation info for local variables in function 'putchar'
                                    516 ;------------------------------------------------------------
                                    517 ;c                         Allocated with name '_putchar_c_65536_46'
                                    518 ;------------------------------------------------------------
                                    519 ;	uart.c:23: int putchar(int c)
                                    520 ;	-----------------------------------------
                                    521 ;	 function putchar
                                    522 ;	-----------------------------------------
      00623A                        523 _putchar:
                           000007   524 	ar7 = 0x07
                           000006   525 	ar6 = 0x06
                           000005   526 	ar5 = 0x05
                           000004   527 	ar4 = 0x04
                           000003   528 	ar3 = 0x03
                           000002   529 	ar2 = 0x02
                           000001   530 	ar1 = 0x01
                           000000   531 	ar0 = 0x00
      00623A AF 83            [24]  532 	mov	r7,dph
      00623C E5 82            [12]  533 	mov	a,dpl
      00623E 90 00 0B         [24]  534 	mov	dptr,#_putchar_c_65536_46
      006241 F0               [24]  535 	movx	@dptr,a
      006242 EF               [12]  536 	mov	a,r7
      006243 A3               [24]  537 	inc	dptr
      006244 F0               [24]  538 	movx	@dptr,a
                                    539 ;	uart.c:26: while(!TI);
      006245                        540 00101$:
      006245 30 99 FD         [24]  541 	jnb	_TI,00101$
                                    542 ;	uart.c:27: SBUF = c;
      006248 90 00 0B         [24]  543 	mov	dptr,#_putchar_c_65536_46
      00624B E0               [24]  544 	movx	a,@dptr
      00624C FE               [12]  545 	mov	r6,a
      00624D A3               [24]  546 	inc	dptr
      00624E E0               [24]  547 	movx	a,@dptr
      00624F FF               [12]  548 	mov	r7,a
      006250 8E 99            [24]  549 	mov	_SBUF,r6
                                    550 ;	uart.c:28: TI =0;
                                    551 ;	assignBit
      006252 C2 99            [12]  552 	clr	_TI
                                    553 ;	uart.c:29: return c;
      006254 8E 82            [24]  554 	mov	dpl,r6
      006256 8F 83            [24]  555 	mov	dph,r7
                                    556 ;	uart.c:30: }
      006258 22               [24]  557 	ret
                                    558 ;------------------------------------------------------------
                                    559 ;Allocation info for local variables in function 'getchar'
                                    560 ;------------------------------------------------------------
                                    561 ;	uart.c:40: int getchar(void)
                                    562 ;	-----------------------------------------
                                    563 ;	 function getchar
                                    564 ;	-----------------------------------------
      006259                        565 _getchar:
                                    566 ;	uart.c:43: while(!RI);
      006259                        567 00101$:
                                    568 ;	uart.c:44: RI =0;
                                    569 ;	assignBit
      006259 10 98 02         [24]  570 	jbc	_RI,00114$
      00625C 80 FB            [24]  571 	sjmp	00101$
      00625E                        572 00114$:
                                    573 ;	uart.c:45: return SBUF;
      00625E AE 99            [24]  574 	mov	r6,_SBUF
      006260 7F 00            [12]  575 	mov	r7,#0x00
      006262 8E 82            [24]  576 	mov	dpl,r6
      006264 8F 83            [24]  577 	mov	dph,r7
                                    578 ;	uart.c:47: }
      006266 22               [24]  579 	ret
                                    580 ;------------------------------------------------------------
                                    581 ;Allocation info for local variables in function 'putstr'
                                    582 ;------------------------------------------------------------
                                    583 ;s                         Allocated with name '_putstr_s_65536_50'
                                    584 ;i                         Allocated with name '_putstr_i_65536_51'
                                    585 ;------------------------------------------------------------
                                    586 ;	uart.c:57: int putstr(char *s)
                                    587 ;	-----------------------------------------
                                    588 ;	 function putstr
                                    589 ;	-----------------------------------------
      006267                        590 _putstr:
      006267 AF F0            [24]  591 	mov	r7,b
      006269 AE 83            [24]  592 	mov	r6,dph
      00626B E5 82            [12]  593 	mov	a,dpl
      00626D 90 00 0D         [24]  594 	mov	dptr,#_putstr_s_65536_50
      006270 F0               [24]  595 	movx	@dptr,a
      006271 EE               [12]  596 	mov	a,r6
      006272 A3               [24]  597 	inc	dptr
      006273 F0               [24]  598 	movx	@dptr,a
      006274 EF               [12]  599 	mov	a,r7
      006275 A3               [24]  600 	inc	dptr
      006276 F0               [24]  601 	movx	@dptr,a
                                    602 ;	uart.c:61: while (*s)
      006277 90 00 0D         [24]  603 	mov	dptr,#_putstr_s_65536_50
      00627A E0               [24]  604 	movx	a,@dptr
      00627B FD               [12]  605 	mov	r5,a
      00627C A3               [24]  606 	inc	dptr
      00627D E0               [24]  607 	movx	a,@dptr
      00627E FE               [12]  608 	mov	r6,a
      00627F A3               [24]  609 	inc	dptr
      006280 E0               [24]  610 	movx	a,@dptr
      006281 FF               [12]  611 	mov	r7,a
      006282 7B 00            [12]  612 	mov	r3,#0x00
      006284 7C 00            [12]  613 	mov	r4,#0x00
      006286                        614 00101$:
      006286 8D 82            [24]  615 	mov	dpl,r5
      006288 8E 83            [24]  616 	mov	dph,r6
      00628A 8F F0            [24]  617 	mov	b,r7
      00628C 12 63 57         [24]  618 	lcall	__gptrget
      00628F FA               [12]  619 	mov	r2,a
      006290 60 36            [24]  620 	jz	00108$
                                    621 ;	uart.c:63: putchar(*s++);
      006292 0D               [12]  622 	inc	r5
      006293 BD 00 01         [24]  623 	cjne	r5,#0x00,00116$
      006296 0E               [12]  624 	inc	r6
      006297                        625 00116$:
      006297 90 00 0D         [24]  626 	mov	dptr,#_putstr_s_65536_50
      00629A ED               [12]  627 	mov	a,r5
      00629B F0               [24]  628 	movx	@dptr,a
      00629C EE               [12]  629 	mov	a,r6
      00629D A3               [24]  630 	inc	dptr
      00629E F0               [24]  631 	movx	@dptr,a
      00629F EF               [12]  632 	mov	a,r7
      0062A0 A3               [24]  633 	inc	dptr
      0062A1 F0               [24]  634 	movx	@dptr,a
      0062A2 8A 01            [24]  635 	mov	ar1,r2
      0062A4 7A 00            [12]  636 	mov	r2,#0x00
      0062A6 89 82            [24]  637 	mov	dpl,r1
      0062A8 8A 83            [24]  638 	mov	dph,r2
      0062AA C0 07            [24]  639 	push	ar7
      0062AC C0 06            [24]  640 	push	ar6
      0062AE C0 05            [24]  641 	push	ar5
      0062B0 C0 04            [24]  642 	push	ar4
      0062B2 C0 03            [24]  643 	push	ar3
      0062B4 12 62 3A         [24]  644 	lcall	_putchar
      0062B7 D0 03            [24]  645 	pop	ar3
      0062B9 D0 04            [24]  646 	pop	ar4
      0062BB D0 05            [24]  647 	pop	ar5
      0062BD D0 06            [24]  648 	pop	ar6
      0062BF D0 07            [24]  649 	pop	ar7
                                    650 ;	uart.c:64: i++;
      0062C1 0B               [12]  651 	inc	r3
      0062C2 BB 00 C1         [24]  652 	cjne	r3,#0x00,00101$
      0062C5 0C               [12]  653 	inc	r4
      0062C6 80 BE            [24]  654 	sjmp	00101$
      0062C8                        655 00108$:
      0062C8 90 00 0D         [24]  656 	mov	dptr,#_putstr_s_65536_50
      0062CB ED               [12]  657 	mov	a,r5
      0062CC F0               [24]  658 	movx	@dptr,a
      0062CD EE               [12]  659 	mov	a,r6
      0062CE A3               [24]  660 	inc	dptr
      0062CF F0               [24]  661 	movx	@dptr,a
      0062D0 EF               [12]  662 	mov	a,r7
      0062D1 A3               [24]  663 	inc	dptr
      0062D2 F0               [24]  664 	movx	@dptr,a
                                    665 ;	uart.c:66: return i+1;
      0062D3 0B               [12]  666 	inc	r3
      0062D4 BB 00 01         [24]  667 	cjne	r3,#0x00,00118$
      0062D7 0C               [12]  668 	inc	r4
      0062D8                        669 00118$:
      0062D8 8B 82            [24]  670 	mov	dpl,r3
      0062DA 8C 83            [24]  671 	mov	dph,r4
                                    672 ;	uart.c:67: }
      0062DC 22               [24]  673 	ret
                                    674 ;------------------------------------------------------------
                                    675 ;Allocation info for local variables in function 'echo'
                                    676 ;------------------------------------------------------------
                                    677 ;ch                        Allocated with name '_echo_ch_65536_54'
                                    678 ;------------------------------------------------------------
                                    679 ;	uart.c:78: int echo(void)
                                    680 ;	-----------------------------------------
                                    681 ;	 function echo
                                    682 ;	-----------------------------------------
      0062DD                        683 _echo:
                                    684 ;	uart.c:80: int ch =getchar();
      0062DD 12 62 59         [24]  685 	lcall	_getchar
                                    686 ;	uart.c:81: putchar(ch);
      0062E0 AE 82            [24]  687 	mov	r6,dpl
      0062E2 AF 83            [24]  688 	mov  r7,dph
      0062E4 C0 07            [24]  689 	push	ar7
      0062E6 C0 06            [24]  690 	push	ar6
      0062E8 12 62 3A         [24]  691 	lcall	_putchar
                                    692 ;	uart.c:82: putchar('\r');
      0062EB 90 00 0D         [24]  693 	mov	dptr,#0x000d
      0062EE 12 62 3A         [24]  694 	lcall	_putchar
                                    695 ;	uart.c:83: putchar('\n');
      0062F1 90 00 0A         [24]  696 	mov	dptr,#0x000a
      0062F4 12 62 3A         [24]  697 	lcall	_putchar
      0062F7 D0 06            [24]  698 	pop	ar6
      0062F9 D0 07            [24]  699 	pop	ar7
                                    700 ;	uart.c:84: return ch;
      0062FB 8E 82            [24]  701 	mov	dpl,r6
      0062FD 8F 83            [24]  702 	mov	dph,r7
                                    703 ;	uart.c:85: }
      0062FF 22               [24]  704 	ret
                                    705 	.area CSEG    (CODE)
                                    706 	.area CONST   (CODE)
                                    707 	.area XINIT   (CODE)
                                    708 	.area CABS    (ABS,CODE)
