/*
 This program determines if a job applicant is hired or rejected.
 It checks for two main criteria: having a certificate, or a combination of
 being over 21 and possessing a driving license.
*/
#include <iostream>
using namespace std;

// Defines the data structure needed for the hiring criteria.
struct stInfo
{
    unsigned short Age;
    bool HasDrivingLicense;
    bool HasCertificate;
};

// Reads applicant information because we need to get user input to evaluate the criteria.
stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please enter your Age \n";
    cin >> Info.Age;

    cout << "Do you have a driving license?  0/1 \n";
    cin >> Info.HasDrivingLicense;

    cout << "Do you have a certificate?  0/1 \n";
    cin >> Info.HasCertificate;

    return Info;
}

// Evaluates the applicant's acceptance because the hiring decision depends on specific rules.
bool IsAccepted(stInfo Info)
{
    // The certificate is given higher priority because it's a special exception for hiring.
    if (Info.HasCertificate)
        return true;
    // These conditions are checked as a standard fallback because a certificate isn't always available.
    else
        return (Info.Age > 21 && Info.HasDrivingLicense);
}

// Prints the final result because the user needs to know the outcome of their application.
void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
        cout << "\n Hired" << endl;
    else
        cout << "\n Rejected" << endl;
}

// The main entry point of the program.
int main()
{
    PrintResult(ReadInfo());
    return 0;
}