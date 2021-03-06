/**
    IPL dzoom table AR0330_NT99141_MSDEMO_FFFF.

    @file       IPL_dzoomTableAR0330_NT99141_MSDEMO_FFFF.c
    @ingroup    mISYSAlg
    @note       Nothing (or anything need to be mentioned).

    Copyright   Novatek Microelectronics Corp. 2011.  All rights reserved.
*/

#include "IPL_AR0330_NT99141_MSDEMO_FFFF_Int.h"

const UINT32 VDOZOOM_NT99141_INFOR_MODE_TABLE[1][DZOOM_ITEM_MAX] =
{
    //sie       sie
    //crop out  ch0 out    pre in
    {2560, 720, 2560, 720, 2560, 720}
};

const UINT32 VDOZOOM_AR0330_INFOR_MODE_1_TABLE[31][DZOOM_ITEM_MAX] =
{
    //sie         sie
    //crop out    ch0 out      pre in
{  1024 ,   764 ,  1024 ,   764 ,  1024 ,   764 },
{   928 ,   696 ,   928 ,   696 ,   928 ,   696 },
{   852 ,   640 ,   852 ,   640 ,   852 ,   640 },
{   784 ,   588 ,   784 ,   588 ,   784 ,   588 },
{   728 ,   548 ,   728 ,   548 ,   728 ,   548 },
{   680 ,   512 ,   680 ,   512 ,   680 ,   512 },
{   640 ,   480 ,   640 ,   480 ,   640 ,   480 },
{   600 ,   448 ,   600 ,   448 ,   600 ,   448 },
{   568 ,   424 ,   568 ,   424 ,   568 ,   424 },
{   536 ,   404 ,   536 ,   404 ,   536 ,   404 },
{   512 ,   384 ,   512 ,   384 ,   512 ,   384 },
{   484 ,   364 ,   484 ,   364 ,   484 ,   364 },
{   464 ,   348 ,   464 ,   348 ,   464 ,   348 },
{   444 ,   332 ,   444 ,   332 ,   444 ,   332 },
{   424 ,   320 ,   424 ,   320 ,   424 ,   320 },
{   408 ,   304 ,   408 ,   304 ,   408 ,   304 },
{   392 ,   292 ,   392 ,   292 ,   392 ,   292 },
{   376 ,   284 ,   376 ,   284 ,   376 ,   284 },
{   364 ,   272 ,   364 ,   272 ,   364 ,   272 },
{   352 ,   264 ,   352 ,   264 ,   352 ,   264 },
{   340 ,   256 ,   340 ,   256 ,   340 ,   256 },
{   328 ,   244 ,   328 ,   244 ,   328 ,   244 },
{   320 ,   240 ,   320 ,   240 ,   320 ,   240 },
{   308 ,   232 ,   308 ,   232 ,   308 ,   232 },
{   300 ,   224 ,   300 ,   224 ,   300 ,   224 },
{   292 ,   216 ,   292 ,   216 ,   292 ,   216 },
{   284 ,   212 ,   284 ,   212 ,   284 ,   212 },
{   276 ,   204 ,   276 ,   204 ,   276 ,   204 },
{   268 ,   200 ,   268 ,   200 ,   268 ,   200 },
{   260 ,   196 ,   260 ,   196 ,   260 ,   196 },
{   256 ,   192 ,   256 ,   192 ,   256 ,   192 },
};

