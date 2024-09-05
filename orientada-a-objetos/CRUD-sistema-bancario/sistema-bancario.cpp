//programa que simula una cuenta de banco que permite al usuario consultrar su saldo, ingresar y retirar saldo
#include "paulo.h"
using namespace std;

//________________-clase cuenta-________________
class cuenta{
    private:
        float saldo;
    public:
    string nombre;
    cuenta(); //constructor
    ~cuenta(); //destructor
    void ingresar_saldo();
    void retirar_saldo();
    void consultar_saldo();
    float get_saldo();
};
//________________-declaración de funciones-_________________
void pantalla_principal(cuenta usuario);
void pantalla_error(cuenta usuario);
//________________-para inicializar el saldo de la cuenta-_______________
cuenta::cuenta(){
    saldo = 0;
}
cuenta::~cuenta(){
    cout << "Cuenta eliminada con éxito" << endl;
    system("pause");
}
//________________-funciones-_________________
void pantalla_principal(cuenta usuario){
    int opcion;
    system("cls");
    system("color 70");
    centrarStr("BANCO", 2);
    posxy(20, 10); cout << "Elija una de las siguientes opciones:";
    posxy(20, 11); cout << "1. Consultar saldo";
    posxy(20, 12); cout << "2. Ingresar saldo";
    posxy(20, 13); cout << "3. Retirar saldo";
    posxy(20, 14); cout << "0. Salir";
    posxy(20, 15); cout << "Opcion: ";
    posxy(29, 16); cin >> opcion;
    system("cls");
    switch (opcion){
        case 1:{
            usuario.consultar_saldo();
            system("pause");
            break;
        }
        case 2:{
            usuario.ingresar_saldo();
            break;
        }
        case 3:{
            usuario.retirar_saldo();
            break;
        }
        case 0:{
            exit(0);
        }
        default:{
            pantalla_error(usuario);
        }
    }
    system("pause");
}
//_________________-opción incorrecta-____________________
void pantalla_error(cuenta usuario){
    system("cls");
    system("color 70");
    centrarStr("ERROR", 2);
    posxy(25, 5); cout << "Opción no disponible";
    system("pause");
    pantalla_principal(usuario);
}
//________________-funciones de la clase cuenta-_______________
void cuenta::consultar_saldo(){
    system("cls");
    system("color 70");
    centrarStr("SALDO", 2);
    centrarStr("SALDO DISPONIBLE: ", 4);
    posxy(20, 10); cout << "$";
    posxy(21, 10); cout << saldo << endl;
    cout << " " << endl;
    system("pause");
    pantalla_principal(*this);
}
void cuenta::ingresar_saldo(){
    float ingreso;
    system("color 70");
    centrarStr("INGRESO DE DINERO", 2);
    centrarStr("INGRESE LA CANTIDAD A INGRESAR", 4);
    posxy(20, 10); cout << "$";
    posxy(21, 10); cin >> ingreso;
        if (ingreso < 0){
            pantalla_error(*this); 
        }else{
        saldo = saldo + ingreso;
        }
    system("pause");
    pantalla_principal(*this);
}
void cuenta::retirar_saldo(){
    float retiro;
    system("cls");
    system("color 70");
    centrarStr("RETIRO DE DINERO", 2);
    centrarStr("INGRESE LA CANTIDAD A RETIRAR", 4);
    posxy(20, 10); cout << "$";
    posxy(21, 10); cin >> retiro;
    if (retiro > saldo){
        pantalla_error(*this);
    } else {
        saldo = saldo - retiro;
    }
    centrarStr("RETIRO EXITOSO", 6);
    system("pause");
    pantalla_principal(*this);
}
float cuenta::get_saldo(){
    return saldo;
}
int main(){
    cuenta usuario;
    system("cls");
    system("color 70");
    centrarStr("BANCO", 2);
    posxy(25, 5); cout << "Nombre del usuario: ";
    posxy(40, 6); cin >> usuario.nombre;
    pantalla_principal(usuario);
    return 0;
}