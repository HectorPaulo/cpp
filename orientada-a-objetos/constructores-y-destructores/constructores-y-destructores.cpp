#include "paulo.h"

using namespace std;

class Perro{
	private:
		string nombre, raza;
	public:
		Perro(string, string);
		~Perro();
		void mostrar_datos();
		void jugar();
};

//constructor

Perro::Perro(string _nombre, string _raza){
	nombre = _nombre;
	raza = _raza;
}

//Destructor
Perro::~Perro(){
}
void Perro::mostrar_datos(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Raza: "<<raza<<endl;
}
void Perro::jugar(){
	cout<<"El perro "<<nombre<<" esta jugando"<<endl;
}
int main(){
	
	Perro perro1("Fido", "Doberman");
	
	perro1.mostrar_datos();
	perro1.jugar();
	perro1.~Perro();//Destruyewndo el objeto
	
	system("pause");
	return 0;
}
