// Jonathan Raúl Rea Bravo Matricula(460328226) //
#include <iostream>

using namespace std;

class Persona{
    private:
        string Nombre;
        int Edad;
        char Sexo;

    public:

    Persona(string nombre, int edad, char sexo){
        Nombre = nombre;
        Edad = edad;
        Sexo = sexo;
    }

    string getNombre(){ return Nombre; }
    int getEdad(){ return Edad; }
    char getSexo(){ return Sexo; }

};

void imprimir (Persona persona_imp){
    cout << "Nombre: " << persona_imp.getNombre() << endl;
    cout << "Edad: " << persona_imp.getEdad() << endl;
    cout << "Sexo: " << persona_imp.getSexo() << endl;
}

int main(){
    string nombre;
    int edad;
    char sexo;

    cout<<"Ingresa tu nombre: ";
    cin>>nombre;
    cout<<"Ingresa tu edad: ";
    cin>>edad;
    cout<<"Ingresa tu sexo (M/F): ";
    cin>>sexo;

    Persona persona1(nombre, edad, sexo);
    imprimir(persona1);

    return 0;
}