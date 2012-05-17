EESchema Schematic File Version 2  date Tue 24 Apr 2012 22:08:14 BST
LIBS:74xx
LIBS:adc-dac
LIBS:analog_switches
LIBS:atmel
LIBS:audio
LIBS:cmos4000
LIBS:conn
LIBS:contrib
LIBS:cypress
LIBS:device
LIBS:digital-audio
LIBS:display
LIBS:dsp
LIBS:intel
LIBS:interface
LIBS:linear
LIBS:maxim
LIBS:memory
LIBS:microchip
LIBS:microcontrollers
LIBS:motorola
LIBS:parallax
LIBS:philips
LIBS:power
LIBS:regul
LIBS:siliconi
LIBS:special
LIBS:texas
LIBS:transistors
LIBS:valves
LIBS:xilinx
LIBS:screen_breakout-cache
EELAYER 25  0
EELAYER END
$Descr A4 11700 8267
encoding utf-8
Sheet 1 1
Title "LCD Breakout Board for BTHQ128064AVD1-COG-STF-12-LED02YG"
Date "24 apr 2012"
Rev ""
Comp "nathandumont.com"
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	4450 1850 4450 4150
Connection ~ 8550 1600
Connection ~ 8550 1700
Wire Wire Line
	8550 1800 9250 1800
Wire Wire Line
	8550 1700 9250 1700
Connection ~ 4900 4150
Wire Wire Line
	4900 4150 8250 4150
Wire Wire Line
	4050 4050 4900 4050
Wire Wire Line
	4050 3850 4550 3850
Wire Wire Line
	4550 3850 4550 2850
Connection ~ 7200 1450
Wire Wire Line
	7600 1450 7200 1450
Wire Wire Line
	7200 1650 7200 1250
Wire Wire Line
	7200 1250 7600 1250
Wire Wire Line
	4550 2850 8250 2850
Wire Wire Line
	2550 3100 2550 3600
Wire Wire Line
	7200 2250 7200 2050
Wire Wire Line
	8250 4050 7950 4050
Wire Wire Line
	8250 3950 7950 3950
Wire Wire Line
	8250 3850 7950 3850
Wire Wire Line
	8250 3750 7950 3750
Wire Wire Line
	8250 3650 7950 3650
Wire Wire Line
	8250 3550 7950 3550
Wire Wire Line
	8250 3450 7950 3450
Wire Wire Line
	8250 3350 7950 3350
Wire Wire Line
	8250 3250 7950 3250
Wire Wire Line
	8250 3150 7950 3150
Wire Wire Line
	2750 5300 2750 5200
Wire Wire Line
	2750 5200 2450 5200
Wire Wire Line
	2050 4350 1500 4350
Connection ~ 2550 3100
Connection ~ 1800 2100
Wire Wire Line
	1800 2200 1800 1100
Connection ~ 1800 1350
Wire Wire Line
	1900 1350 1800 1350
Connection ~ 1800 1850
Wire Wire Line
	1900 1850 1800 1850
Wire Wire Line
	2750 2100 2300 2100
Wire Wire Line
	2750 1600 2300 1600
Wire Wire Line
	2300 1100 2750 1100
Wire Wire Line
	6600 2650 6600 2450
Wire Wire Line
	4050 5550 8250 5550
Wire Wire Line
	4050 5450 8250 5450
Wire Wire Line
	4050 5350 8250 5350
Wire Wire Line
	4050 5250 8250 5250
Wire Wire Line
	8250 5050 4050 5050
Wire Wire Line
	8250 4850 4050 4850
Wire Wire Line
	8250 4650 4050 4650
Wire Wire Line
	8250 4450 4050 4450
Wire Wire Line
	8250 4250 4050 4250
Wire Wire Line
	6400 1150 6500 1150
Connection ~ 6400 1150
Wire Wire Line
	7950 3050 8250 3050
Wire Wire Line
	4050 4350 8250 4350
Wire Wire Line
	4050 4550 8250 4550
