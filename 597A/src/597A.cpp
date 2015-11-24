//============================================================================
// Name        : 597A.cpp
// Author      : Julio Tentor
// Version     :
// Copyright   : Creative Commons
// Description : Problem 597A - Codeforces - Divisibility
// URL         : http://codeforces.com/problemset/problem/597/A
//============================================================================

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

void doTest();

int main() {
	doTest();
    return 0;
}

void doTest() {
    int divider, start, stop;
    std::cin >> divider;
    std::cin >> start;
    std::cin >> stop;

    int count = 0;
    for (int number = start; number <= stop; ++number) {
    	if ((number % divider) == 0) {
    		++count;
    	}
    }
    std::cout << count << std::endl;
}
