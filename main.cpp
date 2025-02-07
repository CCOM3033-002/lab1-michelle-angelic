// Michelle A. Santiago 
// CCOM 3033 - Box Office Assignment 
// Student Number: 801-23-5483
// Contributions: Victoria Agostini

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

// display purpose of the program

cout << "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater." << endl;

// ask for the name of the movie

string movie_name;
cout << "Please enter the name of the movie: ";

// this is so the program doesn't crash after putting 2 words lol

getline(cin, movie_name);

// ask for how many adult tickets were sold 

double adult_tickets; 
cout << "Please enter how many adult tickets were sold: "; 
cin >> adult_tickets;

// ask how many children's tickets were sold

double children_tickets; 
cout << "Please enter how many children's tickets were sold: ";
cin >> children_tickets;

// calculate gross box office profit

double gross_box = (children_tickets * 6) + (adult_tickets * 10);

// calculate net profit with the 20%

double net_profit = gross_box * 0.2;

// calculate amount paid to distributor 

double amt_paid = gross_box - net_profit; 

// display the final thing

// first the name of the movie

cout << "Movie name: " << right << setw (25) << "\"" << movie_name << "\"" << endl;

// adult + children tickets 

cout << "Adult Tickets Sold: " << right << setw (25) << fixed << setprecision (0) << adult_tickets << endl;

cout << "Children's Tickets Sold: " << right << setw (20) << fixed << children_tickets << endl; 

// so all monetary values have 2 decimal places
// fun fact for myself: you don't need to keep repeating fixed or set precision, apparently. it's crazy

cout << fixed << setprecision(2); 

cout << "Gross Box Office Profit:" << setw(13) << right << "$" << setw(9) << gross_box << endl;

cout << "Net Box Office Profit:" << setw(15) << right << "$" << setw(9) << net_profit << endl;

cout << "Amount Paid to Distributor:" << setw(10) << right << "$" << setw(9) << amt_paid << endl;

return 0;

}