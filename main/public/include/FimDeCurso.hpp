#ifndef FIM_DE_CURSO_HPP
#define FIM_DE_CURSO_HPP

class FimDeCurso {
    private:
        int pin;
        
    public:
        bool status = false;
        
        FimDeCurso();

        void getLeitura();

        int getPin();
        void setPin(int digitalPin);
};

#endif
