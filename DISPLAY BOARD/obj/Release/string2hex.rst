                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module string2hex
                                      6 	.optsdcc -mmcs51 --model-large
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _getString
                                     12 	.globl _echo
                                     13 	.globl _printf_tiny
                                     14 	.globl _CY
                                     15 	.globl _AC
                                     16 	.globl _F0
                                     17 	.globl _RS1
                                     18 	.globl _RS0
                                     19 	.globl _OV
                                     20 	.globl _F1
                                     21 	.globl _P
                                     22 	.globl _PS
                                     23 	.globl _PT1
                                     24 	.globl _PX1
                                     25 	.globl _PT0
                                     26 	.globl _PX0
                                     27 	.globl _RD
                                     28 	.globl _WR
                                     29 	.globl _T1
                                     30 	.globl _T0
                                     31 	.globl _INT1
                                     32 	.globl _INT0
                                     33 	.globl _TXD
                                     34 	.globl _RXD
                                     35 	.globl _P3_7
                                     36 	.globl _P3_6
                                     37 	.globl _P3_5
                                     38 	.globl _P3_4
                                     39 	.globl _P3_3
                                     40 	.globl _P3_2
                                     41 	.globl _P3_1
                                     42 	.globl _P3_0
                                     43 	.globl _EA
                                     44 	.globl _ES
                                     45 	.globl _ET1
                                     46 	.globl _EX1
                                     47 	.globl _ET0
                                     48 	.globl _EX0
                                     49 	.globl _P2_7
                                     50 	.globl _P2_6
                                     51 	.globl _P2_5
                                     52 	.globl _P2_4
                                     53 	.globl _P2_3
                                     54 	.globl _P2_2
                                     55 	.globl _P2_1
                                     56 	.globl _P2_0
                                     57 	.globl _SM0
                                     58 	.globl _SM1
                                     59 	.globl _SM2
                                     60 	.globl _REN
                                     61 	.globl _TB8
                                     62 	.globl _RB8
                                     63 	.globl _TI
                                     64 	.globl _RI
                                     65 	.globl _P1_7
                                     66 	.globl _P1_6
                                     67 	.globl _P1_5
                                     68 	.globl _P1_4
                                     69 	.globl _P1_3
                                     70 	.globl _P1_2
                                     71 	.globl _P1_1
                                     72 	.globl _P1_0
                                     73 	.globl _TF1
                                     74 	.globl _TR1
                                     75 	.globl _TF0
                                     76 	.globl _TR0
                                     77 	.globl _IE1
                                     78 	.globl _IT1
                                     79 	.globl _IE0
                                     80 	.globl _IT0
                                     81 	.globl _P0_7
                                     82 	.globl _P0_6
                                     83 	.globl _P0_5
                                     84 	.globl _P0_4
                                     85 	.globl _P0_3
                                     86 	.globl _P0_2
                                     87 	.globl _P0_1
                                     88 	.globl _P0_0
                                     89 	.globl _TXD0
                                     90 	.globl _RXD0
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
                                    148 	.globl _B
                                    149 	.globl _ACC
                                    150 	.globl _PSW
                                    151 	.globl _IP
                                    152 	.globl _P3
                                    153 	.globl _IE
                                    154 	.globl _P2
                                    155 	.globl _SBUF
                                    156 	.globl _SCON
                                    157 	.globl _P1
                                    158 	.globl _TH1
                                    159 	.globl _TH0
                                    160 	.globl _TL1
                                    161 	.globl _TL0
                                    162 	.globl _TMOD
                                    163 	.globl _TCON
                                    164 	.globl _PCON
                                    165 	.globl _DPH
                                    166 	.globl _DPL
                                    167 	.globl _SP
                                    168 	.globl _P0
                                    169 	.globl _SBUF0
                                    170 	.globl _DP0L
                                    171 	.globl _DP0H
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
                                    223 	.globl _hexStringtoInt_PARM_2
                                    224 	.globl _hexCharToInt
                                    225 	.globl _hexStringtoInt
                                    226 	.globl _GetValue
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
      000008                        455 _hexStringtoInt_sloc0_1_0:
      000008                        456 	.ds 1
      000009                        457 _getString_sloc0_1_0:
      000009                        458 	.ds 3
                                    459 ;--------------------------------------------------------
                                    460 ; overlayable items in internal ram
                                    461 ;--------------------------------------------------------
                                    462 ;--------------------------------------------------------
                                    463 ; indirectly addressable internal ram data
                                    464 ;--------------------------------------------------------
                                    465 	.area ISEG    (DATA)
                                    466 ;--------------------------------------------------------
                                    467 ; absolute internal ram data
                                    468 ;--------------------------------------------------------
                                    469 	.area IABS    (ABS,DATA)
                                    470 	.area IABS    (ABS,DATA)
                                    471 ;--------------------------------------------------------
                                    472 ; bit data
                                    473 ;--------------------------------------------------------
                                    474 	.area BSEG    (BIT)
                                    475 ;--------------------------------------------------------
                                    476 ; paged external ram data
                                    477 ;--------------------------------------------------------
                                    478 	.area PSEG    (PAG,XDATA)
                                    479 ;--------------------------------------------------------
                                    480 ; external ram data
                                    481 ;--------------------------------------------------------
                                    482 	.area XSEG    (XDATA)
      00000B                        483 _hexCharToInt_c_65536_49:
      00000B                        484 	.ds 1
      00000C                        485 _hexStringtoInt_PARM_2:
      00000C                        486 	.ds 1
      00000D                        487 _hexStringtoInt_hexString_65536_54:
      00000D                        488 	.ds 3
      000010                        489 _hexStringtoInt_result_65536_55:
      000010                        490 	.ds 1
      000011                        491 _getString_dataString_65536_58:
      000011                        492 	.ds 3
      000014                        493 _getString_i_65536_59:
      000014                        494 	.ds 2
      000016                        495 _GetValue_dataInt_65536_64:
      000016                        496 	.ds 3
      000019                        497 _GetValue_dataString_65536_65:
      000019                        498 	.ds 2
                                    499 ;--------------------------------------------------------
                                    500 ; absolute external ram data
                                    501 ;--------------------------------------------------------
                                    502 	.area XABS    (ABS,XDATA)
                                    503 ;--------------------------------------------------------
                                    504 ; external initialized ram data
                                    505 ;--------------------------------------------------------
                                    506 	.area XISEG   (XDATA)
                                    507 	.area HOME    (CODE)
                                    508 	.area GSINIT0 (CODE)
                                    509 	.area GSINIT1 (CODE)
                                    510 	.area GSINIT2 (CODE)
                                    511 	.area GSINIT3 (CODE)
                                    512 	.area GSINIT4 (CODE)
                                    513 	.area GSINIT5 (CODE)
                                    514 	.area GSINIT  (CODE)
                                    515 	.area GSFINAL (CODE)
                                    516 	.area CSEG    (CODE)
                                    517 ;--------------------------------------------------------
                                    518 ; global & static initialisations
                                    519 ;--------------------------------------------------------
                                    520 	.area HOME    (CODE)
                                    521 	.area GSINIT  (CODE)
                                    522 	.area GSFINAL (CODE)
                                    523 	.area GSINIT  (CODE)
                                    524 ;--------------------------------------------------------
                                    525 ; Home
                                    526 ;--------------------------------------------------------
                                    527 	.area HOME    (CODE)
                                    528 	.area HOME    (CODE)
                                    529 ;--------------------------------------------------------
                                    530 ; code
                                    531 ;--------------------------------------------------------
                                    532 	.area CSEG    (CODE)
                                    533 ;------------------------------------------------------------
                                    534 ;Allocation info for local variables in function 'hexCharToInt'
                                    535 ;------------------------------------------------------------
                                    536 ;c                         Allocated with name '_hexCharToInt_c_65536_49'
                                    537 ;------------------------------------------------------------
                                    538 ;	string2hex.c:13: uint8_t hexCharToInt(char c)
                                    539 ;	-----------------------------------------
                                    540 ;	 function hexCharToInt
                                    541 ;	-----------------------------------------
      006289                        542 _hexCharToInt:
                           000007   543 	ar7 = 0x07
                           000006   544 	ar6 = 0x06
                           000005   545 	ar5 = 0x05
                           000004   546 	ar4 = 0x04
                           000003   547 	ar3 = 0x03
                           000002   548 	ar2 = 0x02
                           000001   549 	ar1 = 0x01
                           000000   550 	ar0 = 0x00
      006289 E5 82            [12]  551 	mov	a,dpl
      00628B 90 00 0B         [24]  552 	mov	dptr,#_hexCharToInt_c_65536_49
      00628E F0               [24]  553 	movx	@dptr,a
                                    554 ;	string2hex.c:15: if (c >= '0' && c <= '9') {
      00628F E0               [24]  555 	movx	a,@dptr
      006290 FF               [12]  556 	mov	r7,a
      006291 BF 30 00         [24]  557 	cjne	r7,#0x30,00139$
      006294                        558 00139$:
      006294 40 0B            [24]  559 	jc	00110$
      006296 EF               [12]  560 	mov	a,r7
      006297 24 C6            [12]  561 	add	a,#0xff - 0x39
      006299 40 06            [24]  562 	jc	00110$
                                    563 ;	string2hex.c:16: return (c - '0');
      00629B EF               [12]  564 	mov	a,r7
      00629C 24 D0            [12]  565 	add	a,#0xd0
      00629E F5 82            [12]  566 	mov	dpl,a
      0062A0 22               [24]  567 	ret
      0062A1                        568 00110$:
                                    569 ;	string2hex.c:17: } else if (c >= 'a' && c <= 'f') {
      0062A1 90 00 0B         [24]  570 	mov	dptr,#_hexCharToInt_c_65536_49
      0062A4 E0               [24]  571 	movx	a,@dptr
      0062A5 FF               [12]  572 	mov	r7,a
      0062A6 BF 61 00         [24]  573 	cjne	r7,#0x61,00142$
      0062A9                        574 00142$:
      0062A9 40 0B            [24]  575 	jc	00106$
      0062AB EF               [12]  576 	mov	a,r7
      0062AC 24 99            [12]  577 	add	a,#0xff - 0x66
      0062AE 40 06            [24]  578 	jc	00106$
                                    579 ;	string2hex.c:18: return (c - 'a' + 10);
      0062B0 74 A9            [12]  580 	mov	a,#0xa9
      0062B2 2F               [12]  581 	add	a,r7
      0062B3 F5 82            [12]  582 	mov	dpl,a
      0062B5 22               [24]  583 	ret
      0062B6                        584 00106$:
                                    585 ;	string2hex.c:19: } else if (c >= 'A' && c <= 'F') {
      0062B6 90 00 0B         [24]  586 	mov	dptr,#_hexCharToInt_c_65536_49
      0062B9 E0               [24]  587 	movx	a,@dptr
      0062BA FF               [12]  588 	mov	r7,a
      0062BB BF 41 00         [24]  589 	cjne	r7,#0x41,00145$
      0062BE                        590 00145$:
      0062BE 40 0B            [24]  591 	jc	00102$
      0062C0 EF               [12]  592 	mov	a,r7
      0062C1 24 B9            [12]  593 	add	a,#0xff - 0x46
      0062C3 40 06            [24]  594 	jc	00102$
                                    595 ;	string2hex.c:20: return (c - 'A' + 10);
      0062C5 74 C9            [12]  596 	mov	a,#0xc9
      0062C7 2F               [12]  597 	add	a,r7
      0062C8 F5 82            [12]  598 	mov	dpl,a
      0062CA 22               [24]  599 	ret
      0062CB                        600 00102$:
                                    601 ;	string2hex.c:23: return -1;
      0062CB 75 82 FF         [24]  602 	mov	dpl,#0xff
                                    603 ;	string2hex.c:24: }
      0062CE 22               [24]  604 	ret
                                    605 ;------------------------------------------------------------
                                    606 ;Allocation info for local variables in function 'hexStringtoInt'
                                    607 ;------------------------------------------------------------
                                    608 ;sloc0                     Allocated with name '_hexStringtoInt_sloc0_1_0'
                                    609 ;length                    Allocated with name '_hexStringtoInt_PARM_2'
                                    610 ;hexString                 Allocated with name '_hexStringtoInt_hexString_65536_54'
                                    611 ;result                    Allocated with name '_hexStringtoInt_result_65536_55'
                                    612 ;i                         Allocated with name '_hexStringtoInt_i_65536_55'
                                    613 ;hexValue                  Allocated with name '_hexStringtoInt_hexValue_131072_56'
                                    614 ;------------------------------------------------------------
                                    615 ;	string2hex.c:26: uint8_t hexStringtoInt(char *hexString , uint8_t length)
                                    616 ;	-----------------------------------------
                                    617 ;	 function hexStringtoInt
                                    618 ;	-----------------------------------------
      0062CF                        619 _hexStringtoInt:
      0062CF AF F0            [24]  620 	mov	r7,b
      0062D1 AE 83            [24]  621 	mov	r6,dph
      0062D3 E5 82            [12]  622 	mov	a,dpl
      0062D5 90 00 0D         [24]  623 	mov	dptr,#_hexStringtoInt_hexString_65536_54
      0062D8 F0               [24]  624 	movx	@dptr,a
      0062D9 EE               [12]  625 	mov	a,r6
      0062DA A3               [24]  626 	inc	dptr
      0062DB F0               [24]  627 	movx	@dptr,a
      0062DC EF               [12]  628 	mov	a,r7
      0062DD A3               [24]  629 	inc	dptr
      0062DE F0               [24]  630 	movx	@dptr,a
                                    631 ;	string2hex.c:29: uint8_t result =0;
      0062DF 90 00 10         [24]  632 	mov	dptr,#_hexStringtoInt_result_65536_55
      0062E2 E4               [12]  633 	clr	a
      0062E3 F0               [24]  634 	movx	@dptr,a
                                    635 ;	string2hex.c:31: while (hexString[i] != '\0' && i<length) {
      0062E4 90 00 0C         [24]  636 	mov	dptr,#_hexStringtoInt_PARM_2
      0062E7 E0               [24]  637 	movx	a,@dptr
      0062E8 FF               [12]  638 	mov	r7,a
      0062E9 90 00 0D         [24]  639 	mov	dptr,#_hexStringtoInt_hexString_65536_54
      0062EC E0               [24]  640 	movx	a,@dptr
      0062ED FC               [12]  641 	mov	r4,a
      0062EE A3               [24]  642 	inc	dptr
      0062EF E0               [24]  643 	movx	a,@dptr
      0062F0 FD               [12]  644 	mov	r5,a
      0062F1 A3               [24]  645 	inc	dptr
      0062F2 E0               [24]  646 	movx	a,@dptr
      0062F3 FE               [12]  647 	mov	r6,a
      0062F4 7A 00            [12]  648 	mov	r2,#0x00
      0062F6 7B 00            [12]  649 	mov	r3,#0x00
      0062F8                        650 00104$:
      0062F8 C0 07            [24]  651 	push	ar7
      0062FA EA               [12]  652 	mov	a,r2
      0062FB 2C               [12]  653 	add	a,r4
      0062FC F8               [12]  654 	mov	r0,a
      0062FD EB               [12]  655 	mov	a,r3
      0062FE 3D               [12]  656 	addc	a,r5
      0062FF F9               [12]  657 	mov	r1,a
      006300 8E 07            [24]  658 	mov	ar7,r6
      006302 88 82            [24]  659 	mov	dpl,r0
      006304 89 83            [24]  660 	mov	dph,r1
      006306 8F F0            [24]  661 	mov	b,r7
      006308 12 66 C6         [24]  662 	lcall	__gptrget
      00630B F5 08            [12]  663 	mov	_hexStringtoInt_sloc0_1_0,a
      00630D D0 07            [24]  664 	pop	ar7
      00630F E5 08            [12]  665 	mov	a,_hexStringtoInt_sloc0_1_0
      006311 60 55            [24]  666 	jz	00106$
      006313 8F 00            [24]  667 	mov	ar0,r7
      006315 79 00            [12]  668 	mov	r1,#0x00
      006317 C3               [12]  669 	clr	c
      006318 EA               [12]  670 	mov	a,r2
      006319 98               [12]  671 	subb	a,r0
      00631A EB               [12]  672 	mov	a,r3
      00631B 64 80            [12]  673 	xrl	a,#0x80
      00631D 89 F0            [24]  674 	mov	b,r1
      00631F 63 F0 80         [24]  675 	xrl	b,#0x80
      006322 95 F0            [12]  676 	subb	a,b
      006324 50 42            [24]  677 	jnc	00106$
                                    678 ;	string2hex.c:32: int hexValue = hexCharToInt(hexString[i]);
      006326 85 08 82         [24]  679 	mov	dpl,_hexStringtoInt_sloc0_1_0
      006329 C0 07            [24]  680 	push	ar7
      00632B C0 06            [24]  681 	push	ar6
      00632D C0 05            [24]  682 	push	ar5
      00632F C0 04            [24]  683 	push	ar4
      006331 C0 03            [24]  684 	push	ar3
      006333 C0 02            [24]  685 	push	ar2
      006335 12 62 89         [24]  686 	lcall	_hexCharToInt
      006338 A9 82            [24]  687 	mov	r1,dpl
      00633A D0 02            [24]  688 	pop	ar2
      00633C D0 03            [24]  689 	pop	ar3
      00633E D0 04            [24]  690 	pop	ar4
      006340 D0 05            [24]  691 	pop	ar5
      006342 D0 06            [24]  692 	pop	ar6
      006344 D0 07            [24]  693 	pop	ar7
      006346 89 00            [24]  694 	mov	ar0,r1
      006348 79 00            [12]  695 	mov	r1,#0x00
                                    696 ;	string2hex.c:33: if (hexValue == -1) {
      00634A B8 FF 07         [24]  697 	cjne	r0,#0xff,00102$
      00634D B9 FF 04         [24]  698 	cjne	r1,#0xff,00102$
                                    699 ;	string2hex.c:35: return 0; // Return 0 for invalid input
      006350 75 82 00         [24]  700 	mov	dpl,#0x00
      006353 22               [24]  701 	ret
      006354                        702 00102$:
                                    703 ;	string2hex.c:37: result = (result << 4) | hexValue;
      006354 C0 07            [24]  704 	push	ar7
      006356 90 00 10         [24]  705 	mov	dptr,#_hexStringtoInt_result_65536_55
      006359 E0               [24]  706 	movx	a,@dptr
      00635A C4               [12]  707 	swap	a
      00635B 54 F0            [12]  708 	anl	a,#0xf0
      00635D 48               [12]  709 	orl	a,r0
      00635E F0               [24]  710 	movx	@dptr,a
                                    711 ;	string2hex.c:38: i++;
      00635F 0A               [12]  712 	inc	r2
      006360 BA 00 01         [24]  713 	cjne	r2,#0x00,00129$
      006363 0B               [12]  714 	inc	r3
      006364                        715 00129$:
      006364 D0 07            [24]  716 	pop	ar7
      006366 80 90            [24]  717 	sjmp	00104$
      006368                        718 00106$:
                                    719 ;	string2hex.c:40: return result;
      006368 90 00 10         [24]  720 	mov	dptr,#_hexStringtoInt_result_65536_55
      00636B E0               [24]  721 	movx	a,@dptr
                                    722 ;	string2hex.c:41: }
      00636C F5 82            [12]  723 	mov	dpl,a
      00636E 22               [24]  724 	ret
                                    725 ;------------------------------------------------------------
                                    726 ;Allocation info for local variables in function 'getString'
                                    727 ;------------------------------------------------------------
                                    728 ;sloc0                     Allocated with name '_getString_sloc0_1_0'
                                    729 ;dataString                Allocated with name '_getString_dataString_65536_58'
                                    730 ;i                         Allocated with name '_getString_i_65536_59'
                                    731 ;temp                      Allocated with name '_getString_temp_65536_59'
                                    732 ;------------------------------------------------------------
                                    733 ;	string2hex.c:43: int getString(char* dataString)
                                    734 ;	-----------------------------------------
                                    735 ;	 function getString
                                    736 ;	-----------------------------------------
      00636F                        737 _getString:
      00636F AF F0            [24]  738 	mov	r7,b
      006371 AE 83            [24]  739 	mov	r6,dph
      006373 E5 82            [12]  740 	mov	a,dpl
      006375 90 00 11         [24]  741 	mov	dptr,#_getString_dataString_65536_58
      006378 F0               [24]  742 	movx	@dptr,a
      006379 EE               [12]  743 	mov	a,r6
      00637A A3               [24]  744 	inc	dptr
      00637B F0               [24]  745 	movx	@dptr,a
      00637C EF               [12]  746 	mov	a,r7
      00637D A3               [24]  747 	inc	dptr
      00637E F0               [24]  748 	movx	@dptr,a
                                    749 ;	string2hex.c:47: for(i=0; i<2; i++)
      00637F 90 00 14         [24]  750 	mov	dptr,#_getString_i_65536_59
      006382 E4               [12]  751 	clr	a
      006383 F0               [24]  752 	movx	@dptr,a
      006384 A3               [24]  753 	inc	dptr
      006385 F0               [24]  754 	movx	@dptr,a
      006386 90 00 11         [24]  755 	mov	dptr,#_getString_dataString_65536_58
      006389 E0               [24]  756 	movx	a,@dptr
      00638A F5 09            [12]  757 	mov	_getString_sloc0_1_0,a
      00638C A3               [24]  758 	inc	dptr
      00638D E0               [24]  759 	movx	a,@dptr
      00638E F5 0A            [12]  760 	mov	(_getString_sloc0_1_0 + 1),a
      006390 A3               [24]  761 	inc	dptr
      006391 E0               [24]  762 	movx	a,@dptr
      006392 F5 0B            [12]  763 	mov	(_getString_sloc0_1_0 + 2),a
      006394 7B 00            [12]  764 	mov	r3,#0x00
      006396 7C 00            [12]  765 	mov	r4,#0x00
      006398                        766 00112$:
                                    767 ;	string2hex.c:49: temp = echo();
      006398 C0 04            [24]  768 	push	ar4
      00639A C0 03            [24]  769 	push	ar3
      00639C 12 65 28         [24]  770 	lcall	_echo
      00639F A9 82            [24]  771 	mov	r1,dpl
      0063A1 AA 83            [24]  772 	mov	r2,dph
      0063A3 D0 03            [24]  773 	pop	ar3
      0063A5 D0 04            [24]  774 	pop	ar4
                                    775 ;	string2hex.c:51: if(temp ==ENTER)
      0063A7 B9 0D 02         [24]  776 	cjne	r1,#0x0d,00136$
      0063AA 80 62            [24]  777 	sjmp	00111$
      0063AC                        778 00136$:
                                    779 ;	string2hex.c:53: if( (temp>='0' && temp <='9') || (temp>='A' && temp <='F') || (temp>='a' && temp <='f'))
      0063AC B9 30 00         [24]  780 	cjne	r1,#0x30,00137$
      0063AF                        781 00137$:
      0063AF 40 05            [24]  782 	jc	00108$
      0063B1 E9               [12]  783 	mov	a,r1
      0063B2 24 C6            [12]  784 	add	a,#0xff - 0x39
      0063B4 50 14            [24]  785 	jnc	00103$
      0063B6                        786 00108$:
      0063B6 B9 41 00         [24]  787 	cjne	r1,#0x41,00140$
      0063B9                        788 00140$:
      0063B9 40 05            [24]  789 	jc	00110$
      0063BB E9               [12]  790 	mov	a,r1
      0063BC 24 B9            [12]  791 	add	a,#0xff - 0x46
      0063BE 50 0A            [24]  792 	jnc	00103$
      0063C0                        793 00110$:
      0063C0 B9 61 00         [24]  794 	cjne	r1,#0x61,00143$
      0063C3                        795 00143$:
      0063C3 40 1B            [24]  796 	jc	00104$
      0063C5 E9               [12]  797 	mov	a,r1
      0063C6 24 99            [12]  798 	add	a,#0xff - 0x66
      0063C8 40 16            [24]  799 	jc	00104$
      0063CA                        800 00103$:
                                    801 ;	string2hex.c:55: *(dataString + i)= temp;
      0063CA EB               [12]  802 	mov	a,r3
      0063CB 25 09            [12]  803 	add	a,_getString_sloc0_1_0
      0063CD F8               [12]  804 	mov	r0,a
      0063CE EC               [12]  805 	mov	a,r4
      0063CF 35 0A            [12]  806 	addc	a,(_getString_sloc0_1_0 + 1)
      0063D1 FA               [12]  807 	mov	r2,a
      0063D2 AF 0B            [24]  808 	mov	r7,(_getString_sloc0_1_0 + 2)
      0063D4 88 82            [24]  809 	mov	dpl,r0
      0063D6 8A 83            [24]  810 	mov	dph,r2
      0063D8 8F F0            [24]  811 	mov	b,r7
      0063DA E9               [12]  812 	mov	a,r1
      0063DB 12 65 A2         [24]  813 	lcall	__gptrput
      0063DE 80 13            [24]  814 	sjmp	00113$
      0063E0                        815 00104$:
                                    816 ;	string2hex.c:59: printf_tiny("Enter valid value between 0x00 and 0xFF\n\r");
      0063E0 74 FA            [12]  817 	mov	a,#___str_0
      0063E2 C0 E0            [24]  818 	push	acc
      0063E4 74 66            [12]  819 	mov	a,#(___str_0 >> 8)
      0063E6 C0 E0            [24]  820 	push	acc
      0063E8 12 65 BD         [24]  821 	lcall	_printf_tiny
      0063EB 15 81            [12]  822 	dec	sp
      0063ED 15 81            [12]  823 	dec	sp
                                    824 ;	string2hex.c:60: return -1;
      0063EF 90 FF FF         [24]  825 	mov	dptr,#0xffff
      0063F2 22               [24]  826 	ret
      0063F3                        827 00113$:
                                    828 ;	string2hex.c:47: for(i=0; i<2; i++)
      0063F3 0B               [12]  829 	inc	r3
      0063F4 BB 00 01         [24]  830 	cjne	r3,#0x00,00146$
      0063F7 0C               [12]  831 	inc	r4
      0063F8                        832 00146$:
      0063F8 90 00 14         [24]  833 	mov	dptr,#_getString_i_65536_59
      0063FB EB               [12]  834 	mov	a,r3
      0063FC F0               [24]  835 	movx	@dptr,a
      0063FD EC               [12]  836 	mov	a,r4
      0063FE A3               [24]  837 	inc	dptr
      0063FF F0               [24]  838 	movx	@dptr,a
      006400 C3               [12]  839 	clr	c
      006401 EB               [12]  840 	mov	a,r3
      006402 94 02            [12]  841 	subb	a,#0x02
      006404 EC               [12]  842 	mov	a,r4
      006405 64 80            [12]  843 	xrl	a,#0x80
      006407 94 80            [12]  844 	subb	a,#0x80
      006409 50 03            [24]  845 	jnc	00147$
      00640B 02 63 98         [24]  846 	ljmp	00112$
      00640E                        847 00147$:
      00640E                        848 00111$:
                                    849 ;	string2hex.c:63: printf_tiny("\r\n");
      00640E 74 24            [12]  850 	mov	a,#___str_1
      006410 C0 E0            [24]  851 	push	acc
      006412 74 67            [12]  852 	mov	a,#(___str_1 >> 8)
      006414 C0 E0            [24]  853 	push	acc
      006416 12 65 BD         [24]  854 	lcall	_printf_tiny
      006419 15 81            [12]  855 	dec	sp
      00641B 15 81            [12]  856 	dec	sp
                                    857 ;	string2hex.c:64: return i;
      00641D 90 00 14         [24]  858 	mov	dptr,#_getString_i_65536_59
      006420 E0               [24]  859 	movx	a,@dptr
      006421 FE               [12]  860 	mov	r6,a
      006422 A3               [24]  861 	inc	dptr
      006423 E0               [24]  862 	movx	a,@dptr
                                    863 ;	string2hex.c:65: }
      006424 8E 82            [24]  864 	mov	dpl,r6
      006426 F5 83            [12]  865 	mov	dph,a
      006428 22               [24]  866 	ret
                                    867 ;------------------------------------------------------------
                                    868 ;Allocation info for local variables in function 'GetValue'
                                    869 ;------------------------------------------------------------
                                    870 ;dataInt                   Allocated with name '_GetValue_dataInt_65536_64'
                                    871 ;dataString                Allocated with name '_GetValue_dataString_65536_65'
                                    872 ;len                       Allocated with name '_GetValue_len_65536_65'
                                    873 ;------------------------------------------------------------
                                    874 ;	string2hex.c:67: bool GetValue(uint8_t* dataInt)
                                    875 ;	-----------------------------------------
                                    876 ;	 function GetValue
                                    877 ;	-----------------------------------------
      006429                        878 _GetValue:
      006429 AF F0            [24]  879 	mov	r7,b
      00642B AE 83            [24]  880 	mov	r6,dph
      00642D E5 82            [12]  881 	mov	a,dpl
      00642F 90 00 16         [24]  882 	mov	dptr,#_GetValue_dataInt_65536_64
      006432 F0               [24]  883 	movx	@dptr,a
      006433 EE               [12]  884 	mov	a,r6
      006434 A3               [24]  885 	inc	dptr
      006435 F0               [24]  886 	movx	@dptr,a
      006436 EF               [12]  887 	mov	a,r7
      006437 A3               [24]  888 	inc	dptr
      006438 F0               [24]  889 	movx	@dptr,a
                                    890 ;	string2hex.c:71: len = getString(dataString);
      006439 90 00 19         [24]  891 	mov	dptr,#_GetValue_dataString_65536_65
      00643C 75 F0 00         [24]  892 	mov	b,#0x00
      00643F 12 63 6F         [24]  893 	lcall	_getString
      006442 AE 82            [24]  894 	mov	r6,dpl
      006444 AF 83            [24]  895 	mov	r7,dph
                                    896 ;	string2hex.c:72: if(len == -1)
      006446 BE FF 07         [24]  897 	cjne	r6,#0xff,00102$
      006449 BF FF 04         [24]  898 	cjne	r7,#0xff,00102$
                                    899 ;	string2hex.c:73: return 0;
      00644C 75 82 00         [24]  900 	mov	dpl,#0x00
      00644F 22               [24]  901 	ret
      006450                        902 00102$:
                                    903 ;	string2hex.c:74: *dataInt= hexStringtoInt(dataString, len);
      006450 90 00 16         [24]  904 	mov	dptr,#_GetValue_dataInt_65536_64
      006453 E0               [24]  905 	movx	a,@dptr
      006454 FB               [12]  906 	mov	r3,a
      006455 A3               [24]  907 	inc	dptr
      006456 E0               [24]  908 	movx	a,@dptr
      006457 FC               [12]  909 	mov	r4,a
      006458 A3               [24]  910 	inc	dptr
      006459 E0               [24]  911 	movx	a,@dptr
      00645A FD               [12]  912 	mov	r5,a
      00645B 90 00 0C         [24]  913 	mov	dptr,#_hexStringtoInt_PARM_2
      00645E EE               [12]  914 	mov	a,r6
      00645F F0               [24]  915 	movx	@dptr,a
      006460 90 00 19         [24]  916 	mov	dptr,#_GetValue_dataString_65536_65
      006463 75 F0 00         [24]  917 	mov	b,#0x00
      006466 C0 05            [24]  918 	push	ar5
      006468 C0 04            [24]  919 	push	ar4
      00646A C0 03            [24]  920 	push	ar3
      00646C 12 62 CF         [24]  921 	lcall	_hexStringtoInt
      00646F AF 82            [24]  922 	mov	r7,dpl
      006471 D0 03            [24]  923 	pop	ar3
      006473 D0 04            [24]  924 	pop	ar4
      006475 D0 05            [24]  925 	pop	ar5
      006477 8B 82            [24]  926 	mov	dpl,r3
      006479 8C 83            [24]  927 	mov	dph,r4
      00647B 8D F0            [24]  928 	mov	b,r5
      00647D EF               [12]  929 	mov	a,r7
      00647E 12 65 A2         [24]  930 	lcall	__gptrput
                                    931 ;	string2hex.c:75: return 1;
      006481 75 82 01         [24]  932 	mov	dpl,#0x01
                                    933 ;	string2hex.c:77: }
      006484 22               [24]  934 	ret
                                    935 	.area CSEG    (CODE)
                                    936 	.area CONST   (CODE)
                                    937 	.area CONST   (CODE)
      0066FA                        938 ___str_0:
      0066FA 45 6E 74 65 72 20 76   939 	.ascii "Enter valid value between 0x00 and 0xFF"
             61 6C 69 64 20 76 61
             6C 75 65 20 62 65 74
             77 65 65 6E 20 30 78
             30 30 20 61 6E 64 20
             30 78 46 46
      006721 0A                     940 	.db 0x0a
      006722 0D                     941 	.db 0x0d
      006723 00                     942 	.db 0x00
                                    943 	.area CSEG    (CODE)
                                    944 	.area CONST   (CODE)
      006724                        945 ___str_1:
      006724 0D                     946 	.db 0x0d
      006725 0A                     947 	.db 0x0a
      006726 00                     948 	.db 0x00
                                    949 	.area CSEG    (CODE)
                                    950 	.area XINIT   (CODE)
                                    951 	.area CABS    (ABS,CODE)
