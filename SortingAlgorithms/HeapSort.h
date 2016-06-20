#pragma once

#include<iostream>
#include<vector>

using namespace std;


template<class T>
class HeapSort
{
private:
	vector<T> heap;
public:
	HeapSort(int tamanho)
	{
		this->heap = vector<T>(tamanho);
	}
	//~HeapSort();
	//void ConstructHeap();
	vector<T> Get_heap()
	{
		return this->heap;
	}
	void ConstructHeap(T e, int index)
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
					if (this->heap.at((index / 2) - 1) > e)
					{
						this->heap.at(index) = e;
						break;
					}
					else
					{
						this->heap.at(index) = this->heap.at((index / 2) - 1);
						this->heap.at((index / 2) - 1) = e;
						index = (index/2) - 1;
						if (index % 2 == 0 && index != 0)
						{
							if (this->heap.at((index / 2) - 1) > e)
							{
								break;
							}
						}
						else
						{
							if (this->heap.at(index / 2) > e)
							{
								break;
							}
						}
					}
				}
				else
				{
					if (this->heap.at(index / 2) > e)
					{
						this->heap.at(index) = e;
						break;
					}
					else
					{
						this->heap.at(index) = this->heap.at(index / 2);
						this->heap.at(index / 2) = e;
						index = index/2;
						if (index % 2 == 0 && index != 0)
						{
							if (this->heap.at((index / 2) - 1) > e)
							{
								break;
							}
						}
						else
						{
							if (this->heap.at(index / 2) > e)
							{
								break;
							}
						}
					}
				}
			}
		}
	}
	void shift_down(int i, int max)
	{
		int i_big = 0, c1 = 0, c2 = 0;

		while (i < max) 
		{
			i_big = i;
			c1 = (2 * i) + 1;
			c2 = c1 + 1;
			if (c1 < max && this->heap.at(c1) > this->heap.at(i_big))
			{
				i_big = c1;
			}
			if (c2 < max && this->heap.at(c2) > this->heap.at(i_big))
			{
				i_big = c2;
			}
			if (i_big == i)
			{
				break;
			}
			this->swap(i, i_big);
			i = i_big;
		}
	}

	/*void to_heap() {
		int i = (this->heap.size() / 2) - 1;
		while (i >= 0) {
			this->shift_down(i, this->heap.size());
			--i;
		}
	}*/

	void DestructHeap() {
		//this->to_heap();
		int end = this->heap.size() - 1;
		while (end > 0) {
			this->swap(0, end);
			this->shift_down(0, end);
			--end;
		}
	}

	void swap(int aux1, int aux2)
	{
		T aux3;
		aux3 = this->heap.at(aux1);
		this->heap.at(aux1) = this->heap.at(aux2);
		this->heap.at(aux2) = aux3;
	}
};

