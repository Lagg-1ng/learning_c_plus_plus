#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

using std::cout;

int main()
{
    setlocale(LC_ALL, "Russian");
    SYSTEMTIME st; //храним время

    while (true) {
        GetLocalTime(&st);

        if ((st.wSecond < 10) || (st.wHour < 10) || (st.wMinute < 10)) 
            cout << setfill('0') << setw(2) << st.wHour << " " << setfill('0') << setw(2) << st.wMinute << " " << setfill('0') << setw(2) << st.wSecond << std::endl;
        else
            cout << st.wHour << " " << st.wMinute << " " << st.wSecond << std::endl;
        

        cout << "День " << setfill('0') << setw(2) << st.wDay << " Месяц " << setfill('0') << setw(2) << st.wMonth << " " << " Год "<< setfill('0') << setw(2) << st.wYear << std::endl;
        Sleep(1000);
        system("cls");
    }

    /*GetLocalTime(&st);
    cout << "Sec" << st.wSecond;*/

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.