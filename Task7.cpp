// Mehboob ul qadri 515856
#include <iostream>
#include <vector>

using namespace std;

void printKeyIndices(vector<int> vec, int key);

int main()
{
    // Intitializations
    int size, n, key;
    vector<int> vec;

    cout << "How many elements in the array: ";
    cin >> size;

    cout << "Enter the Key: ";
    cin >> key;

    // Loop to enter elements into the array
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element";
        cin >> n;
        vec.push_back(n);
    }

    // Calling the function to print the indices
    printKeyIndices(vec, key);

    return 0;
}

void printKeyIndices(vector<int> vec, int key)
{
    vector<int> indices;

    if (vec.size() == 0)
    {
        cout << "Given array/vector is Empty!";
        return;
    }

    // Loop to check the indices with the key
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == key)
        {
            indices.push_back(i); // Adding to the indices vector
        }
    }

    if (indices.size() == 0)
    {
        cout << "Key not present";
        return;
    }

    // Printing the indices
    for (int i : indices)
    {
        cout << i << " ";
    }
}