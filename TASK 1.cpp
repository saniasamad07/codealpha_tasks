#include <iostream>
using namespace std;

class CGPA
{
private:
    int courses, creditHours, totalCredits = 0;
    char grade;
    float gradePoint, totalPoints = 0, cgpa;

public:
    void input()
    {
        cout << "Enter number of courses: ";
        cin >> courses;

        for (int i = 1; i <= courses; i++)
        {
            cout << "\nCourse " << i << endl;

            cout << "Enter Grade (A/B/C/D/F): ";
            cin >> grade;

            cout << "Enter Credit Hours: ";
            cin >> creditHours;

            // Assign grade points
            if (grade == 'A')
                gradePoint = 4.0;
            else if (grade == 'B')
                gradePoint = 3.0;
            else if (grade == 'C')
                gradePoint = 2.0;
            else if (grade == 'D')
                gradePoint = 1.0;
            else
                gradePoint = 0.0;

            totalPoints = totalPoints + (gradePoint * creditHours);
            totalCredits = totalCredits + creditHours;

            cout << "Grade Points = " << gradePoint * creditHours << endl;
        }
    }

    void calculate()
    {
        cgpa = totalPoints / totalCredits;

        cout << "\nTotal Credits = " << totalCredits << endl;
        cout << "Total Grade Points = " << totalPoints << endl;
        cout << "Final CGPA = " << cgpa << endl;
    }
};

int main()
{
    CGPA student;

    student.input();
    student.calculate();

    return 0;
}
