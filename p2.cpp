#include <iostream>
#include <vector>
#include <random>
using namespace std;
// Transition matrix (2x2)
const double transitionMatrix[2][2] = {
    // sunny to sunny, sunny to rainy
    {0.8, 0.2},
    // rainy to sunny, rainy to rainy
    {0.3, 0.7}};

// Generate the next state based on the current state
int getNextState(int currentState)
{
    random_device rd;
    mt19937 gen(rd());
    discrete_distribution<> distribution(transitionMatrix[currentState], transitionMatrix[currentState] + 2);
    return distribution(gen);
}

int main()
{
    // Number of steps in the Markov chain
    const int numSteps = 10;
    // Start with sunny (state 0)
    int currentState = 0;

    cout << "Generated weather sequence:\n";
    for (int i = 0; i < numSteps; ++i)
    {
        cout << (currentState == 0 ? "sunny" : "rainy") << " -> ";
        currentState = getNextState(currentState);
    }
    cout << "...\n";

    return 0;
}