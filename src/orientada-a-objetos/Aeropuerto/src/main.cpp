#include <iostream>
#include <fstream>         
#include "../include/json.hpp" 
#include <string>
#include <vector>
#include <stdexcept>
using namespace std;
using json = nlohmann::json;

class VehiculoAereo {
private:
    string matricula;
    string modelo;
    string serie;
    int capacidad;
    string color;
    string estado;
    int antiguedad;
    int tiempoAire;
    int llantas;
    int tanque;
    int distancia;

public:
    VehiculoAereo(string matricula, string modelo, string serie, int capacidad, string color, string estado, int antiguedad, int tiempoAire, int llantas, int tanque, int distancia)
        : matricula(matricula), modelo(modelo), serie(serie), capacidad(capacidad), color(color), estado(estado), antiguedad(antiguedad), tiempoAire(tiempoAire), llantas(llantas), tanque(tanque), distancia(distancia) {}

    string getMatricula() const { return matricula; }
    string getModelo() const { return modelo; }
    string getSerie() const { return serie; }
    int getCapacidad() const { return capacidad; }
    string getColor() const { return color; }
    string getEstado() const { return estado; }
    int getAntiguedad() const { return antiguedad; }
    int getTiempoAire() const { return tiempoAire; }
    int getLlantas() const { return llantas; }
    int getTanque() const { return tanque; }
    int getDistancia() const { return distancia; }

    json toJson() const {
        return {
            {"matricula", matricula},
            {"modelo", modelo},
            {"serie", serie},
            {"capacidad", capacidad},
            {"color", color},
            {"estado", estado},
            {"antiguedad", antiguedad},
            {"tiempoAire", tiempoAire},
            {"llantas", llantas},
            {"tanque", tanque},
            {"distancia", distancia}
        };
    }
};
class Avion : public VehiculoAereo {
private:
    string aerolinea;
    string tipoMotor;
    int puertas;
    string tipoAvion;

public:
    Avion(string matricula, string modelo, string serie, int capacidad, string color, string estado, int antiguedad, int tiempoAire, int llantas, int tanque, int distancia, string aerolinea, string tipoMotor, int puertas, string tipoAvion)
        : VehiculoAereo(matricula, modelo, serie, capacidad, color, estado, antiguedad, tiempoAire, llantas, tanque, distancia), aerolinea(aerolinea), tipoMotor(tipoMotor), puertas(puertas), tipoAvion(tipoAvion) {}

    string getAerolinea() const { return aerolinea; }
    string getTipoMotor() const { return tipoMotor; }
    int getPuertas() const { return puertas; }
    string getTipoAvion() const { return tipoAvion; }

    json toJson() const {
        return {
            {"aerolinea", aerolinea},
            {"tipoMotor", tipoMotor},
            {"puertas", puertas},
            {"tipoAvion", tipoAvion}
        };
    }
};
class Avioneta : public VehiculoAereo {
    private:
    int numeroMotores;
    string tipoPista;
    string tipoAvioneta;
    string tipoConcesionaria;
    public:
Avioneta(string matricula, string modelo, string serie, int capacidad, string color, string estado, int antiguedad, int tiempoAire, int llantas, int tanque, int distancia, int numeroMotores, string tipoPista, string tipoAvioneta, string tipoConcesionaria) 
    : VehiculoAereo(matricula, modelo, serie, capacidad, color, estado, antiguedad, tiempoAire, llantas, tanque, distancia), numeroMotores(numeroMotores), tipoPista(tipoPista), tipoAvioneta(tipoAvioneta), tipoConcesionaria(tipoConcesionaria) {}
    
    int getNumeroMotores() const { return numeroMotores;}
    string getTipoPista() const { return tipoPista;}
    string getTipoAvioneta() const { return tipoAvioneta;}
    string getTipoConcesionaria() const { return tipoConcesionaria;}

    json toJson() const {
        return {
            {"numeroMotores", numeroMotores},
            {"tipoPista", tipoPista},
            {"tipoAvioneta", tipoAvioneta},
            {"tipoConcesionaria", tipoConcesionaria}
        };
    }
};
class Persona {
    private:
    void viajar() {
        cout << "Viajando" << endl;
    }
    void comer() {
        cout << "Comiendo" << endl;
    }
    void abordar()  {
        cout << "Abordando" << endl;
    }
    void dormir() {
        cout << "Durmiendo" << endl;
    }
    void checkIn() {
        cout << "CheckIn" << endl;
    }

