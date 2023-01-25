#include "CIndividu.h"
class CEleve
{
	private :
		CIndividu* m_individu;
		double* m_note;
		int m_nbNote;
public :
	
	void Affiche();
	CEleve();
	CEleve(int nbnotes,double* note, int age, char* nom);
	CEleve(CEleve&E);
	~CEleve();

  
    
};

