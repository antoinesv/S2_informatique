#include "CEleve.h"
#include <iostream>
using namespace std;
CEleve::CEleve() {
	m_individu = NULL;
	m_note = NULL;
	m_nbNote = 0;

}
CEleve::CEleve(int nbnotes, double* note, int age, char* nom) {
	m_individu = new CIndividu(nom, age);
	m_nbNote = nbnotes;
	m_note = new double[m_nbNote];
	for (int i = 0; i < m_nbNote; i++)
		m_note[i] = note[i];

}
CEleve::CEleve(CEleve& E) {
	m_individu = new CIndividu(*E.m_individu);
	m_nbNote = E.m_nbNote;
	m_note = new double[m_nbNote];
	for (int i = 0; i < m_nbNote; i++)
		m_note[i] = E.m_note[i];

}
CEleve:: ~CEleve() {
	if (m_individu != NULL)
		delete[]m_individu;
	if (m_note != NULL)
		delete[]m_note;
}
void CEleve::Affiche() {
	if (m_note != NULL) {
		m_individu->Affiche();
		cout << "Notes" << m_note << endl;
		cout << "le nombrede notes " << m_nbNote << endl;
		for (int i = 0; i < m_nbNote; i++)
			cout << "Note[" << i + 1 << "]=" << m_note[i] << endl;

	}
	
	
}

