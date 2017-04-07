#include<iostream>
#include<fstream>

using namespace std;

void removecomments(ifstream & is,ofstream & os){
    string elemento;
    //vector<>
    //while(getline(is,elemento)){
    //
    //}

}

int main(){
    ifstream archivo;
    string elemento;
    archivo.open("lista.txt");
    while(getline(archivo,elemento)){
        for(int i=0;i<elemento.size();i++){
            if(elemento[i]==' '){
                cout << 1;
            }
        }
        cout << endl;
    }
    cout << elemento << endl;
    return 0;

}
