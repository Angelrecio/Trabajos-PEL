#include <iostream>
#include <string>
#include <ctime>
#include<list>
using namespace std;
class Cliente{
    string nombre;

    public:
     string getnombre() {
      return nombre;
    }
    void setnombre(string n) {
      nombre = n;  
    }

};
class Caja{
int numero;
list<Cliente> cola;
public:
void setnumero(int n) {
      numero = n;  
    }
void setcola(list<Cliente> n) {
      cola = n;  
    }
int getnumero() {
      return numero;
    }
list <Cliente> getcola() {
      return cola;
    }
};
int main(){
    int num_de_gente;
    list<Cliente> cola;
    Caja caja1;
    Cliente persona;
    cout<< "introduce el numero de lo que está en la cola del súper";
    cin >>  num_de_gente;
    for (int i = 0; i < num_de_gente; i++){
        string nombre;
        cout<<"Introduzca el nombre de la persona " << i+1;
        cin >> nombre;
        persona.setnombre(nombre);
        cola.push_back(persona);
    }
    caja1.setcola(cola);
    Caja caja2;
    caja2.setcola(caja1.getcola().splice(num_de_gente%2));
    list<Cliente> cola2 = caja2.getcola();
    for (int i= 0; i<cola2.size(); i++) 

return 0;
}