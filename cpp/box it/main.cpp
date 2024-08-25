#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)



class Box{
    public:
        Box():l(0),
            b(0),
            h(0)
        {}
        Box(int length, int breadth, int height): l(length),
            b(breadth),
            h(height)
        {}
        Box(const Box& B): l(B.l),
            b(B.b),
            h(B.h)
        {}
        
        int getLength()
        {
            return l;
        }
        int getBreadth()
        {
            return b;
        }
        int getHeight()
        {
            return h;
        }
        long long CalculateVolume()
        {
            return (long long)l*b*h; // you have to typecast it here, otherwise you will get unexpected output
        }
        
        bool operator<(Box& B)
        {
            if(l < B.l || (b < B.b && l == B.l) || (h < B.h && l == B.l && b == B.b) )
            {
                return true;
            }else{
                return false;
            }
        }
        
        friend std::ostream& operator<<(std::ostream& out, Box& B)
        {
            return out << B.l << ' ' << B.b << ' ' << B.h;
        }
        /*Key Points:
        Non-member function: The operator<< must be defined outside the class because the first operand is
         not an instance of Box.
        Friend function: Declaring it as a friend inside the class allows it to access the private members 
        (l, b, and h) directly if needed. In this example, the function still uses the public getters, but 
        the friend declaration is useful if you want direct access to private members.
        Const correctness: Notice that both the operator<< and relevant member functions are marked as 
        const, ensuring that they don’t modify the object.
        Summary
        Defining operator<< as a non-member function allows it to work correctly with streams like 
        std::cout. The error happened because the compiler was expecting a member function to take exactly 
        one argument (the right-hand operand of <<), but here it requires both the stream (std::ostream&) 
        and the Box object. */
    private:
        int l,b,h;  
};




void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}