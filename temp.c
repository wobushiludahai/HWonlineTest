#include <stdio.h>
#include <string.h>

#define MAX(a,b) a < b ? b : a
#define N 100
#define M 33000
int v[N][3], c[N][3], f[M];
int n, m, cnt;
 
 
int main(){
    // while(scanf("%d%d", &m, &n) == 2){
    scanf("%d%d", &m, &n);
        memset(v, 0, sizeof(v[0]) * (n + 5));
        memset(c, 0, sizeof(c[0]) * (n + 5));
        memset(f, 0, sizeof(f[0]) * (m + 5));
        for(int i = 1; i <= n; ++i){
            int x, y, z;
            scanf("%d%d%d", &x, &y, &z);
            if(z == 0) v[i][2] = x * y, c[i][2] = x;
            else for(int j = 0; j <= 1; ++j) if(v[z][j] == 0) {
                v[z][j] = x * y;
                c[z][j] = x;
                break;
            }
        }
        for(int i = 1; i <= n; ++i){
            for(int k = m; k >= 0; --k){
                for(int s = 0; s < 4; ++s){
                    int val = v[i][2], cst = c[i][2];
                    for(int j = 0; j <= 1; ++j){
                        if(s & (1 << j)) val += v[i][j], cst += c[i][j];
                    }
                    if(cst <= k) f[k] = MAX(f[k], f[k - cst] + val);
                }               
            }
        }
        printf("%d\n", f[m]);
    // }
    return 0;
}