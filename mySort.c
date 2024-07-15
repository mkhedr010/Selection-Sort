void mySort(int d[], unsigned int n)
{
     int  miniindex;

  for (int i = 0; i<n-1;i++){
    miniindex=i;
    for (int j =i+1;j < n ; j++){
      if (d[miniindex]>d[j])
	{
	  miniindex=j;}
    }
    int temp;
    temp = d[i];
    d[i] = d[miniindex];
    d[miniindex]=temp;
  }
  
}
