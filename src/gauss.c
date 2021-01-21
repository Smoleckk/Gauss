#include "gauss.h"
#include <math.h>
/**
 * Zwraca 0 - elimnacja zakonczona sukcesem
 * Zwraca 1 - macierz osobliwa - dzielenie przez 0
 */
int eliminate(Matrix *m, Matrix *b){
    

	int q,s;
	   double maxsofar;
	     for (int k=0;k<m->c;k++) {
		s=0;
		 maxsofar=fabs(m->data[k][k]);
	        for (int i=k+1;i<m->r;i++) {
		if (fabs(m->data[i][k])>maxsofar) {
			maxsofar=fabs(m->data[i][k]);
	                s=1;
	                  q=i;
															                }
		}          
	       if (s==1) {
	        for (int j=0;j<m->r;j++) {
	              double temp=m->data[k][j];
	              m->data[k][j]=m->data[q][j];														                    m->data[q][j]=temp;													 }	
		double t=b->data[k][0];

		b->data[k][0]=b->data[q][0];

		b->data[q][0]=t;

	       }
	      if (m->data[k][k]==0) return 1;
					for (int w=k+1;w<m->r;w++) {
							double wsp=m->data[w][k]/m->data[k][k];
								for (int j=k;j<m->c;j++) {

									m->data[w][j]-=m->data[k][j]*wsp;

								}
							b->data[w][0]-=b->data[k][0]*wsp;

			}

	     }

	     return 0;
}

