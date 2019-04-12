
/*
 * File:   lookup.h
 * Author: Nick
 *
 * Created on November 12, 2017, 6:44 PM
 */


#ifndef LOOKUP_H
#define LOOKUP_H


const float cos[360] = {
    1.0,
    0.9998,
    0.9994,
    0.9986,
    0.9976,
    0.9962,
    0.9945,
    0.9925,
    0.9903,
    0.9877,
    0.9848,
    0.9816,
    0.9781,
    0.9744,
    0.9703,
    0.9659,
    0.9613,
    0.9563,
    0.9511,
    0.9455,
    0.9397,
    0.9336,
    0.9272,
    0.9205,
    0.9135,
    0.9063,
    0.8988,
    0.891,
    0.8829,
    0.8746,
    0.866,
    0.8572,
    0.848,
    0.8387,
    0.829,
    0.8192,
    0.809,
    0.7986,
    0.788,
    0.7771,
    0.766,
    0.7547,
    0.7431,
    0.7314,
    0.7193,
    0.7071,
    0.6947,
    0.682,
    0.6691,
    0.6561,
    0.6428,
    0.6293,
    0.6157,
    0.6018,
    0.5878,
    0.5736,
    0.5592,
    0.5446,
    0.5299,
    0.515,
    0.5,
    0.4848,
    0.4695,
    0.454,
    0.4384,
    0.4226,
    0.4067,
    0.3907,
    0.3746,
    0.3584,
    0.342,
    0.3256,
    0.309,
    0.2924,
    0.2756,
    0.2588,
    0.2419,
    0.225,
    0.2079,
    0.1908,
    0.1736,
    0.1564,
    0.1392,
    0.1219,
    0.1045,
    0.0872,
    0.0698,
    0.0523,
    0.0349,
    0.0175,
    0.0,
    -0.0175,
    -0.0349,
    -0.0523,
    -0.0698,
    -0.0872,
    -0.1045,
    -0.1219,
    -0.1392,
    -0.1564,
    -0.1736,
    -0.1908,
    -0.2079,
    -0.225,
    -0.2419,
    -0.2588,
    -0.2756,
    -0.2924,
    -0.309,
    -0.3256,
    -0.342,
    -0.3584,
    -0.3746,
    -0.3907,
    -0.4067,
    -0.4226,
    -0.4384,
    -0.454,
    -0.4695,
    -0.4848,
    -0.5,
    -0.515,
    -0.5299,
    -0.5446,
    -0.5592,
    -0.5736,
    -0.5878,
    -0.6018,
    -0.6157,
    -0.6293,
    -0.6428,
    -0.6561,
    -0.6691,
    -0.682,
    -0.6947,
    -0.7071,
    -0.7193,
    -0.7314,
    -0.7431,
    -0.7547,
    -0.766,
    -0.7771,
    -0.788,
    -0.7986,
    -0.809,
    -0.8192,
    -0.829,
    -0.8387,
    -0.848,
    -0.8572,
    -0.866,
    -0.8746,
    -0.8829,
    -0.891,
    -0.8988,
    -0.9063,
    -0.9135,
    -0.9205,
    -0.9272,
    -0.9336,
    -0.9397,
    -0.9455,
    -0.9511,
    -0.9563,
    -0.9613,
    -0.9659,
    -0.9703,
    -0.9744,
    -0.9781,
    -0.9816,
    -0.9848,
    -0.9877,
    -0.9903,
    -0.9925,
    -0.9945,
    -0.9962,
    -0.9976,
    -0.9986,
    -0.9994,
    -0.9998,
    -1.0,
    -0.9998,
    -0.9994,
    -0.9986,
    -0.9976,
    -0.9962,
    -0.9945,
    -0.9925,
    -0.9903,
    -0.9877,
    -0.9848,
    -0.9816,
    -0.9781,
    -0.9744,
    -0.9703,
    -0.9659,
    -0.9613,
    -0.9563,
    -0.9511,
    -0.9455,
    -0.9397,
    -0.9336,
    -0.9272,
    -0.9205,
    -0.9135,
    -0.9063,
    -0.8988,
    -0.891,
    -0.8829,
    -0.8746,
    -0.866,
    -0.8572,
    -0.848,
    -0.8387,
    -0.829,
    -0.8192,
    -0.809,
    -0.7986,
    -0.788,
    -0.7771,
    -0.766,
    -0.7547,
    -0.7431,
    -0.7314,
    -0.7193,
    -0.7071,
    -0.6947,
    -0.682,
    -0.6691,
    -0.6561,
    -0.6428,
    -0.6293,
    -0.6157,
    -0.6018,
    -0.5878,
    -0.5736,
    -0.5592,
    -0.5446,
    -0.5299,
    -0.515,
    -0.5,
    -0.4848,
    -0.4695,
    -0.454,
    -0.4384,
    -0.4226,
    -0.4067,
    -0.3907,
    -0.3746,
    -0.3584,
    -0.342,
    -0.3256,
    -0.309,
    -0.2924,
    -0.2756,
    -0.2588,
    -0.2419,
    -0.225,
    -0.2079,
    -0.1908,
    -0.1736,
    -0.1564,
    -0.1392,
    -0.1219,
    -0.1045,
    -0.0872,
    -0.0698,
    -0.0523,
    -0.0349,
    -0.0175,
    -0.0,
    0.0175,
    0.0349,
    0.0523,
    0.0698,
    0.0872,
    0.1045,
    0.1219,
    0.1392,
    0.1564,
    0.1736,
    0.1908,
    0.2079,
    0.225,
    0.2419,
    0.2588,
    0.2756,
    0.2924,
    0.309,
    0.3256,
    0.342,
    0.3584,
    0.3746,
    0.3907,
    0.4067,
    0.4226,
    0.4384,
    0.454,
    0.4695,
    0.4848,
    0.5,
    0.515,
    0.5299,
    0.5446,
    0.5592,
    0.5736,
    0.5878,
    0.6018,
    0.6157,
    0.6293,
    0.6428,
    0.6561,
    0.6691,
    0.682,
    0.6947,
    0.7071,
    0.7193,
    0.7314,
    0.7431,
    0.7547,
    0.766,
    0.7771,
    0.788,
    0.7986,
    0.809,
    0.8192,
    0.829,
    0.8387,
    0.848,
    0.8572,
    0.866,
    0.8746,
    0.8829,
    0.891,
    0.8988,
    0.9063,
    0.9135,
    0.9205,
    0.9272,
    0.9336,
    0.9397,
    0.9455,
    0.9511,
    0.9563,
    0.9613,
    0.9659,
    0.9703,
    0.9744,
    0.9781,
    0.9816,
    0.9848,
    0.9877,
    0.9903,
    0.9925,
    0.9945,
    0.9962,
    0.9976,
    0.9986,
    0.9994
};



