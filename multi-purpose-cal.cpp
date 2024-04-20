#include <iostream>
#include <windows.h>
#include <thread>
#include <chrono>
#include <conio.h>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

// nhấn để quay về
void pressToReturn();
// nhập ko hợp lệ
void invalidInput();
// hàm dừng code
void pauseCode(int milliseconds);
// hàm in màu
void printColoredText(int textColor);
// hàm tính toán
void tinhToan();
// lựa chọn chu vi, diện tích, thể tích
void chuViDienTichTheTich();
// chọn hình
void chonHinh();

// tính chu vi
class tinhChuVi
{
private:
    // chu vi hcn
    double chuViHCN(double dai, double rong)
    {
        double P = (dai + rong) * 2;
        return P;
    }
    // chu vi hình vuông
    double chuViHV(double canh)
    {
        double P = canh * 4;
        return P;
    }
    // chu vi hình tròn
    double chuViHT(double d)
    {
        double PI = 3.14;
        double P = d * PI;
        return P;
    }
    // chu vi hình tam giác
    double chuViHTG(double a, double b, double c)
    {
        double P = a + b + c;
        return P;
    }

public:
    // hình chữ nhật
    void hinhChuNhat()
    {
        double dai, rong;
        cout << " Nhập chiều dài hình chữ nhật: ";
        cin >> dai;
        cout << endl;
        cout << " Nhập chiều rộng hình chữ nhật: ";
        cin >> rong;
        cout << endl;
        pauseCode(250);
        cout << " Chu vi hình chữ nhật là: " << chuViHCN(dai, rong) << endl;
        cout << endl;
        pauseCode(1000);
    }
    // hình vuông
    void hinhVuong()
    {
        double canh;
        cout << " Nhập độ dài cạnh hình vuông: ";
        cin >> canh;
        cout << endl;
        pauseCode(250);
        cout << " Chu vi hình vuông là: " << chuViHV(canh) << endl;
        cout << endl;
        pauseCode(1000);
    }
    // hình tròn
    void hinhTron()
    {
        double d;
        cout << " Nhập đường kính hình tròn: ";
        cin >> d;
        cout << endl;
        pauseCode(250);
        cout << " Chu vi hình tròn là " << chuViHT(d) << endl;
        cout << endl;
        pauseCode(1000);
    }
    // hình tam giác
    void hinhTamGiac()
    {
        double a, b, c;
        cout << " Nhập cạnh a: ";
        cin >> a;
        cout << endl;
        cout << " Nhập cạnh b: ";
        cin >> b;
        cout << endl;
        cout << " Nhập cạnh c: ";
        cin >> c;
        cout << endl;
        pauseCode(250);
        cout << " Chu vi hình tam giác là: " << chuViHTG(a, b, c) << endl;
        cout << endl;
        pauseCode(1000);
    }
    // tính chu vi
    void chuVi()
    {
        bool exit = false;
        int luaChon;
        cout << " Đang tải..." << endl;
        cout << endl;
        pauseCode(100);

        while (!exit)
        {
            chonHinh();

            // người dùng nhập
            cout << " Chọn 1 hình để tiếp tục: ";
            cin >> luaChon;
            cout << endl;

            switch (luaChon)
            {
            case 1: // hình chữ nhật
                hinhChuNhat();
                break;
            case 2: // hình vuông
                hinhVuong();
                break;
            case 3: // hình tròn
                hinhTron();
                break;
            case 4: // hình tam giác
                hinhTamGiac();
                break;
            case 0: // thoát
                exit = true;
                pressToReturn();
                break;
            default:
                invalidInput();
                break;
            }
        }
    }
};
// tính diện tích
class tinhDienTich
{
private:
    double dienTichHCN(double dai, double rong)
    {
        double dienTich = dai * rong; // s = a x b
        return dienTich;
    }
    double dienTichHV(double canh)
    {
        double dienTich = canh * canh; // s = a^2
        return dienTich;
    }
    double dienTichHT(double r)
    {
        double PI = 3.14;
        double dienTich = r * r * PI; // s = r^2 x 3.24
        return dienTich;
    }
    double dienTichHTG(double cao, double day)
    {
        double dienTich = (cao * day) / 2; // s = 1/2 x (a x h)
        return dienTich;
    }

public:
    void hinhChuNhat()
    {
        double dai, rong;
        cout << " Nhập chiều dài hình chữ nhật: ";
        cin >> dai;
        cout << endl;
        cout << " Nhập chiều rộng hình chữ nhật: ";
        cin >> rong;
        cout << endl;
        pauseCode(250);
        cout << " Diện tích hình chữ nhật là: " << dienTichHCN(dai, rong) << endl;
        cout << endl;
        pauseCode(1000);
    }
    void hinhVuong()
    {
        double canh;
        cout << " Nhập độ dài cạnh hình vuông: ";
        cin >> canh;
        cout << endl;
        pauseCode(250);
        cout << " Diện tích hình vuông là: " << dienTichHV(canh) << endl;
        cout << endl;
        pauseCode(1000);
    }
    void hinhTron()
    {
        double banKinh;
        cout << " Nhập bán kính hình tròn: ";
        cin >> banKinh;
        cout << endl;
        pauseCode(250);
        cout << " Diện tích hình tròn là: " << dienTichHT(banKinh) << endl;
        cout << endl;
        pauseCode(1000);
    }
    void hinhTamGiac()
    {
        double cao, day;
        cout << " Nhập chiều cao hình tam giác: ";
        cin >> cao;
        cout << endl;
        cout << " Nhập độ dài đáy hình tam giác: ";
        cin >> day;
        cout << endl;
        pauseCode(250);
        cout << " Diện tích hình tam giác là: " << dienTichHTG(cao, day) << endl;
        cout << endl;
        pauseCode(1000);
    }
    void dienTich()
    {
        bool exit = false;
        int luaChon;
        cout << " Đang tải..." << endl;
        cout << endl;
        pauseCode(100);

        while (!exit)
        {
            chonHinh();

            // người dùng nhập
            cout << " Chọn 1 hình để tiếp tục: ";
            cin >> luaChon;
            cout << endl;

            // kiểm tra lựa chọn
            switch (luaChon)
            {
            case 1:
                hinhChuNhat();
                break;
            case 2:
                hinhVuong();
                break;
            case 3:
                hinhTron();
                break;
            case 4:
                hinhTamGiac();
                break;
            case 0:
                exit = true;
                pressToReturn();
                break;
            default:
                invalidInput();
                break;
            }
        }
    }
};
int main()
{
    // thiết lập tiếng việt
    SetConsoleOutputCP(65001);

    int usrChoice;
    bool validUsrChoice = false;

    cout << " Multi Purpose Calculator v2.2 --- 20-4-24" << endl;
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
        cout << " PHÍM 0: Thoát" << endl;
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
            chuViDienTichTheTich();
            break;
        case 3:
            validUsrChoice = true;
            break;
        case 0:
            validUsrChoice = true;
            cout << " Bấm bất kì phím nào để thoát chương trình" << endl;
            cout << endl;
            getch();
            cout << " Đang thoát chương trình..." << endl;
            cout << endl;
            break;
        default:
            cout << " Lựa chọn không hợp lệ! Vui lòng thử lại" << endl;
            cout << endl;
            pauseCode(1000);
            break;
        }
    }
}
// nhấn để quay về
void pressToReturn()
{
    cout << endl;
    cout << " Bấm bất kì phím nào để quay về màn hình chính" << endl;
    getch();
    cout << endl;
    cout << " Đang quay về màn hình chính..." << endl;
    cout << endl;
    main();
}
// nhập không hợp lệ
void invalidInput()
{
    cout << " Lựa chọn không hợp lệ! Vui lòng thử lại" << endl;
    cout << endl;
    pauseCode(1000);
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
            pressToReturn();
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
// chọn hình
void chonHinh()
{
    cout << " Chọn 1 hình để tính toán" << endl;
    cout << endl;

    cout << " Phím 1: Hình chữ nhật" << endl;
    cout << " Phím 2: Hình vuông" << endl;
    cout << " Phím 3: Hình tròn" << endl;
    cout << " Phím 4: Hình tam giác" << endl;
    cout << " Phím 0: Thoát" << endl;
    cout << endl;
}

// lựa chọn chu vi, diện tích, thể tích
void chuViDienTichTheTich()
{
    tinhChuVi tinhChuVi;
    tinhDienTich tinhDienTich;
    bool validUsrChoice = false;
    int luaChon;
    cout << " Đang tải..." << endl;
    cout << endl;
    pauseCode(1000);

    while (!validUsrChoice)
    {
        cout << " Chọn tính với chu vi, hoặc diện tích, hoặc thể tích thông qua phím số trên bàn phím" << endl;
        cout << endl;

        // màn hình lựa chọn
        cout << " Phím 1: Tính chu vi" << endl;
        cout << " Phím 2: Tính diện tích" << endl;
        cout << " Phím 3: Tính thể tích" << endl;
        cout << endl;

        // nhập lựa chọn
        cout << " Nhập lựa chọn: ";
        cin >> luaChon;
        cout << endl;

        // trường hợp các lựa chọn
        switch (luaChon)
        {
        case 1:
            validUsrChoice = true;
            tinhChuVi.chuVi();
            break;
        case 2:
            validUsrChoice = true;
            tinhDienTich.dienTich();
            break;
        case 3:
            validUsrChoice = true;
            break;
        default:
            break;
        }
    }
}