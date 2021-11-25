#include <iostream>
using namespace std;
template <class a>
class valores {
    private:
    a v1;
    a v2;
    a v3;
    public:
    valores(a v1, a v2, a v3);
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
}
int main(){
    imprimirdatos();
    return 0;
}