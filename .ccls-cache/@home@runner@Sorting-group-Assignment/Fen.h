//insertion

/*void insertion(int a[], int length) { 
int i, j, value; 
for(i = 1; i < length; i++) { 
value = a[i]; //a[0]=7 a[1]=6 a[2]=4  
for (j = i - 1; j >= 0 && a[j] > value; j--) 
{ 
a[j + 1] = a[j]; 
display(a,i); 
} 
//value = 6[1] if ;7[0] > 6[1] do loop ;in loop 6[1] = 7[0]; 
//7[1]=7[0]
  display; 
// 7[1] = value
// 7[1] = 6[0]
// 6[1] = 6[0] 
//6[1] 
//7[0] 6[1] 
a[j + 1] = value; 
display(a,i); 
//a[1] = value
  //6[1]
  }

  }*/


void insertion(int a[], int N){
/*insertion*/
  int i, value, j;
  for(i=1;i<N;i++){
    value=a[i];
    for(j=i-1;j>=0 && a[j]>value ; j--){

      a[j+1]=a[j];

//     display (a,N);
    }
    a[j+1]=value;
 //   display (a,N);
 //   cout<<endl;
  }
}