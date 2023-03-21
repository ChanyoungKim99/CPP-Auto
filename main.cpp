#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v {1, 2, 3};			// container
	std::vector<int>::iterator itr;			// iterator�� ������ container�� �������

	itr = v.begin();						// iterator = ������

	// traverse while�� ���
	while (itr != v.end())
	{
		std::cout << *itr << std::endl;
		itr++;
	}

	// traverse for�� ���
	for (std::vector<int>::iterator itr1 = v.begin(); itr1 != v.end(); itr1++)
	{
		std::cout << *itr1 << std::endl;
	}

	// auto ���
	for (auto itr2 = v.begin(); itr2 != v.end(); itr2++)
	{
		std::cout << *itr2 << std::endl;
	}

	// auto�� �̿��� ���� ��� �ݺ���
	for (auto e : v)
	{
		std::cout << e << std::endl;
	}
	
}