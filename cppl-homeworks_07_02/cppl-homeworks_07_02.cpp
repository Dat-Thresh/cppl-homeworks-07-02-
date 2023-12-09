#include <iostream>
#include <forward_list>

int main() {
	int number;
	std::cout << "[IN]: ";
	std::cin >> number;
	int* arr = new int[number];
	for (int i = 0; i < number; i++) {
		std::cin >> arr[i];
	}

	std::forward_list<int> list;
	for(int i = 0; i < number; i++){
		list.push_front(arr[i]);
	}
	delete[] arr;
	list.sort(std::greater<int>());
	list.unique();

	std::cout << "[OUT]:\n";
	for (auto& x : list) {
		std::cout << x << std::endl;
	}
	return 0;
}