#include <iostream>
using namespace std;
int *puntero = NULL;
int sinpuntero (){
    int variable;
    variable = 0 ;
    variable = variable + 10;
    return variable;
}
 void usandopuntero(int variable){
     puntero = puntero + 10;
     return;     
 }
 int main(){
     int variable = 14;
     cout << variable;
     variable = sinpuntero();
     cout << variable;
     puntero =& variable;
     usandopuntero();
     cout << variable;
     return 0;
 }
 