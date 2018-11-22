# Swapping
In order to swap things with two different classes, you can use a friend function or use an outside function (which I said was the hard way). If you're going to do this, you need implement functions that can remove items from the vector and functions that can add items to the vector.

### Swapping via container windows
You can pass the Container windows via reference into the parameters and perform swapping there. Start by performing a search on the first container. If the item the user typed is in the first container, remove it from the vector container and move it to the second container, vice versa. You should only need to perform a max of two searches: if the item isn't the first container and the second container.
```c++
void swap(const std::string item, Container& container1, Container& container2)
{
    // Search and index here

    // If found, your algorithm here
}

```

The function above isn't a part of any class. It can simply be an outside function.
