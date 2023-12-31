#include "Point.h"
#include <iostream>
using namespace std;

bool Point::InitMember(int xpos, int ypos){
    if (xpos<0 || ypos<0){
        cout<<"Out Of XorYRange"<<endl;
        return false;
    }
    x = xpos;
    y = ypos;
    return true;
}


int Point::GetX() const{
    return x;
}
int Point::GetY() const{
    return y;
}

bool Point::SetX(int xpos){
    if(0>xpos || xpos> 100){
        cout<<"Out Of XRange"<<endl;
        return false;    
    }
    x = xpos;
    return true;
}

bool Point::SetY(int ypos){
    if(0>ypos || ypos> 100){
        cout<<"Out Of YRange"<<endl;
        return false;    
    }
    y = ypos;
    return true;
}