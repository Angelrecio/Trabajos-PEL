#include <iostream>
#include <string>
#include <ctime>
#include<vector>
using namespace std;
class Tarea{
    public:
    string Nombre;
    string persona;
    // getters y setters para manipular variables de tarea
 string getnombre() {
      return Nombre;
    }
string getpersona() {
      return persona;
    }
     void setnombre(string n) {
      Nombre = n;  
    }
     void setpersona(string p) {
      persona = p;  
    }
};
static int imprimir_menu(){

    int opcion = 0;
        cout << "\n" << "  1 -Crear tarea" << "\n";
        cout << "  2 - Borrar tarea" << "\n";
        cout << "  3 - Editar tarea" << "\n";
        cout << "  4 - Ver Tarea más urgente" << "\n";
        cout << "  5 - Mostrar todas las tareas" << "\n";
        cout << "  0 - Salir del programa" << "\n";
             
        cin >> opcion;

        return opcion;
    };
    int buscar_tarea(vector<Tarea> lista_tareas){
        cout << "Introcuzca el nombre de la tarea"<< "\n";
        string nombre;
        cin >> nombre;
        int max = lista_tareas.size();
        bool encontrar = false;
        for (int i = 0; i< max && encontrar; i++){
            Tarea tarea = lista_tareas[i];
            if (tarea.getnombre() == nombre){
                encontrar = true;
            }

        }
    }
    void crear_tarea(vector<Tarea> lista_tareas){
        Tarea tarea_nueva;
        volver:
        try{
        cout << "Introcuzca el nombre de la tarea"<< "\n";
        string nombre;
        cin >> nombre;
        cout << "Introduzca la fecha de la tarea"<< "\n";
        //cin >> fecha;
        cout << "Introduzca la persona encargada de la tarea"<< "\n";
        string persona;
        cin >> persona;
        tarea_nueva.setnombre(nombre);
        tarea_nueva.setpersona(persona);
        }
        catch(...){
            cout <<"Se ha introducido un tipo erroneo de dato";
            goto volver;
        }
        
        lista_tareas.push_back(tarea_nueva);
        cout << "Tarea creada";
    };
    void borrar_tarea(vector<Tarea> lista_tareas){
        //buscamos el nombre de la tarea
         cout << "Introcuzca el nombre de la tarea"<< "\n";
        string nombre;
        cin >> nombre;
        int max = lista_tareas.size();
        bool encontrar = false;
        for (int i = 0; i< max && encontrar; i++){
            Tarea tarea = lista_tareas[i];
            if (tarea.getnombre() == nombre){
                lista_tareas.erase(lista_tareas.begin() + i);
                encontrar = true;
            }

        }
        cout << "Tarea borrada";
    };
    void mostrar_tareas(vector<Tarea> lista_tareas){
        int max = lista_tareas.size();
         for (int i = 0; i< max; i++){
             Tarea tarea = lista_tareas[i];
            cout <<"Tarea número: " << i << " Nombre: " << tarea.getnombre() << " Persona: " << tarea.getpersona()<< "\n";
         }
    }
    void editar_tarea(vector<Tarea> lista_tareas){
        //buscamos el nombre de la tarea
         cout << "Introcuzca el nombre de la tarea"<< "\n";
        string nombre;
        cin >> nombre;
        int max = lista_tareas.size();
        bool encontrar = false;
        for (int i = 0; i< max && encontrar; i++){
            Tarea tarea = lista_tareas[i];
            if (tarea.getnombre() == nombre){
                lista_tareas.erase(lista_tareas.begin() + i);
                encontrar = true;
            }

        }
        cout << "Tarea editada";
    };
    void tarea_urgente(vector<Tarea> lista_tareas){
        cout << "Esta es la tarea urgente: cagar";
    };
int main(){
    int opcion = 1;
    vector<Tarea> lista_tareas;

     // Bucle para mantener activo el programa.
    while (opcion != 0) {

            // Mostramos el Menu principal y damos valor de opcion para switch.
            opcion = imprimir_menu();

            switch (opcion) {

                case 1:
                    crear_tarea(lista_tareas); //falta fecha
                break;
                case 2:
                    borrar_tarea(lista_tareas);  //done
                break;
                case 3:
                    editar_tarea(lista_tareas);
                break;
                case 4:
                    tarea_urgente(lista_tareas);
                break;
                case 5:
                    mostrar_tareas(lista_tareas);
                 case 0:
                    cout << "\n" << "**HASTA PRONTO**" << "\n";
                break;
                  default:
                cout << "\n" << "**OPCIÓN INCORRECTA**" << "\n";
                }

}