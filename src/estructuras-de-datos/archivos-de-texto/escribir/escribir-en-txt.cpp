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
    ofstream archivo("ejemplo2.txt");
    if (archivo.is_open()){
    float prom[15];
	string registro1;
    string registro;
	system("cls");
	system("color 03");
	int numero_alumnos;
	marco(1,1,80,7);
	posxy(2,2);cout<<"CALIFICACIONES DE ALUMNOS";
	posxy(2,4);cout<<"Cuantos alumnos quiere ingresar?";
	posxy(2,5);cin>>numero_alumnos;
	Alumno estudiante [numero_alumnos];

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
	
   registro1 += rPad("Nombre",' ', 20) + rPad("A paterno",' ',20) + rPad("A materno",' ',20)
	 +rPad("matricula",' ',9) + rPad("parc1",' ',5)+rPad("parc2",' ',5)+rPad("parc3",' ',5)+rPad("ordi",' ',5)+
	 rPad("globa",' ',5) +"\n";
     archivo<<registro1;

    tabla(numero_alumnos+1, 9, 1, 1);
   
    for (int i= 0; i<numero_alumnos; i++){
	
	posxy(2, 4+i*2);cin>>estudiante[i].datos.nombre;
	
	posxy(17, 4+i*2);cin>>estudiante[i].datos.apellido_paterno;
	
	posxy(34,4+i*2);cin>>estudiante[i].datos.apellido_materno;

	posxy(47, 4+i*2);cin>>estudiante[i].matricula;
	
	posxy(62, 4+i*2);cin>>estudiante[i].calif.parcial1;
	
	posxy(77, 4+i*2);cin>>estudiante[i].calif.parcial2;

	posxy(93, 4+i*2);cin>>estudiante[i].calif.parcial3;
	
	posxy(108, 4+i*2);cin>>estudiante[i].calif.ordinario;

    prom[i]=((estudiante[i].calif.parcial1 * 0.20)+(estudiante[i].calif.parcial2 * 0.20)+(estudiante[i].calif.parcial3 * 0.20))+(estudiante[i].calif.ordinario * 0.40);
	
	posxy(123, 4+i*2);cout<<prom[i]<<endl;
	
    registro += rPad(estudiante[i].datos.nombre,' ', 20) + rPad(estudiante[i].datos.apellido_paterno,' ',20) + 
	rPad(estudiante[i].datos.apellido_materno,' ',20) +rPad(estudiante[i].matricula,' ',9) 
    + rPad(substr(floatTostr(estudiante[i].calif.parcial1),1,5),' ',5) + rPad(substr(floatTostr(estudiante[i].calif.parcial2),1,5),' ',5) 
    + rPad(floatTostr(estudiante[i].calif.parcial3),' ',5) + rPad(floatTostr(estudiante[i].calif.ordinario),' ', 5) 
    + rPad(floatTostr(prom[i]),' ',5)+"\n";
}



	
	archivo<<registro;
    archivo.close();//cierra el archivo
    cout<<"La escritura en el archivo se realizo correctamente."<<endl;

    }
    else {
        cout<<"No se pudo abrir el archivo."<<endl;
    }


	return 0;
}
