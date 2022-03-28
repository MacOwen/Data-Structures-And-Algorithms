#include <stdio.h>

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

int main() {
	printf("%d\n", gcd(11,7));
	printf("%d\n", gcd(7,7));
	printf("%d\n", gcd(3,12));
}
