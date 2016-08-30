//
// Created by Ariana on 2016/8/30.
//
#include<iostream>
#include<string>
double add(double x, double y);
double subtract(double x, double y);
 int main(int argc, char** argv){
double a,b;
     char c;
     std::cin>>a;
     std::cin>>c;
     std::cin>>b;
     switch(c){
         case '+':
         std::cout<<add(a,b);
             break;
         case '-':
         std::cout<<subtract(a,b);
             break;
         default:
             break;
         }
         return 0;
 }
double add(double x, double y){
    return x+y;
}
double subtract(double x, double y){
    return x-y;
}

