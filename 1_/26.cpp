#include <iostream>
#include <math.h> //trzeba dorzucic math.h inaczej nie mamy pierwiastka i trzeba to pisac samemu (syf)
using namespace std;

int main() {
int a, b, c, delta, x1, x2;

while(true) {
cout<<"podaj wspolczynnik przy A: \n";
cin>>a;
//a musi byc rozne od 0 wiec warto sie upewnic
if (a!=0) {
    break;
} else {
    cout<<"A musi byc rozne od 0!";
}
}
cout<<"podaj wspolczynnik przy B: \n";
cin>>b;
cout<<"podaj wspolczynnik przy C: \n";
cin>>c;


delta=b*b-4*a*c;

//sprawdzamy delte
if(delta<0) { 
    cout<<"rownanie nie ma rozwiazan";
    return 0;
} else if (delta==0) {
    "rownanie ma jedno rozwiazanie:\n";
    x1= -b/(2*a);
    cout<<x1;
    return 0;
}
delta=sqrt(delta); //"sqrt" = pierwiastek z liczby;
x1= (-b-delta)/(2*a);
x2= (-b+delta)/(2*a);
cout<<"rownanie ma dwa rozwiazania: \n";
cout<<"x1 = "<<x1<<" x2 = "<<x2;
return 0;

}