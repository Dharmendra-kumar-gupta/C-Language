#include <stdio.h> 
int main() 
{
int z,i,j;
	int a[10][10];
	scanf("%d",&z);
	for(i=0;i<z;i++)
	{
		for(j=0;j<z;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int m=z;
	int n=z;
	int k = 0, l = 0; 
	while (k < m && l < n) { 
		for (i = l; i < n; ++i) { 
			printf("%d ", a[k][i]); 
		} 
		k++; 
		for (i = k; i < m; ++i) { 
			printf("%d ", a[i][n - 1]); 
		} 
		n--; 
		if (k < m) { 
			for (i = n - 1; i >= l; --i) { 
				printf("%d ", a[m - 1][i]); 
			} 
			m--; 
		} 
		if (l < n) { 
			for (i = m - 1; i >= k; --i) { 
				printf("%d ", a[i][l]); 
			} 
			l++; 
		} 
	}  
	return 0; 
} 

