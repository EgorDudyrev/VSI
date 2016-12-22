#include "sortings.h"
#include <QtCore>


/*template<class T>
void Sorting::Swap(T& a, T& b, int i1, int i2)
{
    qSwap(a, b);
    SwapNum++;
    ind1 = i1;
    ind2 = i2;
    emit NumberChanged();
    msleep(sleepTime);
}*/
template<class T>
void Sorting::Swap(T& a, T& b)
{
    qSwap(a, b);
    SwapNum++;
    emit NumberChanged();
}

HeapSort::HeapSort():
    Sorting()
{

}
HeapSort::HeapSort(const HeapSort& sort):
    Sorting(sort)
{

}
HeapSort::~HeapSort()
{

}
QVector<double> HeapSort::calculate(QVector<double>& vect)
{
    heapSort(vect, vect.size());
    return vect;
}
void HeapSort::heapSort(QVector<double>& arr, int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--)
    {
        //Swap(arr[0], arr[i], 0, i);
        Swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
void HeapSort::heapify(QVector<double>& arr, int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        Swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}


QVector<double> ShellSort::calculate(QVector<double>& vect)
{
    return vect;
}
QVector<double> QuickSort::calculate(QVector<double>& vect)
{
    return vect;
}
