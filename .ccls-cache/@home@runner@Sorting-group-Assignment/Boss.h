//Bubble

void swap(int [],int);

void swap(int &a,int &b){
int t;
  t=a;
  a=b;
  b=t;
}
void display(int a[],int N){
int i;
 for(i=0;i<N;i++){
   cout<<setw(5)<<a[i];
 } 
cout<<endl;
  
}
void bubble(int a[], int N){
  int sorted;
  int i,j;

   for(i=0;i<N-1;i++){
  sorted=0;//N-(i+j)
    for(j=0;j<N-(1+i);j++){
    //check neighbor
  //swap if it's not right
 
      if(a[j]>a[j+1]) {
      swap(a[j],a[j+1]);
     sorted=1;
    
  }
    
    //compare if it not in the right order then swap it
//display(a,N);

}
  if (sorted==0) break;
  // if (sorted==0) break;
 

  
}


  }


