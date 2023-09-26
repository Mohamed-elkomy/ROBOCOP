#include "Macros.h"
#include "prototypes.h"
//Making foot structure
struct foot{
    int volt;
};
//Making Knee structure
struct knee{
    int volt;
    struct foot *foot_ptr;
};
//Making waist end structure
struct waist_end{
    int volt;
    struct knee *knee_ptr;
};
//making finger structure
struct finger{
    int volt;
};
//Making wrist structure
struct wrist{
    int volt;
    struct finger *finger_ptr;
};
//Making elbow structure
struct elbow{
    int volt;
    struct wrist *wrist_ptr;
};
//Making shoulder structure

struct shoulder {
    int volt;
    struct elbow *elbow_ptr;
};
//Making Arms
struct ARM {
    int volt;
    struct shoulder s;
    struct elbow e;
    struct wrist w;
    struct finger f;
}Right_ARM,Left_ARM;

//Making legs
struct Leg{
    int volt;
    struct waist_end we;
    struct knee k;
    struct foot ft;
}Left_Leg,Right_Leg;

//Making the motors of arm
struct ArmMotor {
    int volt;
    struct ARM *volt_send;
}LA_M,RA_M;
//Making the motors of legs
struct LegMotor{
     int volt;
    struct Leg *volt_send;
}LL_M,RL_M;

//making the Controller "Brain"
struct Controller {
    int data;
    struct ArmMotor *Right_ARM;
    struct ArmMotor *Left_ARM;
    struct LegMotor *Right_Leg;
    struct LegMotor *Left_Leg;
}Brain;

