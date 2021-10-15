#include <iostream>
using namespace std;
template <class a>
a solicitardatos(){
    cout << "Por favor introduzca su dato";
    a dato_1 ;
    cin >> dato_1;
    return dato_1;
    }
template <class a>
void imprimirdatos(){
    a dato_1 = solicitardatos();
    a dato_2 = solicitardatos();
    a dato_3 = solicitardatos();
    cout << dato_1 + ", " + dato_2 + ", " + dato_3;
}
template <class a>
int main(){
    imprimirdatos();
    return 0;
}