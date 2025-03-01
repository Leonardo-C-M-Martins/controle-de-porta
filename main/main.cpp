#include "./public/include/main.hpp"

extern "C" void app_main(){

    Porta porta;

    porta.abrir();
    porta.fechar();
    porta.parar();

    Motor motor;

    motor.moverDireita();
    motor.moverEsquerda();
    motor.parar();

}
