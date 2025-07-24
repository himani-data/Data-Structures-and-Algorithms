void single(int arr[],int size){
    //int count=0;
    //bool h=true;
for(int i=0;i<size;i+=2){
      if(arr[i]!=arr[i+1]){
      cout<<arr[i];
      return;
       
    }
      else{ 
        cout<<size-1;
    }
    }
}