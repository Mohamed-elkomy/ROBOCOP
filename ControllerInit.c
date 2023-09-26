#include <stdio.h>
#include <stdlib.h>
#include "Definitions.h"
void Brain_Leg_Connection();
void Brain_ARM_Connection();
void Controller_Init(){
    char a[]={'c','o','n','n','e','c','t'};
    char c[]={'i','n','i','t','i','a','l','i','z','e'};
    char b[10];
    char d[10];
    printf("Please order the brain to initialize : \n");
    scanf("%s",b);

    if(/*b[0]==c[0] && b[8]==c[8]*/1){
    Brain.data=VOLT_HIGH;
    Brain.Right_ARM=&RA_M;
    Brain.Left_ARM=&LA_M;
    Brain.Right_Leg=&RL_M;
    Brain.Left_Leg=&LL_M;
    printf("\n Brain initialized successfully .");
    }
    printf("\nPlease order the brain to connect : ");
    scanf("%s",b);
    if(b[0]==a[0] && b[5]==a[5] && b[6]== a[6]){
        Brain_ARM_Connection();
        Brain_Leg_Connection();
        printf("\n Brain - leg connected successfully .");
        printf("\n Brain - leg connected successfully .");
    }


}
void Brain_ARM_Connection(){
    if(Brain.data==VOLT_HIGH){
            RA_M.volt=VOLT_HIGH;
            LA_M.volt=VOLT_HIGH;
    }
}
void Brain_Leg_Connection(){
    if(Brain.data==VOLT_HIGH){
            RL_M.volt=VOLT_HIGH;
            LL_M.volt=VOLT_HIGH;
    }
}

