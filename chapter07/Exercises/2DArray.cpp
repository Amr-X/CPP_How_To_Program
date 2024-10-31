#include <iostream>
#include <iomanip>
#include <array>
#include <climits>
using namespace std;

// 2D array 2 by 3 (2*3) t
    const size_t rowSize{2};
    const size_t columnSize{3};

void printArray( const array<array<int,columnSize>,rowSize> &_array);

int main (){

    array <array<int,columnSize>,rowSize> t{{
        {1,2,3},
        {4,5,6}
            }};

    // for(size_t j{0};j<columnSize;j++){
    //     t[0][j]=0;
    // }

    // for (size_t c{0};c<rowSize;c++){
    //     t[c][columnSize-1]=0;

    // }

    // t[0][0] = 0;
    // t[0][1] = 0;
    // t[0][2] = 0;
    // t[1][0] = 0;
    // t[1][1] = 0;
    // t[1][2] = 0;

    // for(size_t i{0};i<rowSize;i++){
    //     for(size_t j{0};j<columnSize;j++){
    //         t[i][j] = 0;
    //     }
    // }

    // for (auto  &row:t){
    //     for (auto  &elem:row){
    //         elem = 0 ;
    //     }
    //     cout<<endl;
    // }

    // cout<<"Fill The Array:\n";
    // for (auto  &row:t){
    //     for (auto  &elem:row){
    //         int input;
    //         cin >> input;
    //         elem = input ;
    //     }
    // }

    // size_t smallest{INT_MAX}; Not Great to do
    // for(size_t i{0};i<rowSize;i++){
    //     for (size_t j{0};j<columnSize;j++){
    //         if(t[i][j]<smallest){
    //             smallest = t[i][j];
    //         }
    //     }
    // }
    // cout <<smallest<<endl;


  
    // for (size_t j{0};j<columnSize;j++){
    //        cout << t[0][j]<<" ";
    // }
    // cout<<endl;

    // cout << "     ";
    // for (size_t i{0};i<columnSize;i++)
    // {
    //     cout<<setw(7)<<"Column"<<setw(2)<<i+1;
    // }
    // cout <<"\n"<<endl;
    
    // for(size_t i{0};i<rowSize;i++){
    //     cout <<"Row"<<setw(2)<<i+1;
    //     for(size_t j{0};j<columnSize;j++){
    //         cout<<setw(9)<<t[i][j];
    //     }
    //     cout<<endl;
    // }    

    

    printArray(t);

}

void printArray( const array<array<int,columnSize>,rowSize> &_array){
    
    for (auto const &row:_array){
        for (auto const &elem:row){
            cout<<elem<<" ";
        }
        cout<<endl;
    }
    }