const UINT32 VDOZOOM_AR0330_INFOR_MODE_2_TABLE[31][DZOOM_ITEM_MAX] =
{
    //sie        sie
    //crop out   ch0 out     pre in
{   1136,   636 ,   1136,   636 ,   1136,   636 },
{   1032,   576 ,   1032,   576 ,   1032,   576 },
{   944 ,   528 ,   944 ,   528 ,   944 ,   528 },
{   872 ,   488 ,   872 ,   488 ,   872 ,   488 },
{   808 ,   452 ,   808 ,   452 ,   808 ,   452 },
{   756 ,   424 ,   756 ,   424 ,   756 ,   424 },
{   708 ,   396 ,   708 ,   396 ,   708 ,   396 },
{   668 ,   372 ,   668 ,   372 ,   668 ,   372 },
{   628 ,   352 ,   628 ,   352 ,   628 ,   352 },
{   596 ,   332 ,   596 ,   332 ,   596 ,   332 },
{   568 ,   316 ,   568 ,   316 ,   568 ,   316 },
{   540 ,   300 ,   540 ,   300 ,   540 ,   300 },
{   516 ,   288 ,   516 ,   288 ,   516 ,   288 },
{   492 ,   276 ,   492 ,   276 ,   492 ,   276 },
{   472 ,   264 ,   472 ,   264 ,   472 ,   264 },
{   452 ,   252 ,   452 ,   252 ,   452 ,   252 },
{   436 ,   244 ,   436 ,   244 ,   436 ,   244 },
{   420 ,   232 ,   420 ,   232 ,   420 ,   232 },
{   404 ,   224 ,   404 ,   224 ,   404 ,   224 },
{   388 ,   216 ,   388 ,   216 ,   388 ,   216 },
{   376 ,   212 ,   376 ,   212 ,   376 ,   212 },
{   364 ,   204 ,   364 ,   204 ,   364 ,   204 },
{   352 ,   196 ,   352 ,   196 ,   352 ,   196 },
{   344 ,   192 ,   344 ,   192 ,   344 ,   192 },
{   332 ,   184 ,   332 ,   184 ,   332 ,   184 },
{   324 ,   180 ,   324 ,   180 ,   324 ,   180 },
{   312 ,   176 ,   312 ,   176 ,   312 ,   176 },
{   304 ,   168 ,   304 ,   168 ,   304 ,   168 },
{   296 ,   164 ,   296 ,   164 ,   296 ,   164 },
{   288 ,   160 ,   288 ,   160 ,   288 ,   160 },
{   284 ,   156 ,   284 ,   156 ,   284 ,   156 },
};

const UINT32 VDOZOOM_AR0330_INFOR_MODE_3_TABLE[31][DZOOM_ITEM_MAX] =
{
    //sie        sie
    //crop out   ch0 out     pre in
    {   2240,   1260,   2240,   1260,   2240,   1260},
    {   2064,   1148,   2064,   1148,   2064,   1148},
    {   1892,   1052,   1892,   1052,   1892,   1052},
    {   1744,   972 ,   1744,   972 ,   1744,   972 },
    {   1620,   900 ,   1620,   900 ,   1620,   900 },
    {   1512,   840 ,   1512,   840 ,   1512,   840 },
    {   1420,   788 ,   1420,   788 ,   1420,   788 },
    {   1336,   740 ,   1336,   740 ,   1336,   740 },
    {   1260,   700 ,   1260,   700 ,   1260,   700 },
    {   1192,   664 ,   1192,   664 ,   1192,   664 },
    {   1136,   632 ,   1136,   632 ,   1136,   632 },
    {   1080,   600 ,   1080,   600 ,   1080,   600 },
    {   1032,   572 ,   1032,   572 ,   1032,   572 },
    {   984 ,   548 ,   984 ,   548 ,   984 ,   548 },
    {   944 ,   524 ,   944 ,   524 ,   944 ,   524 },
    {   908 ,   504 ,   908 ,   504 ,   908 ,   504 },
    {   872 ,   484 ,   872 ,   484 ,   872 ,   484 },
    {   840 ,   468 ,   840 ,   468 ,   840 ,   468 },
    {   808 ,   448 ,   808 ,   448 ,   808 ,   448 },
    {   780 ,   432 ,   780 ,   432 ,   780 ,   432 },
    {   756 ,   420 ,   756 ,   420 ,   756 ,   420 },
    {   732 ,   404 ,   732 ,   404 ,   732 ,   404 },
    {   708 ,   392 ,   708 ,   392 ,   708 ,   392 },
    {   688 ,   380 ,   688 ,   380 ,   688 ,   380 },
    {   668 ,   368 ,   668 ,   368 ,   668 ,   368 },
    {   648 ,   360 ,   648 ,   360 ,   648 ,   360 },
    {   628 ,   348 ,   628 ,   348 ,   628 ,   348 },
    {   612 ,   340 ,   612 ,   340 ,   612 ,   340 },
    {   596 ,   332 ,   596 ,   332 ,   596 ,   332 },
    {   580 ,   324 ,   580 ,   324 ,   580 ,   324 },
    {   568 ,   316 ,   568 ,   316 ,   568 ,   316 },
};

