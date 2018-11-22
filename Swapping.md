# Swapping
In order to swap things with two different classes, you can use a friend function or use an outside function (which I said was the hard way). If you're going to do this, you need implement functions that can remove items from the vector and functions that can add items to the vector.

```c++
void swap(const std::string item, Container& container1, Container& container2)
{
    // Implement the code to find it in the first container.
    // If the item is found in the first container, swap it by adding it into the second container.
    // After swapping it, this is where the code is finished. Simply return from the void function.

    // Implement the code to find it in the second container.
    // The concept is similar above.
}

```

The function above isn't a part of any class. It can simply be an outside function.
