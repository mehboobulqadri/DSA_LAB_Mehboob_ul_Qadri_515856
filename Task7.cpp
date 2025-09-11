#include <iostream>
#include <vector>

using namespace std;

void printKeyIndices(int arr[], int size, int key);

int main()
{
    // Initializations
    int size, key;

    // Taking array from user input
    cout << "How many elements in the array: ";
    cin >> size;

    int* myArray = new int[size];

    cout << "Enter the Key: ";
    cin >> key;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> myArray[i];
    }

    cout << "\nOutput\n";
    printKeyIndices(myArray, size, key);

    delete[] myArray;
    myArray = nullptr;

    return 0;
}

void printKeyIndices(int arr[], int size, int key)
{
    vector<int> indices;

    // Checking if array is empty 
    if (size <= 0)
    {
        cout << "Given array is Empty\n";
        return;
    }

    // Pushing the indices in the vector
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            indices.push_back(i);
        }
    }

    // Check for key not present 
    if (indices.empty())
    {
        cout << "Key not present\n";
        return;
    }

    cout << "Key found at indices: ";
    for (int i : indices)
    {
        cout << i << " ";
    }
    cout << "\n";
}