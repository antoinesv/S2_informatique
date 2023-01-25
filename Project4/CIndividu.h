#pragma once
class CIndividu
{
private :
	char* m_pNom;
	int m_age;
public :
	void Affiche();
	CIndividu();
	CIndividu(char* nom, int age);
	~CIndividu();
	CIndividu(CIndividu& I);
	int get_age() { return m_age; };
	void set_age(int age) { m_age = age; };
};

