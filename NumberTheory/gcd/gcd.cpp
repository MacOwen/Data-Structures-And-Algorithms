#include <iostream>
using namespace std;

// Time complexity: O(log(min(a,b)))
// Space complexity: O(1)
int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a%b;
		a = temp;
	}
	return a;
}
