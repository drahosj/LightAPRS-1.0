
#ifndef GEOFENCE_H
#define GEOFENCE_H


#include "stdint.h"


// GEOFENCE ARRAYS (longitude, latitude)

static float ArgParUruF[] = {
	-57.79910,		-18.67750,
	-53.48140,		-26.66710,
	-57.13990,		-29.77390,
	-49.62520,		-34.51560,
	-60.24900,		-58.56250,
	-73.49850,		-50.35950,
	-67.54390,		-21.43260,
	-57.79910,		-18.67750
};

static float AustraliaF[] = {
	147.56840,		-46.92030,
	166.02540,		-29.15220,
	144.14060,		-9.18890,
	98.78910,		-11.69530,
	112.41210,		-39.77480,
	147.56840,		-46.92030
};

static float BrazilF[] = {
	-57.04100,		-29.76440,
	-49.65820,		-34.45220,
	-28.30080,		-5.87830,
	-51.50390,		4.30260,
	-60.55660,		5.00340,
	-74.17970,		-6.49000,
	-57.74410,		-18.56290,
	-53.34960,		-26.66710,
	-57.04100,		-29.76440
};

static float ChinaF[] = {
	87.18750,		49.38240,
	77.51104,		44.59703,
	71.63090,		36.94990,
	93.03226,		25.16517,
	110.39060,		15.96130,
	124.76074,		18.47961,
	124.54103,		36.73889,
	132.17135,		41.06670,
	136.35137,		47.03273,
	123.44237,		54.41894,
	104.58986,		45.05798,
	87.18750,		49.38240
};

static float CostNicPanF[] = {
	-88.76950,		11.99630,
	-80.20020,		4.80640,
	-76.61870,		9.42740,
	-82.70510,		15.39010,
	-88.76950,		11.99630
};

static float FranceF[] = {
	7.95410,		48.76340,
	1.91160,		50.94460,
	-3.64750,		48.29780,
	-1.49410,		43.34120,
	2.98830,		42.56930,
	7.40480,		43.78700,
	5.88870,		46.45300,
	7.95410,		48.76340
};

static float JapanF[] = {
	138.71337,		49.79545,
	130.96153,		38.83591,
	124.66191,		34.18805,
	124.76075,		24.68693,
	144.22850,		23.40280,
	156.09372,		49.72447,
	138.71337,		49.79545
};

static float LatviaF[] = {
	26.64180,		55.68380,
	28.17990,		56.20670,
	27.78440,		57.33250,
	25.00490,		58.00230,
	24.14790,		57.17200,
	21.78590,		57.68650,
	20.81910,		56.07200,
	22.19240,		56.44430,
	25.68600,		56.18230,
	26.64180,		55.68380
};

static float New_ZealandF[] = {
	179.99990,		-37.78810,
	179.99990,		-55.22580,
	154.33590,		-45.82880,
	172.26560,		-28.76770,
	179.99990,		-37.78810
};

static float RomaniaF[] = {
	27.12520,		47.95310,
	22.95040,		47.97520,
	20.63230,		45.85940,
	23.24710,		43.86620,
	29.13570,		43.85040,
	27.12520,		47.95310
};

static float South_KoreaF[] = {
	132.17653,		41.01310,
	124.61794,		36.70367,
	124.65089,		34.26179,
	130.87903,		38.87847,
	132.17653,		41.01310
};

static float ThailandF[] = {
	110.23679,		15.96138,
	93.60347,		24.72692,
	94.89994,		6.03131,
	104.89745,		6.07500,
	110.23679,		15.96138
};

static float  UKF[] = {
	-0.65920,		60.97310,
	-7.58060,		58.07790,
	-8.21780,		54.23960,
	-4.76810,		53.80070,
	-5.86670,		49.76710,
	1.30740,		50.85450,
	1.86770,		52.78950,
	-2.04350,		55.97380,
	-0.65920,		60.97310
};

static float VenezuelaF[] = {
	-66.65410,		0.18680,
	-60.99610,		5.41910,
	-59.52390,		9.38400,
	-72.15820,		12.49020,
	-72.48780,		7.10090,
	-67.96140,		5.72530,
	-66.65410,		0.18680
};


// VARIABLES
extern uint32_t GEOFENCE_APRS_frequency; 
extern uint32_t GEOFENCE_no_tx;



// FUNCTIONS
int32_t pointInPolygon(int32_t polyCorners, int32_t * polygon, int32_t latitude, int32_t longitude);
int32_t pointInPolygonF(int32_t polyCorners, float * polygon, float latitude, float longitude);
void GEOFENCE_position(float latitude, float longitude);



#endif 