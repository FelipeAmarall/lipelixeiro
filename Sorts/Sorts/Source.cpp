#include<iostream>
#include <time.h>
using namespace std;

#define MAX 5
int temp;

void Insert(int n, int num[])
{
	int i, j, x;
	for (j = 1; j < n; ++j)
	{
		x = num[j];
		for (i = j - 1; i >= 0 && num[i] > x; --i)
		{
			num[i + 1] = num[i];
		}
		num[i + 1] = x;
	}
}

void Bolha(int vet[])
{
	for (int x = 0; x < MAX; x++)
	{
		for (int y = x + 1; y < MAX; y++)
		{
			if (vet[x] > vet[y])
			{
				temp = vet[x];
				vet[x] = vet[y];
				vet[y] = temp;
			}
		}
	}
}

void Quick(int arr[], int left, int right) {
	int i = left, j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];

	/* partition */
	while (i <= j) {
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	};

	/* recursion */
	if (left < j)
		Quick(arr, left, j);
	if (i < right)
		Quick(arr, i, right);
}

int main()
{
	int vet[MAX];
	int vet2[MAX];
	int vet3[MAX];

	////Metodo Insert:
	//for (int i = 0; i < MAX; i++)
	//{
	//	cout << "digite o numero:\n";
	//	cin >> vet[i];
	//}

	//for (int i = 0; i < MAX; i++)
	//{
	//	Insert(MAX, vet);
	//}

	//cout << "Metodo Insert:\n";
	//for (int i = 0; i < MAX; i++)
	//	cout << "/" << vet[i];

	////Metodo bubble:
	//for (int i = 0; i < MAX; i++)
	//{
	//	cout << "digite o numero (bubble):\n";
	//	cin >> vet2[i];
	//}

	//Bolha(vet2);

	//cout << "Metodo Bubble:\n";
	//for (int i = 0; i < MAX; i++)
	//	cout << "/" << vet2[i];

	//Metodo Quick
	for (int i = 0; i < MAX; i++)
	{
		cout << "digite o numero (Quick):\n";
		cin >> vet3[i];
	}

	Quick(vet3, 0, MAX);

	cout << "Metodo Quick:\n";
	for (int i = 0; i < MAX; i++)
		cout << "/" << vet3[i];

	system("pause");
	return 0;
}

