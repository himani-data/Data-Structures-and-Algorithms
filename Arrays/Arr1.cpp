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
void Reverse_Traversal(int arr[], int n)
{
    cout << "Reevrse Array is : " << "{";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i];

        if (i != 0)
        {
            cout << ", ";
        }
    }
    cout << " }" << "\n\n";
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
void insert_at_pos(int arr[], int size)
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

    cout << "\n---- MENU ----" << "\n\n";

    cout << "1. Find Minimum Element" << endl;
    cout << "2. Find Maximum Element" << endl;
    cout << "3. Find Sum of Array" << endl;
    cout << "4. Find Average of Array" << endl;
    cout << "5.Sum_Product_of_min_and_max" << endl;
    cout << "6. Reverse_Traversal" << endl;
    cout << "7. Insert at Beginning" << endl;
    cout << "8. Insert at Position" << endl;
    cout << "9. Insert at Last" << endl;
    cout << "10. Find The Elem in Array " << endl;
    cout << "11. Binary Search" << endl;
    cout << "12. Two_Sum brute force" << endl;
    cout << "13. Two_Sum 2 pointer" << endl;
    cout << "14. Two_Sum optimal" << endl;
    cout << "15. Exit" << endl;
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
        case 1:
            minimum(arr, size);
            break;
        case 2:
            maximum(arr, size);
            break;
        case 3:
            findSum(arr, size);
            break;
        case 4:
            Average(arr, size);
            break;
        case 5:
            Sum_Product_of_min_and_max(arr, size);
            break;
        case 6:
            Reverse_Traversal(arr, size);
            break;
        case 7:
            insert_at_beginning(arr, size);
            break;
        case 8:
            insert_at_pos(arr, size);
            break;
        case 9:
            insert_at_last(arr, size);
            break;
        case 10:
            Find_Elem(arr, size);
            break;
        case 11:
            Binary_search(arr, size);
            break;
        case 12:
            Two_Sum(arr, size);
            break;
        case 13:
            two_ptr(arr, size);
            break;
        case 14:
            optimal(arr, size);
            break;
        case 15:
            cout << "Exiting..." << endl;
            break;
        // case 9:
        default:
            cout << " Oops....Invalid choice! Try again.,Hare Krishna !!!" << endl;
        }

    } while (choice != 15);

    return 0;
}
