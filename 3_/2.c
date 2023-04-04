#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;

//nie polecam zabawy z mallociem za ktoryms razem dalem za duzo pamieci i mi wykrzaczylo system i kazalo robic ponowna konfiguracje niektorych rzeczy xdDddd

//idea jest taka ze sam wskaznik na zapisanie pamieci nic nie da bo te pamiec trzeba czyms zapchac wiec wykorzystamy memseta

//trzeba eksperymentowac troche z iloscia ramu zanim sie zrobi niebezpiecznie; jak macie 8gb ramu too dajcie sobie w forze do 7000 i powinno banglac

int main() {
      for(int i=0; i<15000; i++) {
            void *m = malloc(1024*1024);
            memset(m,0,1024*1024);
      }
      system("pause");
      return 0;
}
