/*dowód empiryczny - tzn. sprawdz na czuja

w wypadku unsigned int dzieja sie jakies dzikie rzeczy i sie zapetla do 0 wiec metoda na ujemne nie zadziala

sprawdzamy kiedy x == 0 i mamy esse

*/

#include <iostream>
using namespace std;

int main() {
unsigned int x=4294967000;
while(true) {
    
    cout<<x<<"\n";
    x++;
   if(x==0) {
    return 0;
    }
}
}