#pragma once

#include <tinympc/admm.hpp>

tinytype rho_value = 5.0;

tinytype Adyn_data[NSTATES*NSTATES] = {
  1.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0039240,	-0.0000000,	0.0200000,	0.0000000,	0.0000000,	0.0000000,	0.0000131,	-0.0000000,	
  0.0000000,	1.0000000,	0.0000000,	-0.0039240,	0.0000000,	-0.0000000,	0.0000000,	0.0200000,	0.0000000,	-0.0000131,	0.0000000,	-0.0000000,	
  0.0000000,	0.0000000,	1.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0200000,	0.0000000,	0.0000000,	0.0000000,	
  0.0000000,	0.0000000,	0.0000000,	1.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0100000,	-0.0000000,	0.0000000,	
  0.0000000,	0.0000000,	0.0000000,	-0.0000000,	1.0000000,	-0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0100000,	-0.0000000,	
  0.0000000,	0.0000000,	0.0000000,	-0.0000000,	0.0000000,	1.0000000,	0.0000000,	0.0000000,	0.0000000,	-0.0000000,	0.0000000,	0.0100000,	
  0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.3924000,	-0.0000000,	1.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0019620,	-0.0000000,	
  0.0000000,	0.0000000,	0.0000000,	-0.3924000,	0.0000000,	-0.0000000,	0.0000000,	1.0000000,	0.0000000,	-0.0019620,	0.0000000,	-0.0000000,	
  0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	1.0000000,	0.0000000,	0.0000000,	0.0000000,	
  0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	1.0000000,	-0.0000000,	0.0000000,	
  0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	1.0000000,	-0.0000000,	
  0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	0.0000000,	-0.0000000,	0.0000000,	1.0000000	
};

tinytype Bdyn_data[NSTATES*NINPUTS] = {
  -0.0000181,	0.0000199,	0.0000182,	-0.0000200,	
  0.0000180,	0.0000198,	-0.0000180,	-0.0000198,	
  0.0008409,	0.0008409,	0.0008409,	0.0008409,	
  -0.0275355,	-0.0303234,	0.0275663,	0.0302926,	
  -0.0276707,	0.0304278,	0.0277570,	-0.0305141,	
  0.0019748,	-0.0007224,	-0.0027844,	0.0015320,	
  -0.0036193,	0.0039800,	0.0036306,	-0.0039912,	
  0.0036016,	0.0039663,	-0.0036057,	-0.0039623,	
  0.0840857,	0.0840857,	0.0840857,	0.0840857,	
  -5.5070921,	-6.0646807,	5.5132527,	6.0585201,	
  -5.5341404,	6.0855684,	5.5513900,	-6.1028180,	
  0.3949542,	-0.1444728,	-0.5568752,	0.3063938	
};

tinytype Kinf_data[NINPUTS*NSTATES] = {
  -1.3325245,	1.3352146,	4.2841285,	-1.2306090,	-1.2839113,	-0.9387810,	-0.4113400,	0.4078764,	0.7252624,	-0.0546082,	-0.0647876,	-0.2796772,	
  1.2334322,	1.2288582,	4.2841285,	-1.0593145,	1.1913597,	0.9381796,	0.3806222,	0.3695764,	0.7252624,	-0.0369556,	0.0609616,	0.2793344,	
  1.3146311,	-1.3281918,	4.2841285,	1.1519594,	1.0869847,	-0.9365701,	0.3924135,	-0.4003470,	0.7252624,	0.0407830,	0.0302132,	-0.2784785,	
  -1.2155388,	-1.2358810,	4.2841285,	1.1379641,	-0.9944331,	0.9371715,	-0.3616957,	-0.3771058,	0.7252624,	0.0507808,	-0.0263872,	0.2788212	
};

tinytype Pinf_data[NSTATES*NSTATES] = {
  151759.4447425,	-127.2368445,	0.0000000,	98.1143338,	31411.1897143,	145.7347858,	21277.3655031,	-37.5187206,	0.0000000,	2.8157535,	167.5650722,	14.9738869,	
  -127.2368445,	151675.6091202,	-0.0000000,	-31354.2776992,	-98.1989174,	-58.2610933,	-37.5334835,	21252.3373064,	-0.0000000,	-166.8370210,	-2.8202526,	-5.9902347,	
  0.0000000,	-0.0000000,	84687.5897455,	0.0000000,	-0.0000000,	-0.0000000,	-0.0000000,	-0.0000000,	6096.5277576,	0.0000000,	-0.0000000,	-0.0000000,	
  98.1143338,	-31354.2776992,	0.0000000,	24188.0474198,	112.0917468,	285.3378709,	33.1558489,	-8846.0407850,	0.0000000,	137.3649130,	5.5817240,	53.8081863,	
  31411.1897143,	-98.1989174,	0.0000000,	112.0917468,	24295.0426355,	713.3898367,	8870.8322043,	-33.1686472,	0.0000000,	5.5804552,	144.4198451,	134.5149049,	
  145.7347858,	-58.2610933,	-0.0000000,	285.3378709,	713.3898367,	12053.8387359,	98.1123240,	-39.2361085,	-0.0000000,	31.5162760,	78.7903093,	1283.5088990,	
  21277.3655031,	-37.5334835,	0.0000000,	33.1558489,	8870.8322043,	98.1123240,	4646.3188364,	-11.6938632,	0.0000000,	1.0936646,	49.2023310,	13.6315016,	
  -37.5187206,	21252.3373064,	-0.0000000,	-8846.0407850,	-33.1686472,	-39.2361085,	-11.6938632,	4637.7222629,	-0.0000000,	-48.4853710,	-1.0945668,	-5.4529150,	
  0.0000000,	0.0000000,	6096.5277576,	0.0000000,	-0.0000000,	-0.0000000,	-0.0000000,	-0.0000000,	975.6191634,	0.0000000,	-0.0000000,	-0.0000000,	
  2.8157535,	-166.8370210,	0.0000000,	137.3649130,	5.5804552,	31.5162760,	1.0936646,	-48.4853710,	0.0000000,	8.7537842,	0.6586307,	9.2302183,	
  167.5650722,	-2.8202526,	-0.0000000,	5.5817240,	144.4198451,	78.7903093,	49.2023310,	-1.0945668,	-0.0000000,	0.6586307,	9.9508194,	23.0746925,	
  14.9738869,	-5.9902347,	-0.0000000,	53.8081863,	134.5149049,	1283.5088990,	13.6315016,	-5.4529150,	-0.0000000,	9.2302183,	23.0746925,	380.0901533	
};

