#include "stdafx.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
	{
		 int count; // ���������� ��� ������ � switch
		 double a, b; // ���������� ��� �������� ���������
			cout << "Vvedite pervoe chislo: "<<endl;
			cin >> a;
			cout << "Vvedite vtoroe chislo: "<<endl;
			cin >> b;
			cout << "Vibirite deistvie: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie: "<<endl;
			 cin >> count;
 switch (count) // ������ ��������� switch
 {

case 1: // ���� count = 1
 {
	 cout<<"Vremenno nedostupno"<<endl;
 break;
 }
 case 2: // ���� count = 2
 {
	 cout<<"Vremenno nedostupno"<<endl;
 break;
 }
 case 3: // ���� count = 3
 {
	 cout<<"Vremenno nedostupno"<<endl;
 break;
 }
 case 4: // ���� count = 4
 {
	 cout<<"Vremenno nedostupno"<<endl;
 break;
 }
 default: // ���� count ����� ������ ������� ��������
 cout << "Nepravilni vvod" << endl;
 }
 system("pause");
return 0;
 }

