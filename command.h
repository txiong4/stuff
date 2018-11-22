#ifndef COMMAND_H
#define COMMAND_H 
#include "window.h"


class Command_Window: public Window {
    private:
        string title;
        string contents;
    public:
        Command_Window(string name, int x): Window(1,COLS,LINES-x,0,"")
        {
            //window = newwin(rsize, csize, rows, cols);
            title = name;
            waddstr(window, contents.c_str());
            this->refresh();
        }

        // readString -- Read a string from the window window (up to 100 chars)
        string readString()
        {
            char line[101];
            wmove(window,0,title.size());
            wgetnstr(window,line,100);  
            return string(line);
        }

        // clear -- Clear the window window and redisplay the prompt
        void clear()
        {
            contents = "";
            write("");
        }

        // write -- Append a string to the window
        void write(string s)
        {
            contents += s;
            waddstr(window,contents.c_str());
            // Refresh
            wrefresh(window);
        }

        void displayTitle()
        {
            // Move to (0, 0) and clear to EOL
            wmove(window, 0, 0);
            wclrtoeol(window);
            // Print the title first
            waddstr(window,title.c_str());
            //wmove(window, 0, title.size());
        }
};
#endif
