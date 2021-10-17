#include <iostream> // библиотеки iostream - > вводить и выводить данные в консоль
#include <cmath>
using namespace std;

int main(){
    int a, b;
    // cin >> a; // ввод данных
    // // cout << a / 2; // вывод
    // float b;
    // cin >> b;
    // cout << b / 2;
    // string s1, s2;
    // cin >> s1 >> s2;
    // // cout << "Hello " << s;
    // cout << s1 + s2;
    // bool c;
    // c = true;
    // cout << c;
    cin >> a >> b;
    cout << a + b << " " << a - b << " "  << a * b << " " << a / b << " ";
    cout << a % b << " ";
    cout << pow(a, b) << " " << sqrt(a);


    return 0;
}
