/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: aparsons
 *
 * Created on September 27, 2017, 1:14 PM
 */

#include <iostream>

using namespace std;

class ShopItemOrder
{
public:
    ShopItemOrder() {
    }

    ShopItemOrder(string name, double price, int numberOrdered)
    {
        this->name = name;
        this->price = price;
        this->numberOrdered = numberOrdered;
    }
    void set_name(string name)
    {
        this->name = name;
    }
    
    string get_name()
    {
        return name;
    }
    
    void set_price(double price)
    {
        this->price = price;
    }
    
    double get_price()
    {
        return price;
    }
    
    void set_numberOrdered(int numberOrdered)
    {
        this->numberOrdered = numberOrdered;
    }
    
    int get_numberOrdered()
    {
        return numberOrdered;
    }
    
    
private:
    string name;
    double price;
    int numberOrdered;
    
};
int main(int argc, char** argv) {
    double total;
    ShopItemOrder Item1("Binder", 5.99, 5);
    ShopItemOrder Item2("Notebook", 2.99, 8);
    ShopItemOrder Item3("Pencils", .99, 20);
    ShopItemOrder Vector[] = {Item1,Item2,Item3};
    cout<< "Name        Price       Number of Item"<<endl;
    
    for(ShopItemOrder loop: Vector)
    {
        cout<<loop.get_name();
        cout<<"       ";
        cout<<loop.get_price();
        cout<<"        ";
        cout<<loop.get_numberOrdered()<<endl;
        total += loop.get_price() * loop.get_numberOrdered();
        
    }
    cout<<"Your total is "<< total;
}

