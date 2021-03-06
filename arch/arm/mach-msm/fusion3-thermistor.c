/*
 * fusion3-thermistor.c - thermistor of J-F Project
 *
 * Copyright (C) 2011 Samsung Electrnoics
 * SangYoung Son <hello.son@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include <mach/fusion3-thermistor.h>
#include <mach/sec_thermistor.h>


#ifdef CONFIG_SEC_THERMISTOR
/*Below adc table is same as batt_temp_adc table*/
#if defined(CONFIG_MACH_JF)
#if defined(CONFIG_MACH_JF_DCM) || defined(CONFIG_MACH_JF_EUR)
static struct sec_therm_adc_table temper_table_ap[] = {
	{25952,	 900},
	{25984,	 890},
	{26015,	 880},
	{26046,	 870},
	{26077,	 860},
	{26108,	 850},
	{26183,	 840},
	{26258,	 830},
	{26333,	 820},
	{26407,	 810},
	{26482,	 800},
	{26542,	 790},
	{26601,	 780},
	{26661,	 770},
	{26720,	 760},
	{26780,	 750},
	{26861,	 740},
	{26943,	 730},
	{27024,	 720},
	{27106,	 710},
	{27188,	 700},
	{27271,	 690},
	{27355,	 680},
	{27438,	 670},
	{27522,	 660},
	{27605,	 650},
	{27721,	 640},
	{27836,	 630},
	{27952,	 620},
	{28067,	 610},
	{28182,	 600},
	{28296,	 590},
	{28409,	 580},
	{28522,	 570},
	{28635,	 560},
	{28748,	 550},
	{28852,	 540},
	{28955,	 530},
	{29058,	 520},
	{29161,	 510},
	{29286,	 500},
	{29410,	 490},
	{29555,	 480},
	{29700,	 470},
	{29845,	 460},
	{29990,	 450},
	{30188,	 440},
	{30386,	 430},
	{30584,	 420},
	{30782,	 410},
	{30981,	 400},
	{31164,	 390},
	{31347,	 380},
	{31530,	 370},
	{31713,	 360},
	{31896,	 350},
	{32081,	 340},
	{32266,	 330},
	{32450,	 320},
	{32635,	 310},
	{32820,	 300},
	{33047,	 290},
	{33274,	 280},
	{33502,	 270},
	{33729,	 260},
	{33956,	 250},
	{34172,	 240},
	{34388,	 230},
	{34605,	 220},
	{34821,	 210},
	{35037,	 200},
	{35246,	 190},
	{35455,	 180},
	{35664,	 170},
	{35873,	 160},
	{36083,	 150},
	{36302,	 140},
	{36522,	 130},
	{36741,	 120},
	{36961,	 110},
	{37180,	 100},
	{37398,	  90},
	{37615,	  80},
	{37833,	  70},
	{38050,	  60},
	{38267,	  50},
	{38443,	  40},
	{38620,	  30},
	{38796,	  20},
	{38972,	  10},
	{39148,	   0},
	{39302,	 -10},
	{39455,	 -20},
	{39609,	 -30},
	{39762,	 -40},
	{39916,	 -50},
	{40050,  -60},
	{40184,	 -70},
	{40318,	 -80},
	{40452,	 -90},
	{40586,	 -100},
	{40713,	 -110},
	{40841,	 -120},
	{40968,	 -130},
	{41095,	 -140},
	{41222,	 -150},
	{41292,	 -160},
	{41363,	 -170},
	{41433,	 -180},
	{41503,	 -190},
	{41573,	 -200},
};
#else
static struct sec_therm_adc_table temper_table_ap[] = {
	{25952,	 900},
	{25984,	 890},
	{26015,	 880},
	{26046,	 870},
	{26077,	 860},
	{26108,	 850},
	{26183,	 840},
	{26258,	 830},
	{26333,	 820},
	{26407,	 810},
	{26482,	 800},
	{26542,	 790},
	{26601,	 780},
	{26661,	 770},
	{26720,	 760},
	{26780,	 750},
	{26861,	 740},
	{26943,	 730},
	{27024,	 720},
	{27106,	 710},
	{27188,	 700},
	{27271,	 690},
	{27355,	 680},
	{27438,	 670},
	{27522,	 660},
	{27605,	 650},
	{27721,	 640},
	{27836,	 630},
	{27952,	 620},
	{28067,	 610},
	{28182,	 600},
	{28296,	 590},
	{28409,	 580},
	{28522,	 570},
	{28635,	 560},
	{28748,	 550},
	{28852,	 540},
	{28955,	 530},
	{29058,	 520},
	{29161,	 510},
	{28182,	 500},
	{29410,	 490},
	{29555,	 480},
	{29700,	 470},
	{29845,	 460},
	{29990,	 450},
	{30188,	 440},
	{30386,	 430},
	{30584,	 420},
	{30782,	 410},
	{30981,	 400},
	{31164,	 390},
	{31347,	 380},
	{31530,	 370},
	{31713,	 360},
	{31896,	 350},
	{32081,	 340},
	{32266,	 330},
	{32450,	 320},
	{32635,	 310},
	{32820,	 300},
	{33047,	 290},
	{33274,	 280},
	{33502,	 270},
	{33729,	 260},
	{33956,	 250},
	{34172,	 240},
	{34388,	 230},
	{34605,	 220},
	{34821,	 210},
	{35037,	 200},
	{35246,	 190},
	{35455,	 180},
	{35664,	 170},
	{35873,	 160},
	{36083,	 150},
	{36302,	 140},
	{36522,	 130},
	{36741,	 120},
	{36961,	 110},
	{37180,	 100},
	{37398,	  90},
	{37615,	  80},
	{37833,	  70},
	{38050,	  60},
	{38267,	  50},
	{38443,	  40},
	{38620,	  30},
	{38796,	  20},
	{38972,	  10},
	{39148,	   0},
	{39302,	 -10},
	{39455,	 -20},
	{39609,	 -30},
	{39762,	 -40},
	{39916,	 -50},
	{40050,  -60},
	{40184,	 -70},
	{40318,	 -80},
	{40452,	 -90},
	{40586,	 -100},
	{40713,	 -110},
	{40841,	 -120},
	{40968,	 -130},
	{41095,	 -140},
	{41222,	 -150},
	{41292,	 -160},
	{41363,	 -170},
	{41433,	 -180},
	{41503,	 -190},
	{41573,	 -200},
};
#endif
#endif

