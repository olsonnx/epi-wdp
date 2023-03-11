#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    int t[100];
    int temp;
    bool warunek=true;
    for(int i=0; i<6; i++) {
        cin>>t[i];
    }
    
    while(warunek==true) {
        for(int i=0; i<5; i++){
            warunek=false;
            if(t[i]>t[i+1]){
                temp=t[i];
                t[i]=t[i+1];
                t[i+1]=temp;
                warunek=true;
            }
        }

    }

    for(int i=0; i<6; i++) {
        cout<<t[i]<<" ";
    }
}
