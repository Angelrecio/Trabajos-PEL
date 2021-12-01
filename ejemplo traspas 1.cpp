//Version de dinamismo con arrays normales
//Equivalente FreeSpace
#include <iostream>
#include <string>
#include<vector>
using namespace std;

//Definimos la clase videojuego con su conrespondiente constructor
class videojuego {
	private:
    	string nombre;
        string genero;
        string plataforma;
    public:
    	void set(string n, string g, string p){
        	nombre=n;
            genero=g;
            plataforma=p;
        }
        videojuego(){}
        string getnombre(){
            return nombre;
        }
        string getgenero(){
            return genero;
        }
        string getplataforma(){
            return plataforma;
        }
};


int main() {
	//Inicialmente no sabemos cuantos juegos tiene, por tanto se lo preguntamos.
    int njuegos;
    cout<<"¿Cuantos juegos tienes?"<<endl;
    cin>>njuegos;
    cin.ignore ( 100 , '\n');//Protección para el enter
    cout<<"\n\n"<<endl;
    //Utilizamos el freespace para poder gestionar la variable
    vector <videojuego> listadejuegos;
    videojuego juego;
    //Introduce los juegos 
    for(int i=0; i<njuegos; i++){
        string aname,agenero,aplataforma;
        cout<<"introduce el nombre para el juego "<<i+1<<endl;
        getline (cin, aname);
        cout<<"introduce el genero para el juego "<<i+1<<endl;
        getline (cin, agenero);
        cout<<"introduce la plataforma para el juego "<<i+1<<endl;
        getline (cin, aplataforma);
        juego.set(aname,agenero,aplataforma);
        listadejuegos.push_back(juego);
        cout<<"Registrado\n\n"<<endl;
    }
    cout<<"JUEGOS:"<<endl;
    cout<<"----------------------------------------"<<endl;
    for(int i=0; i<njuegos;i++){
        cout<<listadejuegos[i].getnombre()<<endl;

    }
     cout<<"----------------------------------------"<<endl;

    //Si se le ha olvidado alguno o se ha comprado otro juego:
    int nNewGame;
    cout<<"¿Cuantos juegos te has comprado"<<endl;
    cin>>nNewGame;
    cin.ignore ( 100 , '\n');
    //Capturo los juegos nuevos

    for(int i=0; i<njuegos; i++){
        string aname,agenero,aplataforma;
        cout<<"introduce el nombre para el juego "<<i+1<<endl;
        getline (cin, aname);
        cout<<"introduce el genero para el juego "<<i+1<<endl;
        getline (cin, agenero);
        cout<<"introduce la plataforma para el juego "<<i+1<<endl;
        getline (cin, aplataforma);
        juego.set(aname,agenero,aplataforma);
        listadejuegos.push_back(juego);
        cout<<"Registrado\n\n"<<endl;
    }    
    cout<<"JUEGOS:"<<endl;
    cout<<"----------------------------------------"<<endl;
    for(int i=0; i<njuegos;i++){
        cout<<listadejuegos[i].getnombre()<<endl;

    }
    cout<<"----------------------------------------"<<endl;

    return 0;

}


