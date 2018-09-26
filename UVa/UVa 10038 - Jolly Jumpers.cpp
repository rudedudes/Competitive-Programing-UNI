#include <bits/stdc++.h>
using namespace std;
int main()
{
	
    int n;
    while (cin >> n){
    	
    	int a, b;
        int diff_a[3001]={0};
        int dif;
        bool f = true;

        scanf("%d",&b);
        for (int i = 1; i < n; i++){
            scanf("%d",&a);
            dif = abs(a-b);
            b = a;
            if (dif<=3000)
				diff_a[dif]++;
        }

        for (int i = 1; i < n; i++)
            if (diff_a[i] == 0){
				f = false;
				break;
			}

        if (f)
			printf("Jolly\n");
        else
			printf("Not jolly\n");
    }
    return 0;
}
