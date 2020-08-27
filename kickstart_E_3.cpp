
#include <bits/stdc++.h>
using namespace std;


int rand(int a, int b) {
    return a + rand() % (b - a + 1);
}

void nrand(int n)
{
   
    
    for(int i =0 ; i < n; i++)
    {
        cout<< rand(1, 100) << " "  << rand(1, 100) << endl;
    }

}

int main(int argc, char* argv[]) {
    srand(atoi(argv[1])); // atoi(s) converts an array of chars to int
    int t = rand(1, 2);
    cout<< t << endl;
    while(t--)
    {
        int n = rand(1, 7);

        cout<< n << endl;
        nrand(n);
    }
    // puts("");
}