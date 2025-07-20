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
}

// Minimum Element of an array;
int minimum(int arr[], int size)
{

    int min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
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

//void Median(int arr[],int size)
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


//kdanes algo---->maximum subarray sum:
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
    if(curr<0){
        curr=0;
    }
}
cout<<"Max sum of subarray is: "<<maxsum<<endl;
}


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
    cout << "27. Exiting...."<< endl;
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
            case 27:
            cout << "Exiting..." << endl;
            break;
        // case 9:
        default:
            cout << " Oops....Invalid choice! Try again.,Hare Krishna !!!" << endl;
        }

    } while (choice != 27);

    return 0;
}


