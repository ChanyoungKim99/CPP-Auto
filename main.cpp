#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v {1, 2, 3};			// container
	std::vector<int>::iterator itr;			// iterator의 선언은 container에 들어있음

	itr = v.begin();						// iterator = 포인터

	// traverse while문 사용
	while (itr != v.end())
	{
		std::cout << *itr << std::endl;
		itr++;
	}

	// traverse for문 사용
	for (std::vector<int>::iterator itr1 = v.begin(); itr1 != v.end(); itr1++)
	{
		std::cout << *itr1 << std::endl;
	}

	// auto 사용
	for (auto itr2 = v.begin(); itr2 != v.end(); itr2++)
	{
		std::cout << *itr2 << std::endl;
	}

	// auto를 이용한 범위 기반 반복문
	for (auto e : v)
	{
		std::cout << e << std::endl;
	}
	
}