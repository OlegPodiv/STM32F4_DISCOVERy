/*
����� ���� ���������� ����������

*/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __GLOBAL_VAR_H
#define __GLOBAL_VAR_H

#ifdef __cplusplus
extern "C" {
#endif
//******************************************************************************
// ������ include: ����� ������������ ������������ ����� ������������ �������
//******************************************************************************
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx_hal.h"
#include "main_module.h"
//******************************************************************************
// ������ ����������� ��������
//******************************************************************************

//******************************************************************************
// ������ ����������� �����
//******************************************************************************
typedef struct
{
/*Th01*/double D3_pump; // ������ ����������� ������. ��������� ��������. ������.����������� ��������� �����(5-110*�)
/*Th02*/double Th02; // ������ ����������� �������, ��� ���������� 3-� ������� ��������
/*Th03*/double D10_min; // ������ �� ����������� ��������� �����(����� ���������)
/*Th04*/double Th04; // ����������� ������������ ��������� ������������ �� ������ ������� �� ����������(����)
/*Th05*/double D10_max; // ����������� �������� � ������ �� ����������� ��������� ����� �� ������� �������, ����������� � ��������
/*Th06*/double D10_ignition; // ����������� ���������� �������
/*Th07*/double D3_target; // �������� ����������� ������������� ������� ��������� ������� �����.
/*Th08*/double D10_maintain; // ��������� ����������� ��������� ����� ��� �������� � ����� ������������ ��� ������ ������ ��06
/*Th09*/double D6_target; // �������� ����������� �������
/*Th10*/double D3_min; // ������ ������� ������� ����������� ������������� � ������ D3
/*Th11*/double D3_max; // ������� ������� ������� ����������� ������������� � ������ D3
/*Th12*/double D6_max; // ������������ ����������� � ������� (���)D6
/*Th13*/double D10_work; // D10 ����������� �������� � ������� ����� (��������� �����)	
double D01;  // ���������� ���������� �� 0 �� 10*�
double D02;  // ������ ���������� ��� ������ � �������������� ������. �� 0 �� 10*�	
double D04;  // ���������� ������ ���������� ��� ����������� � ������� ��� ����� �����
double D05;  // ���������� �������� ��������� ����������� ������� � �������� ��������� �������. dT/dt	
} T_MENU_TEMPERATURE;

typedef struct
{
double T01; // ����� ������� �������� \�������� ������������ �������
double T02; // ����� �������� ����� ������������(����) ������������ �������
double T03; // ����� �������(�����)
double T04; // ����� ��������� ����� 2(�������) � % �� �03
double T05; // ����� �������(�������� ������) �� 0 �� 60 ���.
double T06; // ����� ��������������� ��������� �������. �� ����� ���� ������ �05. 
							// ���������� ���� ������� �� ����� �05, 
							// ���� ������� ���������� � ��������� D03, �� ����� �05-D03
double T07; // ����� ������ ����� ������� � ������ ������(��������)
double T08; // ����� ���������� �������(�����)
double T09; // ����� ������ ����� ������� � ������ ��������� ������, ���������� % �� �10
double T10; // ����� ������ ����� ������� � ������ ��������� ������
double T11; // ����� ������ ����� ������� � ������ ��������, ����� ��������. � % �� ��05�
double T12; // ����� ������ �����2 � ������ ��������, �������  ��������. � % �� ��05�
double T13; // ����� ������ �����2 � ������ ��������, ������������  ��������. � % �� ��05�
double T14; // ����� ������ �����2 � ������ ������������, ������������  ��������. � % �� ��05�
double T15; // ����� ��������� ����� ������� �� ��������� ������� �������, �� �� ������ ��� ����� ����� �05
double T16; // ����� �������� � ����������(�� 10 �� 900 ���)
double T17; // ����� ������ �����������
double T18; // ����� ������ ������������
double T19; // ����� ������ Aux 1
double T20; // ����� ������ Aux 2
double T21; // ����� ������ ����� ������� � ������ ������ � ������������ ������ �������
double T22; // ����� ������ ����� ������� � ��������� � ������������ ������ �������.
double T23; // ����� ���������� �� ��������
double T24; // ����� �����
double T25; // ����� ���������� �� �������� ����� ������ ����� ������� � ������ �������� ������, ���������� % �� � 07
double T26; // ����� �������� �� ������� � �2
double T27; // ����� ������ ����� ������� � %% �� �14
double T28; // ����� ������ ����������������� ������� �1
double T29; // ����� �������������� ��� ���������� �����
double P05; // ����� �����(�����) �������� �������� ��� ������ ���� ����� � ���������� �� ���� �������.
double P06; // ���� ����������� �������� �������������� ( �� 1 �� 999 �����)
double P07; // ���� ������� ������������( �� 1 �� 999 �����)
double P08; // ���� Aux 1 ( �� 1 �� 999 �����)
double P09; // ���� Aux 2 ( �� 1 �� 999 �����)
double D03; // ����� �������� ��������� � ���������� ���������� ����� 1, 
							// ������������ ����� 2 � ������ ������������ ��� �������.(���� �� ������� �� ��� ������?)
double D06; // �������� ������������ ����� ������� �� ��������� � ����� ������� � ������ �������� ��� ����������� �������

} T_MENU_TIME;

typedef struct
{
uint8_t a;
uint8_t b;
}	T_BOILER_OPTIONS;

typedef enum
{
SUMMER,
WINTER	
} T_MENU_SEASON;	

//******************************************************************************
// ������ ����������� ���������� ����������
//******************************************************************************

//******************************************************************************
// ������ ���������� ���������� �������
//******************************************************************************
T_MENU_TEMPERATURE menu_temperature_init(void);
T_MENU_TIME menu_time_init(void);

void menu_temperature_save_eeprom(T_MENU_TEMPERATURE T);
T_MENU_TEMPERATURE menu_temperature_load_eeprom(void);

void menu_temperature_save_eeprom_pages(T_MENU_TEMPERATURE T);
T_MENU_TEMPERATURE menu_temperature_load_eeprom_pages(void);

void menu_time_save_eeprom(T_MENU_TIME MT);
T_MENU_TIME menu_time_load_eeprom(void);

void menu_time_save_eeprom_pages(T_MENU_TIME MT);
T_MENU_TIME menu_time_load_eeprom_pages(void);

void menu_season_save_eeprom(T_MENU_SEASON sea);
T_MENU_SEASON menu_season_load_eeprom(void);

void boiler_state_save_eeprom(T_BOILER_STATE B);
T_BOILER_STATE boiler_state_load_eeprom(void);

void last_event_save_eeprom(T_EVENT Ev);
T_EVENT last_event_load_eeprom(void);

void global_var_init(void);
void eeprom_comparing(T_MENU_TEMPERATURE t_eeprom,T_MENU_TIME mt_eeprom,T_MENU_TEMPERATURE temperatures,T_MENU_TIME times);
//******************************************************************************
// ������ ����������� ��������
//******************************************************************************
	
#ifdef __cplusplus
}
#endif

#endif /* __GLOBAL_VAR_H */

//******************************************************************************
// ENF OF FILE
//******************************************************************************

	

