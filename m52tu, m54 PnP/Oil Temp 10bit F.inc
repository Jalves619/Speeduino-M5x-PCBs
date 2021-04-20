; Generated using EasyTherm4.exe
;
; M54/M52tu Oil Temp Sensor
;
; File generated for use with stock 2490 ohm resistor at R7
;
; Steinhart-Hart coefficients:  A= 1.438153E-03   B=2.475882E-04   C= 3.593371E-08
;
; Input Data     Temp. degC     Resistance
;		   -40		   81236
;		    20		    2691
;		   100		     148
;

THERMFACTOR:
            ;    ADC  Temp. degF
	DB	170T	;    0    Sensor Failure - use 170 degF as default
	DB	170T	;    1    170
	DB	170T	;    2    170
	DB	170T	;    3    170
	DB	170T	;    4    170
	DB	170T	;    5    170
	DB	170T	;    6    170
	DB	170T	;    7    170
	DB	170T	;    8    170
	DB	170T	;    9    170
	DB	347.88T	;    10    347.88
	DB	339.27T	;    11    339.27
	DB	331.55T	;    12    331.55
	DB	324.58T	;    13    324.58
	DB	318.22T	;    14    318.22
	DB	312.39T	;    15    312.39
	DB	307T	;    16    307
	DB	302.01T	;    17    302.01
	DB	297.35T	;    18    297.35
	DB	292.99T	;    19    292.99
	DB	288.9T	;    20    288.9
	DB	285.04T	;    21    285.04
	DB	281.4T	;    22    281.4
	DB	277.95T	;    23    277.95
	DB	274.67T	;    24    274.67
	DB	271.55T	;    25    271.55
	DB	268.57T	;    26    268.57
	DB	265.72T	;    27    265.72
	DB	263T	;    28    263
	DB	260.38T	;    29    260.38
	DB	257.88T	;    30    257.88
	DB	255.46T	;    31    255.46
	DB	253.14T	;    32    253.14
	DB	250.9T	;    33    250.9
	DB	248.74T	;    34    248.74
	DB	246.65T	;    35    246.65
	DB	244.63T	;    36    244.63
	DB	242.67T	;    37    242.67
	DB	240.78T	;    38    240.78
	DB	238.94T	;    39    238.94
	DB	237.15T	;    40    237.15
	DB	235.42T	;    41    235.42
	DB	233.73T	;    42    233.73
	DB	232.09T	;    43    232.09
	DB	230.49T	;    44    230.49
	DB	228.94T	;    45    228.94
	DB	227.42T	;    46    227.42
	DB	225.94T	;    47    225.94
	DB	224.5T	;    48    224.5
	DB	223.09T	;    49    223.09
	DB	221.72T	;    50    221.72
	DB	220.37T	;    51    220.37
	DB	219.05T	;    52    219.05
	DB	217.77T	;    53    217.77
	DB	216.51T	;    54    216.51
	DB	215.27T	;    55    215.27
	DB	214.07T	;    56    214.07
	DB	212.88T	;    57    212.88
	DB	211.72T	;    58    211.72
	DB	210.59T	;    59    210.59
	DB	209.47T	;    60    209.47
	DB	208.37T	;    61    208.37
	DB	207.3T	;    62    207.3
	DB	206.24T	;    63    206.24
	DB	205.21T	;    64    205.21
	DB	204.19T	;    65    204.19
	DB	203.18T	;    66    203.18
	DB	202.2T	;    67    202.2
	DB	201.23T	;    68    201.23
	DB	200.28T	;    69    200.28
	DB	199.34T	;    70    199.34
	DB	198.42T	;    71    198.42
	DB	197.51T	;    72    197.51
	DB	196.62T	;    73    196.62
	DB	195.74T	;    74    195.74
	DB	194.87T	;    75    194.87
	DB	194.02T	;    76    194.02
	DB	193.18T	;    77    193.18
	DB	192.35T	;    78    192.35
	DB	191.53T	;    79    191.53
	DB	190.72T	;    80    190.72
	DB	189.93T	;    81    189.93
	DB	189.14T	;    82    189.14
	DB	188.37T	;    83    188.37
	DB	187.6T	;    84    187.6
	DB	186.85T	;    85    186.85
	DB	186.1T	;    86    186.1
	DB	185.37T	;    87    185.37
	DB	184.64T	;    88    184.64
	DB	183.93T	;    89    183.93
	DB	183.22T	;    90    183.22
	DB	182.52T	;    91    182.52
	DB	181.83T	;    92    181.83
	DB	181.15T	;    93    181.15
	DB	180.47T	;    94    180.47
	DB	179.8T	;    95    179.8
	DB	179.14T	;    96    179.14
	DB	178.49T	;    97    178.49
	DB	177.85T	;    98    177.85
	DB	177.21T	;    99    177.21
	DB	176.58T	;    100    176.58
	DB	175.96T	;    101    175.96
	DB	175.34T	;    102    175.34
	DB	174.73T	;    103    174.73
	DB	174.12T	;    104    174.12
	DB	173.53T	;    105    173.53
	DB	172.93T	;    106    172.93
	DB	172.35T	;    107    172.35
	DB	171.77T	;    108    171.77
	DB	171.19T	;    109    171.19
	DB	170.62T	;    110    170.62
	DB	170.06T	;    111    170.06
	DB	169.5T	;    112    169.5
	DB	168.95T	;    113    168.95
	DB	168.4T	;    114    168.4
	DB	167.86T	;    115    167.86
	DB	167.32T	;    116    167.32
	DB	166.79T	;    117    166.79
	DB	166.26T	;    118    166.26
	DB	165.74T	;    119    165.74
	DB	165.22T	;    120    165.22
	DB	164.71T	;    121    164.71
	DB	164.2T	;    122    164.2
	DB	163.7T	;    123    163.7
	DB	163.2T	;    124    163.2
	DB	162.7T	;    125    162.7
	DB	162.21T	;    126    162.21
	DB	161.72T	;    127    161.72
	DB	161.24T	;    128    161.24
	DB	160.76T	;    129    160.76
	DB	160.28T	;    130    160.28
	DB	159.81T	;    131    159.81
	DB	159.34T	;    132    159.34
	DB	158.88T	;    133    158.88
	DB	158.41T	;    134    158.41
	DB	157.96T	;    135    157.96
	DB	157.5T	;    136    157.5
	DB	157.05T	;    137    157.05
	DB	156.6T	;    138    156.6
	DB	156.16T	;    139    156.16
	DB	155.72T	;    140    155.72
	DB	155.28T	;    141    155.28
	DB	154.85T	;    142    154.85
	DB	154.42T	;    143    154.42
	DB	153.99T	;    144    153.99
	DB	153.57T	;    145    153.57
	DB	153.14T	;    146    153.14
	DB	152.73T	;    147    152.73
	DB	152.31T	;    148    152.31
	DB	151.9T	;    149    151.9
	DB	151.49T	;    150    151.49
	DB	151.08T	;    151    151.08
	DB	150.67T	;    152    150.67
	DB	150.27T	;    153    150.27
	DB	149.87T	;    154    149.87
	DB	149.48T	;    155    149.48
	DB	149.08T	;    156    149.08
	DB	148.69T	;    157    148.69
	DB	148.3T	;    158    148.3
	DB	147.92T	;    159    147.92
	DB	147.53T	;    160    147.53
	DB	147.15T	;    161    147.15
	DB	146.77T	;    162    146.77
	DB	146.39T	;    163    146.39
	DB	146.02T	;    164    146.02
	DB	145.65T	;    165    145.65
	DB	145.28T	;    166    145.28
	DB	144.91T	;    167    144.91
	DB	144.54T	;    168    144.54
	DB	144.18T	;    169    144.18
	DB	143.82T	;    170    143.82
	DB	143.46T	;    171    143.46
	DB	143.1T	;    172    143.1
	DB	142.75T	;    173    142.75
	DB	142.4T	;    174    142.4
	DB	142.04T	;    175    142.04
	DB	141.7T	;    176    141.7
	DB	141.35T	;    177    141.35
	DB	141T	;    178    141
	DB	140.66T	;    179    140.66
	DB	140.32T	;    180    140.32
	DB	139.98T	;    181    139.98
	DB	139.64T	;    182    139.64
	DB	139.31T	;    183    139.31
	DB	138.97T	;    184    138.97
	DB	138.64T	;    185    138.64
	DB	138.31T	;    186    138.31
	DB	137.98T	;    187    137.98
	DB	137.65T	;    188    137.65
	DB	137.33T	;    189    137.33
	DB	137.01T	;    190    137.01
	DB	136.68T	;    191    136.68
	DB	136.36T	;    192    136.36
	DB	136.04T	;    193    136.04
	DB	135.73T	;    194    135.73
	DB	135.41T	;    195    135.41
	DB	135.1T	;    196    135.1
	DB	134.78T	;    197    134.78
	DB	134.47T	;    198    134.47
	DB	134.16T	;    199    134.16
	DB	133.86T	;    200    133.86
	DB	133.55T	;    201    133.55
	DB	133.24T	;    202    133.24
	DB	132.94T	;    203    132.94
	DB	132.64T	;    204    132.64
	DB	132.34T	;    205    132.34
	DB	132.04T	;    206    132.04
	DB	131.74T	;    207    131.74
	DB	131.44T	;    208    131.44
	DB	131.15T	;    209    131.15
	DB	130.86T	;    210    130.86
	DB	130.56T	;    211    130.56
	DB	130.27T	;    212    130.27
	DB	129.98T	;    213    129.98
	DB	129.69T	;    214    129.69
	DB	129.4T	;    215    129.4
	DB	129.12T	;    216    129.12
	DB	128.83T	;    217    128.83
	DB	128.55T	;    218    128.55
	DB	128.27T	;    219    128.27
	DB	127.99T	;    220    127.99
	DB	127.71T	;    221    127.71
	DB	127.43T	;    222    127.43
	DB	127.15T	;    223    127.15
	DB	126.87T	;    224    126.87
	DB	126.6T	;    225    126.6
	DB	126.32T	;    226    126.32
	DB	126.05T	;    227    126.05
	DB	125.78T	;    228    125.78
	DB	125.51T	;    229    125.51
	DB	125.24T	;    230    125.24
	DB	124.97T	;    231    124.97
	DB	124.7T	;    232    124.7
	DB	124.43T	;    233    124.43
	DB	124.17T	;    234    124.17
	DB	123.9T	;    235    123.9
	DB	123.64T	;    236    123.64
	DB	123.37T	;    237    123.37
	DB	123.11T	;    238    123.11
	DB	122.85T	;    239    122.85
	DB	122.59T	;    240    122.59
	DB	122.33T	;    241    122.33
	DB	122.08T	;    242    122.08
	DB	121.82T	;    243    121.82
	DB	121.56T	;    244    121.56
	DB	121.31T	;    245    121.31
	DB	121.05T	;    246    121.05
	DB	120.8T	;    247    120.8
	DB	120.55T	;    248    120.55
	DB	120.3T	;    249    120.3
	DB	120.05T	;    250    120.05
	DB	119.8T	;    251    119.8
	DB	119.55T	;    252    119.55
	DB	119.3T	;    253    119.3
	DB	119.05T	;    254    119.05
	DB	118.81T	;    255    118.81
	DB	118.56T	;    256    118.56
	DB	118.32T	;    257    118.32
	DB	118.07T	;    258    118.07
	DB	117.83T	;    259    117.83
	DB	117.59T	;    260    117.59
	DB	117.35T	;    261    117.35
	DB	117.11T	;    262    117.11
	DB	116.87T	;    263    116.87
	DB	116.63T	;    264    116.63
	DB	116.39T	;    265    116.39
	DB	116.16T	;    266    116.16
	DB	115.92T	;    267    115.92
	DB	115.68T	;    268    115.68
	DB	115.45T	;    269    115.45
	DB	115.21T	;    270    115.21
	DB	114.98T	;    271    114.98
	DB	114.75T	;    272    114.75
	DB	114.52T	;    273    114.52
	DB	114.28T	;    274    114.28
	DB	114.05T	;    275    114.05
	DB	113.82T	;    276    113.82
	DB	113.59T	;    277    113.59
	DB	113.37T	;    278    113.37
	DB	113.14T	;    279    113.14
	DB	112.91T	;    280    112.91
	DB	112.69T	;    281    112.69
	DB	112.46T	;    282    112.46
	DB	112.23T	;    283    112.23
	DB	112.01T	;    284    112.01
	DB	111.79T	;    285    111.79
	DB	111.56T	;    286    111.56
	DB	111.34T	;    287    111.34
	DB	111.12T	;    288    111.12
	DB	110.9T	;    289    110.9
	DB	110.68T	;    290    110.68
	DB	110.46T	;    291    110.46
	DB	110.24T	;    292    110.24
	DB	110.02T	;    293    110.02
	DB	109.8T	;    294    109.8
	DB	109.58T	;    295    109.58
	DB	109.37T	;    296    109.37
	DB	109.15T	;    297    109.15
	DB	108.94T	;    298    108.94
	DB	108.72T	;    299    108.72
	DB	108.51T	;    300    108.51
	DB	108.29T	;    301    108.29
	DB	108.08T	;    302    108.08
	DB	107.87T	;    303    107.87
	DB	107.65T	;    304    107.65
	DB	107.44T	;    305    107.44
	DB	107.23T	;    306    107.23
	DB	107.02T	;    307    107.02
	DB	106.81T	;    308    106.81
	DB	106.6T	;    309    106.6
	DB	106.39T	;    310    106.39
	DB	106.18T	;    311    106.18
	DB	105.97T	;    312    105.97
	DB	105.77T	;    313    105.77
	DB	105.56T	;    314    105.56
	DB	105.35T	;    315    105.35
	DB	105.15T	;    316    105.15
	DB	104.94T	;    317    104.94
	DB	104.74T	;    318    104.74
	DB	104.53T	;    319    104.53
	DB	104.33T	;    320    104.33
	DB	104.13T	;    321    104.13
	DB	103.92T	;    322    103.92
	DB	103.72T	;    323    103.72
	DB	103.52T	;    324    103.52
	DB	103.32T	;    325    103.32
	DB	103.12T	;    326    103.12
	DB	102.92T	;    327    102.92
	DB	102.72T	;    328    102.72
	DB	102.52T	;    329    102.52
	DB	102.32T	;    330    102.32
	DB	102.12T	;    331    102.12
	DB	101.92T	;    332    101.92
	DB	101.72T	;    333    101.72
	DB	101.52T	;    334    101.52
	DB	101.33T	;    335    101.33
	DB	101.13T	;    336    101.13
	DB	100.94T	;    337    100.94
	DB	100.74T	;    338    100.74
	DB	100.54T	;    339    100.54
	DB	100.35T	;    340    100.35
	DB	100.16T	;    341    100.16
	DB	99.96T	;    342    99.96
	DB	99.77T	;    343    99.77
	DB	99.57T	;    344    99.57
	DB	99.38T	;    345    99.38
	DB	99.19T	;    346    99.19
	DB	99T	;    347    99
	DB	98.81T	;    348    98.81
	DB	98.61T	;    349    98.61
	DB	98.42T	;    350    98.42
	DB	98.23T	;    351    98.23
	DB	98.04T	;    352    98.04
	DB	97.85T	;    353    97.85
	DB	97.67T	;    354    97.67
	DB	97.48T	;    355    97.48
	DB	97.29T	;    356    97.29
	DB	97.1T	;    357    97.1
	DB	96.91T	;    358    96.91
	DB	96.72T	;    359    96.72
	DB	96.54T	;    360    96.54
	DB	96.35T	;    361    96.35
	DB	96.16T	;    362    96.16
	DB	95.98T	;    363    95.98
	DB	95.79T	;    364    95.79
	DB	95.61T	;    365    95.61
	DB	95.42T	;    366    95.42
	DB	95.24T	;    367    95.24
	DB	95.05T	;    368    95.05
	DB	94.87T	;    369    94.87
	DB	94.69T	;    370    94.69
	DB	94.5T	;    371    94.5
	DB	94.32T	;    372    94.32
	DB	94.14T	;    373    94.14
	DB	93.96T	;    374    93.96
	DB	93.77T	;    375    93.77
	DB	93.59T	;    376    93.59
	DB	93.41T	;    377    93.41
	DB	93.23T	;    378    93.23
	DB	93.05T	;    379    93.05
	DB	92.87T	;    380    92.87
	DB	92.69T	;    381    92.69
	DB	92.51T	;    382    92.51
	DB	92.33T	;    383    92.33
	DB	92.15T	;    384    92.15
	DB	91.97T	;    385    91.97
	DB	91.79T	;    386    91.79
	DB	91.61T	;    387    91.61
	DB	91.44T	;    388    91.44
	DB	91.26T	;    389    91.26
	DB	91.08T	;    390    91.08
	DB	90.9T	;    391    90.9
	DB	90.73T	;    392    90.73
	DB	90.55T	;    393    90.55
	DB	90.37T	;    394    90.37
	DB	90.2T	;    395    90.2
	DB	90.02T	;    396    90.02
	DB	89.85T	;    397    89.85
	DB	89.67T	;    398    89.67
	DB	89.5T	;    399    89.5
	DB	89.32T	;    400    89.32
	DB	89.15T	;    401    89.15
	DB	88.97T	;    402    88.97
	DB	88.8T	;    403    88.8
	DB	88.63T	;    404    88.63
	DB	88.45T	;    405    88.45
	DB	88.28T	;    406    88.28
	DB	88.11T	;    407    88.11
	DB	87.94T	;    408    87.94
	DB	87.76T	;    409    87.76
	DB	87.59T	;    410    87.59
	DB	87.42T	;    411    87.42
	DB	87.25T	;    412    87.25
	DB	87.08T	;    413    87.08
	DB	86.9T	;    414    86.9
	DB	86.73T	;    415    86.73
	DB	86.56T	;    416    86.56
	DB	86.39T	;    417    86.39
	DB	86.22T	;    418    86.22
	DB	86.05T	;    419    86.05
	DB	85.88T	;    420    85.88
	DB	85.71T	;    421    85.71
	DB	85.54T	;    422    85.54
	DB	85.37T	;    423    85.37
	DB	85.21T	;    424    85.21
	DB	85.04T	;    425    85.04
	DB	84.87T	;    426    84.87
	DB	84.7T	;    427    84.7
	DB	84.53T	;    428    84.53
	DB	84.36T	;    429    84.36
	DB	84.2T	;    430    84.2
	DB	84.03T	;    431    84.03
	DB	83.86T	;    432    83.86
	DB	83.7T	;    433    83.7
	DB	83.53T	;    434    83.53
	DB	83.36T	;    435    83.36
	DB	83.2T	;    436    83.2
	DB	83.03T	;    437    83.03
	DB	82.86T	;    438    82.86
	DB	82.7T	;    439    82.7
	DB	82.53T	;    440    82.53
	DB	82.37T	;    441    82.37
	DB	82.2T	;    442    82.2
	DB	82.04T	;    443    82.04
	DB	81.87T	;    444    81.87
	DB	81.71T	;    445    81.71
	DB	81.54T	;    446    81.54
	DB	81.38T	;    447    81.38
	DB	81.21T	;    448    81.21
	DB	81.05T	;    449    81.05
	DB	80.89T	;    450    80.89
	DB	80.72T	;    451    80.72
	DB	80.56T	;    452    80.56
	DB	80.4T	;    453    80.4
	DB	80.23T	;    454    80.23
	DB	80.07T	;    455    80.07
	DB	79.91T	;    456    79.91
	DB	79.74T	;    457    79.74
	DB	79.58T	;    458    79.58
	DB	79.42T	;    459    79.42
	DB	79.26T	;    460    79.26
	DB	79.1T	;    461    79.1
	DB	78.93T	;    462    78.93
	DB	78.77T	;    463    78.77
	DB	78.61T	;    464    78.61
	DB	78.45T	;    465    78.45
	DB	78.29T	;    466    78.29
	DB	78.13T	;    467    78.13
	DB	77.97T	;    468    77.97
	DB	77.81T	;    469    77.81
	DB	77.65T	;    470    77.65
	DB	77.48T	;    471    77.48
	DB	77.32T	;    472    77.32
	DB	77.16T	;    473    77.16
	DB	77T	;    474    77
	DB	76.84T	;    475    76.84
	DB	76.68T	;    476    76.68
	DB	76.52T	;    477    76.52
	DB	76.37T	;    478    76.37
	DB	76.21T	;    479    76.21
	DB	76.05T	;    480    76.05
	DB	75.89T	;    481    75.89
	DB	75.73T	;    482    75.73
	DB	75.57T	;    483    75.57
	DB	75.41T	;    484    75.41
	DB	75.25T	;    485    75.25
	DB	75.09T	;    486    75.09
	DB	74.94T	;    487    74.94
	DB	74.78T	;    488    74.78
	DB	74.62T	;    489    74.62
	DB	74.46T	;    490    74.46
	DB	74.3T	;    491    74.3
	DB	74.15T	;    492    74.15
	DB	73.99T	;    493    73.99
	DB	73.83T	;    494    73.83
	DB	73.67T	;    495    73.67
	DB	73.52T	;    496    73.52
	DB	73.36T	;    497    73.36
	DB	73.2T	;    498    73.2
	DB	73.04T	;    499    73.04
	DB	72.89T	;    500    72.89
	DB	72.73T	;    501    72.73
	DB	72.57T	;    502    72.57
	DB	72.42T	;    503    72.42
	DB	72.26T	;    504    72.26
	DB	72.1T	;    505    72.1
	DB	71.95T	;    506    71.95
	DB	71.79T	;    507    71.79
	DB	71.64T	;    508    71.64
	DB	71.48T	;    509    71.48
	DB	71.32T	;    510    71.32
	DB	71.17T	;    511    71.17
	DB	71.01T	;    512    71.01
	DB	70.86T	;    513    70.86
	DB	70.7T	;    514    70.7
	DB	70.55T	;    515    70.55
	DB	70.39T	;    516    70.39
	DB	70.23T	;    517    70.23
	DB	70.08T	;    518    70.08
	DB	69.92T	;    519    69.92
	DB	69.77T	;    520    69.77
	DB	69.61T	;    521    69.61
	DB	69.46T	;    522    69.46
	DB	69.3T	;    523    69.3
	DB	69.15T	;    524    69.15
	DB	68.99T	;    525    68.99
	DB	68.84T	;    526    68.84
	DB	68.69T	;    527    68.69
	DB	68.53T	;    528    68.53
	DB	68.38T	;    529    68.38
	DB	68.22T	;    530    68.22
	DB	68.07T	;    531    68.07
	DB	67.91T	;    532    67.91
	DB	67.76T	;    533    67.76
	DB	67.61T	;    534    67.61
	DB	67.45T	;    535    67.45
	DB	67.3T	;    536    67.3
	DB	67.14T	;    537    67.14
	DB	66.99T	;    538    66.99
	DB	66.84T	;    539    66.84
	DB	66.68T	;    540    66.68
	DB	66.53T	;    541    66.53
	DB	66.37T	;    542    66.37
	DB	66.22T	;    543    66.22
	DB	66.07T	;    544    66.07
	DB	65.91T	;    545    65.91
	DB	65.76T	;    546    65.76
	DB	65.61T	;    547    65.61
	DB	65.45T	;    548    65.45
	DB	65.3T	;    549    65.3
	DB	65.15T	;    550    65.15
	DB	64.99T	;    551    64.99
	DB	64.84T	;    552    64.84
	DB	64.69T	;    553    64.69
	DB	64.53T	;    554    64.53
	DB	64.38T	;    555    64.38
	DB	64.23T	;    556    64.23
	DB	64.07T	;    557    64.07
	DB	63.92T	;    558    63.92
	DB	63.77T	;    559    63.77
	DB	63.62T	;    560    63.62
	DB	63.46T	;    561    63.46
	DB	63.31T	;    562    63.31
	DB	63.16T	;    563    63.16
	DB	63T	;    564    63
	DB	62.85T	;    565    62.85
	DB	62.7T	;    566    62.7
	DB	62.55T	;    567    62.55
	DB	62.39T	;    568    62.39
	DB	62.24T	;    569    62.24
	DB	62.09T	;    570    62.09
	DB	61.93T	;    571    61.93
	DB	61.78T	;    572    61.78
	DB	61.63T	;    573    61.63
	DB	61.48T	;    574    61.48
	DB	61.32T	;    575    61.32
	DB	61.17T	;    576    61.17
	DB	61.02T	;    577    61.02
	DB	60.87T	;    578    60.87
	DB	60.71T	;    579    60.71
	DB	60.56T	;    580    60.56
	DB	60.41T	;    581    60.41
	DB	60.25T	;    582    60.25
	DB	60.1T	;    583    60.1
	DB	59.95T	;    584    59.95
	DB	59.8T	;    585    59.8
	DB	59.64T	;    586    59.64
	DB	59.49T	;    587    59.49
	DB	59.34T	;    588    59.34
	DB	59.19T	;    589    59.19
	DB	59.03T	;    590    59.03
	DB	58.88T	;    591    58.88
	DB	58.73T	;    592    58.73
	DB	58.58T	;    593    58.58
	DB	58.42T	;    594    58.42
	DB	58.27T	;    595    58.27
	DB	58.12T	;    596    58.12
	DB	57.97T	;    597    57.97
	DB	57.81T	;    598    57.81
	DB	57.66T	;    599    57.66
	DB	57.51T	;    600    57.51
	DB	57.35T	;    601    57.35
	DB	57.2T	;    602    57.2
	DB	57.05T	;    603    57.05
	DB	56.9T	;    604    56.9
	DB	56.74T	;    605    56.74
	DB	56.59T	;    606    56.59
	DB	56.44T	;    607    56.44
	DB	56.28T	;    608    56.28
	DB	56.13T	;    609    56.13
	DB	55.98T	;    610    55.98
	DB	55.82T	;    611    55.82
	DB	55.67T	;    612    55.67
	DB	55.52T	;    613    55.52
	DB	55.37T	;    614    55.37
	DB	55.21T	;    615    55.21
	DB	55.06T	;    616    55.06
	DB	54.91T	;    617    54.91
	DB	54.75T	;    618    54.75
	DB	54.6T	;    619    54.6
	DB	54.45T	;    620    54.45
	DB	54.29T	;    621    54.29
	DB	54.14T	;    622    54.14
	DB	53.99T	;    623    53.99
	DB	53.83T	;    624    53.83
	DB	53.68T	;    625    53.68
	DB	53.52T	;    626    53.52
	DB	53.37T	;    627    53.37
	DB	53.22T	;    628    53.22
	DB	53.06T	;    629    53.06
	DB	52.91T	;    630    52.91
	DB	52.75T	;    631    52.75
	DB	52.6T	;    632    52.6
	DB	52.45T	;    633    52.45
	DB	52.29T	;    634    52.29
	DB	52.14T	;    635    52.14
	DB	51.98T	;    636    51.98
	DB	51.83T	;    637    51.83
	DB	51.68T	;    638    51.68
	DB	51.52T	;    639    51.52
	DB	51.37T	;    640    51.37
	DB	51.21T	;    641    51.21
	DB	51.06T	;    642    51.06
	DB	50.9T	;    643    50.9
	DB	50.75T	;    644    50.75
	DB	50.59T	;    645    50.59
	DB	50.44T	;    646    50.44
	DB	50.28T	;    647    50.28
	DB	50.13T	;    648    50.13
	DB	49.97T	;    649    49.97
	DB	49.82T	;    650    49.82
	DB	49.66T	;    651    49.66
	DB	49.5T	;    652    49.5
	DB	49.35T	;    653    49.35
	DB	49.19T	;    654    49.19
	DB	49.04T	;    655    49.04
	DB	48.88T	;    656    48.88
	DB	48.73T	;    657    48.73
	DB	48.57T	;    658    48.57
	DB	48.41T	;    659    48.41
	DB	48.26T	;    660    48.26
	DB	48.1T	;    661    48.1
	DB	47.94T	;    662    47.94
	DB	47.79T	;    663    47.79
	DB	47.63T	;    664    47.63
	DB	47.47T	;    665    47.47
	DB	47.32T	;    666    47.32
	DB	47.16T	;    667    47.16
	DB	47T	;    668    47
	DB	46.85T	;    669    46.85
	DB	46.69T	;    670    46.69
	DB	46.53T	;    671    46.53
	DB	46.37T	;    672    46.37
	DB	46.22T	;    673    46.22
	DB	46.06T	;    674    46.06
	DB	45.9T	;    675    45.9
	DB	45.74T	;    676    45.74
	DB	45.58T	;    677    45.58
	DB	45.42T	;    678    45.42
	DB	45.27T	;    679    45.27
	DB	45.11T	;    680    45.11
	DB	44.95T	;    681    44.95
	DB	44.79T	;    682    44.79
	DB	44.63T	;    683    44.63
	DB	44.47T	;    684    44.47
	DB	44.31T	;    685    44.31
	DB	44.15T	;    686    44.15
	DB	43.99T	;    687    43.99
	DB	43.83T	;    688    43.83
	DB	43.67T	;    689    43.67
	DB	43.51T	;    690    43.51
	DB	43.35T	;    691    43.35
	DB	43.19T	;    692    43.19
	DB	43.03T	;    693    43.03
	DB	42.87T	;    694    42.87
	DB	42.71T	;    695    42.71
	DB	42.55T	;    696    42.55
	DB	42.39T	;    697    42.39
	DB	42.23T	;    698    42.23
	DB	42.07T	;    699    42.07
	DB	41.9T	;    700    41.9
	DB	41.74T	;    701    41.74
	DB	41.58T	;    702    41.58
	DB	41.42T	;    703    41.42
	DB	41.26T	;    704    41.26
	DB	41.09T	;    705    41.09
	DB	40.93T	;    706    40.93
	DB	40.77T	;    707    40.77
	DB	40.6T	;    708    40.6
	DB	40.44T	;    709    40.44
	DB	40.28T	;    710    40.28
	DB	40.11T	;    711    40.11
	DB	39.95T	;    712    39.95
	DB	39.79T	;    713    39.79
	DB	39.62T	;    714    39.62
	DB	39.46T	;    715    39.46
	DB	39.29T	;    716    39.29
	DB	39.13T	;    717    39.13
	DB	38.96T	;    718    38.96
	DB	38.8T	;    719    38.8
	DB	38.63T	;    720    38.63
	DB	38.47T	;    721    38.47
	DB	38.3T	;    722    38.3
	DB	38.14T	;    723    38.14
	DB	37.97T	;    724    37.97
	DB	37.8T	;    725    37.8
	DB	37.64T	;    726    37.64
	DB	37.47T	;    727    37.47
	DB	37.3T	;    728    37.3
	DB	37.13T	;    729    37.13
	DB	36.97T	;    730    36.97
	DB	36.8T	;    731    36.8
	DB	36.63T	;    732    36.63
	DB	36.46T	;    733    36.46
	DB	36.29T	;    734    36.29
	DB	36.12T	;    735    36.12
	DB	35.96T	;    736    35.96
	DB	35.79T	;    737    35.79
	DB	35.62T	;    738    35.62
	DB	35.45T	;    739    35.45
	DB	35.28T	;    740    35.28
	DB	35.11T	;    741    35.11
	DB	34.94T	;    742    34.94
	DB	34.76T	;    743    34.76
	DB	34.59T	;    744    34.59
	DB	34.42T	;    745    34.42
	DB	34.25T	;    746    34.25
	DB	34.08T	;    747    34.08
	DB	33.91T	;    748    33.91
	DB	33.73T	;    749    33.73
	DB	33.56T	;    750    33.56
	DB	33.39T	;    751    33.39
	DB	33.21T	;    752    33.21
	DB	33.04T	;    753    33.04
	DB	32.87T	;    754    32.87
	DB	32.69T	;    755    32.69
	DB	32.52T	;    756    32.52
	DB	32.34T	;    757    32.34
	DB	32.17T	;    758    32.17
	DB	31.99T	;    759    31.99
	DB	31.82T	;    760    31.82
	DB	31.64T	;    761    31.64
	DB	31.46T	;    762    31.46
	DB	31.29T	;    763    31.29
	DB	31.11T	;    764    31.11
	DB	30.93T	;    765    30.93
	DB	30.75T	;    766    30.75
	DB	30.58T	;    767    30.58
	DB	30.4T	;    768    30.4
	DB	30.22T	;    769    30.22
	DB	30.04T	;    770    30.04
	DB	29.86T	;    771    29.86
	DB	29.68T	;    772    29.68
	DB	29.5T	;    773    29.5
	DB	29.32T	;    774    29.32
	DB	29.14T	;    775    29.14
	DB	28.96T	;    776    28.96
	DB	28.77T	;    777    28.77
	DB	28.59T	;    778    28.59
	DB	28.41T	;    779    28.41
	DB	28.23T	;    780    28.23
	DB	28.04T	;    781    28.04
	DB	27.86T	;    782    27.86
	DB	27.68T	;    783    27.68
	DB	27.49T	;    784    27.49
	DB	27.31T	;    785    27.31
	DB	27.12T	;    786    27.12
	DB	26.94T	;    787    26.94
	DB	26.75T	;    788    26.75
	DB	26.56T	;    789    26.56
	DB	26.38T	;    790    26.38
	DB	26.19T	;    791    26.19
	DB	26T	;    792    26
	DB	25.81T	;    793    25.81
	DB	25.62T	;    794    25.62
	DB	25.44T	;    795    25.44
	DB	25.25T	;    796    25.25
	DB	25.06T	;    797    25.06
	DB	24.87T	;    798    24.87
	DB	24.67T	;    799    24.67
	DB	24.48T	;    800    24.48
	DB	24.29T	;    801    24.29
	DB	24.1T	;    802    24.1
	DB	23.91T	;    803    23.91
	DB	23.71T	;    804    23.71
	DB	23.52T	;    805    23.52
	DB	23.32T	;    806    23.32
	DB	23.13T	;    807    23.13
	DB	22.93T	;    808    22.93
	DB	22.74T	;    809    22.74
	DB	22.54T	;    810    22.54
	DB	22.35T	;    811    22.35
	DB	22.15T	;    812    22.15
	DB	21.95T	;    813    21.95
	DB	21.75T	;    814    21.75
	DB	21.55T	;    815    21.55
	DB	21.35T	;    816    21.35
	DB	21.15T	;    817    21.15
	DB	20.95T	;    818    20.95
	DB	20.75T	;    819    20.75
	DB	20.55T	;    820    20.55
	DB	20.35T	;    821    20.35
	DB	20.14T	;    822    20.14
	DB	19.94T	;    823    19.94
	DB	19.73T	;    824    19.73
	DB	19.53T	;    825    19.53
	DB	19.32T	;    826    19.32
	DB	19.12T	;    827    19.12
	DB	18.91T	;    828    18.91
	DB	18.7T	;    829    18.7
	DB	18.5T	;    830    18.5
	DB	18.29T	;    831    18.29
	DB	18.08T	;    832    18.08
	DB	17.87T	;    833    17.87
	DB	17.66T	;    834    17.66
	DB	17.44T	;    835    17.44
	DB	17.23T	;    836    17.23
	DB	17.02T	;    837    17.02
	DB	16.81T	;    838    16.81
	DB	16.59T	;    839    16.59
	DB	16.38T	;    840    16.38
	DB	16.16T	;    841    16.16
	DB	15.94T	;    842    15.94
	DB	15.73T	;    843    15.73
	DB	15.51T	;    844    15.51
	DB	15.29T	;    845    15.29
	DB	15.07T	;    846    15.07
	DB	14.85T	;    847    14.85
	DB	14.63T	;    848    14.63
	DB	14.41T	;    849    14.41
	DB	14.18T	;    850    14.18
	DB	13.96T	;    851    13.96
	DB	13.74T	;    852    13.74
	DB	13.51T	;    853    13.51
	DB	13.28T	;    854    13.28
	DB	13.06T	;    855    13.06
	DB	12.83T	;    856    12.83
	DB	12.6T	;    857    12.6
	DB	12.37T	;    858    12.37
	DB	12.14T	;    859    12.14
	DB	11.91T	;    860    11.91
	DB	11.68T	;    861    11.68
	DB	11.44T	;    862    11.44
	DB	11.21T	;    863    11.21
	DB	10.97T	;    864    10.97
	DB	10.74T	;    865    10.74
	DB	10.5T	;    866    10.5
	DB	10.26T	;    867    10.26
	DB	10.02T	;    868    10.02
	DB	9.78T	;    869    9.78
	DB	9.54T	;    870    9.54
	DB	9.3T	;    871    9.3
	DB	9.05T	;    872    9.05
	DB	8.81T	;    873    8.81
	DB	8.56T	;    874    8.56
	DB	8.32T	;    875    8.32
	DB	8.07T	;    876    8.07
	DB	7.82T	;    877    7.82
	DB	7.57T	;    878    7.57
	DB	7.32T	;    879    7.32
	DB	7.06T	;    880    7.06
	DB	6.81T	;    881    6.81
	DB	6.55T	;    882    6.55
	DB	6.3T	;    883    6.3
	DB	6.04T	;    884    6.04
	DB	5.78T	;    885    5.78
	DB	5.52T	;    886    5.52
	DB	5.26T	;    887    5.26
	DB	5T	;    888    5
	DB	4.73T	;    889    4.73
	DB	4.46T	;    890    4.46
	DB	4.2T	;    891    4.2
	DB	3.93T	;    892    3.93
	DB	3.66T	;    893    3.66
	DB	3.39T	;    894    3.39
	DB	3.11T	;    895    3.11
	DB	2.84T	;    896    2.84
	DB	2.56T	;    897    2.56
	DB	2.28T	;    898    2.28
	DB	2.01T	;    899    2.01
	DB	1.72T	;    900    1.72
	DB	1.44T	;    901    1.44
	DB	1.16T	;    902    1.16
	DB	0.87T	;    903    0.87
	DB	0.58T	;    904    0.58
	DB	0.29T	;    905    0.29
	DB	0T	;    906    0
	DB	-0.29T	;    907    -0.29
	DB	-0.59T	;    908    -0.59
	DB	-0.88T	;    909    -0.88
	DB	-1.18T	;    910    -1.18
	DB	-1.48T	;    911    -1.48
	DB	-1.79T	;    912    -1.79
	DB	-2.09T	;    913    -2.09
	DB	-2.4T	;    914    -2.4
	DB	-2.71T	;    915    -2.71
	DB	-3.02T	;    916    -3.02
	DB	-3.33T	;    917    -3.33
	DB	-3.65T	;    918    -3.65
	DB	-3.97T	;    919    -3.97
	DB	-4.29T	;    920    -4.29
	DB	-4.61T	;    921    -4.61
	DB	-4.93T	;    922    -4.93
	DB	-5.26T	;    923    -5.26
	DB	-5.59T	;    924    -5.59
	DB	-5.92T	;    925    -5.92
	DB	-6.26T	;    926    -6.26
	DB	-6.6T	;    927    -6.6
	DB	-6.94T	;    928    -6.94
	DB	-7.28T	;    929    -7.28
	DB	-7.62T	;    930    -7.62
	DB	-7.97T	;    931    -7.97
	DB	-8.32T	;    932    -8.32
	DB	-8.68T	;    933    -8.68
	DB	-9.04T	;    934    -9.04
	DB	-9.4T	;    935    -9.4
	DB	-9.76T	;    936    -9.76
	DB	-10.13T	;    937    -10.13
	DB	-10.5T	;    938    -10.5
	DB	-10.87T	;    939    -10.87
	DB	-11.25T	;    940    -11.25
	DB	-11.63T	;    941    -11.63
	DB	-12.02T	;    942    -12.02
	DB	-12.4T	;    943    -12.4
	DB	-12.8T	;    944    -12.8
	DB	-13.19T	;    945    -13.19
	DB	-13.59T	;    946    -13.59
	DB	-14T	;    947    -14
	DB	-14.4T	;    948    -14.4
	DB	-14.82T	;    949    -14.82
	DB	-15.23T	;    950    -15.23
	DB	-15.66T	;    951    -15.66
	DB	-16.08T	;    952    -16.08
	DB	-16.51T	;    953    -16.51
	DB	-16.95T	;    954    -16.95
	DB	-17.39T	;    955    -17.39
	DB	-17.84T	;    956    -17.84
	DB	-18.29T	;    957    -18.29
	DB	-18.75T	;    958    -18.75
	DB	-19.21T	;    959    -19.21
	DB	-19.68T	;    960    -19.68
	DB	-20.15T	;    961    -20.15
	DB	-20.63T	;    962    -20.63
	DB	-21.12T	;    963    -21.12
	DB	-21.62T	;    964    -21.62
	DB	-22.12T	;    965    -22.12
	DB	-22.63T	;    966    -22.63
	DB	-23.14T	;    967    -23.14
	DB	-23.66T	;    968    -23.66
	DB	-24.2T	;    969    -24.2
	DB	-24.73T	;    970    -24.73
	DB	-25.28T	;    971    -25.28
	DB	-25.84T	;    972    -25.84
	DB	-26.4T	;    973    -26.4
	DB	-26.98T	;    974    -26.98
	DB	-27.56T	;    975    -27.56
	DB	-28.16T	;    976    -28.16
	DB	-28.76T	;    977    -28.76
	DB	-29.38T	;    978    -29.38
	DB	-30.01T	;    979    -30.01
	DB	-30.65T	;    980    -30.65
	DB	-31.3T	;    981    -31.3
	DB	-31.97T	;    982    -31.97
	DB	-32.64T	;    983    -32.64
	DB	-33.34T	;    984    -33.34
	DB	-34.05T	;    985    -34.05
	DB	-34.77T	;    986    -34.77
	DB	-35.51T	;    987    -35.51
	DB	-36.27T	;    988    -36.27
	DB	-37.05T	;    989    -37.05
	DB	-37.85T	;    990    -37.85
	DB	-38.67T	;    991    -38.67
	DB	-39.51T	;    992    -39.51
	DB	170T	;    993    170
	DB	170T	;    994    170
	DB	170T	;    995    170
	DB	170T	;    996    170
	DB	170T	;    997    170
	DB	170T	;    998    170
	DB	170T	;    999    170
	DB	170T	;    1000    170
	DB	170T	;    1001    170
	DB	170T	;    1002    170
	DB	170T	;    1003    170
	DB	170T	;    1004    170
	DB	170T	;    1005    170
	DB	170T	;    1006    170
	DB	170T	;    1007    170
	DB	170T	;    1008    170
	DB	170T	;    1009    170
	DB	170T	;    1010    170
	DB	170T	;    1011    170
	DB	170T	;    1012    170
	DB	170T	;    1013    170
	DB	170T	;    1014    170
	DB	170T	;    1015    170
	DB	170T	;    1016    170
	DB	170T	;    1017    170
	DB	170T	;    1018    170
	DB	170T	;    1019    170
	DB	170T	;    1020    170
	DB	170T	;    1021    170
	DB	170T	;    1022    170
	DB	170T	;    1023    Sensor Failure - use 170 degF as default
