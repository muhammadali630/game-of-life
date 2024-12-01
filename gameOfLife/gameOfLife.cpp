#include <iostream>
#include <vector>
int a;
int b;
//		----------a----------
//		.					.
//		.					.
//		b					b
//		.					.
//		.					.
//		----------a----------
void barrier(int a, int b) {
	for (int i=0;i<b;i++) {
		for (int j = 0;j < a;j++) {
			std::cout << "   |";
		}
		std::cout << std::endl;
		for (int j = 0;j < 4*a;j++) {
			std::cout << "-";
		}
		std::cout << std::endl;
	}
	
}
int main() {
	std::cin >> a;
	std::cin >> b;
	barrier(a, b);
}