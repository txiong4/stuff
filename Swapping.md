# Swapping
In order to swap things with two different classes, you can use a friend function or use an outside function (which I said was the hard way). If you're going to do this, you need implement functions that can remove items from the vector and functions that can add items to the vector.

### Swapping via container windows
You can pass the Container windows via reference into the parameters and perform swapping there. Start by performing a search on the first container. If the item the user typed is in the first container, remove it from the vector container and move it to the second container, vice versa. You should only need to perform a max of two searches: if the item isn't the first container and the second container.

Since you do not have any way to access the vectors, you will need to use a friend function OR implement other class functions (public) and return the address of the vector

```c++
vector<string>& Container::getContainer()
{
    return this->containerContents; // Returns the address of the container
}
```
Once you do the above, you can then directly access the vector.
```c++
void swap(const std::string item, Container& container1, Container& container2)
{
    for(auto iter i = container1.getContainer().begin(); i != container1.getContainer().end(); i++)
    {
        if(*iter == item)
        {
            /* Swap into container2 code here*/
            return; // Return since swapped performed
        }
    }
    // The same search is implemented above if we do the search and nothing is found.
}

```

The function above isn't a part of any class. It can simply be an outside function.
