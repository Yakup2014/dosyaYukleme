/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<cstring>
#include<string>
#include <fstream>
using namespace std;

int main()
{
    ofstream dosya("deneyap.txt");
    
    for(int i=0; i<10; i++){
        int sayi;
        cin>>sayi;
        dosya<<sayi<<endl;
    }
    dosya.close();

	return 0;
}