const UINT32 VDOZOOM_AR0330_INFOR_MODE_4_TABLE[31][DZOOM_ITEM_MAX] =
{
    //sie        sie
    //crop out   ch0 out     pre in
{   2240,   1492,   2240,   1492,   2240,   1492},
{   2176,   1448,   2176,   1448,   2176,   1448},
{   2128,   1416,   2128,   1416,   2128,   1416},
{   2064,   1376,   2064,   1376,   2064,   1376},
{   2016,   1344,   2016,   1344,   2016,   1344},
{   1952,   1300,   1952,   1300,   1952,   1300},
{   1888,   1256,   1888,   1256,   1888,   1256},
{   1840,   1224,   1840,   1224,   1840,   1224},
{   1776,   1184,   1776,   1184,   1776,   1184},
{   1728,   1152,   1728,   1152,   1728,   1152},
{   1664,   1108,   1664,   1108,   1664,   1108},
{   1600,   1064,   1600,   1064,   1600,   1064},
{   1552,   1032,   1552,   1032,   1552,   1032},
{   1488,   992 ,   1488,   992 ,   1488,   992 },
{   1440,   960 ,   1440,   960 ,   1440,   960 },
{   1376,   916 ,   1376,   916 ,   1376,   916 },
{   1312,   872 ,   1312,   872 ,   1312,   872 },
{   1264,   840 ,   1264,   840 ,   1264,   840 },
{   1200,   800 ,   1200,   800 ,   1200,   800 },
{   1152,   768 ,   1152,   768 ,   1152,   768 },
{   1088,   724 ,   1088,   724 ,   1088,   724 },
{   1024,   680 ,   1024,   680 ,   1024,   680 },
{   976 ,   648 ,   976 ,   648 ,   976 ,   648 },
{   912 ,   608 ,   912 ,   608 ,   912 ,   608 },
{   864 ,   576 ,   864 ,   576 ,   864 ,   576 },
{   800 ,   532 ,   800 ,   532 ,   800 ,   532 },
{   736 ,   488 ,   736 ,   488 ,   736 ,   488 },
{   688 ,   456 ,   688 ,   456 ,   688 ,   456 },
{   624 ,   416 ,   624 ,   416 ,   624 ,   416 },
{   576 ,   384 ,   576 ,   384 ,   576 ,   384 },
{   536 ,   356 ,   536 ,   356 ,   536 ,   356 },
//{   500 ,   332 ,   500 ,   332 ,   500 ,   332 },
};

