#include<bits/stdc++.h>
using namespace std;
int find(int n1, int n2) {
    int count = 0;
    for (int i = n1 ; i <= n2 ; i++) {
        int num = i;
        vector<bool> visited;
        visited.assign(10, false);
        while (num > 0) {
            if (visited[num % 10] == true)
                break;
            visited[num % 10] = true;
            num /= 10;
        }
        if (num == 0)
            count++;
    }
    return count;
}
int main()
{
    int n1 = 101, n2 = 200;
    cout << find(n1, n2);
}

