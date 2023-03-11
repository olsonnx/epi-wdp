#include <iostream>
using namespace std;

/*interpretacji tego zadania jest jakies 123481294
trojkat moze byc na zasadzie:

  *
 ***
*****

lub:

*
**
***

mozemy zalozyc ze chodzi jednak o to pierwsze bo jest tez mowa o drzewku, 
ale mysle ze mozna sie klocic o poprawnosc bo interpretacja jest dowolna

ja uznalem ze zrobie overkill i drzewko bedzie o dowolnej wysokosci
kod jest z deczka rozwalony

*/
int main() {
  int x,y=1,z=0;
  cin>>x;
while(z<x-y+1){
    cout<<" ";
    z++;
   }

   z=0;
   while(z<y){
    cout<<"X";
    z++;
}
   z=0;
cout<<"\n";
while(y<x) {

   while(z<x-y){
    cout<<" ";
    z++;
   }

   z=0;
   while(z<y*2+1){
    cout<<"X";
    z++;
   }
   z=0;
   y++;
   cout<<"\n";
}

}