Wire Wire Line
	4050 4750 8250 4750
Wire Wire Line
	4050 4950 8250 4950
Wire Wire Line
	4050 5150 8250 5150
Wire Wire Line
	6600 1950 6600 1850
Connection ~ 6600 1850
Wire Wire Line
	5000 4250 5000 4050
Connection ~ 5000 4250
Wire Wire Line
	2300 1350 2750 1350
Wire Wire Line
	2300 1850 2750 1850
Wire Wire Line
	1800 1100 1900 1100
Wire Wire Line
	1800 2100 1900 2100
Wire Wire Line
	1900 1600 1800 1600
Connection ~ 1800 1600
Wire Wire Line
	2450 3100 3000 3100
Wire Wire Line
	2050 3100 1500 3100
Wire Wire Line
	2050 3600 1500 3600
Wire Wire Line
	2550 3600 2450 3600
Wire Wire Line
	2450 4350 3050 4350
Wire Wire Line
	2050 5200 1450 5200
Wire Wire Line
	6400 950  6400 1350
Wire Wire Line
	6400 1350 6500 1350
Wire Wire Line
	8250 2950 4650 2950
Wire Wire Line
	4450 1850 6900 1850
Wire Wire Line
	7600 1350 7000 1350
Wire Wire Line
	7600 1150 7000 1150
Wire Wire Line
	4650 2950 4650 3950
Wire Wire Line
	4650 3950 4050 3950
Wire Wire Line
	4900 4050 4900 5700
Wire Wire Line
	4450 4150 4050 4150
Wire Wire Line
	9250 1500 8550 1500
Wire Wire Line
	8550 1600 9250 1600
Wire Wire Line
	8550 1500 8550 1900
Connection ~ 8550 1800
$Comp
L GND #PWR01
U 1 1 4F55FB4B
P 8550 1900
F 0 "#PWR01" H 8550 1900 30  0001 C CNN
F 1 "GND" H 8550 1830 30  0001 C CNN
	1    8550 1900
	1    0    0    -1  
$EndComp
$Comp
L CONN_1 P?
U 1 1 4F4F9841
P 9400 1800
AR Path="/4F4F983A" Ref="P?"  Part="1" 
AR Path="/4F4F9841" Ref="P8"  Part="1" 
F 0 "P8" H 9480 1800 40  0000 C CNN
F 1 "CONN_1" H 9350 1840 30  0001 C CNN
	1    9400 1800
	1    0    0    -1  
$EndComp
$Comp
L CONN_1 P?
U 1 1 4F4F983D
P 9400 1700
AR Path="/4F4F983A" Ref="P?"  Part="1" 
AR Path="/4F4F983D" Ref="P7"  Part="1" 
F 0 "P7" H 9480 1700 40  0000 C CNN
F 1 "CONN_1" H 9350 1740 30  0001 C CNN
	1    9400 1700
	1    0    0    -1  
$EndComp
$Comp
L CONN_1 P4
U 1 1 4F4F983A
P 9400 1600
F 0 "P4" H 9480 1600 40  0000 C CNN
F 1 "CONN_1" H 9350 1640 30  0001 C CNN
	1    9400 1600
	1    0    0    -1  
$EndComp
$Comp
L CONN_1 P3
U 1 1 4F4F9835
P 9400 1500
F 0 "P3" H 9480 1500 40  0000 C CNN
F 1 "CONN_1" H 9350 1540 30  0001 C CNN
	1    9400 1500
	1    0    0    -1  
$EndComp
Text Label 5350 1850 0    60   ~ 0
LED_BL
Text Label 7450 1250 0    60   ~ 0
K
Text Label 7450 1350 0    60   ~ 0
A2
Text Label 7450 1150 0    60   ~ 0
A1
$Comp
L CONN_9 P2
U 1 1 4F4A9F67
P 3700 5150
F 0 "P2" V 3650 5150 60  0000 C CNN
F 1 "CONN_9" V 3750 5150 60  0000 C CNN
	1    3700 5150
	-1   0    0    -1  
