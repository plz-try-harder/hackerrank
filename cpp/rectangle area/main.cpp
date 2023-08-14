#include <iostream>

using namespace std;

class Rectangle
{
    public:
        void display()
        {
            std::cout << width << ' ' << height << std::endl;    
        }
        void setWidth(int w)
        {   
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }
        int getWidth()
        {
            return width;
        }
        int getHeight()
        {
            return height;
        }
    private:
        int width, height;
};

class RectangleArea : public Rectangle
{
    public:
        void read_input()
        {
            int w, h;
            std::cin >> w >> h;
            setWidth(w);
            setHeight(h);
        }
        void display()
        {
            std::cout << getWidth() * getHeight() << std::endl;
        }
};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}