const float sin[360] = {
    0.0,
    0.0175,
    0.0349,
    0.0523,
    0.0698,
    0.0872,
    0.1045,
    0.1219,
    0.1392,
    0.1564,
    0.1736,
    0.1908,
    0.2079,
    0.225,
    0.2419,
    0.2588,
    0.2756,
    0.2924,
    0.309,
    0.3256,
    0.342,
    0.3584,
    0.3746,
    0.3907,
    0.4067,
    0.4226,
    0.4384,
    0.454,
    0.4695,
    0.4848,
    0.5,
    0.515,
    0.5299,
    0.5446,
    0.5592,
    0.5736,
    0.5878,
    0.6018,
    0.6157,
    0.6293,
    0.6428,
    0.6561,
    0.6691,
    0.682,
    0.6947,
    0.7071,
    0.7193,
    0.7314,
    0.7431,
    0.7547,
    0.766,
    0.7771,
    0.788,
    0.7986,
    0.809,
    0.8192,
    0.829,
    0.8387,
    0.848,
    0.8572,
    0.866,
    0.8746,
    0.8829,
    0.891,
    0.8988,
    0.9063,
    0.9135,
    0.9205,
    0.9272,
    0.9336,
    0.9397,
    0.9455,
    0.9511,
    0.9563,
    0.9613,
    0.9659,
    0.9703,
    0.9744,
    0.9781,
    0.9816,
    0.9848,
    0.9877,
    0.9903,
    0.9925,
    0.9945,
    0.9962,
    0.9976,
    0.9986,
    0.9994,
    0.9998,
    1.0,
    0.9998,
    0.9994,
    0.9986,
    0.9976,
    0.9962,
    0.9945,
    0.9925,
    0.9903,
    0.9877,
    0.9848,
    0.9816,
    0.9781,
    0.9744,
    0.9703,
    0.9659,
    0.9613,
    0.9563,
    0.9511,
    0.9455,
    0.9397,
    0.9336,
    0.9272,
    0.9205,
    0.9135,
    0.9063,
    0.8988,
    0.891,
    0.8829,
    0.8746,
    0.866,
    0.8572,
    0.848,
    0.8387,
    0.829,
    0.8192,
    0.809,
    0.7986,
    0.788,
    0.7771,
    0.766,
    0.7547,
    0.7431,
    0.7314,
    0.7193,
    0.7071,
    0.6947,
    0.682,
    0.6691,
    0.6561,
    0.6428,
    0.6293,
    0.6157,
    0.6018,
    0.5878,
    0.5736,
    0.5592,
    0.5446,
    0.5299,
    0.515,
    0.5,
    0.4848,
    0.4695,
    0.454,
    0.4384,
    0.4226,
    0.4067,
    0.3907,
    0.3746,
    0.3584,
    0.342,
    0.3256,
    0.309,
    0.2924,
    0.2756,
    0.2588,
    0.2419,
    0.225,
    0.2079,
    0.1908,
    0.1736,
    0.1564,
    0.1392,
    0.1219,
    0.1045,
    0.0872,
    0.0698,
    0.0523,
    0.0349,
    0.0175,
    0.0,
    -0.0175,
    -0.0349,
    -0.0523,
    -0.0698,
    -0.0872,
    -0.1045,
    -0.1219,
    -0.1392,
    -0.1564,
    -0.1736,
    -0.1908,
    -0.2079,
    -0.225,
    -0.2419,
    -0.2588,
    -0.2756,
    -0.2924,
    -0.309,
    -0.3256,
    -0.342,
    -0.3584,
    -0.3746,
    -0.3907,
    -0.4067,
    -0.4226,
    -0.4384,
    -0.454,
    -0.4695,
    -0.4848,
    -0.5,
    -0.515,
    -0.5299,
    -0.5446,
    -0.5592,
    -0.5736,
    -0.5878,
    -0.6018,
    -0.6157,
    -0.6293,
    -0.6428,
    -0.6561,
    -0.6691,
    -0.682,
    -0.6947,
    -0.7071,
    -0.7193,
    -0.7314,
    -0.7431,
    -0.7547,
    -0.766,
    -0.7771,
    -0.788,
    -0.7986,
    -0.809,
    -0.8192,
    -0.829,
    -0.8387,
    -0.848,
    -0.8572,
    -0.866,
    -0.8746,
    -0.8829,
    -0.891,
    -0.8988,
    -0.9063,
    -0.9135,
    -0.9205,
    -0.9272,
    -0.9336,
    -0.9397,
    -0.9455,
    -0.9511,
    -0.9563,
    -0.9613,
    -0.9659,
    -0.9703,
    -0.9744,
    -0.9781,
    -0.9816,
    -0.9848,
    -0.9877,
    -0.9903,
    -0.9925,
    -0.9945,
    -0.9962,
    -0.9976,
    -0.9986,
    -0.9994,
    -0.9998,
    -1.0,
    -0.9998,
    -0.9994,
    -0.9986,
    -0.9976,
    -0.9962,
    -0.9945,
    -0.9925,
    -0.9903,
    -0.9877,
    -0.9848,
    -0.9816,
    -0.9781,
    -0.9744,
    -0.9703,
    -0.9659,
    -0.9613,
    -0.9563,
    -0.9511,
    -0.9455,
    -0.9397,
    -0.9336,
    -0.9272,
    -0.9205,
    -0.9135,
    -0.9063,
    -0.8988,
    -0.891,
    -0.8829,
    -0.8746,
    -0.866,
    -0.8572,
    -0.848,
    -0.8387,
    -0.829,
    -0.8192,
    -0.809,
    -0.7986,
    -0.788,
    -0.7771,
    -0.766,
    -0.7547,
    -0.7431,
    -0.7314,
    -0.7193,
    -0.7071,
    -0.6947,
    -0.682,
    -0.6691,
    -0.6561,
    -0.6428,
    -0.6293,
    -0.6157,
    -0.6018,
    -0.5878,
    -0.5736,
    -0.5592,
    -0.5446,
    -0.5299,
    -0.515,
    -0.5,
    -0.4848,
    -0.4695,
    -0.454,
    -0.4384,
    -0.4226,
    -0.4067,
    -0.3907,
    -0.3746,
    -0.3584,
    -0.342,
    -0.3256,
    -0.309,
    -0.2924,
    -0.2756,
    -0.2588,
    -0.2419,
    -0.225,
    -0.2079,
    -0.1908,
    -0.1736,
    -0.1564,
    -0.1392,
    -0.1219,
    -0.1045,
    -0.0872,
    -0.0698,
    -0.0523,
    -0.0349
};


