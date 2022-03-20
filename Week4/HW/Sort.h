#pragma once

class Sort
{
    int* v;
    int count;

public:
    Sort(int countt, int minn, int maxx);
    Sort(int count, ...); 
    Sort(char* c); 
    Sort(int* x, int count); 
    Sort(); 
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);

};
