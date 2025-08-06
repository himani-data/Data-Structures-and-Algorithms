#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// show the array
void show(int arr[], int size)
{
    cout << "{";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
            cout << ", ";
    }
    cout << " }" << "\n\n";
    //cout
}

// Minimum Element of an array;
int minimum(int arr[], int size)
{

    int min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        //
        {
            min = arr[i];
            
        }
    }
    cout << "Minimum element of the array is: " << min << "\n\n";
    return min;
}

// Maximum of the Array
int maximum(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Maximum element of the array is: " << max << "\n\n";
}

// Sum of the Array

void findSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of the array is: " << sum << "\n\n";
}

// Find Average Of Array"

void Average(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Average of the array is: " << sum / size << "\n\n";
}

// Sum and Product of minimum and maximum element of an Array
void Sum_Product_of_min_and_max(int arr[], int size)
{

    int min = maximum(arr, size);
    int max = minimum(arr, size);
    cout << "Sum and Product of minimum and maximum element of an Array  : " << min + max << ", " << min * max << "\n\n";
}

//  Reverse Traversal of Array
// void Reverse_Traversal(int arr[], int n)
// {
//     cout << "Revrse Array is : " << "{";
//     for (int i = n - 1; i >= 0; i--)
//     {
//         cout << arr[i];

//         if (i != 0)
//         {
//             cout << ", ";
//         }
//     }
//     cout << " }" << "\n\n";

//     cout << "Array reversed successfully.\n";
// }



//Actually reversing array
void Reverse_Array(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
swap(arr[start],arr[end]);
        start++;
        end--;
    }

    cout << "Array reversed successfully.\n";
    show(arr,size);
}


// insert at begining

void insert_at_beginning(int arr[], int &size)
{
    int elem;
    cout << "Enter element to insert at Beginning: ";
    cin >> elem;
    // shift elem to right

    for (int i = size; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = elem;
    size++;
    cout << "your Array Before : ";
    show(arr, size);
    cout << "Array after insertion " << elem << " at beginning : ";
    show(arr, size);
    cout << "size updated...." << "\n\n";
}

// insert at given position
void insert_at_pos(int arr[], int& size)
{
    int pos, elem;
    cout << "Enter at which position/Index you want to insert Element :";
    cin >> pos;

    cout << "Enter element to insert : " << "\n\n";
    cin >> elem;

    for (int i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = elem;
    size++;
    cout << "your Array Before : ";
    show(arr, size);
    cout << "Array after insertion " << elem << " at" << " index " << pos << " :";
    show(arr, size);
    cout << "size updated...." << "\n\n";
}

void insert_at_last(int arr[], int &size)
{

    int elem;
    cout << "Enter element to insert at last : ";
    cin >> elem;
    arr[size] = elem;
    size++;
    cout << "your Array Before : ";
    show(arr, size);

    cout << "Your Array after insertion " << elem << " at last : ";
    show(arr, size);
    cout << "size updated...." << "\n\n";
}

// Searching Elements in an Array

// 1.Linear Search
void Find_Elem(int arr[], int n)
{
    int key;
    cout << "Enter Key to Search :";
    cin >> key;

    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Yes!! The Key is Present at index " << i << "\n\n";
            return;
        }
    }
    cout << "Oops!!  the key is not Present " << "\n\n";
}

// 2. Binary Search

void Binary_search(int arr[], int size)
{
    int key;
    cout << "Enter Key to Search :";
    cin >> key;

    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            cout << "Element found at index " << mid << endl;
            return;
        }

        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
            start = mid + 1;
    }

    cout << "Oops!!  the key is not Present " << "\n\n";
}

// Two Sum Problem
// USING BRUTE FORCE
void Two_Sum(int arr[], int size)
{
    int target = 9;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "Pair found: " << arr[i] << " + " << arr[j] << " = " << target << endl;
                return;
            }
        }
    }
    cout << "No such pair found.\n";
}

// Two Sum Problem
// USING BETTER APROACH(TWO POINTERS)

