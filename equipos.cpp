#include <iostream>
#include <string>
#include<vector>
using namespace std;
class equipo{
string nombre;
string entrenador;
public:
string getnombre() {
      return nombre;
    }
string getentrenador() {
      return entrenador;
    }
     void setnombre(string n) {
      nombre = n;  
    }
    void setentrenador(string n) {
      entrenador = n;  
    }
};
class partido{
    equipo contrincante_1;
    equipo contrincante_2;
    int puntos_1;
    int puntos_2;
    public:
     void setcontrincante_1(equipo e) {
      contrincante_1 = e;  
    }
    void setcontrincante_2(equipo e) {
      contrincante_2 = e;  
    }
    void setpuntos_1(int e) {
      puntos_1 = e;  
    }
    void setpuntos_2(int e) {
      puntos_2 = e;  
    }
    int getpuntos_1() {
      return puntos_1;
    }

    int getpuntos_2() {
      return puntos_2;
    }
    equipo getcontrincante_1() {
      return contrincante_1;
    }
    equipo getcontrincante_2() {
      return contrincante_2;
    }
   
   
};
std::vector<equipo> crear_equipo(vector<equipo> lista_equipos){
    equipo equipo_nuevo;
    cout << "Introcuzca el nombre del equipo"<< "\n";
        string nombre;
        cin >> nombre;
        cout << "Introduzca el nombre del entrenador encargado "<< "\n";
        string persona;
        cin >> persona;
        equipo_nuevo.setnombre(nombre);
        equipo_nuevo.setentrenador(persona);
        lista_equipos.push_back(equipo_nuevo);

    return lista_equipos;
}
vector <partido> empezar_partidos(vector<equipo> lista_equipos){
    vector <partido> lista_partidos;
    partido partido_nuevo;
    for (int i = 0; i<lista_equipos.size();i++){
        for (int j = 0; j<lista_equipos.size();j++){
            if(i==j){}
            else{
                partido_nuevo.setcontrincante_1(lista_equipos[i]);
                partido_nuevo.setcontrincante_2(lista_equipos[j]);
                lista_partidos.push_back(partido_nuevo);
                }
        }
    }
    return lista_partidos;
}
static void imprimir_partidos(vector <partido> lista_partidos){
    for (int i = 0; i<lista_partidos.size();i++){
      int partido = i + 1;

    cout << "Partido número " << partido << lista_partidos[i].getcontrincante_1() << " vs " << lista_partidos[i].getcontrincante_2() << "\n";
    }
}
vector <partido> anotar_puntos(vector <partido>lista_partidos){
    cout << "Por favor introduzca el número de partido que desee anotar";
    int partido;
    cin >> partido;
    cout << "Por favor introduzca la puntuación del equipo" << lista_partidos[partido - 1].getcontrincante_1();
    int puntos_1;
    cin >> puntos_1;
    cout << "Por favor introduzca la puntuación del equipo" << lista_partidos[partido - 1].getcontrincante_2();
    int puntos_2;
    cin >> puntos_2;
    lista_partidos[partido - 1].setpuntos_1(puntos_1);
    lista_partidos[partido - 1].setpuntos_2(puntos_2);
    cout << "Se ha anotado el resultado del partido";
    return lista_partidos;
}
 static int imprimir_menu(){

    int opcion = 0;
        cout << "\n" << "  1 -Registrar equipo" << "\n";
        cout << "  2 - Empezar partidos" << "\n";
             
        cin >> opcion;

        return opcion;
    };
 int main(){
    int opcion = 1;
    vector<equipo> lista_equipos;
    vector <partido> lista_partidos;

     // Bucle para mantener activo el programa.
    while (opcion != 0) {

            // Mostramos el Menu principal y damos valor de opcion para switch.
            opcion = imprimir_menu();

            switch (opcion) {

                case 1:
                   lista_equipos = crear_equipo(lista_equipos); //falta fecha
                break;
                case 2:
                    empezar_partidos(lista_equipos);  //done
                break;
                case 3:
                    imprimir_partidos(lista_partidos);
                break;
                case 4:
                    lista_partidos = anotar_puntos(lista_partidos);
                break;
                 case 0:
                    cout << "\n" << "**HASTA PRONTO**" << "\n";
                break;
                  default:
                cout << "\n" << "**OPCIÓN INCORRECTA**" << "\n";
                }
                
    }
 }