#include "backsubst.h"
/**
 * Zwraca 0 - wsteczne podstawienie zakonczone sukcesem
 * Zwraca 1 - błąd dzielenia przez 0 (element na diagonali = 0)
 * Zwraca 2 - błąd nieprawidłowych rozmiarów macierzy
 */
int  backsubst(Matrix *x, Matrix *m, Matrix *b) {
	if (x->c!=1||x->r!=m->r|| m->r!=m->c||b->c!=1||b->r!=m->r) return 2;
	for (int i=m->r-1;i>=0;i--) {
		double sum=0.0;
		for (int j=i+1;j<m->r;j++) 
			 sum+=m->data[i][j]*x->data[j][0];
									     
		if (m->data[i][i]==0) return 1;
		
		x->data[i][0]=(b->data[i][0]-sum)/m->data[i][i];
	}							       
	return 0;
}


