#ifndef __CAR_H__
#define __CAR_H__

namespace Car_Const{
    enum{
        ID_LEN      = 20,
        MAX_SPD     = 200,
        FUEL_STEP   = 2,
        ACC_STEP    = 10,
        BRK_STEP    = 10
    };
}

class Car{
    private:
        char gamerID[Car_Const::ID_LEN];
        int  fuelGauge;
        int  curSpeed;
    
    public:
        void MemberInit(char *id, int fuel);
        void ShowCarState();
        void Accel();
        void Break();
};




#endif 