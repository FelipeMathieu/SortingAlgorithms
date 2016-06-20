#include "HeapSort.h"

/*template<class H>
void HeapSort<H>::ConstructHeap()
{

}*/

/*template<class T>
void HeapSort<T>::ConstructHeap(T elemento, int index)
{
	if (index == 0)
	{
		this->heap.at(index) = e;
	}
	else
	{	
		while (index != 0)
		{
			if (index % 2 == 0)
			{
				if (this->heap.at(index / 2) > e)
				{
					this->heap.at(index) = e;
					break;
				}
				else
				{
					this->heap.at(index) = this->heap.at(index / 2);
					index--;
				}
			}
			else
			{
				if (this->heap.at((index / 2) - 1) > e)
				{
					this->heap.at(index) = e;
					break;
				}
				else
				{
					this->heap.at(index) = this->heap.at((index / 2) - 1);
					index--;
				}
			}
		}
	}
}*/