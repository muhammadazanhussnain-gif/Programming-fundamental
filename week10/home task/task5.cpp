#include <iostream>
using namespace std;

float calculateSalary(float base, int score, int experience)
{
    float bonusPercent;

    if(score >= 90)
        bonusPercent = 0.20;
    else if(score >= 75)
        bonusPercent = 0.10;
    else
        bonusPercent = 0.05;

    if(experience >= 5)
        bonusPercent = bonusPercent + 0.05;

    float finalSalary = base + (base * bonusPercent);

    return finalSalary;
}

int main()
{
    float base;
    int score, experience;
    cin >> base;
    cin >> score;
    cin >> experience;
    float total = calculateSalary(base, score, experience);

    cout << "Final Salary: " << total;

    return 0;
}