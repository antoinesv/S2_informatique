#include "CIndividu.h"
#include <string.h>
#include <iostream>
using namespace std;
CIndividu::CIndividu() {
	m_pNom = NULL;
	m_age = 0;
}
CIndividu::CIndividu(char* nom, int age) {
	m_pNom = new char[strlen(nom) + 1];
	strcpy(m_pNom, nom);
	m_age = age;


}
CIndividu :: ~CIndividu() {
	if (m_pNom != NULL)
		delete[]m_pNom;

}
CIndividu::CIndividu(CIndividu& I) {
	m_pNom = new char[strlen(I.m_pNom) + 1];
	strcpy(m_pNom, I.m_pNom);
	m_age = I.m_age;
}
void CIndividu::Affiche() {
	cout << "Nom" << m_pNom << endl;
	cout << "Age " << m_age << endl;
}

