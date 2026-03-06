#include <iostream>
using namespace std;

class Inventory
{
    int items[100];
    int size;
    int capacity;

    bool isValidIndex(int index)
    {
        return index >= 0 && index < size;
    }

public:
    Inventory(int cap = 100)
    {
        capacity = cap;
        size = 0;
    }

    void insertEnd(int value)
    {
        if (size < capacity)
        {
            items[size++] = value;
        }
        else
        {
            cout << "Inventory Full\n";
        }
    }

    void insertAtPosition(int value, int pos)
    {
        if (size >= capacity || pos < 0 || pos > size)
        {
            cout << "Invalid Position\n";
            return;
        }

        for (int i = size; i > pos; i--)
        {
            items[i] = items[i - 1];
        }

        items[pos] = value;
        size++;
    }

    void deleteItem(int pos)
    {
        if (!isValidIndex(pos))
        {
            cout << "Invalid Position\n";
            return;
        }

        for (int i = pos; i < size - 1; i++)
        {
            items[i] = items[i + 1];
        } 

        size--;
    }

    void updateItem(int pos, int value)
    {
        if (!isValidIndex(pos))
        {
            cout << "Invalid Position\n";
            return;
        }

        items[pos] = value;
    }

    void searchItem(int value)
    {
        for (int i = 0; i < size; i++)
        {
            if (items[i] == value)
            {
                cout << "Found at index " << i << "\n";
                return;
            }
        }
        cout << "Not Found\n";
    }

    void findMax()
    {
        if (size == 0)
        {
            cout << "Inventory Empty\n";
            return;
        }

        int maxVal = items[0];
        for (int i = 1; i < size; i++)
        {
            if (items[i] > maxVal)
                maxVal = items[i];
        }

        cout << "Max: " << maxVal << "\n";
    }

    void findMin()
    {
        if (size == 0)
        {
            cout << "Inventory Empty\n";
            return;
        }

        int minVal = items[0];
        for (int i = 1; i < size; i++)
        {
            if (items[i] < minVal)
                minVal = items[i];
        }

        cout << "Min: " << minVal << "\n";
    }

    void display()
    {
        if (size == 0)
        {
            cout << "Inventory Empty\n";
            return;
        }

        for (int i = 0; i < size; i++)
        {
            cout << items[i] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    Inventory inv;
    int choice, value, pos;

    do
    {
        cout << "\n1.Insert at End";
        cout << "\n2.Insert at Position";
        cout << "\n3.Delete";
        cout << "\n4.Update";
        cout << "\n5.Search";
        cout << "\n6.Max";
        cout << "\n7.Min";
        cout << "\n8.Display";
        cout << "\n9.Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cin >> value;
            inv.insertEnd(value);
            break;
        case 2:
            cin >> value >> pos;
            inv.insertAtPosition(value, pos);
            break;
        case 3:
            cin >> pos;
            inv.deleteItem(pos);
            break;
        case 4:
            cin >> pos >> value;
            inv.updateItem(pos, value);
            break;
        case 5:
            cin >> value;
            inv.searchItem(value);
            break;
        case 6:
            inv.findMax();
            break;
        case 7:
            inv.findMin();
            break;
        case 8:
            inv.display();
            break;
        case 9:
            break;
        default:
            cout << "Invalid Choice\n";
        }

    } while (choice != 9);

    return 0;
}