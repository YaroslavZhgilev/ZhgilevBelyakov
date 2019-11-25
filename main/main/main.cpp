#include "stdafx.h"
#include <iostream>
#include "function1.h"
#include "feature1.h"
using namespace std;

int main(int argc, char* argv[])
	{
		 int count; 
		 double a, b; 
			cout << "Vvedite pervoe chislo: "<<endl;
			cin >> a;
			cout << "Vvedite vtoroe chislo: "<<endl;
			cin >> b;
			cout << "Vibirite deistvie: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie; 5-vozvedenie v stepen; 6-cos pervogo chisla; 7-sin pervogo chisla "<<endl;
			 cin >> count;
 switch (count) 
 {

case 1: 
 {
	 cout<<funcadd(a,b)<<endl;
 break;
 }
 case 2: 
 {
	 cout<<funcsub(a,b)<<endl;
 break;
 }
 case 3: 
 {
	 cout<<funcmulti(a,b)<<endl;
 break;
 }
 case 4: 
 { 
	 if(b!=0){
	 cout<<funcdiv(a,b)<<endl;
 }else{
	 cout<<"Delenie na 0 nevozmogno"<<endl;
 }
 break;
 }
 case 5: 
 {
	 cout<<funcstep(a,b)<<endl;
 break;
 }
 case 6: 
 {
	 cout<<funco(a)<<endl;
 break;
 }
 case 7: 
 {
	 cout<<funsi(a)<<endl;
 break;
 }
 default: 
 cout << "Nepravilni vvod" << endl;
 }
 system("pause");
return 0;
 }

