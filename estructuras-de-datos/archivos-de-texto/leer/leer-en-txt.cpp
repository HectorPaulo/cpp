#include "jonathan2.h"
#include <fstream>


//ESTRUCTURA CON DATOS PERSONALES
struct persona{
	int ID;
	string nombre;
	string apellido_paterno;
	string apellido_materno;
	int edad;
	string nacionalidad;
	int cp;
	float estatura;
	float peso;
	char sexo;
	string CURP;
};
//ESTRUCTURA CON DATOS DE CALIFICACIONES
struct calificacion{
	float parcial1;
	float parcial2;
	float parcial3;
	float ordinario;
	float global;
};
//ESTRUCTURA CON DATOS DEL ALUMNO
struct Alumno{
	string matricula;
	persona datos;
	string carrera;
	int semestre;
	calificacion calif;
};



int main(){
    ifstream archivo("ejemplo2.txt");
    if (archivo.is_open()){
    float prom[15];
    string linea;
	int i=0;
	system("cls");
	system("color 03");
	
	marco(1,1,80,7);
	Alumno estudiante;

	system("cls");
	system("color 03");
	
	posxy(2,2); cout<<"Nombre";
	posxy(17,2);cout<<"Ap paterno";
	posxy(34, 2); cout<<"Ap materno";
	posxy(47, 2); cout<<"Matricula";
	posxy(62, 2); cout<<"Parcial I";
	posxy(77, 2);cout<<"Parcial II";
	posxy(93, 2);cout<<"Parcial III";
	posxy(108, 2);cout<<"Ordinario";
	posxy(123, 2);cout<<"Global";


    while (getline(archivo,linea)){
			i+=1;
			if(i>1){
			estudiante.datos.nombre=substr(linea,1,9);
			estudiante.datos.apellido_materno=substr(linea,13,7);
			estudiante.datos.apellido_materno=substr(linea,23,9);
			estudiante.matricula=substr(linea,33,9);
			estudiante.calif.parcial1=strTofloat(substr(linea,68,4));
			estudiante.calif.parcial2=strTofloat(substr(linea,78,4));
			estudiante.calif.parcial3=strTofloat(substr(linea,88,4));
			estudiante.calif.ordinario=strTofloat(substr(linea,98,4));
			estudiante.calif.global=strTofloat(substr(linea,108,4));

	}
}
		archivo.close();
		for(int j=0;j<1;j++){
		posxy(4,6+j*2);cout<<estudiante.datos.nombre;
		posxy(19,6+j*2);cout<<estudiante.datos.apellido_paterno;
		posxy(34,6+j*2);cout<<estudiante.datos.apellido_materno;
		posxy(49,6+j*2);cout<<estudiante.matricula;
		posxy(79,6+j*2);cout<<estudiante.calif.parcial1;
		posxy(94,6+j*2);cout<<estudiante.calif.parcial2;
		posxy(109,6+j*2);cout<<estudiante.calif.parcial3;
		posxy(124,6+j*2);cout<<estudiante.calif.ordinario;
		posxy(137,6+j*2);cout<<estudiante.calif.global;
	}
}
	else{
		cout<<"No se pudo abrir el archivo"<<endl;
	}
	getch();
	return 0;
}