void two_ptr(int arr[], int size)
{
    int target = 9;

    int start = 0;
    int end = size - 1;
// sort takes 2 argument start,end(Range)
    sort(arr, arr + size);

    while (start < end)
    {
        int sum = arr[start] + arr[end];
        if (sum == target)
        {
            cout << "Pair found: " << arr[start] << " + " << arr[end] << " = " << target << endl;
            return;
        }
        else if (sum > target)
        {
            end -= 1;
        }
        else
            start += 1;
    }
    cout << "No such pair found.\n";
}

//// Two Sum Problem
// USING OPTIMAL APROACH(HASH MAP)

void optimal(int arr[], int size)
{
    unordered_map<int, int> m;
    //  vector<int> ans;
    int target = 9;
    int sec;
    for (int i = 0; i < size; i++)
    {
        int first = arr[i];
        int sec = target - first;

        if (m.find(sec) != m.end())
        {
            //
            cout << "Pair found: " << first << " and " << sec << endl;
            cout << "Indices: " << m[sec] << " and " << i << endl;
            return;
        }
        m[first] = i;
    }
    cout << "No such pair found.\n";
}

// Delete from last
void del_last(int arr[],int& size){
    if (size == 0) {
        cout << "Array is already empty.\n";
        return;
    }
    size--;
        cout << "Element deleted from End.\n Your array after deletion: ";
    show(arr,size);
}

// Delete from Beginning
void del_beg(int arr[],int& size){
    if (size == 0) {
        cout << "Array is already empty.\n";
        return;
    }
    for(int i=0;i<size;i++){
         arr[i]=arr[i+1];
    }
    size--;
    cout << "Element deleted from  Begining.\n Your array after deletion: ";
    show(arr,size);
}

// Delete Elem from given position
void del_pos(int arr[],int& size){
    if (size == 0) {
        cout << "Array is already empty.\n";
        return;
    }
    int indx;
    cout<<"Enter which indx element do you want to delete: ";
    cin>>indx;
        for(int i=indx;i<size-1;i++){
         arr[i]=arr[i+1];
    }
    size--;
    cout << "Element deleted from pos.\n Your array after deletion: ";
    show(arr,size);
}

//Median

//void Median(int arr[],int size)//most naive aproach
// merge 2 sorted arrays and find median:
void merge(){
    int arr1[]={1,3,4,5};
    int arr2[]={2,4,5,7};
    int i=0,j=0;
    int k=0;
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int merged_size= int(n+m);
     int merged[n+m];
     while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            merged[k++]=arr1[i++];
        }else {
            merged[k++] = arr2[j++];
     }}
     // Copy remaining elements from arr1 (if any)
       while (i < n) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2 (if any)
    while (j < m) {
        merged[k++] = arr2[j++];
    }
   cout << "Merged Array: {";
    for (int x = 0; x < n + m; x++) {
        cout << merged[x] ;
        if (x != n+m - 1)
            cout << ", ";
    }
    cout<<"}" << endl;
    cout<<"Median is: ";
    if((n+m)%2==0){
        int mid1=(n+m)/2-1;
        int mid2=(n+m)/2;
        cout<<(merged[mid1] + merged[mid2])/2<<endl;
    } else{
        int mid=(n+m)/2;
        cout<<merged[mid]<<endl;

    }
    
}

 // better aproach
 int getMin(int arr1[], int size1, int arr2[], int size2,int& p1,int& p2){
    
    
    int total= int(size1+size2);

    if (p1 < size1 && p2 < size2) {
            if (arr1[p1] < arr2[p2]) {
                return arr1[p1++];
            } else {
                return arr2[p2++];
            }
        } else if (p1 < size1) {
        return arr1[p1++];
        } else if (p2 < size2) {
            return arr2[p2++];
        }
       // return-1; // Shouldn't reach here
    }

    void findMedianSortedArrays(int arr1[], int size1, int arr2[], int size2) {
        int p1 = 0;  // Reset pointers each time before merging
        int p2 = 0;
        int total = size1 + size2;

        if (total % 2 == 0) {
            for (int i = 0; i < total / 2 - 1; ++i) {
                int temp = getMin(arr1,size1,arr2,size2,p1,p2);
            }
            int first = getMin(arr1,size1,arr2,size2,p1,p2);
            int second = getMin(arr1,size1,arr2,size2,p1,p2);
            cout<<"Median: "<<(first + second) / 2;
        } else {
            for (int i = 0; i < total / 2; ++i) {
                int temp = getMin(arr1,size1,arr2,size2,p1,p2);
            }
            int get=getMin(arr1,size1,arr2,size2,p1,p2);
        cout<<"Median: "<< get;
        
        }
        cout<<endl;
    }