/* when the next level is same as prev, returns -1 */
static int get_fusion3_siop_level(int temp)
{
	static int prev_temp = 400;
	static int prev_level;
	int level = -1;

#if defined(CONFIG_MACH_JF_DCM) || defined(CONFIG_MACH_JF_EUR)
	/* This is only for JPN JF-DCM model, currently the SIOP is not using this function.
	    However, the JPN vendor(DoCoMo) wants to implement the Camera APP shutdown 
	    functionality to avoid over-heat damage. For this, only JPN model gives thermistor value
	    from the driver layer to platform layer. In this routine, the "notify_change_of_temperature()"
	    function gives thermistor value and also SIOP value together. This SIOP value is invalid information
	    and could give an effect to SIOP APP. That is why this enforcing return code is added.
	*/
	return -1;
#endif

	if (temp > prev_temp) {
		if (temp >= 540)
			level = 4;
		else if (temp >= 530)
			level = 3;
		else if (temp >= 480)
			level = 2;
		else if (temp >= 440)
			level = 1;
		else
			level = 0;
	} else {
		if (temp < 410)
			level = 0;
		else if (temp < 440)
			level = 1;
		else if (temp < 480)
			level = 2;
		else if (temp < 530)
			level = 3;
		else
			level = 4;

		if (level > prev_level)
			level = prev_level;
	}

	prev_temp = temp;
	if (prev_level == level)
		return -1;

	prev_level = level;

	return level;
}

#if defined(CONFIG_MACH_JF_DCM) || defined(CONFIG_MACH_JF_EUR)
static struct sec_therm_platform_data sec_therm_pdata = {
	.adc_arr_size	= ARRAY_SIZE(temper_table_ap),
	.adc_table	= temper_table_ap,
	.polling_interval = 30 * 1000, /* msecs */
	.get_siop_level = get_fusion3_siop_level,
	.no_polling     = 0,
};
#else
static struct sec_therm_platform_data sec_therm_pdata = {
	.adc_arr_size	= ARRAY_SIZE(temper_table_ap),
	.adc_table	= temper_table_ap,
	.polling_interval = 30 * 1000, /* msecs */
	.get_siop_level = get_fusion3_siop_level,
	.no_polling     = 1,
};
#endif

struct platform_device sec_device_thermistor = {
	.name = "sec-thermistor",
	.id = -1,
	.dev.platform_data = &sec_therm_pdata,
};

#endif
