#include <iostream>
using namespace std;

////////////////////////////////// excersize A

 /*int main() {
    int Length, Width, a;
    cin >> Length >> Width >> a;

    int flower_long_L = (Length + a - 1) / a;
    int flower_Long_W = (Width + a - 1) / a;

    int total_beds = flower_long_L * flower_Long_W;

    cout << total_beds << endl;
    return 0;
}*/

#include <iostream>
using namespace std;

////////////////////////////////// excersize B

 /*int main() {
    int n;
    cin >> n;  // projects

    int count = 0;  // Counter

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;  // confidence

        // If two engineers are confident
        if (a + b + c >= 2) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
*/

////////////////////////////////// excersize D

#include <iostream>
#include <string>
using namespace std;

/*
int main() {
    int n, T = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string command;
		cin >> command;//how many commands
        if (command == "++T" || command == "T++") {
            T++;  
        }
        else if (command == "--T" || command == "T--") {
            T--;  
        }
    }

    cout << T << endl;
    return 0;
}
*/
#include <iostream>
#include <string>
using namespace std;

////////////////////////////////// excersize E

/*int main() {
    string x;
    cin >> x;
    for (int i = 0; i < x.size(); i++) {
        int digit = x[i] - '0'; 

		//make the true false and vice versa !
        if (!(i == 0 && digit == 9)) {
            digit = min(digit, 9 - digit);
        }

        x[i] = digit + '0';  // Convert
    }

    cout << x << endl; 
    return 0;
}
*/