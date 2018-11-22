#include "command.h"
#include "containers.h"
#include <string>

using namespace std;

bool swapping(string input, Container& container1, Container& container2);

int main()
{
    initscr();
    cbreak();

    Command_Window commandWindow = Command_Window("Command: ", 2);
    Command_Window debugWindow = Command_Window("Debug: ", 1);

    Window storageWindow = Container(3,14,5,5,"Storage");
    Window inventoryWindow = Container(3,14,5,19, "Inventory");

    Container storageContainer =  Container(10,14,8,5,"");
    Container inventoryContainer = Container(10,14,8,19,"");
    
    storageContainer.addContainer("Potion");
    inventoryContainer.addContainer("Armor");
    inventoryContainer.addContainer("Shield");
    storageContainer.addContainer("Apple");
    storageContainer.addContainer("Sword");
    commandWindow.displayTitle();
    
    storageContainer.write();
    inventoryContainer.write();
    string command = commandWindow.readString();
    
    while(! (command == "q" or command == "Q"))
    {
        debugWindow.displayTitle();
        commandWindow.displayTitle();
        //debugWindow.write(command);
        if(swapping(command, inventoryContainer, storageContainer))
            debugWindow.write(command + " has been swapped!");
        else
            debugWindow.write(command + " was not found in either containers.");
        storageContainer.write();
        inventoryContainer.write();
        commandWindow.clear();
        command = commandWindow.readString();
        debugWindow.clear();
    }
    endwin();
}
bool swapping(string input, Container& container1, Container& container2)
{
    bool swapped = false;

    for(auto iter = container1.getVectorContainer().begin(); iter != container1.getVectorContainer().end(); iter++)
    {
        if(*iter == input)
        {
            swapped = true;
            container2.getVectorContainer().push_back(input);
            container1.getVectorContainer().erase(iter);
            break;
        }
    }
    if(!swapped)
        for(auto iter = container2.getVectorContainer().begin(); iter != container2.getVectorContainer().end(); iter++)
        {
            if(*iter == input)
            {
                swapped = true;
                container1.getVectorContainer().push_back(input);
                container2.getVectorContainer().erase(iter);
                break;
            }
        }

    return swapped;
}