// Removing elements that is equals to val;
void remove_elem(int arr[],int size){
    int k=0;
    int val;
    cout<<"Enter Value: "<<endl;
    cin>>val;
    for(int i=0;i<size;i++){
        if(arr[i]!=val){
            arr[k++]=arr[i];
        }}
     cout<<"\n New Array after removing"<<val<<"{";
     for(int i=0;i<k;i++){
        cout<<arr[i];
        if(i!=k-1){
            cout<<", ";
        }
        
     }
    cout<<"}\n";


}

// container with most water
//Naive Aproach
void container(int arr[],int size){
    int max_capacity=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){ 
            int w=j-i;
            int curr=min(arr[i],arr[j]);
            int capacity=curr*w;
            max_capacity=max(capacity,max_capacity);

        }
  }

cout<<"Max capacity is: "<<max_capacity<<"\n";
}


//max capacity using 2 ptr aproach
void max_water_optimal_aproach(int arr[],int size){
    int p1=0;
    int p2=size-1;
    int max_cap=0;
    while(p1<p2){
        int w=p2-p1;
        int ht=min(arr[p1],arr[p2]);
        int cap=w*ht;
        max_cap=max(cap,max_cap);
        arr[p1]<arr[p2]?p1++:p2--;
    }
    cout<<"Max capacity is: "<<max_cap<<"\n";

}


//>maximum subarray sum:
//most naive 
void max_subarray(int arr[],int size){
    int maxsum=0;

    for(int st=0;st<size;st++){
        int currSum=0;
        for(int end=st;end<size;end++){
            currSum+=arr[end];
            maxsum=max(currSum,maxsum);

        }   }
    cout<<maxsum<<endl;
    //return ;
}
//kadanes Algorithm for max sub array

int kadane(int arr[],int size){
    int curr=0;
    int maxsum=INT_MIN;
for(int i=0;i<size;i++){
    curr+=arr[i];
    maxsum=max(curr,maxsum);
    //for edge case atleast we get one time max{-1,-2,-3,-4,-5,-6,-7}--->here all negative hence we need to atleast one max
    if(curr<0){
        curr=0;
    }
}
cout<<"Max sum of subarray is: "<<maxsum<<endl;
}
//hii

//Buy and sell stock
void profit(int arr[],int size){
    int buy=arr[0];
    int mprofit=0;
    for(int i=1;i<size;i++){
        if(arr[i]<buy){
            buy=arr[i];

        }else{
            int profit=arr[i]-buy;
            if(profit>mprofit){
                mprofit=profit;
            }
        }

    }
    cout<<"Profit is: "<<mprofit<<endl;
}


// search in a rotated sorted array
void search(int arr[],int size){
    int tar;
    cout<<"Enter target: "<<endl;
    cin>>tar;

    
    int st=0;
    int end=size-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==tar){
            cout<<"found "<<arr[mid]<<" at "<<mid<<endl;
            return;
        }
        if(arr[st]<=arr[mid]){
            if(arr[st]<=tar&&tar<=arr[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }

        }
else{
    if(arr[mid]<=tar&&tar<=arr[end]){
    st=mid+1;
} else{
    end=mid-1;
    }
}}}
#include<iostream>
using namespace std;

