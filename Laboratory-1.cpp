// Laboratory-1, Вариант 2, Плотников.Д.А

#include <iostream>

int a;
int b;
int c;

float First(float m1, float m2, float d)
{
    return 6.67*10^-11*((m1*m2)/d^2)
}

float Second(float x1, float x2, float y1, float y2)
{
    float res;
    float x;
    float y;
    if (x1 > x2){
        x = x1 - x2;
    }
    else{
        x = x2 - x1;
    }
    if (y1 > y2) { y = y1 - y2; }
    else { y = y2 - y1; }
    return (x ^ 2 + y ^ 2) ^ 0.5;
}

void Third(int x)
{
    int Mbi = x / 1048576;
    int Kbi = (x % 1048576) / 1024;
    int bi = x % 1024;
    cout << "МБайт: " << Mbi << " КБайт: " << Kbi << " Байт: " << bi;
}

void Four(int d)
{
    int ab = d * (6000 / 360);
    int a = ab / 100;
    int b = ab % 100;
    cout << a << "-" << b 
}

int Fifth(int p, int t)
{
    int op = 0;
    while (t > 0) {
        if (t > 5) { op = p * 0.8 + op; }
        else{ op = p + op; }
        t = t - 1;
    }
    return op;
}

bool Sixth(int a, int b)
{
    if (a > b){
        if (b % 2 == 0) { return true; }
        else { return false; }
    }
    if (a % 2 == 0) { return true; }
    else { return false; }
}

int main(){
    return;
}
