#include <iostream>

#include <stdio.h>
#include <fcntl.h>
#include <io.h>

using namespace std;

int main() {


    printf("\033[1;35m");
    wcout << "🅆🄴🄻🄲🄾🄼🄴 🅃🄾 🅃🄷🄴 🅂🅃🅁🄾🄻🄻 " << endl;
    wcout << "\t\t\t\t\t\t\t║║║║╣ ║  ║  ║ ║║║║║╣    ║ ║ ║   ║ ╠═╣║╣   ╚═╗ ║ ╠╦╝║ ║║  ║ " << endl;
    wcout << "\t\t\t\t\t\t\t╚╩╝╚═╝╩═╝╚═╝╚═╝╩ ╩╚═╝   ╩ ╚═╝   ╩ ╩ ╩╚═╝  ╚═╝ ╩ ╩╚═╚═╝╩═╝╩═╝" << endl;
    printf("\033[0m");

    _setmode(_fileno(stdout), _O_U16TEXT);
    /*wprintf(L"\x2566\x2566 \x2566 bite")<< endl;*/

    wprintf(L"\x2566 \x2566 \x2554\x2550\x2557\x2566 \x2554\x2550\x2557 \x2554\x2550\x2557 \x2554\x2557 \n");
    wprintf(L"\x2551\x2551\x2551 \x2551\x2563 \x2551 \n");
    wcout << L"\x255a\x2569\x255d \x255a\x2550\x255d\x255d\x2550\x255d";
    return 0;
   

}

