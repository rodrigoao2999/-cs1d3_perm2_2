#include <iostream>
#include <iomanip> 
#include <windows.h>


using namespace std;

int x, y;
int MCD(int N1, int N2);

int main()
{

    int num1;
    int num2;
    cout << "Ingrese un valor: ";
    cin >> num1;
    cout << "Ingrese otro valor: ";
    cin >> num2;

    system("cls");

    int resp = MCD(num1, num2);


    if (MCD(num1, num2) != 1)
    {
        cout << "No se puede hallar la inversa multiplicativa de los numeros ingresados";
    }
    else
    {
        cout << " X = " << x << "\n";
        cout << "El MCD entre [ "  << num1 << " , " << num2 << " ] es  == " << resp << "\n";
        cout << "la inversa multiplicativa de " << num1 << " modulo " << num2 << " es: " << x;
    }
}

int MCD(int pNum, int sNum)
{

    int Sa = 1;
    int Sb = 0;
    int Ta = 0;
    int Tb = 1;
    while (sNum > 0)
    {
        int cociente = pNum / sNum, residuo = pNum - cociente * sNum;
        pNum = sNum;
        sNum = residuo;
        x = Sa - cociente * Sb;
        Sa = Sb;
        Sb = x;
        y = Ta - cociente * Tb;
        Ta = Tb;
        Tb = y;
    }

    x = Sa;
    y = Ta;


    return pNum;
}