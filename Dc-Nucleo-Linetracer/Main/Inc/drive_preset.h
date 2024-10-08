/*
 * drive_preset.h
 */

#ifndef INC_DRIVE_PRESET_H_
#define INC_DRIVE_PRESET_H_

#include <stdint.h>
#include <stdbool.h>
#include "init.h"



void	Pre_Drive_Setting();
void	Drive_Optimize_Setting();
void	Pre_Drive_Read_Map();
void	Pre_Drive_Second_Quick();
void	Pre_Drive_Third_Quick();

void	Drive_Last_Spurt();
void	Drive_Read_Mark();
void	Pre_Drive_Var_Init();


void	Time_Attack_Setting();


typedef struct	s_driveMenu_Float {
		volatile char		valName[MAX_OLED_LEN];
		volatile float		*val;
		volatile float		changeVal;
}				t_driveMenu_Float;


typedef struct	s_driveMenu_Int {
		volatile char		valName[MAX_OLED_LEN];
		volatile uint8_t	*val;
		volatile uint8_t	changeVal;
}				t_driveMenu_Int;

#endif
