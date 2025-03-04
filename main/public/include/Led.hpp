#ifndef LED_HPP
#define LED_HPP

class Led {
    private:
        int pin;
        
    public:
        Led();

        void ascender();
        void apagar();
};

#endif
