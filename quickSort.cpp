#include <iostream>
#include <ctime>
using namespace std;
int first, last;
//функция сортировки
void quicksort(int *mas, int first, int last)
{
int mid, count;
int f=first, l=last;
mid=mas[(f+l) / 2]; //вычисление опорного элемента
do
{
while (mas[f]<mid) f++;
while (mas[l]>mid) l--;
if (f<=l) //перестановка элементов
{
count=mas[f];
mas[f]=mas[l];
mas[l]=count;
f++;
l--;
}
} while (f<l);
if (first<l) quicksort(mas, first, l);
if (f<last) quicksort(mas, f, last);
}
//главная функция
void main()
{
setlocale(LC_ALL,"Rus");
int arr[(unsigned char)200], n, i;
cout<<"\n Введите длину массива="; cin>>n;
for (i=0; i<n; i++) //вывод массива
{
cout<<"\n Введите значение["<<i<<"]=";
cin>>arr[i];
}

first=0; last=n-1;
quicksort(arr, first, last);
cout<<endl<<"Отсортированный массив: ";
for (__int8 i=0; i<n; i++) cout<<arr[i]<<" ";

system("pause>>void");
}