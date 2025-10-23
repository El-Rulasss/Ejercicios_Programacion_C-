// Jonathan Raúl Rea Bravo Matricula(460328226) //
#include <iostream>
#include <cmath>

using namespace std;

class Figuras_Geometricas {
private:
    float base, altura, lado, radio, base_mayor, base_menor;

public:
     Figuras_Geometricas() {
        base = altura = lado = radio = base_mayor = base_menor = 0;
    }

    // Triángulo
    float area(float base, float altura) {
        cout << "\nIntroduce la base: ";
        cin >> base;
        cout << "Introduce la altura: ";
        cin >> altura;
        float resultado = (base * altura) / 2;
        cout << "El área del triángulo es: " << resultado << endl;
        return resultado;
    }

    // Cuadrado
    float area(float lado) {
        cout << "\nIntroduce el lado: ";
        cin >> lado;
        float resultado = lado * lado;
        cout << "El área del cuadrado es: " << resultado << endl;
        return resultado;
    }

    // Círculo
    double area(double radio) {
        cout << "\nIntroduce el radio: ";
        cin >> radio;
        double resultado = M_PI * radio * radio;
        cout << "El área del círculo es: " << resultado << endl;
        return resultado;
    }

    // Trapecio
    float area(float base_mayor, float base_menor, float altura) {
        cout << "\nIntroduce la base mayor: ";
        cin >> base_mayor;
        cout << "Introduce la base menor: ";
        cin >> base_menor;
        cout << "Introduce la altura: ";
        cin >> altura;
        float resultado = ((base_mayor + base_menor) * altura) / 2;
        cout << "El área del trapecio es: " << resultado << endl;
        return resultado;
    }
};

int main() {
    Figuras_Geometricas figura;
    int opc;

        do {
            cout << "\n=== Calculo de Areas ===\n";
            cout << "1. Triangulo\n";
            cout << "2. Cuadrado\n";
            cout << "3. Circulo\n";
            cout << "4. Trapecio\n";
            cout << "5. Salir\n";
            cout << "Elige una opcion: ";
            cin >> opc;

            switch (opc) {
                case 1:
                    figura.area(0, 0); //llama a area de triangulo
                    break;
                case 2:
                    //llama a area de cuadrado
                    figura.area(0.0f); //f indica que es float
                    break;
                case 3:
                    //llama a area de circulo
                    figura.area(0.0); //double por defecto
                    break;
                case 4:
                    figura.area(0, 0, 0); //llama a area de trapecio
                    break;
                case 5:
                    cout << "Saliendo del programa..." << endl;
                    break;
                default:
                    cout << "Opcion no valida.\n";
                    break;
            }
        } while (opc != 5);
    return 0;
}