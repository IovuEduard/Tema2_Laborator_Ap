#include <iostream>

using namespace std;
void Sortare_Insertie(int v1[20], int n)
{
    int i, p, x;
    for (i = 1; i < n; i++)
    {
        x = v1[i];
        p = i - 1;
        while (p >= 0 && v1[p] > x)
        {
            v1[p + 1] = v1[p];
            p--;
        }
        v1[p + 1] = x;
    }
}
void BubbleSort(int v2[20], int n)
int main()
{
	int v[20], n, i, opt;
    cout << "n="; cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "v[" << i << "]=";
        cin >> v[i];
    }
    while(1)
    {
        cout << "Alege problema dorita:";
        cin >> opt;
        switch (opt)
        {
        case 1:
            Sortare_Insertie(v, n);
            for (i = 0; i < n; i++)
                cout << v[i] << " ";
            break; 
        }
    }
   
	return 0;
}