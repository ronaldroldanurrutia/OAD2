#include<iostream>
#include<vector>

using namespace std;


string addcommas(string digits){
    string digitss="";
    int n=1;
    for(int i=digits.size();i>0;i--){
        if(n==3){
            if(i==1){digitss=(digits[i-1]+digitss) ;}
            else{digitss=','+(digits[i-1]+digitss) ;}
            n=1;
        }
        else{
            digitss=digits[i-1]+digitss;
            n++;
        }
    }
    return digitss;
}

int main(){
    string digits;
    while(true){
        cout << "Añada cadena: " ;
        cin>>digits;
        if(digits=="2"){break;}
        cout << addcommas(digits) << endl;
    }
    return 0;


}
