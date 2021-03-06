#include"../inc/PID.h"
#include"../inc/calculus.h"

float PosType_PID::operator()(){
    const float P = p_gain*this->proportional();
    const float I = i_gain*this->integral();
    const float D = d_gain*this->first_order_Difference_Equation();
    
    return P+I+D;
}

float SpeedType_PID::operator()(){
    const float P = p_gain*this->first_order_Difference_Equation();
    const float I = i_gain*this->proportional();
    const float D = d_gain*this->second_order_Difference_Equation();

    return P+I+D;
}