#include <stdio.h>
#include <stdlib.h>
#include "Definitions.h"


void ARM_Init(){
    if(RA_M.volt == VOLT_HIGH){
        RA_M.volt_send=&Right_ARM;
        RA_M.volt_send->volt= VOLT_HIGH;
    }
    if(LA_M.volt == VOLT_HIGH){
        LA_M.volt_send=&Left_ARM;
        LA_M.volt_send->volt= VOLT_HIGH;
    }
   printf("\n\n ARM Initialized By motor Successfully .\n");
   if(Right_ARM.volt==VOLT_HIGH){
        Right_ARM.s.volt = VOLT_HIGH;
        Right_ARM.s.elbow_ptr=&Right_ARM.e;
        printf("\nRight Shoulder initialized Successfully.");
   }
   if(Left_ARM.volt==VOLT_HIGH){
        Left_ARM.s.volt = VOLT_HIGH;
        Left_ARM.s.elbow_ptr=&Left_ARM.e;
        printf("\nLeft Shoulder initialized Successfully.");
   }
   if(Left_ARM.s.volt== VOLT_HIGH){
        Left_ARM.e.volt=VOLT_HIGH;
        Left_ARM.e.wrist_ptr=&Left_ARM.w;
        printf("\nRight Elbow initialized Successfully.");
   }
   if(Right_ARM.s.volt== VOLT_HIGH){
    Right_ARM.e.volt = VOLT_HIGH;
    Right_ARM.e.wrist_ptr=&Right_ARM.w;
    printf("\nRight Elbow initialized Successfully.");
   }
   if(Left_ARM.e.volt== VOLT_HIGH){
    Left_ARM.w.volt = VOLT_HIGH;
    Left_ARM.w.finger_ptr=&Left_ARM.f;
    printf("\nLeft wrist initialized Successfully.");
   }
   if(Right_ARM.e.volt== VOLT_HIGH){
        Right_ARM.w.volt= VOLT_HIGH;
        Right_ARM.w.finger_ptr=&Right_ARM.f;
        printf("\nRight Wrist initialized Successfully.");
   }
   if(Left_ARM.w.volt== VOLT_HIGH){
       Left_ARM.f.volt=VOLT_HIGH;
       printf("\nLeft finger initialized Successfully.");
   }
   if(Right_ARM.w.volt== VOLT_HIGH){
        Right_ARM.f.volt=VOLT_HIGH;
        printf("\nRight finger initialized Successfully.");
   }



}