$EndComp
$Comp
L CONN_9 P1
U 1 1 4F4A9F47
P 3700 4250
F 0 "P1" V 3650 4250 60  0000 C CNN
F 1 "CONN_9" V 3750 4250 60  0000 C CNN
	1    3700 4250
	-1   0    0    -1  
$EndComp
Text Label 1550 5200 0    60   ~ 0
VOUT
$Comp
L GND #PWR02
U 1 1 4F4A5975
P 2750 5300
F 0 "#PWR02" H 2750 5300 30  0001 C CNN
F 1 "GND" H 2750 5230 30  0001 C CNN
	1    2750 5300
	1    0    0    -1  
$EndComp
Text Label 2700 4350 0    60   ~ 0
C2-
Text Label 1600 4350 0    60   ~ 0
C2+
Text Label 1600 3600 0    60   ~ 0
C3+
Text Label 1600 3100 0    60   ~ 0
C1+
Text Label 2650 3100 0    60   ~ 0
C1-
$Comp
L CAPAPOL C6
U 1 1 4F495FB9
P 2250 3100
F 0 "C6" H 2300 3200 50  0000 L CNN
F 1 "2.2u" H 2300 3000 50  0000 L CNN
	1    2250 3100
	0    -1   -1   0   
$EndComp
Text Label 2450 2100 0    60   ~ 0
V4
Text Label 2450 1850 0    60   ~ 0
V3
Text Label 2450 1600 0    60   ~ 0
V2
Text Label 2450 1350 0    60   ~ 0
V1
Text Label 2450 1100 0    60   ~ 0
V0
$Comp
L GND #PWR03
U 1 1 4F4A57D1
P 1800 2200
F 0 "#PWR03" H 1800 2200 30  0001 C CNN
F 1 "GND" H 1800 2130 30  0001 C CNN
	1    1800 2200
	1    0    0    -1  
$EndComp
$Comp
L C C1
U 1 1 4F4A576D
P 2100 1100
F 0 "C1" H 2150 1200 50  0000 L CNN
F 1 "0.1u" H 2150 1000 50  0000 L CNN
	1    2100 1100
	0    -1   -1   0   
$EndComp
$Comp
L C C2
U 1 1 4F4A576C
P 2100 1350
F 0 "C2" H 2150 1450 50  0000 L CNN
F 1 "0.1u" H 2150 1250 50  0000 L CNN
	1    2100 1350
	0    -1   -1   0   
$EndComp
$Comp
L C C3
U 1 1 4F4A576B
P 2100 1600
F 0 "C3" H 2150 1700 50  0000 L CNN
F 1 "0.1u" H 2150 1500 50  0000 L CNN
	1    2100 1600
	0    -1   -1   0   
$EndComp
$Comp
L C C4
U 1 1 4F4A576A
P 2100 1850
F 0 "C4" H 2150 1950 50  0000 L CNN
F 1 "0.1u" H 2150 1750 50  0000 L CNN
	1    2100 1850
	0    -1   -1   0   
$EndComp
$Comp
L C C5
U 1 1 4F4A5769
P 2100 2100
F 0 "C5" H 2150 2200 50  0000 L CNN
F 1 "0.1u" H 2150 2000 50  0000 L CNN
	1    2100 2100
	0    -1   -1   0   
