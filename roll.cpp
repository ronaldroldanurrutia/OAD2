#include<iostream>
#include<vector>

using namespace std;



void roll(void){
    vector<char>v;
    char n1;
    int n,k;
    for(;cin>>n1 && n1!='.';){
        v.push_back(n1);
    }
    cout << "Primero: ";
    cin>>n;
    cout << endl;
    cout << "Segundo: ";
    cin>>k;
    if(n>v.size()){
        cout << "ERRROR" << endl;
        return ;
    }
    k=k%n;
    for(int i=k;i<n;i++){
        cout << v[i] << endl;
    }
    for(int i=0;i<k;i++){
        cout << v[i] << endl;
    }
    for(int i=n;i<v.size();i++){
        cout << v[i] << endl;
    }
}

int main(){
    roll();
    return 0;

}
