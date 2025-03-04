#include "main.hpp"

Porta::Porta(){
    
}

void Porta::abrir(){
    macaneta.descer();
    macaneta.subir();
    motor.moverDireita();
}

void Porta::fechar(){
    fimDeCurso.status = false;
    while(!fimDeCurso.status){
        motor.moverEsquerda();
        fimDeCurso.getLeitura();
    }
}

void Porta::parar(){
    motor.parar();
}