$EndComp
Text Label 8000 4050 0    60   ~ 0
VOUT
Text Label 8000 3950 0    60   ~ 0
C3+
Text Label 8000 3850 0    60   ~ 0
C1-
Text Label 8000 3750 0    60   ~ 0
C1+
Text Label 8000 3650 0    60   ~ 0
C2+
Text Label 8000 3550 0    60   ~ 0
C2-
Text Label 8000 3450 0    60   ~ 0
V4
Text Label 8000 3350 0    60   ~ 0
V3
Text Label 8000 3250 0    60   ~ 0
V2
Text Label 8000 3150 0    60   ~ 0
V1
Text Label 8000 3050 0    60   ~ 0
V0
$Comp
L +3.3V #PWR04
U 1 1 4F4A4BC1
P 5000 4050
F 0 "#PWR04" H 5000 4010 30  0001 C CNN
F 1 "+3.3V" H 5000 4160 30  0000 C CNN
	1    5000 4050
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR05
U 1 1 4F4A4BB6
P 4900 5700
F 0 "#PWR05" H 4900 5700 30  0001 C CNN
F 1 "GND" H 4900 5630 30  0001 C CNN
	1    4900 5700
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR06
U 1 1 4F4A4A59
P 6600 2650
F 0 "#PWR06" H 6600 2650 30  0001 C CNN
F 1 "GND" H 6600 2580 30  0001 C CNN
	1    6600 2650
	1    0    0    -1  
$EndComp
$Comp
L R R2
U 1 1 4F4A4A42
P 6600 2200
F 0 "R2" V 6680 2200 50  0000 C CNN
F 1 "1M" V 6600 2200 50  0000 C CNN
	1    6600 2200
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR07
U 1 1 4F4A46E8
P 7200 2250
F 0 "#PWR07" H 7200 2250 30  0001 C CNN
F 1 "GND" H 7200 2180 30  0001 C CNN
	1    7200 2250
	1    0    0    -1  
$EndComp
$Comp
L +3.3V #PWR08
U 1 1 4F4A4690
P 6400 950
F 0 "#PWR08" H 6400 910 30  0001 C CNN
F 1 "+3.3V" H 6400 1060 30  0000 C CNN
	1    6400 950 
	1    0    0    -1  
$EndComp
$Comp
L R R4
U 1 1 4F4A463E
P 6750 1150
F 0 "R4" V 6830 1150 50  0000 C CNN
F 1 "27" V 6750 1150 50  0000 C CNN
	1    6750 1150
	0    -1   -1   0   
$EndComp
$Comp
L R R5
U 1 1 4F4A4639
P 6750 1350
F 0 "R5" V 6830 1350 50  0000 C CNN
F 1 "27" V 6750 1350 50  0000 C CNN
	1    6750 1350
	0    -1   -1   0   
$EndComp
$Comp
L BSH121 Q1
U 1 1 4F4A4632
P 7100 1850
F 0 "Q1" H 7110 2020 60  0000 R CNN
F 1 "BSH121" H 7110 1700 60  0000 R CNN
	1    7100 1850
	1    0    0    -1  
$EndComp
$Comp
L CONN_4 P5
U 1 1 4F4A45B4
P 7950 1300
F 0 "P5" V 7900 1300 50  0000 C CNN
F 1 "CONN_4" V 8000 1300 50  0000 C CNN
	1    7950 1300
	1    0    0    -1  
$EndComp
$Comp
L CAPAPOL C12
U 1 1 4F496056
P 2250 5200
F 0 "C12" H 2300 5300 50  0000 L CNN
F 1 "2.2u" H 2300 5100 50  0000 L CNN
	1    2250 5200
	0    -1   1    0   
$EndComp
$Comp
L CAPAPOL C8
U 1 1 4F495FED
P 2250 3600
F 0 "C8" H 2300 3700 50  0000 L CNN
F 1 "2.2u" H 2300 3500 50  0000 L CNN
	1    2250 3600
	0    -1   1    0   
$EndComp
$Comp
L CAPAPOL C10
U 1 1 4F495FE8
P 2250 4350
F 0 "C10" H 2300 4450 50  0000 L CNN
F 1 "2.2u" H 2300 4250 50  0000 L CNN
	1    2250 4350
	0    -1   1    0   
$EndComp
$Comp
L CONN_28 P6
U 1 1 4F495EA8
P 8650 4200
F 0 "P6" H 8650 2750 60  0000 C CNN
F 1 "CONN_28" V 8650 4200 60  0000 C CNN
	1    8650 4200
	1    0    0    -1  
$EndComp
$EndSCHEMATC
