#include "paulo.h"
using namespace std;
//_____________________________________________-CLASE 1-________________________________
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

//_____________________________________________-CLASE 2-________________________________

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
//_______________________________________________-CLASE 3-________________________________
    class pokemon{
        public:
            string nombre;
            string tipo;
            int hp;
            int nivel;
            bool evolucion;
            string entrenador;
            int generacion;
    };

class heroe{
    public:
        string nombre;
        string tipo;
        int hp;
        string casa;
        int fuerza;
        int defensa;
        int agilidad;
        int inteligencia;
        string poder_especial;   
        bool negro;  
        char genero;
};
class libro{
    public:
        string autor;
        string genero;
        string nombre;
        int paginas;
        int anio;
        string idioma;
        string editorial;
};
int main(){
    pokemon charmander;
    pokemon squirtle;
    pokemon charizard;
    heroe MrLaSalle;
    libro HarryPotter;


    charmander.nombre = "Charmander";
    charmander.tipo = "Fuego";
    charmander.hp = 100;
    charmander.nivel = 12;
    charmander.evolucion = true;
    charmander.entrenador = "Ash";
    charmander.generacion = 1;
  
    MrLaSalle.nombre = "MrLaSalle";
    MrLaSalle.tipo = "Terrano";
    MrLaSalle.hp = 100;
    MrLaSalle.casa = "LaSalle";
    MrLaSalle.fuerza = 10;
    MrLaSalle.defensa = 10;
    MrLaSalle.agilidad = 0;
    MrLaSalle.inteligencia = -10;
    MrLaSalle.poder_especial = "plagio";
    MrLaSalle.negro = false;
    MrLaSalle.genero = 'H';

    HarryPotter.autor = "J.K. Rowling";
    HarryPotter.genero = "Fantasia";
    HarryPotter.nombre = "Harry Potter";
    HarryPotter.paginas = 400;
    HarryPotter.anio = 2000;
    HarryPotter.idioma = "espanol";
    HarryPotter.editorial = "Santillana";

    cout << HarryPotter.autor << HarryPotter.anio << endl;
    cout << MrLaSalle.genero << MrLaSalle.hp << endl;
    cout << charmander.nombre << charmander.entrenador << endl;
    return 0;
}