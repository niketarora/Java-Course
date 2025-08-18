for(int i=0;i<=n-1;i++){
        int temp;
        temp = arr[i];
        for(int j=i;j<=n-1;j++){
            if(temp == arr[j+1])    cout<<"Duplicates Exists :- "<<temp;
        }
    }