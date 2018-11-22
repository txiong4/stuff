Lab 06
======
This lab is a self lab. It must demonstrate that students are able to do the follow bulleted list.

## Needs
+ Use WINDOW data type from ncurses (Used for project)
+ Use sorting (Used for swapping. Insert things into the container alphabetically)
+ Polymorphism (Used with pointers)
+ Inheritance (Use for the first two windows. They arrive off abstract class.)
+ Pointers (Used on windows)

## Storage system
Storage system
```
STORAGE
__________________________
|  Storage  |  Inventory  |
|===========|=============|
|Apple      |EMPTY        |
|Fish Pole  |             |
|Med Herb   |             |
|Sword      |             |
|           |             |
|           |             |
|           |             |
|           |             |
|           |             |
|___________|_____________|

What do you want to swap over?
 >>> [input]
```
With this, you will need five windows. The starting from the top left to the bottom right, you will see five different windows. The first and second window is the storage name window and its contents window, the same, but with the inventory, and the fifth window is the command window where the user will enter in the item to swap.

Essentially, the window layout should look something like this...
```
__________________________
|1          |2            |
|___________|_____________|
|3          |4            |
|           |             |
|           |             |
|           |             |
|           |             |
|           |             |
|           |             |
|           |             |
|           |             |
|___________|_____________|
|5________________________|
```
