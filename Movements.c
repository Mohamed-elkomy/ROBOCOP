#include <stdio.h>
#include <stdlib.h>
#include "Definitions.h"

void ARM_Movements();
void Leg_movements();


void movements(){
    int movementsV;
    printf("To move ARM press 1 , To move leg press 2 : ");
    scanf("%i",&movementsV);
    if(movementsV==1){
        ARM_Movements();
    }
    else if(movementsV==2){
        Leg_movements();
    }

}
void Leg_movements(){
     int part;
     int degree_pick;
     int side;
     printf("Please enter the side : 1.Right\t2.Left\n");
    scanf("%i",&side);


    if(side==1){
         printf("Please enter the Part : 1.Waist_end\t2.Knee\t3.foot\n");
    scanf("%i",&part);
    printf("\n");
    if(part==1){


            printf("Please enter the degree : 1.90Degree\t2.180Degree\t3.360Degree\n");
    scanf("%i",&degree_pick);
            if(degree_pick==1){
                    Right_Leg.we.volt= ninty_degree;
                    printf("\n Right Waist End ninty Degree moved ! \n");

            }
            else if(degree_pick==2){
                    Right_Leg.we.volt= oneEighty_degree;
                    printf("\n Right Waist End One Eighty Degree moved ! \n");

            }
            else if(degree_pick==3){
                    Right_Leg.we.volt= ThreeSixty_degree;
                    printf("\n Right Waist End Three sixty Degree moved ! \n");

            }


    }
    else if (part==2){
             printf("Please enter the degree : 1.90Degree\t2.180Degree\t3.360Degree\n");
    scanf("%i",&degree_pick);
            if(degree_pick==1){
                    Right_Leg.we.knee_ptr->volt=ninty_degree;
                    printf("\n Right knee  ninety  Degree moved ! \n");

            }
            else if(degree_pick==2){
                    Right_Leg.we.knee_ptr->volt=oneEighty_degree;
                    printf("\n Right knee  One eighty  Degree moved ! \n");

            }
            else if(degree_pick==3){
                    Right_Leg.we.knee_ptr->volt=ThreeSixty_degree;
                    printf("\n Right knee  three sixty  Degree moved ! \n");

            }

    }
    else if(part==3){
             printf("Please enter the degree : 1.90Degree\t2.180Degree\t3.360Degree\n");
    scanf("%i",&degree_pick);
            if(degree_pick==1){
                    Right_Leg.we.knee_ptr->foot_ptr->volt=ninty_degree;
                    printf("\n Right foot  ninety  Degree moved ! \n");

            }
            else if(degree_pick==2){
                    Right_Leg.we.knee_ptr->foot_ptr->volt=oneEighty_degree;
                    printf("\n Right foot  One eighty  Degree moved ! \n");
            }
            else if(degree_pick==3){
                    Right_Leg.we.knee_ptr->foot_ptr->volt=ThreeSixty_degree;
                    printf("\n Right foot  three sixty  Degree moved ! \n");

            }

    }
    }
    if(side==2){
            printf("Please enter the Part : 1.Waist_end\t2.Knee\t3.foot\n");
    scanf("%i",&part);
    printf("\n");
        if(part==1){
            printf("Please enter the degree : 1.90Degree\t2.180Degree\t3.360Degree\n");
    scanf("%i",&degree_pick);
            if(degree_pick==1){
                    Left_Leg.we.volt= ninty_degree;
                    printf("\n Left Waist End ninty Degree moved ! \n");


            }
            else if(degree_pick==2){

                    Left_Leg.we.volt=oneEighty_degree;
                    printf("\n Left Waist End One eighty Degree moved ! \n");

            }
            else if(degree_pick==3){
                    Left_Leg.we.volt=ThreeSixty_degree;
                    printf("\n Left Waist End Three sixty Degree moved ! \n");

            }


    }
    else if (part==2){
             printf("Please enter the degree : 1.90Degree\t2.180Degree\t3.360Degree\n");
    scanf("%i",&degree_pick);
            if(degree_pick==1){
                    Left_Leg.we.knee_ptr->volt=ninty_degree;
                    printf("\n Left knee ninty Degree moved ! \n");

            }
            else if(degree_pick==2){
                    Left_Leg.we.knee_ptr->volt=oneEighty_degree;
                    printf("\n Left knee one eighty Degree moved ! \n");

            }
            else if(degree_pick==3){
                    Left_Leg.we.knee_ptr->volt=ThreeSixty_degree;
                    printf("\n Left knee three sixty Degree moved ! \n");

            }

    }
    else if(part==3){
             printf("Please enter the degree : 1.90Degree\t2.180Degree\t3.360Degree\n");
    scanf("%i",&degree_pick);
            if(degree_pick==1){
                    Left_Leg.we.knee_ptr->foot_ptr->volt=ninty_degree;
                    printf("\n Left foot ninty Degree moved ! \n");

            }
            else if(degree_pick==2){
                    Left_Leg.we.knee_ptr->foot_ptr->volt=oneEighty_degree;
                     printf("\n Left foot One Eighty Degree moved ! \n");

            }
            else if(degree_pick==3){
                    Left_Leg.we.knee_ptr->foot_ptr->volt=ThreeSixty_degree;
                     printf("\n Left foot three sixty Degree moved ! \n");

            }

    }
    }

}
void ARM_Movements(){
    int part;
    int degree_pick;
    int side;
    printf("Please enter the side : 1.Right\t2.Left\n");
    scanf("%i",&side);
    if(side==1){
    printf("Please enter the Part : 1.Shoulder\t2.Elbow\t3.wrist\t4.finger\n");
    scanf("%i",&part);
    printf("\n");

    if(part==1){
             printf("Please enter the degree : 1.90Degree\t2.180Degree\t3.360Degree\n");
    scanf("%i",&degree_pick);
            if(degree_pick==1){
                    Right_ARM.s.volt=ninty_degree;
                     printf("\n Right shoulder ninty Degree moved ! \n");
            }
            else if(degree_pick==2){
                Right_ARM.s.volt=oneEighty_degree;
                printf("\n Right shoulder one Eighty Degree moved ! \n");

            }
            else if(degree_pick==3){
                    Right_ARM.s.volt=ThreeSixty_degree;
                    printf("\n Right shoulder three sixty Degree moved ! \n");

            }

    }
    else if (part==2){
             printf("Please enter the degree : 1.90Degree\t2.180Degree\t3.360Degree\n");
    scanf("%i",&degree_pick);
            if(degree_pick==1){
                    Right_ARM.s.elbow_ptr->volt=ninty_degree;
                    printf("\n Right elbow ninty Degree moved ! \n");

            }
            else if(degree_pick==2){
                    Right_ARM.s.elbow_ptr->volt=oneEighty_degree;
                     printf("\n Right elbow one eighty Degree moved ! \n");

            }
            else if(degree_pick==3){
                    Right_ARM.s.elbow_ptr->volt=ThreeSixty_degree;
                     printf("\n Right elbow three sixty Degree moved ! \n");

            }

    }
    else if(part==3){
             printf("Please enter the degree : 1.90Degree\t2.180Degree\t3.360Degree\n");
    scanf("%i",&degree_pick);
            if(degree_pick==1){
                    Right_ARM.s.elbow_ptr->wrist_ptr->volt=ninty_degree;
                     printf("\n Right wrist ninety Degree moved ! \n");

            }
            else if(degree_pick==2){
                    Right_ARM.s.elbow_ptr->wrist_ptr->volt=oneEighty_degree;
                    printf("\n Right wrist one eighty Degree moved ! \n");

            }
            else if(degree_pick==3){
                    Right_ARM.s.elbow_ptr->wrist_ptr->volt=ThreeSixty_degree;
                    printf("\n Right wrist three sixty Degree moved ! \n");

            }

    }
    else if(part==4){
             printf("Please enter the degree : 1.90Degree\t2.180Degree\t3.360Degree\n");
    scanf("%i",&degree_pick);
            if(degree_pick==1){
                    Right_ARM.s.elbow_ptr->wrist_ptr->finger_ptr->volt=ninty_degree;
                    printf("\n Right finger ninety Degree moved ! \n");

            }
            else if(degree_pick==2){
                    Right_ARM.s.elbow_ptr->wrist_ptr->finger_ptr->volt=oneEighty_degree;
                     printf("\n Right finger one eighty Degree moved ! \n");

            }
            else if(degree_pick==3){
                    Right_ARM.s.elbow_ptr->wrist_ptr->finger_ptr->volt=ThreeSixty_degree;
                     printf("\n Right finger three sixty Degree moved ! \n");

            }

    }
    }
    if(side==2){
    printf("Please enter the Part : 1.Shoulder\t2.Elbow\t3.wrist\t4.finger\n");
    scanf("%i",&part);
    printf("\n");
    if(part==1){
             printf("Please enter the degree : 1.90Degree\t2.180Degree\t3.360Degree\n");
    scanf("%i",&degree_pick);
            if(degree_pick==1){
                    Left_ARM.s.volt=ninty_degree;
                     printf("\n LEft shoulder ninety Degree moved ! \n");

            }
            else if(degree_pick==2){
                    Left_ARM.s.volt=oneEighty_degree;
                    printf("\n LEft shoulder one eighty Degree moved ! \n");

            }
            else if(degree_pick==3){
                    Left_ARM.s.volt=ThreeSixty_degree;
                    printf("\n LEft shoulder three sixty Degree moved ! \n");

            }

    }
    else if (part==2){
             printf("Please enter the degree : 1.90Degree\t2.180Degree\t3.360Degree\n");
    scanf("%i",&degree_pick);
            if(degree_pick==1){
                    Left_ARM.s.elbow_ptr->volt=ninty_degree;
                    printf("\n LEft elbow ninety Degree moved ! \n");

            }
            else if(degree_pick==2){
                    Left_ARM.s.elbow_ptr->volt=oneEighty_degree;
                     printf("\n LEft elbow one eighty Degree moved ! \n");

            }
            else if(degree_pick==3){
                    Left_ARM.s.elbow_ptr->volt=ThreeSixty_degree;
                     printf("\n LEft elbow Three sixty Degree moved ! \n");

            }

    }
    else if(part==3){
             printf("Please enter the degree : 1.90Degree\t2.180Degree\t3.360Degree\n");
    scanf("%i",&degree_pick);
            if(degree_pick==1){
                    Left_ARM.s.elbow_ptr->wrist_ptr->volt=ninty_degree;
                     printf("\n LEft wrist ninety Degree moved ! \n");

            }
            else if(degree_pick==2){
                    Left_ARM.s.elbow_ptr->wrist_ptr->volt=oneEighty_degree;
                    printf("\n LEft wrist one eighty Degree moved ! \n");

            }
            else if(degree_pick==3){
                    Left_ARM.s.elbow_ptr->wrist_ptr->volt=ThreeSixty_degree;
                    printf("\n LEft wrist three sixty Degree moved ! \n");

            }

    }
    else if(part==4){
             printf("Please enter the degree : 1.90Degree\t2.180Degree\t3.360Degree\n");
    scanf("%i",&degree_pick);
            if(degree_pick==1){
                    Left_ARM.s.elbow_ptr->wrist_ptr->finger_ptr->volt=ninty_degree;
                    printf("\n LEft finger ninety Degree moved ! \n");

            }
            else if(degree_pick==2){
                    Left_ARM.s.elbow_ptr->wrist_ptr->finger_ptr->volt=oneEighty_degree;
                     printf("\n LEft finger one eighty Degree moved ! \n");

            }
            else if(degree_pick==3){
                    Left_ARM.s.elbow_ptr->wrist_ptr->finger_ptr->volt=ThreeSixty_degree;
                     printf("\n LEft finger three sixty Degree moved ! \n");

            }

    }


}
}
