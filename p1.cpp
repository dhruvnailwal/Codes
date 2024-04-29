#include<bits/stdc++.h>
using namespace std;
// For random number generation

int main()
{
    //How many number to be taken out 
    int size;
    cout<<"Enter how many number you want to take out"<<endl;
    cin>>size;    
    
    // Exponential distribution rate parameter (λ)
    const double rate = 0.5; 
    int x = time(0);
    // Set a fixed seed for reproducibility
    default_random_engine generator(x); 
    
    exponential_distribution<double> distribution(rate);

    // Generate and print the random numbers
    cout << "Generated exponential sequence:\n";
    for (int i = 0; i < size; ++i)
    {
        double random_number = distribution(generator);
        cout << random_number << " ";
    }
    cout << endl;

    return 0;
}
