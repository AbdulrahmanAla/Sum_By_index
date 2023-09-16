#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using  std::string, std::cin, std::cout, std::size_t, std::endl, std::vector;
//{{1, 2, 3}, {4, 9}}
//{5, 11, 3}
//{{1, 0, 3}, {2, 0, 2}, {3, 0, 5}, {-4, 0, 7}}
//{2, 0, 17}

//{{1, 0}, {2, 0, 2, 1, 5}, {}, {-4, 0, 7, -2}};
//{-1, 0, 9, -1, 5};

//{{1, 2, 3, 4}}
//{1, 2, 3, 4}

//{{1, 2, 3}, {4, 9}}
//{5, 11, 3}

//{{1, 0}, {2, 0, 2, 1, 5}, {}, {-4, 0, 7, -2}};
//{-1, 0, 9, -1, 5};

//{{1, 2, 3}, {4, 9}}
//{5, 11, 3}
std::vector<int> SumByIndex(std::vector<std::vector<int>> const &vect){
    std::vector<int> result;
    size_t i =0;
    size_t j =0;
    int current_number=0;
    size_t max =0;
    size_t min =10;

    for (size_t k =0 ; k< vect.size(); ++k){
        if (vect[k].size() < min){
            min= vect[k].size();

        }
    }
    if (min ==0){

        for(; i <vect.size() ;++j){
        for(; j <vect.size();++i){
            if (i >=vect.size()) {break;}
            if (j < (vect[i]).size()){ // this line is written in case there was an empty vector so it wouldn't add it
                current_number += vect[i][j];
            }
            if ( vect[i].size() > max){
                max = vect[i].size();
            }
            
        }
        
        if (max <= result.size()) {break;}
        result.push_back(current_number);
        
        current_number=0;
        i=0; // so I can get the next element from every vector
        
        continue;
    
    
        }
    }
    else{
        for(; i <vect.size() ;++j){
        for(; j <vect[i].size();++i){
            
            if (i >=vect.size()) {break;}
            if (j < (vect[i]).size()){ // this line is written in case there was an empty vector so it wouldn't add it
                current_number += vect[i][j];
            }
            if ( vect[i].size() > max){
                max = vect[i].size();
            }
            
        }
        
        if (max <= result.size()) {break;}
        result.push_back(current_number);
        
        current_number=0;
        i=0; // so I can get the next element from every vector
        
        continue;
    
    
        }
    }
    

    
    return result;
    
}