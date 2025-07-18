# include<iostream>
//#include<vector>
using namespace std;


// show the array
 void show(int arr[],int size){
    cout<<"{";
    for(int i = 0; i < size; i++) {
        cout << arr[i];
        if (i != size - 1)
            cout << ", ";
    }
    cout << " }" << endl;


 }

 //Minimum Element of an array;
int minimum(int arr[], int size){
    
    int min=arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
 cout << "Minimum element of the array is: " << min << endl;
 return min;
}


// Maximum of the Array
  int maximum(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
cout << "Maximum element of the array is: " << max << endl;
return max;
  }


  // Sum of the Array

  void findSum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
     cout << "Sum of the array is: " << sum << endl;    
  }


  // Find Average Of Array"

  void Average(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
     cout << "Average of the array is: " << sum/size << endl;    
  }

//Sum and Product of minimum and maximum element of an Array
void Sum_Product_of_min_and_max(int arr[],int size){

    int min= maximum(arr,size);
    int max=minimum(arr,size);
    cout<<"Sum and Product of minimum and maximum element of an Array  : "<<min+max<<", "<<min*max<<endl;

}


//  Reverse Traversal of Array
void Reverse_Traversal(int arr[],int n){
    cout<<"Reevrse Array is : "<<"{";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i];
    
    if(i!=0){
        cout<<", ";
    }
}
    cout << " }" << endl;
    
    
}

   //insert at begining
   
   void insert_at_beginning(int arr[],int& size){
    int elem;
    cout<<"Enter element to insert at Beginning: "<<endl;
    cin>>elem;
    //shift elem to right
    
    for(int i=size;i>0;i--){
        arr[i]=arr[i-1];
    }
      arr[0]=elem;
      size++;
      cout<<"your Array Before : ";
       show(arr,size);
       cout << "Array after insertion "<<elem<<" at beginning : ";
       show(arr,size);
    cout<<"size updated...."<<endl;
   }

   // insert at given position
   void insert_at_pos(int arr[],int size){
    int pos,elem;
    cout<<"Enter at which position/Index you want to insert Element :" <<endl;
    cin>>pos;
    
    cout<<"Enter element to insert : "<<endl;
    cin>>elem;

    for(int i=size;i>pos;i--){
        arr[i]=arr[i-1];
    }
      arr[pos]=elem;
      size++;
    cout<<"your Array Before : ";
    show(arr,size);
       cout << "Array after insertion "<<elem<<" at"<<" index "<<pos<<" :";
    show(arr,size);
    cout<<"size updated...."<<endl;
   }

   void insert_at_last(int arr[],int size){
    
    int elem;
    size++;
    cout<<"Enter element to insert at last : "<<endl;
    cin>>elem;
    arr[size]=elem;
    cout<<"your Array Before : ";
    show(arr,size);

    cout<<"Your Array after insertion "<<elem<<" at last : ";
    show(arr,size);
    cout<<"size updated...."<<endl;
   }
   


    int main(){
    int size,choice;
    cout<<"Enter No. of Elements in an Array--->";
     cin>>size;
    int n=100;
    
     int arr[n];
     
    cout<<"Enter "<<size<<" Elements: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
     }

     cout << "\n---- MENU ----" << endl;
        
        cout << "1. Find Minimum Element" << endl;
        cout << "2. Find Maximum Element" << endl;
        cout << "3. Find Sum of Array" << endl;
        cout << "4. Find Average of Array" << endl;
        cout << "5.Sum_Product_of_min_and_max"<<endl;
        cout << "6. Reverse_Traversal"<<endl; 
        cout << "7. Insert at Beginning"<<endl;
        cout << "8. Insert at Position"<<endl;
        cout << "9. Insert at Last"<<endl;
        cout << "10. Exit" << endl;
        cout<<endl;
        // cout << "Enter your choice: ";
        // cin >> choice;
    
     do{
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "Your Array is : { ";
    for(int i = 0; i < size; i++) {
        cout << arr[i];
        if (i != size - 1)
            cout << ", ";
    }
    cout << " }" << endl;
    cout<<endl;
        switch(choice) {
            case 1: minimum(arr, size); break;
            case 2: maximum(arr, size); break;
            case 3: findSum(arr, size); break;
            case 4: Average(arr, size); break;
            case 5: Sum_Product_of_min_and_max(arr,size);break;
            case 6: Reverse_Traversal(arr,size);break;
            case 7: insert_at_beginning(arr,size);break;
            case 8: insert_at_pos(arr,size);break;
            case 9: insert_at_last(arr,size);break;
            case 10: cout << "Exiting..." << endl; break;
            //case 9: 
            default: cout << " Oops....Invalid choice! Try again.,Hare Krishna !!!" << endl;
        }

    } while(choice!=10);

    return 0;
}

    
