#ifndef PORTA_HPP
#define PORTA_HPP

#include "main.hpp"

class Porta {
    private:
        FimDeCurso fimDeCurso;
        Motor motor;
        ServoMotor macaneta;
        
    public:
        Porta();

        void abrir();
        void fechar();
        void parar();
};

#endif
