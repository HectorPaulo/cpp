#include "paulo.h"
using namespace std;
class complejos{
    private:
    float real, imaginario;
    public:
    complejos(); //constructor
    ~complejos();//destructor
    void asigna();
    float modulo();
    void argumento();
    float get_real();
    float get_imaginario();
    void suma_complejos(float, float, float, float);
};
complejos::complejos(){
    real = 0;
    imaginario = 0;
}
complejos::~complejos(){
    cout << "Se ha destruido el objeto" << endl;
}
void complejos::asigna(){
    system("color 0");
    cout << "Introduce la parte real: \n";
    cin >> real;
    cout << "Asigna la parte imaginaria: \n";
    cin >> imaginario;
}
float complejos::modulo(){
    float result;
    result=sqrt(real*real+imaginario*imaginario);
    return result;
}
void complejos::argumento(){
    cout << "argumento = " << atan(imaginario/real) << endl;
}
float complejos::get_real(){
    return real;
}
float complejos::get_imaginario(){
    return imaginario;
}
void complejos::suma_complejos(float a, float b, float c, float d){
    cout << "La suma de los complejos es: \n";
    cout << a + b << "+" << c + d << "i" << endl;
}
int main(){
    system("color 0");
    complejos uno;
    complejos dos;
    complejos tres;
    //uno.asigna();
    //cout << uno.modulo() << endl;
    //uno.argumento();
    uno.asigna();
    dos.asigna();
    tres.suma_complejos(uno.get_real(), dos.get_real(), uno.get_imaginario(), dos.get_imaginario());
    return 0;
    }