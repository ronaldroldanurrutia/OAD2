#include<iostream>
#include<fstream>

using namespace std;

void removecomments(ifstream &is,ofstream &os){
    string v;
    bool verdad=true;
    while(getline(is,v)){
        int j=0;
        for(;j<v.size()-1;){
            if(v[j]=='/' && v[j+1]=='*'){
                verdad = false;
                j+=1;
            }
            if(v[j]=='/' && v[j+1]=='/'){
                j=-1;
                break;
            }
            if(verdad==true){
                os << v[j];
            }
            if(v[j]=='*' && v[j+1]=='/'){
                verdad = true;
                j+=1;
            }
            j++;
        }
        if(verdad==true){
            if(j==v.size()-1){
                os << v[j];
            }
        }
        os << endl;
    }
}

int main(){
    ifstream archivo;
    ofstream os;
    archivo.open("hola.txt");
    os.open("hola1.txt");
    removecomments(archivo,os);
    return 0;
}

