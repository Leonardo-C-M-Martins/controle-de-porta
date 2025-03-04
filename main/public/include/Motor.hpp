#ifndef MOTOR_HPP
#define MOTOR_HPP

class Motor {
    private:
        int pin;
        
    public:
        Motor();

        void moverDireita();
        void moverEsquerda();
        void parar();

        int getPin();
        void setPin(int digitalPin);
};

#endif
