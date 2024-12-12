#include<iostream>
#include<string>
#include <cstdlib> 
#include <chrono>  
#include <thread>  
#include <limits>
using namespace std;
//編譯_>obj 
int main() {

	char choice = 'y';
	while (choice == 'y' || choice == 'Y') {
        
        //各種定義
        int aa, ff, hh, fot, num, choo, van, s, f;
        float bb;
        char cc, choice;
        string dd, gg, ii;
        double ee, pua, pub, puc, pud, Celsius, Fahrenheit, Dee, High, area, height, weight;

        //選擇程式
        cout << "請選擇想執行的程式(數字請打1~10其中一個數)" << endl;
        cout << "1.整數 浮點數(小數) 計算" << endl;
        cout << "2.進位轉換" << endl;
        cout << "3.攝氏轉華氏" << endl;
        cout << "4.三角形面積" << endl;
        cout << "5.bmi計算" << endl;
        cout << "6.開啟Google亞東" << endl;
        cout << "7.兩數相除" << endl;
        cout << "8.成績計算" << endl;
        cout << "9.退出程式" << endl;
        cout << endl;
        cin >> choo;

        switch (choo) {
            //輸入輸出整數浮點數
        case 1: {
            cout << "請輸入第一個隨機整數: " << endl;
            cin >> aa;
            cout << "請輸入第二個隨機整數: " << endl;
            cin >> ff;
            cout << "請輸入第三個隨機整數(判斷奇數偶數用): " << endl;
            cin >> num;
            cout << "請輸入浮點數(小數): " << endl;
            cin >> bb;
            cout << endl;
            pua = ff * aa;
            pub = ff + aa;
            puc = ff + aa + bb;
            pud = ff * aa * bb;
            cout << "整數相加結果為: " << pub << endl;
            cout << "整數相乘結果為: " << pua << endl;
            cout << "整數與浮點數(小數)相加結果為: " << puc << endl;
            cout << "整數與浮點數(小數)相乘結果為: " << pud << endl;
            //if else 判斷奇偶數
            if (num % 2 == 0) {
                cout << num << "是偶數" << endl;
            }
            else {
                cout << num << "是奇數" << endl;
            }
            cout << endl;
            break;
        }

            //進位轉換
        case 2: {
            cout << "進位轉換" << endl;
            cout << "請輸入一個十位元數: " << endl;
            cin >> fot;
            cout << "八進位為: " << oct << fot << endl;
            cout << "十六進位為: " << hex << fot << endl;
            cout << endl;
            break;
        }

            //攝氏轉華氏
        case 3: {
            cout << "攝氏溫度轉華氏溫度" << endl;
            cout << "請輸入攝氏溫度: " << endl;
            cin >> Celsius;
            double Fahrenheit = (Celsius * 9 / 5) + 32;
            cout << "華氏溫度為: " << Fahrenheit << " 度" << endl;
            cout << endl;
            break;
        }

            //三角形面積
        case 4: {
            cout << "求三角形面積" << endl;
            cout << "請輸入底: " << endl;
            cin >> Dee;
            cout << "請輸入高: " << endl;
            cin >> High;
            double area = (Dee * High) / 2;
            cout << "三角形面積為: " << area << endl;
            cout << endl;
            break;
        }
            //BMI計算
        case 5: {
            cout << "請輸入您的身高（公分）：";
            cin >> height;
            cout << "請輸入您的體重（公斤）：";
            cin >> weight;
            double heightInMeters = height / 100.0;
            double bmi = weight / (heightInMeters * heightInMeters);
            cout << "你的BMI為: " << bmi << endl;

            if (bmi < 18.5) {
                cout << "你好輕欸" << endl;
            }
            else if (bmi < 24.9) {
                cout << "你體重很正常" << endl;
            }
            else if (bmi < 29.9) {
                cout << "你過重欸" << endl;
            }
            else {
                cout << "你好胖喔" << endl;
            }
            cout << endl;
            break;
        }
            //打開網頁
        case 6: {
            const char* command = "open https://www.aeust.edu.tw/";  
            // 使用 system 函數執行命令
            int result = system(command);
            break;
        }
            //除法計算
        case 7: {

            cout << "請輸入被除數: ";
            cin >> s;
            cout << "請輸入除數: ";
            cin >> f;

            if (f == 0) {
                cout << "除數不能為0。" << endl;
            }
            else {
                int Q = s / f;
                int W = s % f;

                cout << "商: " << Q << endl;
                cout << "餘數: " << W << endl;
                cout << endl;
                break;
            }
        }

            //成績計算
        case 8: {
            cout << "請輸入你的成績: ";
            cin >> van;

            // 判斷成績有沒有及格
            if (van >= 60) {
                cout << "及格" << endl;
            }
            else if (van >= 50) {
                cout << "補考" << endl;
            }
            else {
                cout << "不及格" << endl;
            }

            // 判斷成績奇數偶數
            if (van % 2 == 0) {
                cout << "成績是偶數" << endl;
            }
            else {
                cout << "成績是奇數" << endl;
            }
            break;
        }
        case 9: {
            cout << "程式結束 你可以滾了ouob" << endl;
            return 0;
        }
		}
        cout << "是否繼續使用? (請打y或n (y是繼續,n是關閉)): ";
        cin >> choice;
        
		if (choice == 'n' || choice == 'N') {
            cout << "程式結束 你可以滾了ouob" << endl;
            break;
        }
        
	}
    return 0;
}