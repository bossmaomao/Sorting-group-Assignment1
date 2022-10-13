//selection
void selection(int a[],int N){
int i,j,m,min;
for(i=0;i<N-1;i++){
// min=a[i];
   m=i; 
    for(j=i;j<N;j++){
   if(a[j]<a[m]) {
     min=a[j];
     m=j;

    }
    
//swap(a[m],a[i]);
    
  }
swap(a[m],a[i]);
 //   display(a,N);
    }

  
}
