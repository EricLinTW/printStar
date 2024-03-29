﻿// printStar.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "Header.h"


void SelectionSort(int nSize, int A[])
{
	int i, j, k, t;
	for (i = 0; i < nSize - 1; i++)
	{
		for (j = i + 1, k = i; j < nSize; j++)
		{
			if (A[j] > A[k])
				k = j;
		}
		t = A[k];
		A[k] = A[i];
		A[i] = t;
	}
}

void PrintArray(int nSize, int A[])
{
	//驗證
	cout << endl;
	for (int i = 0; i < nSize; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}


void ArrayALL()
{
	int A[] = { 6,1,3,2,8 };

	int nSize = sizeof(A) / sizeof(A[0]);

	cout << "Before: ";
	PrintArray(nSize, A);

	SelectionSort(nSize, A);

	cout << "After : ";
	PrintArray(nSize, A);
}

void printStar(int n) 
{
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j < i ; ++j)
			cout << "*";
		cout << endl;
	}
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j <= n - i; ++j)
			cout << "*";
		cout << endl;
	}
	system("pause");
}


auto main(int ageForStudent, double scoreForStudent,char levelForStudent) -> int
{
	int width;
	printf("please input the width for triangel \a \n");
	cout << "許蓋功" << endl;
	scanf_s("%d", &width);
	printStar(width);
	ArrayALL();
	cout << 26 << "\n"; // 10進位
	cout << 032 << "\n"; // 8進位
	cout << 0x1A << "\n"; // 16進位
	

	cout << "\n年級\t得分\t等級";
	cout << "\n" << ageForStudent
		<< "\t" << scoreForStudent
		<< "\t" << levelForStudent
		<< "\n";

	ageForStudent = 5;
	scoreForStudent = 80.0;
	levelForStudent = 'B';

	cout << "\n年級\t得分\t等級";
	cout << "\n" << ageForStudent
		<< "\t" << scoreForStudent
		<< "\t" << levelForStudent
		<< "\n";
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
