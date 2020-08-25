
#include <bits/stdc++.h>
using namespace std;


int rand(int a, int b) {
    return a + rand() % (b - a + 1);
}

void nrand(int n)
{
    string res = "";
    set<pair<int, int> > mp;
    for(int i = 0; i< (n - 1) ; i++)
    {   int x = rand(1, n);
        int y = rand(1, n);
        while(y == x)
            y = rand(1, n);
        while(mp.count({x, y}))
        {
            x = rand(1, n);
            y = rand(1, n);
            while(y == x)
                y = rand(1, n);

        }
        cout<< x << " " << y << endl;
        mp.insert({x, y});
        mp.insert({y, x});
        res += char('0' + rand(0,1));
    }
        res += char('0' + rand(0,1));
    
    cout<< res;

    cout<< endl;
}

int main(int argc, char* argv[]) {
    srand(atoi(argv[1])); // atoi(s) converts an array of chars to int
    int t = rand(1, 1);
    cout<< t << endl;
    while(t--)
    {
        int n = rand(1, 10);
        cout<< n << endl;
        nrand(n);

    }
    puts("");
}