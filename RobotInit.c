#include <stdio.h>
#include <stdlib.h>
#include "Definitions.h"

void RoboInit(){
Controller_Init();
ARM_Init();
LEG_Init();
}
void Robo_Display(){
    printf("\n\n---------------------------------------\n");
    printf("Right ARM Motor Volt     : %i\n",RA_M.volt);
    printf("Left ARM Motor Volt      : %i\n",LA_M.volt);
    printf("Right LEG Motor Volt     : %i\n",RL_M.volt);
    printf("Left LEG Motor Volt      : %i\n",LL_M.volt);
    printf("\n---------------------------------------\n\n");
    printf("Right ARM Shoulder Volt  : %i\n",RA_M.volt_send->s.volt);
    printf("Right ARM Elbow Volt     : %i\n",RA_M.volt_send->e.volt);
    printf("Right ARM Wrist Volt     : %i\n",RA_M.volt_send->w.volt);
    printf("Right ARM Finger Volt    : %i\n",RA_M.volt_send->f.volt);
    printf("\n---------------------------------------\n\n");
    printf("Left ARM Shoulder Volt   : %i\n",LA_M.volt_send->s.volt);
    printf("Left ARM Elbow Volt      : %i\n",LA_M.volt_send->e.volt);
    printf("Left ARM Wrist Volt      : %i\n",LA_M.volt_send->w.volt);
    printf("Left ARM Finger Volt     : %i\n",LA_M.volt_send->f.volt);
    printf("\n---------------------------------------\n\n");
    printf("Right LEG Waist End volt : %i\n",RL_M.volt_send->we.volt);
    printf("Right LEG Knee volt      : %i\n",RL_M.volt_send->k.volt);
    printf("Right LEG Foot volt      : %i\n",RL_M.volt_send->ft.volt);
    printf("\n---------------------------------------\n\n");
    printf("Left LEG Waist End volt : %i\n",LL_M.volt_send->we.volt);
    printf("Left LEG Knee volt      : %i\n",LL_M.volt_send->k.volt);
    printf("Left LEG Foot volt      : %i\n",LL_M.volt_send->ft.volt);
}

