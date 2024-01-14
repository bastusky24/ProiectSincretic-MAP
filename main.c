#include <stdio.h>

#define N 8
#define newline printf("\n")
int tablaSah[N][N], nrSolutii;

int rezolva(int);
int verifica(int, int);
void afiseazaTabla();

int main()
{
	rezolva(0);
	printf("\n\n### SABIESCU Sebastian Ovidiu \n");
	printf("### UPT AC Info 2\n");
	printf("### 12.01.2024 \n");
	return 0;
}

int rezolva(int coloana)
{
	int contor = 0;
	if (coloana >= N)
	{
		afiseazaTabla();
		return 1;
	}
	for (int i = 0; i < N; i++)
	{
		if (verifica(i, coloana) == 1)
		{
			tablaSah[i][coloana] = 1;
			contor = rezolva(coloana + 1) || contor;
			tablaSah[i][coloana] = 0; /// setam pe 0 daca nu se poate pune regina
		}
	}
	return 0;
}

int verifica(int linie, int coloana)
{
	/// verifica randul din stanga
	for (int i = 0; i < coloana; i++)
		if (tablaSah[linie][i])
			return 0;

	/// verifica diagonala din stanga stanga partea de sus
	for (int i = linie, j = coloana; i >= 0 && j >= 0; i--, j--)
		if (tablaSah[i][j])
			return 0;

	/// verifica diagonala din stanga partea de jos
	for (int i = linie, j = coloana; i < N && j >= 0; i++, j--)
		if (tablaSah[i][j])
			return 0;

	return 1;
}

void afiseazaTabla()
{
	newline;
	++nrSolutii;
	printf("\n\n\n~~~~~~~~~~~~~~~~~~~~~~~ (%d / 92) ~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n", nrSolutii);
	printf("   ");

	for (int i = 1; i <= N; i++)
		printf("     %d ", i);
	newline;

	for (int i = 0; i < N; i++)
	{
		printf("     ");
		for (int j = 0; j <= N; j++)
			printf("______");

		newline;
		printf("%d  ", i + 1);
		for (int j = 0; j < N; j++)
		{
			printf(" |  ");
			printf(" %d ", tablaSah[i][j]);
		}
		printf("|\n");
	}
	printf("     ");
	for (int j = 0; j <= N; j++)
		printf("______");
	newline;
}
