#include <iostream>
#include <windows.h>
#include <thread>
#include <chrono>
#include <conio.h>
using namespace std;

// hàm dừng code
void pauseCode(int milliseconds);
// hàm in màu
void printColoredText(int textColor);

int main()
{
    // thiết lập tiếng việt
    SetConsoleOutputCP(65001);

    int usrChoice;
    bool validUsrChoice = false;

    cout << " Multi Purpose Calculator v1.0 --- 10-4-24" << endl;
    cout << endl;

    while (!validUsrChoice)
    {
        cout << " Nhập lựa chọn của bạn bằng phím số trên bàn phím để lựa chọn" << endl;
        cout << endl;

        // bảng lựa chọn
        cout << " PHÍM 1: Tính toán cơ bản" << endl;
        cout << " PHÍM 2: Tính chu vi, diện tích, thể tích" << endl;
        cout << " PHÍM 3: Chuyển đổi" << endl;
        cout << " PHÍM 4: Thoát" << endl;
        cout << endl;

        // người dùng nhập lựa chọn
        cout << " Nhập lựa chọn của bạn: ";
        cin >> usrChoice;
        cout << endl;

        // trường hợp các lựa chọn
        switch (usrChoice)
        {
        case 1:
            validUsrChoice = true;
            break;
        case 2:
            validUsrChoice = true;
            break;
        case 3:
            validUsrChoice = true;
            break;
        case 4:
            validUsrChoice = true;
            cout << " Bấm bất kì phím nào để thoát chương trình" << endl;
            cout << endl;
            getch();
            cout << " Đang thoát chương trình..." << endl;
            cout << endl;
            break;
        }
    }
}

// hàm dừng code
void pauseCode(int milliseconds)
{
    this_thread::sleep_for(chrono::milliseconds(milliseconds));
}

// hàm in màu chữ
void printColoredText(int textColor)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, textColor);
}