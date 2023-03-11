#include <iostream>
using namespace std;

int main() {
int x=654;
int y;
while(true){
    cout<<"zgadnij liczbe: ";
    cin>>y;
    if(y==654){
        cout<<"zgadles!";
        return 0;
    }
    if(y<654){
        cout<<"za malo!\n";
    }
    if(y>654){
        cout<<"za duzo!\n";
    }
}
}