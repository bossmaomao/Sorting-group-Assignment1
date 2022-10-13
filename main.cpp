#include <iostream>
#include <iomanip>

using namespace std;
#include "Boss.h"
#include "Fen.h"
#include "Pam.h"
int main(int argc,char** argv) {
 int i,*a,sorted,j;
    //./a.out 10 20 30
  a=new int [argc-1];
  for(i=1;i<argc;i++) {
  /* transfer the value from argv into a*/
    a[i-1] = atoi(argv[i]);
//   cout<<a[i-1]<<endl;
  }

//bubble(a,argc-1);
//insertion(a,argc-1);
selection(a,argc-1); 
  
 // int N=argc-1,j;

 /* for(i=0;i<N-1;i++){
  sorted=0;
    for(j=0;j<N-1-i;j++){
    //check neighbor
  //swap if it's not right
 
      if(a[j]>a[j+1]) 
      swap(a[i],a[i+1]);
     sorted=1;
    
  }
    if (sorted==0) break;
    //compare if it not in the right order then swap it


}
  */
  // if (sorted==0) break;
   //cout<<endl;
  //bubble(a,argc-1);
/* int j,value,N=argc-1;
for(i=1;i<N;i++){
  value=a[i];
for(j=i-i;j>=0; j--){
  if(a[j]>value) a[j+1]=a[j];
  else break;
  display(a,N);
}
  a[j+1]=value;
  display(a,N);
}*/
  /*int N=argc-1;
 int min,m;
  
  for(i=0;i<N-1;i++){
// min=a[i];
   m=i; 
    for(j=i;j<N;j++){
   if(a[j]<a[m]) {
     min=a[j];
     m=j;

    }
    //selection(a,N);  
//swap(a[m],a[i]);
    
  }
swap(a[m],a[i]);
    display(a,N);
    }*/
/*  cout<<"after sorting"<<endl;
 for(i=1;i<argc;i++){
   cout<<setw(5)<<a[i-1];
 }*/
  }