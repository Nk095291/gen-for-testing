
#include <bits/stdc++.h>
using namespace std;


int rand(int a, int b) {
    return a + rand() % (b - a + 1);
}

void nrand(int n)
{
    string res = "";
    
    for(int i =0 ; i < n; i++)
    {
        if(rand(0,1))
            res += '(';
        else
            res += ')'; 
    }

    cout<< res << endl;
}

int main(int argc, char* argv[]) {
    srand(atoi(argv[1])); // atoi(s) converts an array of chars to int
    int t = rand(1, 2);
    cout<< t << endl;
    while(t--)
    {
        int n = rand(1, 7);
        nrand(n);
        int q  = rand(1, 5);
        cout<< q << endl;
        while(q--)
            cout<< rand(1, n) << " ";
        cout<< endl;
    }
    puts("");
}