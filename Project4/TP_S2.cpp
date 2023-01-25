#include<iostream>
#include "CIndividu.h"
#include "CEleve.h"
using namespace std;

int main() {
	CIndividu I;
	char* nom;
	int age;
	nom = new char[20];
	cout << "Saisir le nom";
	cin >> nom;
	cout << "Saisir l'age";
	cin >> age;
	CIndividu I2(nom, age);
	CIndividu I3(I2);
	I.Affiche();
	I2.Affiche();
	I3.Affiche();
	return 0;
}
int main() {
	CEleve  E;
	double* m_note;
	int m_nbNote;
	cout << "Combie y a t-il des notes ?";
	cin >> m_nbNote;
	m_note = new double[m_nbNote];


}