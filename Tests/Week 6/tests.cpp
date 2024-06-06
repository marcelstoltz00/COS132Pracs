#include <iostream>
#include <string>
using namespace std;

float v_count(int s = 6)
{
    for (int n = 4; n > 0; n--, s++)
    {
        cout << n + s;
    }
    return s;
}

/*void printer(int v){
    for(int count = 0; count < 6; count++, v++ ){
        cout << ( count - v );
    }
}




void my_function( int count = 0, int number = 0, int limit = 4){
    do{
        number += 2;
        count++;
    } while (count < limit);
    cout << number << "=" << count ;
}


void printer(int count = 10){
    do
    {
        cout << "Hello World";
        count++;
    } while (count < 1);


void iterator_(int count)
{
    for (int value = -5; value < 5 && value < count; value++)
    {
        cout << value;
    }
}

int my_function(int z = 0, int y = 10)
{
    int x;
    for (x = 5; x <= 7 && z < 3; x++)
    {
        cout << x;
    }
    cout << x + z;
}}*/
void printer(int itr = 10)
{
    do
        cout << itr;
    while (itr++ < 2);
}
float calculate(int v, float w) { return v / w; }
int calculate(float v, int w) { return v * w; }
int my_function( int z=0, int y=10){
    int x;
    for( x=5; x<=7 && z < 3 ; x++ ){
        cout << x;
    }
    cout << x+z ;
}
void donothing(int arr[]){
for(int i=0; i<5 ; i++){
   *(arr+ i) += arr[i];
   cout<<*(arr+i)<<endl;
}

}
int main()
{
  float rates[]={0.2,0.4,0.6,0.8,1.0};
  int ages[]={1,2,3,4,5};
  donothing(ages);


cout << ages[2];  
cout << ++ages[0];  
cout << ages[1]++;  
int x = 2; cout << ages[++x]; 

//cout << rates[3]<<endl;  
//cout << ++rates[1]<<endl;  
//cout << rates[0]++<<endl;  
//int x = 3; cout << rates[4]<<endl; 




 //  my_function(3);
    // iterator_(2);
    // printer();
    // iterator_(-3);
    // my_function(2);

    // iterator_(2);
    // my_function(3);
    // printer(0);
}