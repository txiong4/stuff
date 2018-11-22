#ifndef WINDOW_H
#define WINDOW_H
#include <ncurses.h>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
class Window
{
    protected:
        static vector<Window*> windowList;
    
        // static vector containing all the classes of windows
        //WINDOW* getWindow() { return this->window; }
        WINDOW* window;

    public:

        // Creates a window and adds it to vector
        Window(int rsize, int csize, int rows, int cols, string message)
        {
            window = newwin(rsize, csize, rows, cols);
            windowList.push_back(this);
        }

        // Refresh window
        virtual void refresh()
        {
            wrefresh(window);
        }

        // Refreshes all windows
        virtual void refreshAll()
        {
            for(auto &window: windowList)
                window->refresh();
        }

};

// static vector
vector<Window *> Window::windowList;

#endif
