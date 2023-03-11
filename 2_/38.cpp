#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    int t[10000];
    float wyst[10];
    float oczekiwana;
    srand((unsigned) time(NULL));
    for(int i=0; i<1000; i++) {
    t[i]= rand()%6+ 1;
    }
    for(int i=0; i<1000; i++) {
       switch(t[i]){
        case 1: wyst[1]++; break;
        case 2: wyst[2]++; break;
        case 3: wyst[3]++; break;
        case 4: wyst[4]++; break;
        case 5: wyst[5]++; break;
        case 6: wyst[6]++; break;
       }
    }
    for(int i=1; i<7; i++) {
        cout<<"wystapienia "<<i<<" "<<wyst[i]<<"\n";
    }
    for(int i=1; i<7; i++) {
        oczekiwana+=i*(wyst[i]/1000);
    }
    cout<<oczekiwana;
}
