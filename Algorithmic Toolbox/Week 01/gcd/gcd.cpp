#include <iostream>

int gcd(int a, int b) {
  //write your code here
    if(b==0) {
    	return a;
    }
    else {
	a = a % b;
	return gcd(b,a);
    }
  // naive implementation -- very slow
  /*	
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }

  return current_gcd;
  */
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd(a, b) << std::endl;
  return 0;
}