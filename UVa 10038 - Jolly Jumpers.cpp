#include <bits/stdc++.h>
using namespace std;
int main()
{
	
    int n;
    while (cin >> n){
    	
    	int a, b;
        int check[3001]={0};
        bool f = true;

        scanf("%d",&b);
        for (int i = 1; i < n; i++){
            scanf("%d",&a);
            int temp = abs(a-b);
            b = a;
            if (temp<=3000)
				check[temp]++;
        }

        for (int i = 1; i < n; i++)
            if (check[i] == 0){
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
