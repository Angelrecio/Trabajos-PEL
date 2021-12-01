#include <iostream>
#include <string>
using namespace std;


template <class a>
class valores {
    private:
    a v1;
    a v2;
    a v3;
    public:
    valores(a v1, a v2, a v3);
<<<<<<< HEAD
};
void imprimirdatos(){
    valores() = new valores(int dato_1 ,int dato_2,int dato_3);
    cout << "Por favor introduzca su dato";
    cin >> dato_1;
    cout << "Por favor introduzca su dato";
    cin >> dato_2;
    cout << "Por favor introduzca su dato";
    cin >> dato_3;
    cout << dato_1 + ", " + dato_2 + ", " + dato_3;
=======
    void ver();
};
template <class a>
valores <a>::valores(a v_1, a v_2, a v_3){
    v1 = v_1;
    v2 = v_2;
    v3 = v_3;
}
template <class a>
void valores<a>::ver(){
cout << v1 << ", " << v3 << ", " << v2 << "\n " 
>>>>>>> main
}
int main(){
    valores <string> paises("España","Francia","Portugal");
    valores <char> letras("j","q","t");
    valores <int> numeros("14","23","54");
    // los vemos los valores
    paises.ver();
    letras.ver();
    numeros.ver();
}
