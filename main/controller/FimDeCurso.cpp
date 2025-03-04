#include "main.hpp"

FimDeCurso::FimDeCurso(){
    setPin(0);
}

void FimDeCurso::getLeitura(){
    /* * */
}

void FimDeCurso::setPin(int digitalPin){
    pin = digitalPin;
}

int FimDeCurso::getPin(){
    return pin;
}
