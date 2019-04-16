
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

/*
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
*/

/*
const float current[1024] = {
    -50.0000, 
    -49.9355, 
    -49.8710, 
    -49.8065, 
    -49.7419, 
    -49.6774, 
    -49.6129, 
    -49.5484, 
    -49.4839, 
    -49.4194, 
    -49.3548, 
    -49.2903, 
    -49.2258, 
    -49.1613, 
    -49.0968, 
    -49.0323, 
    -48.9677, 
    -48.9032, 
    -48.8387, 
    -48.7742, 
    -48.7097, 
    -48.6452, 
    -48.5806, 
    -48.5161, 
    -48.4516, 
    -48.3871, 
    -48.3226, 
    -48.2581, 
    -48.1935, 
    -48.1290, 
    -48.0645, 
    -48.0000, 
    -47.9355, 
    -47.8710, 
    -47.8065, 
    -47.7419, 
    -47.6774, 
    -47.6129, 
    -47.5484, 
    -47.4839, 
    -47.4194, 
    -47.3548, 
    -47.2903, 
    -47.2258, 
    -47.1613, 
    -47.0968, 
    -47.0323, 
    -46.9677, 
    -46.9032, 
    -46.8387, 
    -46.7742, 
    -46.7097, 
    -46.6452, 
    -46.5806, 
    -46.5161, 
    -46.4516, 
    -46.3871, 
    -46.3226, 
    -46.2581, 
    -46.1935, 
    -46.1290, 
    -46.0645, 
    -46.0000, 
    -45.9355, 
    -45.8710, 
    -45.8065, 
    -45.7419, 
    -45.6774, 
    -45.6129, 
    -45.5484, 
    -45.4839, 
    -45.4194, 
    -45.3548, 
    -45.2903, 
    -45.2258, 
    -45.1613, 
    -45.0968, 
    -45.0323, 
    -44.9677, 
    -44.9032, 
    -44.8387, 
    -44.7742, 
    -44.7097, 
    -44.6452, 
    -44.5806, 
    -44.5161, 
    -44.4516, 
    -44.3871, 
    -44.3226, 
    -44.2581, 
    -44.1935, 
    -44.1290, 
    -44.0645, 
    -44.0000, 
    -43.9355, 
    -43.8710, 
    -43.8065, 
    -43.7419, 
    -43.6774, 
    -43.6129, 
    -43.5484, 
    -43.4839, 
    -43.4194, 
    -43.3548, 
    -43.2903, 
    -43.2258, 
    -43.1613, 
    -43.0968, 
    -43.0323, 
    -42.9677, 
    -42.9032, 
    -42.8387, 
    -42.7742, 
    -42.7097, 
    -42.6452, 
    -42.5806, 
    -42.5161, 
    -42.4516, 
    -42.3871, 
    -42.3226, 
    -42.2581, 
    -42.1935, 
    -42.1290, 
    -42.0645, 
    -42.0000, 
    -41.9355, 
    -41.8710, 
    -41.8065, 
    -41.7419, 
    -41.6774, 
    -41.6129, 
    -41.5484, 
    -41.4839, 
    -41.4194, 
    -41.3548, 
    -41.2903, 
    -41.2258, 
    -41.1613, 
    -41.0968, 
    -41.0323, 
    -40.9677, 
    -40.9032, 
    -40.8387, 
    -40.7742, 
    -40.7097, 
    -40.6452, 
    -40.5806, 
    -40.5161, 
    -40.4516, 
    -40.3871, 
    -40.3226, 
    -40.2581, 
    -40.1935, 
    -40.1290, 
    -40.0645, 
    -40.0000, 
    -39.9355, 
    -39.8710, 
    -39.8065, 
    -39.7419, 
    -39.6774, 
    -39.6129, 
    -39.5484, 
    -39.4839, 
    -39.4194, 
    -39.3548, 
    -39.2903, 
    -39.2258, 
    -39.1613, 
    -39.0968, 
    -39.0323, 
    -38.9677, 
    -38.9032, 
    -38.8387, 
    -38.7742, 
    -38.7097, 
    -38.6452, 
    -38.5806, 
    -38.5161, 
    -38.4516, 
    -38.3871, 
    -38.3226, 
    -38.2581, 
    -38.1935, 
    -38.1290, 
    -38.0645, 
    -38.0000, 
    -37.9355, 
    -37.8710, 
    -37.8065, 
    -37.7419, 
    -37.6774, 
    -37.6129, 
    -37.5484, 
    -37.4839, 
    -37.4194, 
    -37.3548, 
    -37.2903, 
    -37.2258, 
    -37.1613, 
    -37.0968, 
    -37.0323, 
    -36.9677, 
    -36.9032, 
    -36.8387, 
    -36.7742, 
    -36.7097, 
    -36.6452, 
    -36.5806, 
    -36.5161, 
    -36.4516, 
    -36.3871, 
    -36.3226, 
    -36.2581, 
    -36.1935, 
    -36.1290, 
    -36.0645, 
    -36.0000, 
    -35.9355, 
    -35.8710, 
    -35.8065, 
    -35.7419, 
    -35.6774, 
    -35.6129, 
    -35.5484, 
    -35.4839, 
    -35.4194, 
    -35.3548, 
    -35.2903, 
    -35.2258, 
    -35.1613, 
    -35.0968, 
    -35.0323, 
    -34.9677, 
    -34.9032, 
    -34.8387, 
    -34.7742, 
    -34.7097, 
    -34.6452, 
    -34.5806, 
    -34.5161, 
    -34.4516, 
    -34.3871, 
    -34.3226, 
    -34.2581, 
    -34.1935, 
    -34.1290, 
    -34.0645, 
    -34.0000, 
    -33.9355, 
    -33.8710, 
    -33.8065, 
    -33.7419, 
    -33.6774, 
    -33.6129, 
    -33.5484, 
    -33.4839, 
    -33.4194, 
    -33.3548, 
    -33.2903, 
    -33.2258, 
    -33.1613, 
    -33.0968, 
    -33.0323, 
    -32.9677, 
    -32.9032, 
    -32.8387, 
    -32.7742, 
    -32.7097, 
    -32.6452, 
    -32.5806, 
    -32.5161, 
    -32.4516, 
    -32.3871, 
    -32.3226, 
    -32.2581, 
    -32.1935, 
    -32.1290, 
    -32.0645, 
    -32.0000, 
    -31.9355, 
    -31.8710, 
    -31.8065, 
    -31.7419, 
    -31.6774, 
    -31.6129, 
    -31.5484, 
    -31.4839, 
    -31.4194, 
    -31.3548, 
    -31.2903, 
    -31.2258, 
    -31.1613, 
    -31.0968, 
    -31.0323, 
    -30.9677, 
    -30.9032, 
    -30.8387, 
    -30.7742, 
    -30.7097, 
    -30.6452, 
    -30.5806, 
    -30.5161, 
    -30.4516, 
    -30.3871, 
    -30.3226, 
    -30.2581, 
    -30.1935, 
    -30.1290, 
    -30.0645, 
    -30.0000, 
    -29.9355, 
    -29.8710, 
    -29.8065, 
    -29.7419, 
    -29.6774, 
    -29.6129, 
    -29.5484, 
    -29.4839, 
    -29.4194, 
    -29.3548, 
    -29.2903, 
    -29.2258, 
    -29.1613, 
    -29.0968, 
    -29.0323, 
    -28.9677, 
    -28.9032, 
    -28.8387, 
    -28.7742, 
    -28.7097, 
    -28.6452, 
    -28.5806, 
    -28.5161, 
    -28.4516, 
    -28.3871, 
    -28.3226, 
    -28.2581, 
    -28.1935, 
    -28.1290, 
    -28.0645, 
    -28.0000, 
    -27.9355, 
    -27.8710, 
    -27.8065, 
    -27.7419, 
    -27.6774, 
    -27.6129, 
    -27.5484, 
    -27.4839, 
    -27.4194, 
    -27.3548, 
    -27.2903, 
    -27.2258, 
    -27.1613, 
    -27.0968, 
    -27.0323, 
    -26.9677, 
    -26.9032, 
    -26.8387, 
    -26.7742, 
    -26.7097, 
    -26.6452, 
    -26.5806, 
    -26.5161, 
    -26.4516, 
    -26.3871, 
    -26.3226, 
    -26.2581, 
    -26.1935, 
    -26.1290, 
    -26.0645, 
    -26.0000, 
    -25.9355, 
    -25.8710, 
    -25.8065, 
    -25.7419, 
    -25.6774, 
    -25.6129, 
    -25.5484, 
    -25.4839, 
    -25.4194, 
    -25.3548, 
    -25.2903, 
    -25.2258, 
    -25.1613, 
    -25.0968, 
    -25.0323, 
    -24.9677, 
    -24.9032, 
    -24.8387, 
    -24.7742, 
    -24.7097, 
    -24.6452, 
    -24.5806, 
    -24.5161, 
    -24.4516, 
    -24.3871, 
    -24.3226, 
    -24.2581, 
    -24.1935, 
    -24.1290, 
    -24.0645, 
    -24.0000, 
    -23.9355, 
    -23.8710, 
    -23.8065, 
    -23.7419, 
    -23.6774, 
    -23.6129, 
    -23.5484, 
    -23.4839, 
    -23.4194, 
    -23.3548, 
    -23.2903, 
    -23.2258, 
    -23.1613, 
    -23.0968, 
    -23.0323, 
    -22.9677, 
    -22.9032, 
    -22.8387, 
    -22.7742, 
    -22.7097, 
    -22.6452, 
    -22.5806, 
    -22.5161, 
    -22.4516, 
    -22.3871, 
    -22.3226, 
    -22.2581, 
    -22.1935, 
    -22.1290, 
    -22.0645, 
    -22.0000, 
    -21.9355, 
    -21.8710, 
    -21.8065, 
    -21.7419, 
    -21.6774, 
    -21.6129, 
    -21.5484, 
    -21.4839, 
    -21.4194, 
    -21.3548, 
    -21.2903, 
    -21.2258, 
    -21.1613, 
    -21.0968, 
    -21.0323, 
    -20.9677, 
    -20.9032, 
    -20.8387, 
    -20.7742, 
    -20.7097, 
    -20.6452, 
    -20.5806, 
    -20.5161, 
    -20.4516, 
    -20.3871, 
    -20.3226, 
    -20.2581, 
    -20.1935, 
    -20.1290, 
    -20.0645, 
    -20.0000, 
    -19.9355, 
    -19.8710, 
    -19.8065, 
    -19.7419, 
    -19.6774, 
    -19.6129, 
    -19.5484, 
    -19.4839, 
    -19.4194, 
    -19.3548, 
    -19.2903, 
    -19.2258, 
    -19.1613, 
    -19.0968, 
    -19.0323, 
    -18.9677, 
    -18.9032, 
    -18.8387, 
    -18.7742, 
    -18.7097, 
    -18.6452, 
    -18.5806, 
    -18.5161, 
    -18.4516, 
    -18.3871, 
    -18.3226, 
    -18.2581, 
    -18.1935, 
    -18.1290, 
    -18.0645, 
    -18.0000, 
    -17.9355, 
    -17.8710, 
    -17.8065, 
    -17.7419, 
    -17.6774, 
    -17.6129, 
    -17.5484, 
    -17.4839, 
    -17.4194, 
    -17.3548, 
    -17.2903, 
    -17.2258, 
    -17.1613, 
    -17.0968, 
    -17.0323, 
    -16.9677, 
    -16.9032, 
    -16.8387, 
    -16.7742, 
    -16.7097, 
    -16.6452, 
    -16.5806, 
    -16.5161, 
    -16.4516, 
    -16.3871, 
    -16.3226, 
    -16.2581, 
    -16.1935, 
    -16.1290, 
    -16.0645, 
    -16.0000, 
    -15.9355, 
    -15.8710, 
    -15.8065, 
    -15.7419, 
    -15.6774, 
    -15.6129, 
    -15.5484, 
    -15.4839, 
    -15.4194, 
    -15.3548, 
    -15.2903, 
    -15.2258, 
    -15.1613, 
    -15.0968, 
    -15.0323, 
    -14.9677, 
    -14.9032, 
    -14.8387, 
    -14.7742, 
    -14.7097, 
    -14.6452, 
    -14.5806, 
    -14.5161, 
    -14.4516, 
    -14.3871, 
    -14.3226, 
    -14.2581, 
    -14.1935, 
    -14.1290, 
    -14.0645, 
    -14.0000, 
    -13.9355, 
    -13.8710, 
    -13.8065, 
    -13.7419, 
    -13.6774, 
    -13.6129, 
    -13.5484, 
    -13.4839, 
    -13.4194, 
    -13.3548, 
    -13.2903, 
    -13.2258, 
    -13.1613, 
    -13.0968, 
    -13.0323, 
    -12.9677, 
    -12.9032, 
    -12.8387, 
    -12.7742, 
    -12.7097, 
    -12.6452, 
    -12.5806, 
    -12.5161, 
    -12.4516, 
    -12.3871, 
    -12.3226, 
    -12.2581, 
    -12.1935, 
    -12.1290, 
    -12.0645, 
    -12.0000, 
    -11.9355, 
    -11.8710, 
    -11.8065, 
    -11.7419, 
    -11.6774, 
    -11.6129, 
    -11.5484, 
    -11.4839, 
    -11.4194, 
    -11.3548, 
    -11.2903, 
    -11.2258, 
    -11.1613, 
    -11.0968, 
    -11.0323, 
    -10.9677, 
    -10.9032, 
    -10.8387, 
    -10.7742, 
    -10.7097, 
    -10.6452, 
    -10.5806, 
    -10.5161, 
    -10.4516, 
    -10.3871, 
    -10.3226, 
    -10.2581, 
    -10.1935, 
    -10.1290, 
    -10.0645, 
    -10.0000, 
    -9.9355, 
    -9.8710, 
    -9.8065, 
    -9.7419, 
    -9.6774, 
    -9.6129, 
    -9.5484, 
    -9.4839, 
    -9.4194, 
    -9.3548, 
    -9.2903, 
    -9.2258, 
    -9.1613, 
    -9.0968, 
    -9.0323, 
    -8.9677, 
    -8.9032, 
    -8.8387, 
    -8.7742, 
    -8.7097, 
    -8.6452, 
    -8.5806, 
    -8.5161, 
    -8.4516, 
    -8.3871, 
    -8.3226, 
    -8.2581, 
    -8.1935, 
    -8.1290, 
    -8.0645, 
    -8.0000, 
    -7.9355, 
    -7.8710, 
    -7.8065, 
    -7.7419, 
    -7.6774, 
    -7.6129, 
    -7.5484, 
    -7.4839, 
    -7.4194, 
    -7.3548, 
    -7.2903, 
    -7.2258, 
    -7.1613, 
    -7.0968, 
    -7.0323, 
    -6.9677, 
    -6.9032, 
    -6.8387, 
    -6.7742, 
    -6.7097, 
    -6.6452, 
    -6.5806, 
    -6.5161, 
    -6.4516, 
    -6.3871, 
    -6.3226, 
    -6.2581, 
    -6.1935, 
    -6.1290, 
    -6.0645, 
    -6.0000, 
    -5.9355, 
    -5.8710, 
    -5.8065, 
    -5.7419, 
    -5.6774, 
    -5.6129, 
    -5.5484, 
    -5.4839, 
    -5.4194, 
    -5.3548, 
    -5.2903, 
    -5.2258, 
    -5.1613, 
    -5.0968, 
    -5.0323, 
    -4.9677, 
    -4.9032, 
    -4.8387, 
    -4.7742, 
    -4.7097, 
    -4.6452, 
    -4.5806, 
    -4.5161, 
    -4.4516, 
    -4.3871, 
    -4.3226, 
    -4.2581, 
    -4.1935, 
    -4.1290, 
    -4.0645, 
    -4.0000, 
    -3.9355, 
    -3.8710, 
    -3.8065, 
    -3.7419, 
    -3.6774, 
    -3.6129, 
    -3.5484, 
    -3.4839, 
    -3.4194, 
    -3.3548, 
    -3.2903, 
    -3.2258, 
    -3.1613, 
    -3.0968, 
    -3.0323, 
    -2.9677, 
    -2.9032, 
    -2.8387, 
    -2.7742, 
    -2.7097, 
    -2.6452, 
    -2.5806, 
    -2.5161, 
    -2.4516, 
    -2.3871, 
    -2.3226, 
    -2.2581, 
    -2.1935, 
    -2.1290, 
    -2.0645, 
    -2.0000, 
    -1.9355, 
    -1.8710, 
    -1.8065, 
    -1.7419, 
    -1.6774, 
    -1.6129, 
    -1.5484, 
    -1.4839, 
    -1.4194, 
    -1.3548, 
    -1.2903, 
    -1.2258, 
    -1.1613, 
    -1.0968, 
    -1.0323, 
    -0.9677, 
    -0.9032, 
    -0.8387, 
    -0.7742, 
    -0.7097, 
    -0.6452, 
    -0.5806, 
    -0.5161, 
    -0.4516, 
    -0.3871, 
    -0.3226, 
    -0.2581, 
    -0.1935, 
    -0.1290, 
    -0.0645, 
    0.0000, // .0644
    0.0645, 
    0.1290, 
    0.1935, 
    0.2581, 
    0.3226, 
    0.3871, 
    0.4516, 
    0.5161, 
    0.5806, 
    0.6452, 
    0.7097, 
    0.7742, 
    0.8387, 
    0.9032, 
    0.9677, 
    1.0323, 
    1.0968, 
    1.1613, 
    1.2258, 
    1.2903, 
    1.3548, 
    1.4194, 
    1.4839, 
    1.5484, 
    1.6129, 
    1.6774, 
    1.7419, 
    1.8065, 
    1.8710, 
    1.9355, 
    2.0000, 
    2.0645, 
    2.1290, 
    2.1935, 
    2.2581, 
    2.3226, 
    2.3871, 
    2.4516, 
    2.5161, 
    2.5806, 
    2.6452, 
    2.7097, 
    2.7742, 
    2.8387, 
    2.9032, 
    2.9677, 
    3.0323, 
    3.0968, 
    3.1613, 
    3.2258, 
    3.2903, 
    3.3548, 
    3.4194, 
    3.4839, 
    3.5484, 
    3.6129, 
    3.6774, 
    3.7419, 
    3.8065, 
    3.8710, 
    3.9355, 
    4.0000, 
    4.0645, 
    4.1290, 
    4.1935, 
    4.2581, 
    4.3226, 
    4.3871, 
    4.4516, 
    4.5161, 
    4.5806, 
    4.6452, 
    4.7097, 
    4.7742, 
    4.8387, 
    4.9032, 
    4.9677, 
    5.0323, 
    5.0968, 
    5.1613, 
    5.2258, 
    5.2903, 
    5.3548, 
    5.4194, 
    5.4839, 
    5.5484, 
    5.6129, 
    5.6774, 
    5.7419, 
    5.8065, 
    5.8710, 
    5.9355, 
    6.0000, 
    6.0645, 
    6.1290, 
    6.1935, 
    6.2581, 
    6.3226, 
    6.3871, 
    6.4516, 
    6.5161, 
    6.5806, 
    6.6452, 
    6.7097, 
    6.7742, 
    6.8387, 
    6.9032, 
    6.9677, 
    7.0323, 
    7.0968, 
    7.1613, 
    7.2258, 
    7.2903, 
    7.3548, 
    7.4194, 
    7.4839, 
    7.5484, 
    7.6129, 
    7.6774, 
    7.7419, 
    7.8065, 
    7.8710, 
    7.9355, 
    8.0000, 
    8.0645, 
    8.1290, 
    8.1935, 
    8.2581, 
    8.3226, 
    8.3871, 
    8.4516, 
    8.5161, 
    8.5806, 
    8.6452, 
    8.7097, 
    8.7742, 
    8.8387, 
    8.9032, 
    8.9677, 
    9.0323, 
    9.0968, 
    9.1613, 
    9.2258, 
    9.2903, 
    9.3548, 
    9.4194, 
    9.4839, 
    9.5484, 
    9.6129, 
    9.6774, 
    9.7419, 
    9.8065, 
    9.8710, 
    9.9355, 
    10.0000, 
    10.0645, 
    10.1290, 
    10.1935, 
    10.2581, 
    10.3226, 
    10.3871, 
    10.4516, 
    10.5161, 
    10.5806, 
    10.6452, 
    10.7097, 
    10.7742, 
    10.8387, 
    10.9032, 
    10.9677, 
    11.0323, 
    11.0968, 
    11.1613, 
    11.2258, 
    11.2903, 
    11.3548, 
    11.4194, 
    11.4839, 
    11.5484, 
    11.6129, 
    11.6774, 
    11.7419, 
    11.8065, 
    11.8710, 
    11.9355, 
    12.0000, 
    12.0645, 
    12.1290, 
    12.1935, 
    12.2581, 
    12.3226, 
    12.3871, 
    12.4516, 
    12.5161, 
    12.5806, 
    12.6452, 
    12.7097, 
    12.7742, 
    12.8387, 
    12.9032, 
    12.9677, 
    13.0323, 
    13.0968, 
    13.1613, 
    13.2258, 
    13.2903, 
    13.3548, 
    13.4194, 
    13.4839, 
    13.5484, 
    13.6129, 
    13.6774, 
    13.7419, 
    13.8065, 
    13.8710, 
    13.9355, 
    14.0000, 
    14.0645, 
    14.1290, 
    14.1935, 
    14.2581, 
    14.3226, 
    14.3871, 
    14.4516, 
    14.5161, 
    14.5806, 
    14.6452, 
    14.7097, 
    14.7742, 
    14.8387, 
    14.9032, 
    14.9677, 
    15.0323, 
    15.0968, 
    15.1613, 
    15.2258, 
    15.2903, 
    15.3548, 
    15.4194, 
    15.4839, 
    15.5484, 
    15.6129, 
    15.6774, 
    15.7419, 
    15.8065, 
    15.8710, 
    15.9355, 
    16.0000
};
*/

