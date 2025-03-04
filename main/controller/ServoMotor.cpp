#include "main.hpp"

ServoMotor::ServoMotor(){
    setPin(0);
}

void ServoMotor::descer(){
    /* * */
}

void ServoMotor::subir(){
    /* * */
}

void ServoMotor::setPin(int digitalPin){
    pin = digitalPin;
}

int ServoMotor::getPin(){
    return pin;
}