// Recursive power function
double solve(double x, long n) {
    if (n == 0)
        return 1;
    if (n < 0)
        return solve(1 / x, -n);

    if (n % 2 == 1)  // Odd power
        return x * solve(x * x, (n - 1) / 2);
    else             // Even power
        return solve(x * x, n / 2);
}

// Function to handle input/output and call solve()
void myPow() {
    double x;
    int n;
    cout << "Enter number (x): ";
    cin >> x;
    cout << "Enter power (n): ";
    cin >> n;

    double result = solve(x, (long)n);

    cout << x << " raised to the power " << n << " is: " << result << endl;
}

//Remove Duplicates from Sorted Array
void remove(int arr[],int size){
    int count=1;
    int a[100];
    a[0]=arr[0];
    for(int i=1;i<size;i++){
      if (arr[i]!=arr[i-1]){
        a[count++]=arr[i];

      }

    }
    cout<<"Array of unique elem: {";
    for(int i=0;i<count;i++){
     cout<<a[i];
     if(i!=count -1){
        cout<<", ";
    
} 
      }
      cout<<"}"<<endl;

}


//Remove Duplicates from Sorted Array with TC=O(n)
void Remove(int arr[],int size){
    int i=0;
    for(int j=1;j<size;j++){
        if (arr[j]!=arr[i]){
            arr[i++]=arr[j];
        }

    }
    cout<<i+1<<","<<arr;
}

//Longest Common Prefix 


void LCP(){
     vector<string> str={"flower","flow","flight"};
    if (str.size()==0){
        cout<<"";
        return;
    }
    string  orig=str[0];
    for (int i = 1; i < str.size(); i++) {
    while(str[i].find(orig)!=0){
        orig=orig.substr(0,orig.length()-1);
        if(orig.empty()) {
            cout<< "";
        return;}
    }
     cout << "Longest Common Prefix: " << orig << endl;
}}

                                             
//Peak Index in Moutain Array--->0,3,8,9,5,2/
//naive aproach
void peak(int arr[],int size){
   for(int i=0;i<size;i++){
    if (arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
        cout<<"Peak Index of Max Array is: "<<i<<endl;
    }
   }

}


// optimal aproach t.c-->O(loGN)
//Binary Search
void peak_bin(int arr[],int size){
  int  st=1;
  int  end=size-2;// why this?-->because st and end can never be a peak of mountain
  while(st<=end){
   int mid=st+(end-st)/2;
    if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1]){
        cout<<"Peak Index of Mountain array: "<<arr[mid]<<endl;
        return;
    }
    else if(arr[mid-1]<arr[mid]){
       st=mid+1;
    }
    else{
        end=mid-1;
    }
  }
  return;
}





// // Naive

// void single(int arr[],int size){
// for(int i=0;i<size-1;i++){
    
//       if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]){
//       cout<<i<<endl;
//       return;
       
//     }
// }
//         cout<<size-1;

// }

// single element in sorted array
//optimal aproach

void single(int arr[],int size){
    int st=0;
    int end=size-1;
    if (size==1){
    cout<<arr[0];
    return;
}

    while(st<=end){
        int mid=st+(end-st)/2; //handling if rthe 1 st elem 
        //comes a smid then no need  to check for mid-1 as it do not exists .
        //simply compare to the right elem.
        if(mid==0 && arr[0]!=arr[1]){
        cout<<arr[mid]<<endl;
        return;
    }
    else {
        if(mid==size-1 && arr[mid]!=arr[mid-1]){
            cout<<arr[mid]<<endl;
            return;
        }}

      if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]){
      cout<<mid<<endl;
      return;
       
    
}
else if(mid%2==0){
if (arr[mid]==arr[mid-1]){
    end=mid-1;
}
else st=st+1;
}

else{
    if (arr[mid]==arr[mid-1]){
        st=mid+1;
    }
    else end=mid-1;
}
}
}


// Sorting Algorithm

