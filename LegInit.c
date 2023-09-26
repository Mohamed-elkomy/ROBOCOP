#include <stdio.h>
#include <stdlib.h>
#include "Definitions.h"

void LEG_Init(){
     if(RL_M.volt == VOLT_HIGH){
        RL_M.volt_send=&Right_Leg;
        RL_M.volt_send->volt = VOLT_HIGH;
    }
    if(LL_M.volt == VOLT_HIGH){
        LL_M.volt_send=&Left_Leg;
        LL_M.volt_send->volt= VOLT_HIGH;
    }
    printf("\n\n ARM Initialized By motor Successfully .\n");
    if(Left_Leg.volt==VOLT_HIGH){
            Left_Leg.we.volt=VOLT_HIGH;
            Left_Leg.we.knee_ptr=&Left_Leg.k;
            printf("\nLeft Waist End initialized Successfully.");

    }
    if(Right_Leg.volt==VOLT_HIGH){
            Right_Leg.we.volt=VOLT_HIGH;
            Right_Leg.we.knee_ptr=&Right_Leg.k;
            printf("\nRight Waist End initialized Successfully.");

    }
    if(Right_Leg.we.volt==VOLT_HIGH){
            Right_Leg.k.volt=VOLT_HIGH;
            Right_Leg.k.foot_ptr = &Right_Leg.ft;
            printf("\nRight Knee initialized Successfully.");
    }
    if(Left_Leg.we.volt==VOLT_HIGH){
            Left_Leg.k.volt=VOLT_HIGH;
            Left_Leg.k.foot_ptr=&Left_Leg.ft;
            printf("\nLeft Knee initialized Successfully.");

    }
    if(Right_Leg.k.volt==VOLT_HIGH){
            Right_Leg.ft.volt=VOLT_HIGH;
            printf("\nRight foot initialized Successfully.");

    }
    if(Left_Leg.k.volt==VOLT_HIGH){
            Left_Leg.ft.volt=VOLT_HIGH;
            printf("\nLeft Foot initialized Successfully.");

    }
}
