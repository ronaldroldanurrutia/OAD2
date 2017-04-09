#include<iostream>
#include<vector>

using namespace std;

int convertir(string elemento){
    int n=elemento[0]-'0';
    for(int i=1;i<elemento.size();i++){
        n=n*10+(elemento[i]-'0');
    }
    return n;
}

int main(){
    vector<int>n;
    string elemento;
    for(;cin>>elemento && elemento!="a";){
            n.push_back(convertir(elemento));
    }
    int mayor=0;
    for(int i=0;i<n.size();i++){
        if(mayor < n[i]){
            mayor = n[i];
        }
    }
    int k=((mayor/10)*10)+10;
    for(int i=10;i<=k;i+=10){
        cout << i << ":";
        for(int j=0;j<n.size();){
            if(n[j]<=i){
                cout << "*";
                n.erase(n.begin()+j);
            }
            else{
                j++;
            }
        }

        cout << endl;
    }
    return 0;
}