//"1. Bubble Sort":
 void bubble(int arr[],int size){
    
    for(int i=0;i<size-1;i++){
        bool isswap=false;
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap=true;
            }
        }
        if(!isswap){
            //array is already sorted 
            return;
        }
    }
  show(arr,size);
 }

// reverse of bubble 

  void rbubble(int arr[],int size){
    
    for(int i=0;i<size-1;i++){
        bool isswap=false;
        for(int j=0;j<size-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap=true;
            }
        }
        if(!isswap){
            //array is already sorted 
            return;
        }
    }
  show(arr,size);
 }
// selection sort
void selection(int arr[],int size){
    
    for(int i=0;i<size;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min=j;            }
        }
        swap(arr[i],arr[min]);
    }
show(arr,size);
}


//insertion sort
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i]; // current element
        int j = i - 1;
        
        // Move elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        // Insert the key at correct position
        arr[j + 1] = key;
    }
    show(arr,size);
}

// insertion sort reverse
 void rinverse(int arr[],int size){
    for(int i=1;i<size;i++){
    int curr=i;
    int prev=i-1;
   while(prev>=0&&arr[prev]<arr[curr]){
    arr[prev+1]=arr[prev];

   }
   arr[prev+1]=curr;
 }
show(arr,size);
 }


// // sort an array os 0's ,1's and 2's:---->naive
// void sort(int arr[],int size){
//     int count0=0;
//     int count1=0;
//     int count2=0;
//     int indx=0;

//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             count0++;
//         }
//         else if(arr[i]==1){
//             count1++;
//         }
//         else count2++;

//     }
//     for(int i=0;i<count0;i++){
//        arr[indx++]=0;
//     }
//     for(int i=0;i<count1;i++){
//        arr[indx++]=1;
//     }for(int i=0;i<count2;i++){
//        arr[indx++]=2;
//     }
//     show(arr,size);
// }

//optim


// sort an array os 0's ,1's and 2's:---->naive
//dutch national flag algorithm
void sort_0s(int arr[],int size){
    int count0=0;
    int count1=0;
    int count2=0;
    int indx=0;

    for(int i=0;i<size;i++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
        else count2++;

    }
    for(int i=0;i<count0;i++){
       arr[indx++]=0;
    }
    for(int i=0;i<count1;i++){
       arr[indx++]=1;
    }for(int i=0;i<count2;i++){
       arr[indx++]=2;
    }
    show(arr,size);
}


// Lexicographic next permutation

