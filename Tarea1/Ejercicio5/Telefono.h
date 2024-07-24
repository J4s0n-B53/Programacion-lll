#ifndef TELEFONO_H_INCLUDED
#define TELEFONO_H_INCLUDED
class Telefono{
    private:
        float saldo;
        float tarifaLlamada;
        float tarifaMensaje;
        int numLlamadas;
        int numMensajes;
    public:
        Telefono(){
            this->saldo =0;
            this->tarifaLlamada=0;
            this->tarifaMensaje=0;
            this->numLlamadas=0;
            this->numMensajes=0;
        }
        Telefono(float tl, float tm){
            this->saldo=0;
            this->tarifaLlamada=tl;
            this->tarifaMensaje=tm;
            this->numLlamadas=0;
            this->numMensajes=0;
        }
        bool hacerLlamadas(){
            bool r=false;
            if (this->saldo > this->tarifaLlamada){
                r = true;
                this->saldo -= this->tarifaLlamada;
                this->numLlamadas++;
            }
            return r;
        }
        bool enviarMensajes(){
            bool r=false;
            if (this->saldo > this->tarifaMensaje){
                r=true;
                this->saldo -= this->tarifaMensaje;
                this->numMensajes++;
            }
            return r;
        }
        void hacerRecargas(float rc){
            this->saldo += rc;
        }
        void consultarDatos(){
            cout << "Saldo : " << this->saldo << endl;
            cout << "Numero de llamadas : " << this->numLlamadas << endl;
            cout << "Numero de mensajes : " << this->numMensajes << endl;
        }



};

#endif // TELEFONO_H_INCLUDED
