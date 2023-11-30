#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

float x, y;
int c;
string s;
float probeg(float y)
{
double pi = 3.1415926;

if (x >-9 && x <= -5){
    y = sqrt(4- (x +7)*(x +7 )) +2;
}
else if (x > -5 && x <=-4){
        y = 2;
}

else if (x > -4 && x <= 0){
    y = 0.5*x;
}

else if (x > 0 && x <=pi){
    y = sin(x);
    }
        

else if (x > pi && x <= 5){
    y = tan(45)*x;
    }
   
return y;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    // Код для вычисления Y при X для 3 варианта
    ofstream prout("text2.txt");

    x = -8;
    c = 1;
    for (x; x < 5; x++)
    {
        prout << c << " ";
        c++;
        y = probeg(x);
        prout << y << "\n";
    }
    prout.close();
    ifstream prin("text2.txt");
    while (getline(prin, s))
    {
        cout << s;
        cout << "\n";
    };
    prin.close();
}