tinytype Quu_inv_data[NINPUTS*NINPUTS] = {
  0.0043662,	-0.0003405,	0.0036531,	-0.0003409,	
  -0.0003405,	0.0043107,	-0.0003362,	0.0037038,	
  0.0036531,	-0.0003362,	0.0043494,	-0.0003284,	
  -0.0003409,	0.0037038,	-0.0003284,	0.0043034	
};

tinytype AmBKt_data[NSTATES*NSTATES] = {
  0.9999032,	-0.0000008,	0.0000000,	0.0012926,	-0.1479838,	0.0090450,	-0.0193563,	-0.0001691,	0.0000000,	0.2585112,	-29.5967557,	1.8090026,	
  -0.0000008,	0.9999032,	-0.0000000,	0.1480802,	-0.0012904,	-0.0035539,	-0.0001688,	-0.0193689,	-0.0000000,	29.6160492,	-0.2580819,	-0.7107829,	
  -0.0000000,	-0.0000000,	0.9855906,	0.0000000,	0.0000000,	-0.0000000,	0.0000000,	-0.0000000,	-1.4409360,	0.0000000,	-0.0000000,	-0.0000000,	
  0.0000006,	-0.0038375,	0.0000000,	0.8677655,	0.0009299,	0.0031291,	0.0001216,	-0.3751037,	0.0000000,	-26.4469038,	0.1859801,	0.6258246,	
  0.0038375,	-0.0000006,	-0.0000000,	0.0009328,	0.8677072,	0.0079460,	0.3750961,	-0.0001220,	-0.0000000,	0.1865698,	-26.4585664,	1.5892082,	
  0.0000000,	-0.0000000,	-0.0000000,	0.0000274,	0.0000698,	0.9984881,	0.0000091,	-0.0000036,	-0.0000000,	0.0054818,	0.0139511,	-0.3023792,	
  0.0199706,	-0.0000002,	-0.0000000,	0.0003547,	-0.0448926,	0.0027340,	0.9941280,	-0.0000464,	-0.0000000,	0.0709305,	-8.9785190,	0.5467967,	
  -0.0000002,	0.0199706,	-0.0000000,	0.0448975,	-0.0003538,	-0.0010755,	-0.0000463,	0.9941274,	-0.0000000,	8.9794933,	-0.0707626,	-0.2150992,	
  -0.0000000,	0.0000000,	0.0175606,	0.0000000,	-0.0000000,	-0.0000000,	-0.0000000,	0.0000000,	0.7560632,	0.0000000,	-0.0000000,	-0.0000000,	
  0.0000000,	-0.0000096,	0.0000000,	0.0047132,	0.0000310,	0.0001169,	0.0000040,	-0.0012705,	0.0000000,	-0.0573600,	0.0061906,	0.0233808,	
  0.0000096,	-0.0000000,	-0.0000000,	0.0000311,	0.0047085,	0.0002965,	0.0012699,	-0.0000041,	-0.0000000,	0.0062155,	-0.0582905,	0.0593052,	
  -0.0000000,	0.0000000,	-0.0000000,	-0.0000003,	-0.0000007,	0.0095515,	-0.0000001,	0.0000000,	-0.0000000,	-0.0000554,	-0.0001439,	0.9103091	
};

tinytype coeff_d2p_data[NSTATES*NINPUTS] = {
  0.0000000,	-0.0000000,	0.0000000,	-0.0000000,	
  -0.0000000,	0.0000000,	-0.0000000,	0.0000000,	
  0.0000000,	0.0000000,	-0.0000000,	-0.0000000,	
  0.0000000,	-0.0000000,	0.0000000,	-0.0000000,	
  0.0000000,	-0.0000000,	0.0000000,	-0.0000000,	
  0.0000000,	-0.0000000,	0.0000000,	-0.0000000,	
  0.0000000,	-0.0000000,	0.0000000,	-0.0000000,	
  -0.0000000,	0.0000000,	-0.0000000,	0.0000000,	
  0.0000000,	0.0000000,	-0.0000000,	-0.0000000,	
  0.0000000,	-0.0000000,	0.0000000,	-0.0000000,	
  0.0000000,	-0.0000000,	0.0000000,	-0.0000000,	
  0.0000000,	-0.0000000,	0.0000000,	-0.0000000	
};

tinytype Q_data[NSTATES]= {100.0000000,	100.0000000,	10000.0000000,	4.0000000,	4.0000000,	400.0000000,	4.0000000,	4.0000000,	4.0000000,	2.0408163,	2.0408163,	4.0000000};

tinytype Qf_data[NSTATES]= {100.0000000,	100.0000000,	10000.0000000,	4.0000000,	4.0000000,	400.0000000,	4.0000000,	4.0000000,	4.0000000,	2.0408163,	2.0408163,	4.0000000};

tinytype R_data[NINPUTS]= {100.0000000,	100.0000000,	100.0000000,	100.0000000};