    void irSanitario() {
        cout << "Ir al sanitario" << endl;
    }
};


class Tripulacion : public Persona {
    private:
    int idTripulación;
    int antiguedad;
    string turno;
    int horasVuelo;
    string nombre;
    string apellido;
    string fechaNacimiento;
    string genero;
    public:
    Tripulacion(int idTripulación, int antiguedad, string turno, int horasVuelo, string nombre, string apellido, string fechaNacimiento, string genero) 
    : idTripulación(idTripulación), turno(turno), horasVuelo(horasVuelo), nombre(nombre), apellido(apellido), fechaNacimiento(fechaNacimiento), genero(genero) {}
    
    int getIdTripulación() const { return idTripulación; }
    int getAntiguedad() const { return antiguedad; }
    string getTurno() const { return turno; }
    int getHorasVuelo() const { return horasVuelo; }
    string getNombre() const { return nombre; }
    string getApellido() const { return apellido; }
    string getFechaNacimiento() const { return fechaNacimiento; }
    string getGenero() const { return genero; }

    json toJson() const {
        return {
            {"idTripulación", idTripulación},
            {"antiguedad", antiguedad},
            {"turno", turno},
            {"horasVuelo", horasVuelo},
            {"nombre", nombre},
            {"apellido", apellido},
            {"fechaNacimiento", fechaNacimiento},
            {"genero", genero}
        };
    }
};
class Piloto : public Tripulacion {
    private:
    string rangoPiloto;
    bool licencia;
    string tipoAeronave;
    string saludMental;
    public:
    Piloto(string rangoPiloto, bool licencia, string tipoAeronave, string saludMental, int idTripulación, int antiguedad, string turno, int horasVuelo, string nombre, string apellido, string fechaNacimiento, string genero)
    : Tripulacion(idTripulación, antiguedad, turno, horasVuelo, nombre, apellido, fechaNacimiento, genero), rangoPiloto(rangoPiloto), licencia(licencia), tipoAeronave(tipoAeronave), saludMental(saludMental) {}

    string getRangoPiloto() const { return rangoPiloto; }
    bool getLicencia() const { return licencia; }
    string getTipoAeronave() const { return tipoAeronave; }
    string getSaludMental() const { return saludMental; }

    json toJson() const {
        return {
            {"rangoPiloto", rangoPiloto},
            {"licencia", licencia},
            {"tipoAeronave", tipoAeronave},
            {"saludMental", saludMental}
        };
    }
};
class Copiloto : public Tripulacion {
    private:
    string rangoCopiloto;
    bool licencia;
    string idioma;
    int certificados;
    public:
    Copiloto(string rangoCopiloto, bool licencia, string idioma, int certificados, int idTripulación, int antiguedad, string turno, int horasVuelo, string nombre, string apellido, string fechaNacimiento, string genero)
    : Tripulacion(idTripulación, antiguedad, turno, horasVuelo, nombre, apellido, fechaNacimiento, genero), rangoCopiloto(rangoCopiloto), licencia(licencia), idioma(idioma), certificados(certificados) {}

    string getRangoCopiloto() const { return rangoCopiloto; }
    bool getLicencia() const { return licencia; }
    string getIdioma() const { return idioma; }
    int getCertificados() const { return certificados; }

    json toJson() const {
        return {
            {"rangoCopiloto", rangoCopiloto},
            {"licencia", licencia},
            {"idioma", idioma},
            {"certificados", certificados}
        };
    }
};
class Sobrecargo : public Tripulacion {
    private:
    string idioma;
    int certificados;
    public:
    Sobrecargo(string idioma, int certificados, int idTripulación, int antiguedad, string turno, int horasVuelo, string nombre, string apellido, string fechaNacimiento, string genero)
    : Tripulacion(idTripulación, antiguedad, turno, horasVuelo, nombre, apellido, fechaNacimiento, genero), idioma(idioma), certificados(certificados) {}

    string getIdioma() const { return idioma; }
    int getCertificados() const { return certificados; }

    json toJson() const {
        return {
            {"idioma", idioma},
            {"certificados", certificados}
        };
    }
};
class Aeropuerto {
    private:
    string claveAeropuerto;
    string nombre;
    int cantidadPistas;
    string tipoAvion;
    public:
    Aeropuerto(string claveAeropuerto, string nombre, int cantidadPistas, string tipoAvion) 
    : claveAeropuerto(claveAeropuerto), nombre(nombre), cantidadPistas(cantidadPistas), tipoAvion(tipoAvion) {}
    
