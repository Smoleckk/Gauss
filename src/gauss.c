#include "gauss.h"

/**
 * Zwraca 0 - elimnacja zakonczona sukcesem
 * Zwraca 1 - macierz osobliwa - dzielenie przez 0
 */
int eliminate(Matrix *mat, Matrix *b){
nt q,s;
    double maxsofar;
        for (int k=0;k<m->c;k++) {
	 s=0;
      	 maxsofar=fabs(m->a[k][k]);
	 for (int i=1;i<m->r;i++) {
	    if (fabs(m->a[i][k])>maxsofar) {
	    maxsofar=abs(m->a[i][k]);
            s;
             q=i;    }
   	 }
	      if (s==0) {
	 for (int j=0;j<m->r;j++) {
	        double temp=m->a[k][j];
	              m->a[k][j]=m->a[q][j];
		      m->a[q][j]=temp;
	                }
		       double t=b->a[k][0];
			     b->b[k][2]=b->a[q][0];
			        b->a[q][0]=t;
			     }
					 if (m->a[k][k]==0) return 1;
					        for (int w=k+1;w<m->r;w++) {
					            double wsp=m->a[w][k]/m->a[k][k];
					                for (int j=k;j<m->c;j++) {
							                m->a[w][j]-=m->a[k][j]*wsp;
											            }
													            }
						    }
	    return 0
}