const UINT32 VDOZOOM_AR0330_INFOR_MODE_5_TABLE[31][DZOOM_ITEM_MAX] =
{
    //sie        sie
    //crop out   ch0 out     pre in
{   752 ,   422 ,   752 ,   422 ,   752 ,   422 },
{   680 ,   380 ,   680 ,   380 ,   680 ,   380 },
{   624 ,   348 ,   624 ,   348 ,   624 ,   348 },
{   576 ,   324 ,   576 ,   324 ,   576 ,   324 },
{   536 ,   300 ,   536 ,   300 ,   536 ,   300 },
{   500 ,   280 ,   500 ,   280 ,   500 ,   280 },
{   468 ,   260 ,   468 ,   260 ,   468 ,   260 },
{   440 ,   248 ,   440 ,   248 ,   440 ,   248 },
{   416 ,   232 ,   416 ,   232 ,   416 ,   232 },
{   392 ,   220 ,   392 ,   220 ,   392 ,   220 },
{   376 ,   208 ,   376 ,   208 ,   376 ,   208 },
{   356 ,   200 ,   356 ,   200 ,   356 ,   200 },
{   340 ,   188 ,   340 ,   188 ,   340 ,   188 },
{   324 ,   180 ,   324 ,   180 ,   324 ,   180 },
{   312 ,   172 ,   312 ,   172 ,   312 ,   172 },
{   300 ,   168 ,   300 ,   168 ,   300 ,   168 },
{   288 ,   160 ,   288 ,   160 ,   288 ,   160 },
{   276 ,   156 ,   276 ,   156 ,   276 ,   156 },
{   268 ,   148 ,   268 ,   148 ,   268 ,   148 },
{   256 ,   144 ,   256 ,   144 ,   256 ,   144 },
{   248 ,   140 ,   248 ,   140 ,   248 ,   140 },
{   240 ,   136 ,   240 ,   136 ,   240 ,   136 },
{   232 ,   128 ,   232 ,   128 ,   232 ,   128 },
{   224 ,   124 ,   224 ,   124 ,   224 ,   124 },
{   220 ,   124 ,   220 ,   124 ,   220 ,   124 },
{   212 ,   120 ,   212 ,   120 ,   212 ,   120 },
{   208 ,   116 ,   208 ,   116 ,   208 ,   116 },
{   200 ,   112 ,   200 ,   112 ,   200 ,   112 },
{   196 ,   108 ,   196 ,   108 ,   196 ,   108 },
{   192 ,   108 ,   192 ,   108 ,   192 ,   108 },
{   188 ,   104 ,   188 ,   104 ,   188 ,   104 },
};


UINT32* SenMode2Tbl(IPL_PROC_ID Id, UINT32 SenMode, UINT32 *DzMaxidx)
{
    UINT32 *Ptr = NULL;

    if (Id == IPL_ID_1)
    {
        switch(SenMode)
        {
            case SENSOR_MODE_1:
                Ptr = (UINT32*)&VDOZOOM_AR0330_INFOR_MODE_1_TABLE[0][0];
                *DzMaxidx = (sizeof(VDOZOOM_AR0330_INFOR_MODE_1_TABLE) / 4 / DZOOM_ITEM_MAX) - 1;
                break;

            case SENSOR_MODE_2:
                Ptr = (UINT32*)&VDOZOOM_AR0330_INFOR_MODE_2_TABLE[0][0];
                *DzMaxidx = (sizeof(VDOZOOM_AR0330_INFOR_MODE_2_TABLE) / 4 / DZOOM_ITEM_MAX) - 1;
                break;

            case SENSOR_MODE_3:
                Ptr = (UINT32*)&VDOZOOM_AR0330_INFOR_MODE_3_TABLE[0][0];
                *DzMaxidx = (sizeof(VDOZOOM_AR0330_INFOR_MODE_3_TABLE) / 4 / DZOOM_ITEM_MAX) - 1;
                break;

            case SENSOR_MODE_4:
                Ptr = (UINT32*)&VDOZOOM_AR0330_INFOR_MODE_4_TABLE[0][0];
                *DzMaxidx = (sizeof(VDOZOOM_AR0330_INFOR_MODE_4_TABLE) / 4 / DZOOM_ITEM_MAX) - 1;
                break;

            case SENSOR_MODE_5:
                Ptr = (UINT32*)&VDOZOOM_AR0330_INFOR_MODE_5_TABLE[0][0];
                *DzMaxidx = (sizeof(VDOZOOM_AR0330_INFOR_MODE_5_TABLE) / 4 / DZOOM_ITEM_MAX) - 1;
                break;

            default:
                DBG_ERR("Wrong Dzoom Mode\r\n");
                Ptr = NULL;
                *DzMaxidx = 0;
                break;
        }
    }
    else if (Id == IPL_ID_2)
    {
        switch(SenMode)
        {
            case SENSOR_MODE_1:
                Ptr = (UINT32*)&VDOZOOM_NT99141_INFOR_MODE_TABLE[0][0];
                *DzMaxidx = (sizeof(VDOZOOM_NT99141_INFOR_MODE_TABLE) / 4 / DZOOM_ITEM_MAX) - 1;
                break;

            default:
                DBG_ERR("Wrong Dzoom Mode\r\n");
                Ptr = NULL;
                *DzMaxidx = 0;
                break;
        }
    }
    return Ptr;
}
