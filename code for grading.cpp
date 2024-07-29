
#include <iostream>
using namespace std;
int main() {
    int rollnum;
    string name;
    int sci;
    int math;
    int eng;
    int geo;
    int his;
    cout<<"Enter the student's rollnumber\n";
    cin>>rollnum;
    cout<<"Enter the student's name\n";
    cin>>name;
    cout<<"Enter the science marks\n";
    cin>>sci;
    cout<<"Enter the math marks\n";
    cin>>math;
    cout<<"Enter the english marks\n";
    cin>>eng;
    cout<<"Enter the geography marks\n";
    cin>>geo;
    cout<<"Enter the history marks\n";
    cin>>his;
    int grtotal=sci+math+eng+geo+his;
    cout<<"total:";
    cout<<grtotal<<"\n";
    float perone = grtotal / 500.00;
    double tm=perone*100.00;
    cout<<tm<<"%\n";
    if (tm<50)
    cout<<name<<" has failed.\n";
    else if (tm<60)
    cout<<name<<" has gotten a D.\n";
    else if (tm<70)
    cout<<name<<" has gotten a C.\n";
    else if (tm<80)
    cout<<name<<" has gotten a B.\n";
    else if (tm<90)
    cout<<name<<" has gotten an A.\n";
    else if (tm<100)
    cout<<name<<" has gotten an A plus.\n";
  return 0;
}