const float sin_120[360] = {
    0.5806,
0.5947,
0.6087,
0.6224,
0.636,
0.6494,
0.6625,
0.6755,
0.6883,
0.7008,
0.7132,
0.7253,
0.7372,
0.7489,
0.7603,
0.7716,
0.7825,
0.7933,
0.8038,
0.8141,
0.8241,
0.8338,
0.8433,
0.8526,
0.8616,
0.8703,
0.8788,
0.887,
0.8949,
0.9025,
0.9099,
0.917,
0.9238,
0.9304,
0.9366,
0.9426,
0.9483,
0.9537,
0.9588,
0.9636,
0.9681,
0.9723,
0.9763,
0.9799,
0.9832,
0.9863,
0.989,
0.9914,
0.9936,
0.9954,
0.9969,
0.9981,
0.999,
0.9997,
1.0,
1.0,
0.9997,
0.9991,
0.9981,
0.9969,
0.9954,
0.9936,
0.9915,
0.989,
0.9863,
0.9833,
0.9799,
0.9763,
0.9724,
0.9682,
0.9637,
0.9589,
0.9538,
0.9484,
0.9427,
0.9367,
0.9305,
0.9239,
0.9171,
0.91,
0.9026,
0.895,
0.8871,
0.8789,
0.8704,
0.8617,
0.8527,
0.8435,
0.8339,
0.8242,
0.8142,
0.8039,
0.7934,
0.7827,
0.7717,
0.7605,
0.749,
0.7374,
0.7255,
0.7133,
0.701,
0.6884,
0.6757,
0.6627,
0.6495,
0.6362,
0.6226,
0.6089,
0.5949,
0.5808,
0.5665,
0.552,
0.5374,
0.5226,
0.5076,
0.4925,
0.4773,
0.4618,
0.4463,
0.4306,
0.4148,
0.3989,
0.3828,
0.3666,
0.3503,
0.3339,
0.3174,
0.3008,
0.2841,
0.2673,
0.2505,
0.2336,
0.2165,
0.1995,
0.1823,
0.1652,
0.1479,
0.1306,
0.1133,
0.096,
0.0786,
0.0612,
0.0437,
0.0263,
0.0088,
-0.0086,
-0.0261,
-0.0435,
-0.0609,
-0.0783,
-0.0957,
-0.1131,
-0.1304,
-0.1477,
-0.1649,
-0.1821,
-0.1993,
-0.2163,
-0.2333,
-0.2503,
-0.2671,
-0.2839,
-0.3006,
-0.3172,
-0.3337,
-0.3501,
-0.3664,
-0.3826,
-0.3986,
-0.4146,
-0.4304,
-0.4461,
-0.4616,
-0.4771,
-0.4923,
-0.5074,
-0.5224,
-0.5372,
-0.5518,
-0.5663,
-0.5806,
-0.5947,
-0.6087,
-0.6224,
-0.636,
-0.6494,
-0.6625,
-0.6755,
-0.6883,
-0.7008,
-0.7132,
-0.7253,
-0.7372,
-0.7489,
-0.7603,
-0.7716,
-0.7825,
-0.7933,
-0.8038,
-0.8141,
-0.8241,
-0.8338,
-0.8433,
-0.8526,
-0.8616,
-0.8703,
-0.8788,
-0.887,
-0.8949,
-0.9025,
-0.9099,
-0.917,
-0.9238,
-0.9304,
-0.9366,
-0.9426,
-0.9483,
-0.9537,
-0.9588,
-0.9636,
-0.9681,
-0.9723,
-0.9763,
-0.9799,
-0.9832,
-0.9863,
-0.989,
-0.9914,
-0.9936,
-0.9954,
-0.9969,
-0.9981,
-0.999,
-0.9997,
-1.0,
-1.0,
-0.9997,
-0.9991,
-0.9981,
-0.9969,
-0.9954,
-0.9936,
-0.9915,
-0.989,
-0.9863,
-0.9833,
-0.9799,
-0.9763,
-0.9724,
-0.9682,
-0.9637,
-0.9589,
-0.9538,
-0.9484,
-0.9427,
-0.9367,
-0.9305,
-0.9239,
-0.9171,
-0.91,
-0.9026,
-0.895,
-0.8871,
-0.8789,
-0.8704,
-0.8617,
-0.8527,
-0.8435,
-0.8339,
-0.8242,
-0.8142,
-0.8039,
-0.7934,
-0.7827,
-0.7717,
-0.7605,
-0.749,
-0.7374,
-0.7255,
-0.7133,
-0.701,
-0.6884,
-0.6757,
-0.6627,
-0.6495,
-0.6362,
-0.6226,
-0.6089,
-0.5949,
-0.5808,
-0.5665,
-0.552,
-0.5374,
-0.5226,
-0.5076,
-0.4925,
-0.4773,
-0.4618,
-0.4463,
-0.4306,
-0.4148,
-0.3989,
-0.3828,
-0.3666,
-0.3503,
-0.3339,
-0.3174,
-0.3008,
-0.2841,
-0.2673,
-0.2505,
-0.2336,
-0.2165,
-0.1995,
-0.1823,
-0.1652,
-0.1479,
-0.1306,
-0.1133,
-0.096,
-0.0786,
-0.0612,
-0.0437,
-0.0263,
-0.0088,
0.0086,
0.0261,
0.0435,
0.0609,
0.0783,
0.0957,
0.1131,
0.1304,
0.1477,
0.1649,
0.1821,
0.1993,
0.2163,
0.2333,
0.2503,
0.2671,
0.2839,
0.3006,
0.3172,
0.3337,
0.3501,
0.3664,
0.3826,
0.3986,
0.4146,
0.4304,
0.4461,
0.4616,
0.4771,
0.4923,
0.5074,
0.5224,
0.5372,
0.5518
};


