/*dowód empiryczny - tzn. sprawdz na czuja

liczenie od 0 do maksymalnej wartosci zajmuje giga dlugo przy int i unsigned int wiec tutaj wersja skrocona

mozna powiedziec cos o tym ze szukamy od liczby X ze wzgledu na powod wyzej

w tym wypadku jest tylko do 127 wiec mamy esse
*/

#include <iostream>
using namespace std;

int main() {
char x=0;
while(true) {
    cout<<int(x)<<"\n";
    x++;
    if (x<0) {
        return 0;
        }
    }
}