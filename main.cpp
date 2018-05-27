#include <iostream>

using namespace std;

class Bebe
{
public:
    void cambia_nombre(const string &nom)
    {
        nombre = nom;
    }
    void gatea()
    {
        cout << nombre << " Esta gateando..." << endl;
    }
    void imprime() const
    {
        cout << nombre << endl;
    }
protected: // Primo hermano private solo con herencia
    string nombre;
};

class Adulto : public Bebe // Herencia Con esto el adulto puede hacer bebe
{
public:

    void camina()
    {
        cout << nombre << " Esta caminando..." << endl;
    }
};

int main()
{
    Adulto papa;
    Bebe jr;
    jr.cambia_nombre("Junior");
    papa.cambia_nombre("Juan");
    jr.gatea();
    //papa.gatea();
    papa.camina();


    return 0;
}
