Sorting a vector example
========================

We can find strings like this in the inventory/storage.
```c++
bool c_window::_find(item) {
  bool found = false;
  for (auto iter = itemdb.begin(); iter != itemdb.end(); iter++) {
    if (*iter == item) {
      found = true;
      break;
    }
  }
  if (found) {
    delete thing;
  }
  return bool;
}

void c_window::swap(item) {
  bool isSwapped = true;
  if (inventory._find(item)) {
    // Remove item from inventory and add it to storage
  } else if (storage.find(item)) {
    // Remove item from storage and add it to inventory
  } else {
    // Item wasn't in neither, we didn't swap anything since item doesn't exist
.
    isSwapped = false;
  }
  return isSwapped;
}
```

Or we can find them like this. But it isn't very modular if we need to use the find outside the class.
```c++
bool swap(item) {
  bool isSwapped = true;
  int i;

  // Search for the item in inventory
  for (i = 0; i < inventory_itemdb.size() && inventory_itemdb[i] != item; ++i)
    ;                              // Iterate inventory to search for it
  if (i < inventory_itemdb.size()) // If found
  {
    // If item was found in inventory_itemdb, remove it and add it over to
    // storage
  } else // Search for item in storage if not found in inventory
  {
    for (i = 0; i < storage_itemdb.size() && storage_itemdb[i] != item; ++i)
      ; // Iterate inventory to search for it
    if (i < storage_itemdb.size()) {
      // If item was found in storage_itemdb, remove it and add it over to
      // inventory
    } else // If not found in the storage either, then item doesn't exist
    {
      isSwapped = false;
    }
  }

  return isSwapped; // Will return is item was swapped or not. Only returns tru
e
                    // if item exists.
}
```

