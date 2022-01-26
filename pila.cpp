#include <iostream>
#include <string>
#include <ctime>
#include<stack>
#include<vector>
using namespace std;
// cola es lo mismo para declarar, solo que se llama queue

int main(){
    vector<int> lista_nums;
    int num_de_gente;
    stack <int> pila;
    cout<< "introduce el numero de números que quiera introducir";
    cin >>  num_de_gente;
    for (int i = 0; i < num_de_gente; i++){
        int num;
        cout<<"Introduzca el número ";
        cin >> num;
        lista_nums.push_back(num);
    
    }
    int menor;
    int posicion;
    for (int j = 1; j < num_de_gente; j++){
        menor = INT_MAX;
    for (int i = 1; i < num_de_gente; i++){
    if (lista_nums[i]< menor){
        menor = lista_nums[i];
        posicion = i;
    }
    pila.push(menor);
    lista_nums.erase(lista_nums.begin() + posicion);
    }
    }
    lista_nums.empty();
    int variable_num;
    for (int k = 0; k< pila.size();k++){
        variable_num = pila.top();
        pila.pop();
        lista_nums.push_back(variable_num);
        cout << lista_nums[k] << ", ";
    }
}