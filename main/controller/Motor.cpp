#include "main.hpp"

Motor::Motor(){
    setPin(0);
}

void Motor::moverDireita(){
    parar();
}

void Motor::moverEsquerda(){
    parar();
}

void Motor::parar(){
    /* * */
}

void Motor::setPin(int digitalPin){
    pin = digitalPin;
}

int Motor::getPin(){
    return pin;
}