    string getClaveAeropuerto() const { return claveAeropuerto; }
    string getNombre() const { return nombre; }
    int getCantidadPistas() const { return cantidadPistas; }
    string getTipoAvion() const { return tipoAvion; }

    json toJson() const {
        return {
            {"claveAeropuerto", claveAeropuerto},
            {"nombre", nombre},
            {"cantidadPistas", cantidadPistas},
            {"tipoAvion", tipoAvion}
        };
    }
};
class Terminal {
    private:
    string claveTerminal;
    int capacidad;
    bool disponible;
    public:
    Terminal(string claveTerminal, int capacidad, bool disponible)
    : claveTerminal(claveTerminal), capacidad(capacidad), disponible(disponible) {}

    string getClaveTerminal() const { return claveTerminal; }
    int getCapacidad() const { return capacidad; }
    bool getDisponible() const { return disponible; }

    json toJson() const {
    return {
        {"claveTerminal", claveTerminal},
        {"capacidad", capacidad},
        {"disponible", disponible}
    };
}
};
class Equipaje {
    private:
    double peso;
    double altura;
    double ancho;
    int idPasajero;
    string tipoEquipaje;
    public:
    Equipaje(double peso, double altura, double ancho, int idPasajero, string tipoEquipaje)
    : peso(peso), altura(altura), ancho(ancho), idPasajero(idPasajero), tipoEquipaje(tipoEquipaje) {}

    double getPeso() const { return peso; }
    double getAltura() const { return altura; }
    double getAncho() const { return ancho; }
    int getIdPasajero() const { return idPasajero; }
    string getTipoEquipaje() const { return tipoEquipaje; }

    json toJson() const {
        return {
            {"peso", peso},
            {"altura", altura},
            {"ancho", ancho},
            {"idPasajero", idPasajero},
            {"tipoEquipaje", tipoEquipaje}
        };
    }
};

class Pasajero : public Persona {
private:
    int id;
    string nombre;
    string apellido;
    int edad;
    string direccion;
    string fechaNacimiento;
    bool discapacidad;
    string nacionalidad;
    Equipaje equipaje;

public:
    // Constructor
    Pasajero(int id, const string& nombre, const string& apellido, int edad, const string& direccion, const string& fechaNacimiento, bool discapacidad, const string& nacionalidad, const Equipaje& equipaje) 
    : id(id), nombre(nombre), apellido(apellido), edad(edad), direccion(direccion), fechaNacimiento(fechaNacimiento), discapacidad(discapacidad), nacionalidad(nacionalidad), equipaje(equipaje) {}

    // Métodos get
    int getId() const { return id; }
    string getNombre() const { return nombre; }
    string getApellido() const { return apellido; }
    int getEdad() const { return edad; }
    string getDireccion() const { return direccion; }
    string getFechaNacimiento() const { return fechaNacimiento; }
    bool getDiscapacidad() const { return discapacidad; }
    string getNacionalidad() const { return nacionalidad; }
    Equipaje getEquipaje() const { return equipaje; }

    // Conversión a JSON
    json toJson() const {
        return {
            {"id", id},
            {"nombre", nombre},
            {"apellido", apellido},
            {"edad", edad},
            {"direccion", direccion},
            {"fechaNacimiento", fechaNacimiento},
            {"discapacidad", discapacidad},
            {"nacionalidad", nacionalidad},
            {"equipaje", equipaje.toJson()} 
        };
    }
};

class Vuelo {
private:
    int id;
    Terminal terminal;
    VehiculoAereo vehiculoAereo;
    string origen;
    string destino;
    Tripulacion tripulacion;
    float duracion;
    float horaSalida;
    string horaLlegada;
    vector<Pasajero> pasajeros;


public:
    // Constructor
    Vuelo(int id, const Terminal& terminal, const VehiculoAereo& vehiculoAereo, const string& origen, const string& destino, const Tripulacion& tripulacion, float duracion, float horaSalida, string horaLlegada, const std::vector<Pasajero>& pasajeros )
        : id(id), terminal(terminal), vehiculoAereo(vehiculoAereo), origen(origen), destino(destino), tripulacion(tripulacion), duracion(duracion), horaSalida(horaSalida), horaLlegada(horaLlegada), pasajeros(pasajeros) {
        // Verificar que el número de pasajeros sea exactamente 10
        if (pasajeros.size() != 10) {
            throw std::out_of_range("El vuelo debe tener exactamente 10 pasajeros.");
        }
    }

