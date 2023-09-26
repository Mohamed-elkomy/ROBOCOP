#include <stdio.h>
#include <stdlib.h>
#include "Definitions.h"

int main()
{
    int user_pick;
    RoboInit();
    for(;;){
            printf("To move the Robot press 1 and 2 To Move , to exit 3:");
    scanf("%i",&user_pick);
    if(user_pick==1){
        movements();}
        else if(user_pick == 2){
        Robo_Display();
        }
    else if(user_pick==3){break;}

    }

    return 0;
}
