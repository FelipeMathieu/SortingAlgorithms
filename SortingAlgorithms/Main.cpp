#include"HeapSort.h"

#include<time.h>

void main(void)
{
	int e = 0, tamanho = 0;
	clock_t i = NULL, j = NULL, k = NULL;
	float result = 0.0f;

	srand(time(NULL));

	cout << "Informe o tamanho do vetor: ";
	cin >> tamanho;
	HeapSort<long int> h(tamanho);

	for (int i = 0; i < tamanho; i++)
	{
		e = rand() * rand();
		h.ConstructHeap(e, i);
	}
	/*for (int i = 0; i < tamanho; i++)
	{
		cout << h.Get_heap().at(i) << " ";
	}
	cout << endl;*/

	i = clock();
	h.DestructHeap();
	j = clock();

	k = j - i;
	result = ((float)k) / CLOCKS_PER_SEC;

	/*for (int i = 0; i < tamanho; i++)
	{
		cout << h.Get_heap().at(i) << " ";
	}*/

	cout << endl << "Tempo de ordenacao HeapSort: " << result << endl;
}