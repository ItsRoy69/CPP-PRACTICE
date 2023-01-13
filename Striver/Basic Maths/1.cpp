// Given the number 'n', find out and return the number of digits present in a number .

// Sample Input : 156
// Sample Output :3

int count(int n){
    //write your code here
    int cnt = 0;
    while (n>0)
    {        
        int ld = n%10;
        cnt ++;
        n= n/10;
    }
    return cnt;
}

// OR

// using Log 10
int count(int n){
    //write your code here
    int cnt = (int)log10(n)+1;
    return cnt;
}