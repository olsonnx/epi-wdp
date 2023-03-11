#include <iostream>
using namespace std;

int main() {
  int x;
  cin>>x;
  if(x%3==0) {
    cout<<"podzielna przez 3\n";
  }
  if(x%5==0) {
    cout<<"podzielna przez 5\n";
  }
  if(x%7==0) {
    cout<<"podzielna przez 7\n";
  }
}

//tryhard - dodaj else dla niepodzielnosci