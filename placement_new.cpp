#include <iostream>
#include <cstdio>
#include <string.h>
class  Foo 
{ 
    char  cc; 
    float  f; 

public :
    Foo()
    {
        cc = 'S';
        f = 6.0;
    }
    Foo(float init)
    {
        f = init;
    } 
    void  print() { std::cout  <<  " ADDR:  "  <<  this  <<  std::endl; } 
    void  set_f(  float  _f ) { std::cout  <<  " set f val :  "  <<  _f  <<  std::endl; f  =  _f; } 
    void  get_f() { std::cout  <<  " get f val :  "  <<  f  <<  std::endl; } 
} ;

int main()
{
    char *  buff  =  new  char [  sizeof (Foo)  *  3 ]; 
    memset( buff,  0 ,  sizeof (Foo) * 3 );
    Foo *  pfoo  =  new  (buff)Foo(3.3f);
    pfoo -> print();
    pfoo -> get_f(); 
    pfoo -> set_f( 1.0f );
    pfoo -> get_f();
    pfoo ->~ Foo();
    delete [] buff;
    
}
