#include <iostream>  // База
#include <windows.h> // А почему бы и нет
using namespace std;
// aftours: LeRMoN, Kolia, XeSh, FlasH. school Shag, code: house worken. my tg:https://t.me/LERMONfupa <- click Ctrl+Left mouse, im check sms.Надеюсь правильно написал. \\   
void naturale_numb(int n) { // 1  Ex( у меня в школе ексесайс ну я напимер пишу: ex 2 p 32. Ето обозначает что 2 задание страничка 32 иза етого пишу ex.
    if (n > 0) {
        naturale_numb(n - 1);
        cout << n << " ";
    }
}

void RightLeft(int N) {  // 2 Ex
    if (N > 0) {
        cout << N % 10 << " ";
        RightLeft(N / 10);
    }
}

void LeftRight(int N) { // 3 Ex
    if (N > 0) {
        LeftRight(N / 10);
        cout << N % 10 << " ";
    }
}

int main() {
    int n;
    cin >> n;
    naturale_numb(n);
    cout << "\n";

    int N;
    cin >> N;
    RightLeft(N);
    cout << "\n";

    cin >> N;
    LeftRight(N);
    cout << "\n";
    return 0;
}