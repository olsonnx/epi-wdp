#include <iostream>
#include <stdio.h>
using namespace std;

//nie da sie uzywac stringow w case'ach (mozna tylko integery) wiec jest to zrobione po macoszemu

int main() {
int znak;
cin>>znak;
switch (znak) {
    case 1: cout<<"wodnik - bedzie dobrze!"; break;
    case 2: cout<<"ryby - bedzie zle!"; break;
    case 3: cout<<"baran - bedzie tragicznie!"; break;
    case 4: cout<<"byk - bedzie super!"; break;
    case 5: cout<<"bliznieta - bedzie wspaniale!"; break;
    case 6: cout<<"rak - bedzie ok"; break;
    case 7: cout<<"lew - bedzie tak sobie"; break;
    case 8: cout<<"panna - bedzie srednio"; break;
    case 9: cout<<"waga - bedzie tak jak zwykle"; break;
    case 10: cout<<"skorpion - czeka cie najgorszy okres w twoim zyciu i wiele cierpienia"; break;
    case 11: cout<<"strzelec - bedzie spoko"; break;
    case 12: cout<<"koziorozec - ani dobrze ani zle"; break;
}  

}