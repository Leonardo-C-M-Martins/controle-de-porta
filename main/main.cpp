#include "./public/include/main.hpp"

extern "C" void app_main(){

    Porta porta;

    porta.abrir();
    porta.fechar();
    porta.parar();

    /*
     * Classe Porta deve:
     * 
     * - Acionar o Servo Motor para abrir e fechar a maçaneta;
     * - Acionar o Motor para fechar a porta;
     * - Utilizar um sensor Fim de Curso para informar se está aberta ou fechada.
     * 
     * */
}
