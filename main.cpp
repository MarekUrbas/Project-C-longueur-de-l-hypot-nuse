#include <iostream>
#include <math.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float poletr(float a, float h)
{
	return 1.0/2.0*a*h;
}

float przeciwprosotkatna(float a, float b)
{
	float sumaKwadratow = pow(a,2)+pow(b,2);
	return sqrt(sumaKwadratow);
}

int main(int argc, char** argv) {
	cout<<"Podaj podstawe trojkata: ";
	float podstawa,wysokosc;
	cin>>podstawa;
	cout<<"Podaj wysokosc trojkata: ";	
	cin>>wysokosc;
	cout<<"Pole trojkata dla podanych wymiarow to: "<<poletr(podstawa,wysokosc)<<endl;
	cout<<"Podaj dlugosc pierwszej przyprostokatnej: ";
	float przyprostokatna1, przyprostokatna2;
	cin>>przyprostokatna1;
	cout<<"Podaj dlugosc drugiej przyprostokatnej: ";
	cin>>przyprostokatna2;
	cout<<"Dlugosc przeciwprostokatnej dla podanego trojkata to: "<<przeciwprosotkatna(przyprostokatna1, przyprostokatna2);
	return 0;
}