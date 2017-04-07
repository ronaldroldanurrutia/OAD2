#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

void removecomments(ifstream & is,ofstream & os){
    string elemento,elemento2="\\";
    vector<string>v;
    while(getline(is,elemento)){
        v.push_back(elemento);
    }
    string elemento1="\\";
    for(int i=0;i<v.size();i++){
        bool verdad=true;
        int j=0;
        for(;j<(v[i].size()-1);){
            if(v[i][j]!='/' && v[i][j+1]!='*'){
                verdad = false;
                j+=2;
            }
            if(verdad){
                os <<  v[i][j] ;
            }
            if(v[i][j]==elemento1[0] && v[i][j+1]=='*'){
                verdad = true;
                j+=2;
            }
            if(v[i][j]=='/' && v[i][j+1]=='/'){
                break;
            }
        }
        if(verdad){
            if(j==v[i].size()-1){
                os << v[i][j];
            }
        }
        os << endl;
    }
}

int main(){
    ifstream archivo;
    string elemento;
    archivo.open("lista.txt");
    cout << elemento << endl;
    return 0;

}
