#include <iostream>
#define ln "\n"

using namespace std;
 
int main() {

    int n;
    cin >> n;

    int ans = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if (a > 10) {
            ans += a - 10;
        }
    }
    
    cout << ans << ln;

    return 0;

}

