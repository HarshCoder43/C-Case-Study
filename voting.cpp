#include <iostream>
using namespace std;

const int MIN_VOTING_AGE = 18;

void checkEligibility()
{
    int age;

    cout << "\nEnter your age: ";
    cin >> age;

    cout << "\nAccording to Article 326 of the Constitution of India and the 61st Constitutional Amendment Act, only citizens aged 18 years or above are eligible to vote in elections.\n";

    if(age >= MIN_VOTING_AGE)
    {
        cout << "You are eligible to vote.\n";
    }
    else
    {
        cout << "You are NOT eligible to vote.\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== Voting Age Verification System =====\n";
        cout << "1. Check Eligibility\n";
        cout << "2. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                checkEligibility();
                break;

            case 2:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 2);

    return 0;
}