void reverseArray(int arr[], int start, int end) {
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
  void next(int arr[],int size){
    int piv=-1;
    
    
    for(int i=size-1;i>=0;i--){
        if (arr[i]<arr[i+1]){
            piv=i;
         break;
        }
    }
if(piv==-1){
    reverseArray(arr,0,size-1);
    return;
}
    for(int i=size-1;i>piv;i--){
        if(arr[i]>arr[piv]){
            swap(arr[i],arr[piv]);
            break;
        }
    }
  

reverseArray(arr, piv + 1, size - 1);
show(arr,size);
}
int main()
{
    int size, choice;
    cout << "Enter No. of Elements in an Array--->";
    cin >> size;
    int n = 100;

    int arr[n];
     
    cout << "Enter " << size << " Elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int arr1[]={1,3,4,5};
    int arr2[]={2,4,5,7};
      int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "\n---- MENU ----" << "\n\n";
    cout<<"1.show the element"<<endl;
    cout << "2. Find Minimum Element" << endl;
    cout << "3. Find Maximum Element" << endl;
    cout << "4. Find Sum of Array" << endl;
    cout << "5. Find Average of Array" << endl;
    cout << "6.Sum_Product_of_min_and_max" << endl;
    cout << "7. Reverse_Traversal" << endl;
    cout << "8. Insert at Beginning" << endl;
    cout << "9. Insert at Position" << endl;
    cout << "10. Insert at Last" << endl;
    cout << "11. Find The Elem in Array " << endl;
    cout << "12. Binary Search" << endl;
    cout << "13. Two_Sum brute force" << endl;
    cout << "14. Two_Sum 2 pointer" << endl;
    cout << "15. Two_Sum optimal" << endl;
    cout << "16. Delete at Last" << endl;
    cout << "17. Delete at Beginning" << endl;
    cout << "18. Delete at position" << endl;
    cout<<"19. Merge 2 sorted arrays and find the median"<<endl;
    cout<<"20. Median of 2 sorted arrays using merge sort"<<endl;
    cout<<"21. Remove elements that are equal to val"<<endl;
    cout<<"22.Container with most water"<<endl;
    cout<<"23.Max Water Optimal Aproach using 2 ptr"<<endl;
    cout<<"24.Maximum Subarray Sum (Brute Force)"<<endl;
    cout<<"25.kadanes Algorithm for max sub array"<<endl;
    cout<<"26.Buy and sell stock"<<endl;
    cout<<"27.recursive power function"<<endl;
    cout<<"28.Remove Duplicates from Sorted Array"<<endl;
    cout<<"29.Longest Common Prefix "<<endl;
    cout<<"30.search in a rotated sorted array"<<endl;
    cout<<"31.Peak Index in Mountain Array"<<endl;
    cout<<"32..Peak Index in Mountain Array(optimal)"<<endl;
    cout<<"33. single element in a sorted array"<<endl;
    cout<<"34. Bubble sort"<<endl;
    cout<<"35.Selection sort"<<endl;
    cout<<"36.Insertion sort"<<endl;
    cout<<"37.sort an array os 0's ,1's and 2's"<<endl;
    cout<<"38. Next Permutation order"<<endl;

        cout <<"39. Exiting...."<< endl;
    // cout<<endl;
    //  cout << "Enter your choice: ";
    //  cin >> choice;

    do
    {
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;
        cout << "Your Array is : { ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i];
            if (i != size - 1)
                cout << ", ";
        }
        cout << " }" << endl;
        // cout<<endl;
        switch (choice)
        {
            case 1:show(arr,size);break;
        case 2:
            minimum(arr, size);
            break;
        case 3:
            maximum(arr, size);
            break;
        case 4:
            findSum(arr, size);
            break;
        case 5:
            Average(arr, size);
            break;
        case 6:
            Sum_Product_of_min_and_max(arr, size);
            break;
        case 7:
            Reverse_Array(arr, size);
            break;
        case 8:
            insert_at_beginning(arr, size);
            break;
        case 9:
            insert_at_pos(arr, size);
            break;
        case 10:
            insert_at_last(arr, size);
            break;
        case 11:
            Find_Elem(arr, size);
            break;
        case 12:
            Binary_search(arr, size);
            break;
        case 13:
            Two_Sum(arr, size);
            break;
        case 14:
            two_ptr(arr, size);
            break;
        case 15:
            optimal(arr, size);
            break;
    
    
        case 16:
            del_last(arr,size);break;

            case 17:del_beg(arr,size);break;
        case 18: del_pos(arr,size);break;
        case 19:merge();break;
case 20: findMedianSortedArrays(arr1, size1, arr2, size2);break;
case 21: remove_elem(arr,size);break;
case 22: container(arr,size);break;
case 23:max_water_optimal_aproach(arr,size);break;
case 24:  max_subarray(arr,size);break;
case 25: kadane(arr,size);break;
case 26: profit(arr,size);break;
case 27: myPow();break; 
case 28:remove(arr,size);break;
case 29: LCP();break;
case 30: search(arr,size);break;
case 31: peak(arr,size);break;
case 32 : peak_bin(arr,size);break;
case 33: single(arr,size);break;
case 34: rbubble(arr,size);break;
case 35:selection(arr,size);break;
case 36: insertionSort(arr,size);break;
case 37:sort_0s(arr,size);break;
case 38:next(arr,size);break;
 case 39:
            cout << "Exiting..." << endl;
            break;
        // case 9:
        default:
            cout << " Oops....Invalid choice! Try again.,Hare Krishna !!!" << endl;
        }

    } while (choice != 39);

    return 0;
}


