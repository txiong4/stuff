#ifndef CONTAINERS_H
#define CONTAINERS_H
#include "window.h"
#include <vector>
#include <string>

using namespace std;

class Container: public Window
{
    private:
        vector<string> storage;
        vector<string> inventory;
        static vector<string> itemdb;
        vector<string> containerContent;
    public:
        Container(int rsize, int csize, int rows, int cols, string message): Window(rsize,csize,rows,cols,message)
        {
            box(window,0,0);
            wmove(window,1,2);
            waddstr(window, message.c_str());
            refresh();
        }

        void write()
        {
            this->refreshWindow();
            /* Begin sorting */
            for(int iter = 1; iter < containerContent.size(); iter++)
            {
                for(int i = 0; i < containerContent.size() - iter; i++)
                {
                    if(containerContent[i] > containerContent[i+1])
                        swap(containerContent[i], containerContent[i+1]);
                }
            }

            for(int i = 0; i < containerContent.size(); ++i)
            {
                wmove(window,i+1, 1);
                //wclrtoeol(window);

                waddstr(window, containerContent[i].c_str());
                refresh();
            }
            refreshAll();
        }
        void addContainer(string items)
        {
            containerContent.push_back(items);
        }

        void refreshWindow()
        {
            wclear(window);
            wrefresh(window);
            box(window, 0, 0);
        }

        vector<string>& getVectorContainer() { return this->containerContent; }
};

vector<string> Container::itemdb = {"Sword", "Armor", "Apple", "Potion", "Shield"};

#endif
