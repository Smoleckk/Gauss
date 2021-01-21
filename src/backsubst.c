#include "backsubst.h"
/**
 * Zwraca 0 - wsteczne podstawienie zakonczone sukcesem
 * Zwraca 1 - błąd dzielenia przez 0 (element na diagonali = 0)
 * Zwraca 2 - błąd nieprawidłowych rozmiarów macierzy
 */
int  backsubst(Matrix *x, Matrix *mat, Matrix *b) {
			if (x->c!=1||x->r!=m->r||m->r!=m->c||b->c!=1||b->r!=m->r) return 2;
			    for (int i=m->r-1;i>=0;i--) {
				            double sum=0.0;
					            for (int j=i+1;j<m->r;j++) {
							                sum+=m->a[i][j]*x->a[j][0];
									        }
						            if (m->a[i][i]==0) return 1;
							            x->a[i][0]=(b->a[i][0]-sum)/m->a[i][i];
								        }
			        return 0;
}


