#include<iostream>

using namespace std;

string juliocesar(string cadena,int n){
    for(int i=0;i<cadena.size();i++){
        if(cadena[i]>='a' && cadena[i]<='z'){
            int n1=cadena[i]+(n%26);
            if(n1<97){
                cadena[i]=n1+26;
            }
            else{
                    if(n1>122){
                        cadena[i]=n1-26;
                    }
                    else{
                        cadena[i]=n1;
                    }
            }
        }
        if(cadena[i]>='A' && cadena[i]<='Z'){
            int n1=cadena[i]+(n%26);
            if(n1< 65){
                cadena[i]=n1+26;
            }
            else{
                    if(n1>90){
                        cadena[i]=n1-26;
                    }
                    else{
                        cadena[i]=n1;
                    }
            }
        }
    }
    return cadena;
}

int main(){
    cout << "This program encondes a message using a Caesar cypher" << endl;
    string elemento;
    cin>>elemento;
    int n;
    cout << "Shift: " ;
    cin>>n;
    cout << juliocesar(elemento,n) << endl;
    return 0;
}
