#include <iostream>
#include <windows.h>
using namespace std;

int wherex() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    return csbi.dwCursorPosition.X + 1;
}
int wherey() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    return csbi.dwCursorPosition.Y + 1;
}
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x - 1;
    coord.Y = y - 1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}




void myclreol(int len = -1) {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hOut, &csbi);

    int x = wherex();
    int y = wherey();

    if(len == -1)
        len = csbi.dwSize.X - x + 1;

    DWORD written;
    FillConsoleOutputCharacter(hOut, ' ', len, {SHORT(x - 1), SHORT(y - 1)}, &written);

    gotoxy(x, y);
}

int main() {

    for(int i = 0; i < 5; i++)
        cout << "abcdefghijklmnopqrstyvwxyz1234567890"<<endl;

    gotoxy(1, 3);
    myclreol();

    gotoxy(3, 2);
    myclreol(20);
    return 0;
}