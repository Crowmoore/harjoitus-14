/****IIZ01010****
Harjoitus 14
Ryhmä: IIO14S2
Tekijä: Joel Kortelainen
Kuvaus: Tee ohjelma, joka kysyy henkilötietosi seuraavasti:
Anna (kaikki) etunimesi (merkkijono):
Anna kengannumero (kokonaisluku):
Anna sukunimi (merkkijono):
Anna koulumatka (reaaliluku):
Anna osoitteesi:
Anna postinumero:

Ohjelma tulostaa tiedot seuraavasti:
sukunimi etunimet
osoite
postinumero
kengannumero ja koulumatka

Käytä C++:n cin- ja cout-olioita ohjelman toteuttamiseen.
Versio 1.0
8.10.2014
*/

#include <iostream>
using namespace std;

int main()
{
	char firstnames[51];
	char surname[51];
	char address[51];
	int zipcode, shoesize;
	float distance;

	cout << "Your first name(s): ";
	cin.getline(firstnames, sizeof(firstnames));
	system("cls");
	cout << "Your surname: ";
	cin >> surname;
	system("cls");
	cout << "Size of your shoe (EN 13402): ";
	cin >> shoesize;
	system("cls");
	cout << "Distance from your home to your school (ISO 80000-3): ";
	cin >> distance;
	cin.get();
	system("cls");
	cout << "Your address: ";
	cin.getline(address, sizeof(address));
	system("cls");
	cout << "Your zipcode: ";
	cin >> zipcode;
	system("cls");

	cout << surname << " " << firstnames << endl;
	cout << address << endl;
	cout << zipcode << endl;
	cout << "Your shoe size is " << shoesize << " and the distance from your home to your school is " << distance << " km" << endl;

	return(0);
}