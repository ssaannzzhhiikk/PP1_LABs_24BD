 #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    int fsize = n*m;
    int ar[fsize];
    int ind = 0;
    for (int k = 0; k < n; k++) {
        for (int l = 0; l < m; l++) {
            ar[ind++] = arr[k][l];
        }
    }
    sort(ar, ar + fsize);
    int left = 0;
    int right = fsize - 1;
    int index = 0;
    int newmat[fsize];

    while(left <= right){
        if(index % 2 == 0){
            newmat[index++] = ar[right--];
        } else{
            newmat[index++] = ar[left++];
        }
    }


    index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << newmat[index++] << " ";
        }
        cout << endl;
    }

    
}