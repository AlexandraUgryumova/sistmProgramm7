// Практическая 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
using namespace std;
//int J = 0;
//int k = 2;
//int divs(int N) {
//    if (k >= N)
//        return J;
//    else {
//        if (N % k == 0) {
//            J++;
//        }
//        k++;
//        divs(N);
//    }
//}
int divs2(int N, int k, int j) {
    
    if (k >= N)
        return j;
    else {
        if (k == NULL) {
            k = 2;
        }
        if (N % k == 0) {
            j++;
        }
        k++;
        divs2(N, k, j);
    }
}
int main()
{
    int N;
    setlocale(LC_ALL, "Russian");
    ifstream in("txt.txt");
    in >> N;
    if (N <= 0) {
        cout << "Нельзя использовать отрицательные числа! Перепишите файл!\n";
    }
    else {
        int r = divs2(N, NULL, 0);
        cout << "количество всех делителей целого числа " << N << " = " << r;
        ofstream out("result.txt");
        out << r << "\n";
        out.close();
    }
    in.close();

}
