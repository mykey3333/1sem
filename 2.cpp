#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
 struct Data{
 int Day;
 int Month;
 int Year;};
 
struct NOTE {
    char FIO[50];
    int Number;
    Data Date;
};
 
  const int N=8;
 
void  vvod(FIO a){
 
    cout << "Введите фамилию и имя:";
    cin >> a.FIO;
    cout << "Введите номер телефона:";
    cin >> a.Number;
    cout << "Введите дату рождения: ";
    cin >> a.Date.Day>>a.Date.Month >>a.Date.Year;
    getchar();
}
 
 
void vvod_svedenia(NOTE X[], int i){
    cout <<"Сведения";
 for (i=0;i<N; i++){
   vvod(X[i]);
 }
 }
 
void sort_svedenia(NOTE X[], int i){
    int i,j;
    NOTE d;
    for (i=0;i<N-1; i++)
        for (j=0;j<N-1-i; j++)
    if (strcmp(X[j].FIO, X[j+1].FIO)>0){
        d=X[j];
        X[j]=X[j+1];
        X[j+1]=d;
    }
}
void printf_svedenia(NOTE X[], int i){
  for (i=0;i<N-1; i++){
    printf("%s,%d/%d/%dv%s\n", X[i].FIO, X[i].Date.Day, X[i].Date.Month, X[i].Date.Year,);
  if (X[i].Date.Month = 12)
    cout<< vvod_NOTE(X[i]);
  }
 
int main(){
    NOTE svedenia[30];
    vvod_svedenia(svedenia, 30);
    cout<<"Неотсортированный список\n";
     printf_svedenia(svedenia, 30);
     sort_svedenia(svedenia, 30);
   cout<<"Отсортированный список\n";
   printf_svedenia(svedenia, 30);
  getchar();
}
}
