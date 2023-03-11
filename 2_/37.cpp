#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    srand((unsigned) time(NULL));
    for(int i=0; i<1000; i++) {
    int x;
    x= rand()%6+ 1;
    cout<<x<<"\n";
    }
}