const float sin_m120[360] = {
    -0.5806,
-0.5663,
-0.5518,
-0.5372,
-0.5224,
-0.5074,
-0.4923,
-0.4771,
-0.4616,
-0.4461,
-0.4304,
-0.4146,
-0.3986,
-0.3826,
-0.3664,
-0.3501,
-0.3337,
-0.3172,
-0.3006,
-0.2839,
-0.2671,
-0.2503,
-0.2333,
-0.2163,
-0.1993,
-0.1821,
-0.1649,
-0.1477,
-0.1304,
-0.1131,
-0.0957,
-0.0783,
-0.0609,
-0.0435,
-0.0261,
-0.0086,
0.0088,
0.0263,
0.0437,
0.0612,
0.0786,
0.096,
0.1133,
0.1306,
0.1479,
0.1652,
0.1823,
0.1995,
0.2165,
0.2336,
0.2505,
0.2673,
0.2841,
0.3008,
0.3174,
0.3339,
0.3503,
0.3666,
0.3828,
0.3989,
0.4148,
0.4306,
0.4463,
0.4618,
0.4773,
0.4925,
0.5076,
0.5226,
0.5374,
0.552,
0.5665,
0.5808,
0.5949,
0.6089,
0.6226,
0.6362,
0.6495,
0.6627,
0.6757,
0.6884,
0.701,
0.7133,
0.7255,
0.7374,
0.749,
0.7605,
0.7717,
0.7827,
0.7934,
0.8039,
0.8142,
0.8242,
0.8339,
0.8435,
0.8527,
0.8617,
0.8704,
0.8789,
0.8871,
0.895,
0.9026,
0.91,
0.9171,
0.9239,
0.9305,
0.9367,
0.9427,
0.9484,
0.9538,
0.9589,
0.9637,
0.9682,
0.9724,
0.9763,
0.9799,
0.9833,
0.9863,
0.989,
0.9915,
0.9936,
0.9954,
0.9969,
0.9981,
0.9991,
0.9997,
1.0,
1.0,
0.9997,
0.999,
0.9981,
0.9969,
0.9954,
0.9936,
0.9914,
0.989,
0.9863,
0.9832,
0.9799,
0.9763,
0.9723,
0.9681,
0.9636,
0.9588,
0.9537,
0.9483,
0.9426,
0.9366,
0.9304,
0.9238,
0.917,
0.9099,
0.9025,
0.8949,
0.887,
0.8788,
0.8703,
0.8616,
0.8526,
0.8433,
0.8338,
0.8241,
0.8141,
0.8038,
0.7933,
0.7825,
0.7716,
0.7603,
0.7489,
0.7372,
0.7253,
0.7132,
0.7008,
0.6883,
0.6755,
0.6625,
0.6494,
0.636,
0.6224,
0.6087,
0.5947,
0.5806,
0.5663,
0.5518,
0.5372,
0.5224,
0.5074,
0.4923,
0.4771,
0.4616,
0.4461,
0.4304,
0.4146,
0.3986,
0.3826,
0.3664,
0.3501,
0.3337,
0.3172,
0.3006,
0.2839,
0.2671,
0.2503,
0.2333,
0.2163,
0.1993,
0.1821,
0.1649,
0.1477,
0.1304,
0.1131,
0.0957,
0.0783,
0.0609,
0.0435,
0.0261,
0.0086,
-0.0088,
-0.0263,
-0.0437,
-0.0612,
-0.0786,
-0.096,
-0.1133,
-0.1306,
-0.1479,
-0.1652,
-0.1823,
-0.1995,
-0.2165,
-0.2336,
-0.2505,
-0.2673,
-0.2841,
-0.3008,
-0.3174,
-0.3339,
-0.3503,
-0.3666,
-0.3828,
-0.3989,
-0.4148,
-0.4306,
-0.4463,
-0.4618,
-0.4773,
-0.4925,
-0.5076,
-0.5226,
-0.5374,
-0.552,
-0.5665,
-0.5808,
-0.5949,
-0.6089,
-0.6226,
-0.6362,
-0.6495,
-0.6627,
-0.6757,
-0.6884,
-0.701,
-0.7133,
-0.7255,
-0.7374,
-0.749,
-0.7605,
-0.7717,
-0.7827,
-0.7934,
-0.8039,
-0.8142,
-0.8242,
-0.8339,
-0.8435,
-0.8527,
-0.8617,
-0.8704,
-0.8789,
-0.8871,
-0.895,
-0.9026,
-0.91,
-0.9171,
-0.9239,
-0.9305,
-0.9367,
-0.9427,
-0.9484,
-0.9538,
-0.9589,
-0.9637,
-0.9682,
-0.9724,
-0.9763,
-0.9799,
-0.9833,
-0.9863,
-0.989,
-0.9915,
-0.9936,
-0.9954,
-0.9969,
-0.9981,
-0.9991,
-0.9997,
-1.0,
-1.0,
-0.9997,
-0.999,
-0.9981,
-0.9969,
-0.9954,
-0.9936,
-0.9914,
-0.989,
-0.9863,
-0.9832,
-0.9799,
-0.9763,
-0.9723,
-0.9681,
-0.9636,
-0.9588,
-0.9537,
-0.9483,
-0.9426,
-0.9366,
-0.9304,
-0.9238,
-0.917,
-0.9099,
-0.9025,
-0.8949,
-0.887,
-0.8788,
-0.8703,
-0.8616,
-0.8526,
-0.8433,
-0.8338,
-0.8241,
-0.8141,
-0.8038,
-0.7933,
-0.7825,
-0.7716,
-0.7603,
-0.7489,
-0.7372,
-0.7253,
-0.7132,
-0.7008,
-0.6883,
-0.6755,
-0.6625,
-0.6494,
-0.636,
-0.6224,
-0.6087
};


#endif