const float current[128] = {
    -50.0,
-49.4804,
-48.9608,
-48.4412,
-47.9216,
-47.402,
-46.8824,
-46.3628,
-45.8432,
-45.3236,
-44.804,
-44.2844,
-43.7648,
-43.2452,
-42.7256,
-42.206,
-41.6864,
-41.1668,
-40.6472,
-40.1276,
-39.608,
-39.0884,
-38.5688,
-38.0492,
-37.5296,
-37.01,
-36.4904,
-35.9708,
-35.4512,
-34.9316,
-34.412,
-33.8924,
-33.3728,
-32.8532,
-32.3336,
-31.814,
-31.2944,
-30.7748,
-30.2552,
-29.7356,
-29.216,
-28.6964,
-28.1768,
-27.6572,
-27.1376,
-26.618,
-26.0984,
-25.5788,
-25.0592,
-24.5396,
-24.02,
-23.5004,
-22.9808,
-22.4612,
-21.9416,
-21.422,
-20.9024,
-20.3828,
-19.8632,
-19.3436,
-18.824,
-18.3044,
-17.7848,
-17.2652,
-16.7456,
-16.226,
-15.7064,
-15.1868,
-14.6672,
-14.1476,
-13.628,
-13.1084,
-12.5888,
-12.0692,
-11.5496,
-11.03,
-10.5104,
-9.9908,
-9.4712,
-8.9516,
-8.432,
-7.9124,
-7.3928,
-6.8732,
-6.3536,
-5.834,
-5.3144,
-4.7948,
-4.2752,
-3.7556,
-3.236,
-2.7164,
-2.1968,
-1.6772,
-1.1576,
-0.638,
-0.1184,
0.4012,
0.9208,
1.4404,
1.96,
2.4796,
2.9992,
3.5188,
4.0384,
4.558,
5.0776,
5.5972,
6.1168,
6.6364,
7.156,
7.6756,
8.1952,
8.7148,
9.2344,
9.754,
10.2736,
10.7932,
11.3128,
11.8324,
12.352,
12.8716,
13.3912,
13.9108,
14.4304,
14.95,
15.4696
};

#endif