//sobrecarga de constructores

#include "paulo.h"

using namespace std;

 	class Fecha{
 		private: //atributo
 			int dia, mes, anio;
 		public: //metodos
 		Fecha(int, int, int); //constructor1
 		void mostrar_fecha();
	 };
	Fecha::Fecha(int _dia, int _mes, int _anio){
		anio = _anio;
		mes = _mes;
		dia = _dia;
	}
	
void Fecha::mostrar_fecha(){
	cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}
 int main(){
 	
	Fecha hoy(9, 1, 2017);
	
	hoy.mostrar_fecha();
	
 	system ("pause");
 	return 0;
 }
