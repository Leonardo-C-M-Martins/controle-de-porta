#ifndef SERVO_MOTOR_HPP
#define SERVO_MOTOR_HPP

class ServoMotor {
    private:
        int pin;
        
    public:
        ServoMotor();

        void descer();
        void subir();

        int getPin();
        void setPin(int digitalPin);
};

#endif
