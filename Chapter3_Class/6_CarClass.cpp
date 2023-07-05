#include <iostream>
#include <cstring>
using namespace std;

/* =============== 클래스 선언 =============== */
/* 
--> 접근 제어자에 대한 간단한 이야기
- public : 어디서든 
- protected : 상속관계
- private : 클래스 내
 
 */


namespace CAR_CONST{
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
        char gamerID[CAR_CONST::ID_LEN];
        int fuelGauge;
        int curSpeed;
    
    public:
    void initMember(char *ID, int fuel);
    void ShowCarState();
    void Accel();
    void Break();
};


void Car::initMember(char *ID, int fuel){
    strcpy(gamerID, ID);
    fuelGauge = fuel;
    curSpeed = 0;
}

void Car::ShowCarState(){
    cout<<endl;
    cout<<"Car ID    :"<<gamerID<<endl;
    cout<<"Car fule  :"<<fuelGauge<<"%"<<endl;
    cout<<"Car Speed :"<<curSpeed<<"km/s"<<endl;
}

void Car::Accel(){
    if (fuelGauge <= 0){
        return;
    }else{
        fuelGauge -= CAR_CONST::FUEL_STEP;
    }
    if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD){
        curSpeed = CAR_CONST::MAX_SPD;
    }else{
        curSpeed += CAR_CONST::ACC_STEP;
    }
}

void Car::Break(){
    if (curSpeed<CAR_CONST::BRK_STEP){
        curSpeed = 0;
        return;
    }
    curSpeed -= CAR_CONST::BRK_STEP;
}

int main(){
    Car run99;
    run99.initMember("Run99", 100);
    run99.Accel();
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
 

    return 0;
}