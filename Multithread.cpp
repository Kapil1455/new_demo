#include<iostream>
#include<thread>
#include<algorithm>

typedef unsigned long long ull;

ull OddNumber=0;
ull EvenNumber=0;

void FindEven(ull start,ull end)
{
    for(ull i=start; i<=end;i++)
    {
        if(i &1==0){
            EvenNumber=EvenNumber+1;

        }
    }

}

void FindOdd(ull start,ull end)
{
    for (ull i = start; i <= end; i++)
    {   
        if (i & 1 == 0)
        {
           OddNumber=OddNumber+1;
        }
        
    }
    

}
int main()
{
    ull start = 0, end=19000000;

    FindEven(start,end);
    FindOdd(start,end);

    std::cout<< "Oddsum" <<OddNumber<<"\n";
    std::cout<< "EvenNumber" <<EvenNumber<<"\n";


}