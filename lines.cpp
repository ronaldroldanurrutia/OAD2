#include<iostream>
#include<fstream>

using namespace std;



int main(){
    ifstream archivo;
    archivo.open("lista.txt");
    string elemento,elemento1;
    int n=0;
    while(getline(archivo,elemento)){
        if(n<elemento.size()){
            elemento1=elemento;
            n=elemento.size();
        }
    }
    cout << elemento1 <<endl;
    archivo.close();
    return 0;

}