    int getId() const { return id; }
    Terminal getTerminal() const { return terminal; }
    VehiculoAereo getVehiculoAereo() const { return vehiculoAereo; }
    string getOrigen() const { return origen; }
    string getDestino() const { return destino; }
    Tripulacion getTripulacion() const { return tripulacion; }
    float getDuracion() const { return duracion; }
    float getHoraSalida() const { return horaSalida; }
    string getHoraLlegada() const { return horaLlegada; }
    vector<Pasajero> getPasajeros() const { return pasajeros; }

    json toJson() const {
        json pasajerosArray = json::array();
        for (const auto& pasajero : pasajeros) {
            pasajerosArray.push_back(pasajero.toJson()); 
        }
        
        return {
            {"id", id},
            {"terminal", terminal.toJson()},
            {"vehiculoAereo", vehiculoAereo.toJson()},
            {"origen", origen},
            {"destino", destino},
            {"tripulacion", tripulacion.toJson()},
            {"duracion", duracion},
            {"horaSalida", horaSalida},
            {"horaLlegada", horaLlegada},
            {"pasajeros", pasajerosArray}
        };
    }
};

int main() {
    Terminal terminal1("T198", 100, true);
    Terminal terminal2("T298", 500, true);
    Terminal terminal3("T573", 1200, false);

    Avion avion1("MAT123", "Boeing 747", "SER987", 150, "Blanco", "Operativo", 10, 2000, 6, 5000, 8000, "Aeroméxico", "Turbofan", 4, "Comercial");
    Avion avion2("MARK34", "Airbus 330", "SER600", 250, "Amarillo", "Operativo", 10, 3000, 6, 4000, 6000, "Viva Aerobus", "Turbofan", 4, "Comercial");
    Avion avion3("KLM345", "Boeing 777", "SER987", 150, "Azul", "Operativo", 10, 2000, 6, 5000, 8000, "Aeroméxico", "Turbofan", 4, "Carga");
    
    Tripulacion tripulacion1(1, 15, "Mañana", 5000, "Juan", "Perez", "1975-06-12", "Masculino");
    Tripulacion tripulacion2(2, 10, "Tarde", 5000, "Maria", "Lopez", "1980-02-15", "Femenino");
    Tripulacion tripulacion3(3, 20, "Noche", 5000, "Pedro", "Martinez", "1970-08-10", "Masculino");
    Tripulacion tripulacion4(4, 5, "Manana", 5000, "Luis", "Garcia", "1990-01-01", "Masculino");

    Equipaje e1(6.7, 100, 30, 1, "Maleta");
    Equipaje e2(7.5, 100, 30, 2, "Maleta");
    Equipaje e3(2.2, 10, 30, 3, "Bolsa de Mano");
    Equipaje e4(3.5, 20, 30, 4, "Bolsa de Mano");
    Equipaje e5(8.2, 150, 30, 5, "Maleta");

    Pasajero p1(1, "Hector Adrian", "Paulo", 20, "Oaxaca, México", "2004-01-01", false, "Mexicana", e1);
    Pasajero p2(2, "Diego Saas", "Mendieta", 45, "Guadalajara, Mexico", "2000-01-01", true, "Colombiana", e1);
    Pasajero p3(3, "Victor Alejandro","Bolaños", 30, "Monterrey, Mexico", "2005-01-01", false, "Mexicana", e2);
    Pasajero p4(4, "Carlos Miguel", "García", 70, "Chiapas, México", "2004-01-01", false, "Venezolana", e3);
    Pasajero p5(5, "Luis Ángel", "Ramirez", 45, "Chihuahua, Mexico", "2000-01-01", true, "Mexicana", e1);
    Pasajero p6(6, "Daniel","Daniel", 30, "Monterrey, Mexico", "2005-01-01", false, "Mexicana", e2);
    Pasajero p7(7, "Alexa", "Cabeza de Vaca", 20, "Oaxaca, México", "2004-01-01", false, "Mexicana", e3);
    Pasajero p8(8, "Favián", "Brena", 45, "Guadalajara, Mexico", "2000-01-01", true, "Colombiana", e2);
    Pasajero p9(9, "Josué","Barrita", 30, "Monterrey, Mexico", "2005-01-01", false, "Mexicana", e1);
    Pasajero p10(10, "Regina","Cordero", 30, "Monterrey, Mexico", "2005-01-01", false, "Mexicana", e2);
    Pasajero p11(11, "Marta", "Vázquez", 28, "Tijuana, México", "1996-02-15", true, "Mexicana", e1);
    Pasajero p12(12, "Luis", "Fernández", 34, "Ciudad Juárez, México", "1990-08-23", false, "Mexicana", e2);
    Pasajero p13(13, "Laura", "González", 27, "Puebla, México", "1997-05-30", true, "Mexicana", e2);
    Pasajero p14(14, "Jorge", "Martínez", 40, "San Luis Potosí, México", "1984-12-12", false, "Mexicana", e3);
    Pasajero p15(15, "Sofia", "Torres", 33, "Aguascalientes, México", "1991-06-18", true, "Mexicana", e2);
    Pasajero p16(16, "Antonio", "Hernández", 22, "Cancún, México", "2002-11-02", false, "Mexicana", e1);
    Pasajero p17(17, "Verónica", "García", 29, "Querétaro, México", "1995-03-05", true, "Mexicana", e1);
    Pasajero p18(18, "Pedro", "Pérez", 37, "Guadalajara, México", "1987-07-15", false, "Mexicana", e3);
    Pasajero p19(19, "Gabriela", "Sánchez", 32, "Mérida, México", "1992-10-20", true, "Mexicana", e3);
    Pasajero p20(20, "Esteban", "Morales", 26, "Monterrey, México", "1998-04-10", false, "Mexicana", e2);
    Pasajero p21(21, "Mariana", "Ríos", 31, "Toluca, México", "1993-09-17", true, "Mexicana", e4);
    Pasajero p22(22, "Ricardo", "Delgado", 42, "Mexicali, México", "1982-01-29", false, "Mexicana", e5);
    Pasajero p23(23, "Patricia", "Mendoza", 38, "Oaxaca, México", "1986-04-13", true, "Mexicana", e5);
    Pasajero p24(24, "Francisco", "Navarro", 27, "Chihuahua, México", "1997-06-21", false, "Mexicana", e5);
    Pasajero p25(25, "Ana", "Cruz", 35, "Durango, México", "1989-12-08", true, "Mexicana", e5);
    Pasajero p26(26, "Enrique", "Moreno", 40, "Guadalajara, México", "1984-05-25", false, "Mexicana", e4);
    Pasajero p27(27, "Elena", "Jiménez", 23, "Aguascalientes, México", "2001-08-12", true, "Mexicana", e4);
    Pasajero p28(28, "Roberto", "Ortiz", 29, "Saltillo, México", "1995-07-30", false, "Mexicana", e5);
    Pasajero p29(29, "Lorena", "García", 33, "Torreón, México", "1991-11-22", true, "Mexicana", e5);
    Pasajero p30(30, "Oscar", "Pacheco", 24, "Irapuato, México", "2000-03-08", false, "Mexicana", e1);
    
    vector<Pasajero> pasajeros1 = {p1, p2, p3, p4, p5, p6, p7, p8, p9, p10};
    vector<Pasajero> pasajeros2 = {p11, p12, p13, p14, p15, p16, p17, p18, p19, p20};
    vector<Pasajero> pasajeros3 = {p21, p22, p23, p24, p25, p26, p27, p28, p29, p30};

    try {
        Vuelo vuelo1(1, terminal1, avion3, "CDMX", "Oaxaca", tripulacion2, 2.5, 6.00, "2:35", pasajeros1);
        Vuelo vuelo3(3, terminal3, avion2, "Guadalajara", "Monterrey", tripulacion4, 1.5, 15.00, "12:35", pasajeros2);
        Vuelo vuelo2(2, terminal2, avion1, "Oaxaca", "Guadalajara", tripulacion1, 3.0, 10.00, "12:35", pasajeros3);

        json data;
        data["vuelos"].push_back(vuelo1.toJson());
        data["vuelos"].push_back(vuelo2.toJson());
        data["vuelos"].push_back(vuelo3.toJson());

        ofstream archivo("DatosVuelos.json");
        archivo << data.dump(4); 
        archivo.close();

    } catch (const out_of_range e) {
        cerr << "Error: " << e.what() << endl;
    }


    cout << "El archivo DatosVuelos.json ha sido creado con éxito" << endl;

    cout << "Dicho archivo se encuentra en el directorio ../src/" << endl;
    cout << "Presione una tecla para finalizar..." << endl;
    cin.get();

    return 0;
}