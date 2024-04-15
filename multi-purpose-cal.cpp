#include <iostream>
#include <windows.h>
#include <thread>
#include <chrono>
#include <conio.h>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

// hàm dừng code
void pauseCode(int milliseconds);
// hàm in màu
void printColoredText(int textColor);
// hàm tính toán
void tinhToan();
int main()
{
    // thiết lập tiếng việt
    SetConsoleOutputCP(65001);

    int usrChoice;
    bool validUsrChoice = false;

    cout << " Multi Purpose Calculator v1.0 --- 10-4-24" << endl;
    cout << endl;
    pauseCode(1000);
    
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
        pauseCode(250);

        // trường hợp các lựa chọn
        switch (usrChoice)
        {
        case 1:
            validUsrChoice = true;
            tinhToan();
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

// hàm tính toán
void tinhToan()
{
    bool validOp = false;
    cout << " Đang tải..." << endl;
    cout << endl;
    string luaChon;
    double soA, soB;
    pauseCode(1000);

    while (!validOp)
    {
        cout << endl;
        cout << " Nhập phép tính và số để tính toán" << endl;
        cout << endl;
        cout << " + : Tính phép cộng" << endl;
        cout << " - : Tính phép trừ" << endl;
        cout << " * : Tính phép nhân" << endl;
        cout << " / : Tính phép chia" << endl;
        cout << " % : Tính phép chia lấy dư" << endl;
        cout << " sqrt : Tính căn bậc hai" << endl;
        cout << " e : Quay về màn hình chính" << endl;
        cout << endl;

        cout << " Nhập phép tính bạn muốn thực hiện: ";
        cin >> luaChon;
        cout << endl;
        pauseCode(250);

        // viết thường lựa chọn người dùng nhập
        transform(luaChon.begin(), luaChon.end(), luaChon.begin(), ::tolower);

        // khi người dùng thoát
        if (luaChon == "e")
        {
            validOp = true;
            cout << " Bấm bất kì phím nào để quay về màn hình chính" << endl;
            getch();
            cout << endl;
            cout << " Đang quay về màn hình chính..." << endl;
            cout << endl;
            pauseCode(250);
            main();
        }
        // tính căn bậc hai
        else if (luaChon == "sqrt")
        {
            double canBacHai;
            cout << " Nhập một số: ";
            cin >> soA;
            cout << endl;
            pauseCode(250);

            // nếu a ko phải số âm
            if (soA >= 0)
            {
                canBacHai = sqrt(soA);
                cout << " Căn bậc hai của " << soA << " là: " << canBacHai << endl;
            }
            // nếu a là số âm 
            else
            {
                cout << " Lỗi! Không thể tính căn bậc hai của số âm" << endl;
            }
            pauseCode(1000);
        }
        // tính toán thông thường
        else
        {
            cout << " Nhập số a: ";
            cin >> soA;
            cout << endl;
            cout << " Nhập số b: ";
            cin >> soB;
            cout << endl;
            pauseCode(250);

            // trường hợp các phép tính
            if (luaChon == "+")
            {
                double phepCong = soA + soB;
                cout << " Kết quả = " << phepCong << endl;
            }
            else if (luaChon == "-")
            {
                double phepTru = soA - soB;
                cout << " Kết quả = " << phepTru << endl;
            }
            else if (luaChon == "*")
            {
                double phepNhan = soA * soB;
                cout << " Kết quả = " << phepNhan << endl;
            }
            else if (luaChon == "/")
            {
                // nếu b khác 0
                if (soB != 0)
                {
                    double phepChia = soA / soB;
                    cout << " Kết quả = " << phepChia << endl;
                }
                // nếu b là 0
                else
                {
                    cout << " Lỗi! Không thể chia cho 0" << endl;
                }
            }
            else if (luaChon == "%")
            {
                int aInt = (int)soA; // ép a xuống int
                int bInt = (int)soB; // ép b xuống int
                double chiaLayDu = aInt % bInt;
                cout << " Số dư của " << aInt << " và " << bInt << " là: " << chiaLayDu << endl;
            }
            else
            {
                cout << " Phép tính không hợp lệ! Vui lòng nhập lại" << endl;
            }
            pauseCode(1000);
        }
    }
}