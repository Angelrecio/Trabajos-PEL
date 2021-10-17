#include <iostream>
using namespace std;
int sinpuntero (){
    int variable;
    variable = 0 ;
    variable = variable + 10;
    return variable;
}
 void usandopuntero(int *puntero){
     
     puntero = puntero + 10;
     return;     
 }
 int main(){
     int *puntero = NULL;
     int variable = 14;
     cout << variable;
     variable = sinpuntero();
     cout << variable;
     puntero =& variable;
     usandopuntero(puntero);
     cout << variable;
     return 0;
 }
 