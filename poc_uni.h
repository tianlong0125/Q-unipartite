#define _XOPEN_SOURCE

/* Structure definition*/
typedef struct{
	double modularity;
	int *community;
}comstruct;

/* Prototypes */
comstruct uni(double **a, int n);
int predivide(double **a, int *compnt, int n);
void search(double **a, int *flag, int m1, int m2, int n);
double smprng(void);
