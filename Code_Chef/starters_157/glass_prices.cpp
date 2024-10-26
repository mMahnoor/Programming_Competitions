#include <iostream>

using namespace std;

int main() {
	int X, Y;
	cin >> X >> Y;
	if(Y<=(2*X)) cout << "METAL" << "\n";
	else cout << "PLASTIC\n";
    return 0;
}
