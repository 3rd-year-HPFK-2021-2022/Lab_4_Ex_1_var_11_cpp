#include <Windows.h>
#include "Mimicry.h"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    cout<<"Клас В1 - предки відсутні\n";
    B1 b1;
    b1.show();
    cout<<"\nКлас В2 - предки відсутні\n";
    B2 b2;
    b2.show();
    cout<<"\nКлас D1 - предки (private) B1, (public) B2\n";
    D1 d1;
    ((B2)d1).show();
    cout<<"\nКлас D2 - предки (public) B1, (private) B2\n";
    D2 d2;
    ((B1)d2).show();
    cout<<"\nКлас D3 - предки (private) D1, (public) D2\n";
    D3 d3;
    cout<<"\n\nДеструктори:\n";


}
