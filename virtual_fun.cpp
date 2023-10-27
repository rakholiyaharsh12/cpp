#include<iostream>
using namespace std;

    class pet
    {
        public:
    virtual void print()
        {
            cout<<"print pet voice:";

        }
    };
    class dog : public pet
    {
        public:
                void print () override 
        {
            cout<<" dog voice barks:";
            
        }
    };
    class cat : public pet
    {
        public:
  
        void print() override
        {
            cout<<"cat voice mious:";
            
        }
    };
    class cow : public pet
    {
            public:

        void print() override
        {
            cout<<"cow voice moo:";
            
        }
    };    
    
    int main()
    {
        pet*mypet;
        
        dog mydog;
        cat mycat;
        cow mycow;

        mypet =& mydog;
        mypet -> print();

        mypet =& mycat;
        mypet -> print();

        mypet =& mycow;
        mypet -> print();
    }