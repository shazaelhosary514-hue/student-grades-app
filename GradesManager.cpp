#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct SubjectRecord
{
    string name;
    double grade;
};

bool compareGrades(SubjectRecord a, SubjectRecord b)
{
    return a.grade > b.grade;
}

class Student
{
private:
    string name;
    vector<SubjectRecord> records;

public:
    void setName(string n)
    {
        name = n;
        records.clear();
    }

    void addRecord(string sub, double g)
    {
        records.push_back({sub, g});
    }

    void printReport()
    {
        if (name == "" || records.empty())
        {
            cout << "Please add student name and grades first!\n";
            return;
        }

        sort(records.begin(), records.end(), compareGrades);

        double sum = 0;
        for (int i = 0; i < records.size(); i++)
        {
            sum += records[i].grade;
        }
        double average = sum / records.size();

        cout << "\n--- STUDENT REPORT ---\n";
        cout << "Name: " << name << endl;
        cout << "Grades (Sorted High to Low):\n";

        for (int i = 0; i < records.size(); i++)
        {
            cout << " - " << records[i].name << ": " << records[i].grade << endl;
        }

        cout << "Average: " << average << "%\n";
        cout << "Best Subject: " << records.front().name << " (" << records.front().grade << ")\n";
        cout << "Worst Subject: " << records.back().name << " (" << records.back().grade << ")\n";
    }
};

int main()
{
    Student student;
    int option;

    do
    {
        cout << "\n1. Add Student Name\n";
        cout << "2. Add Subject & Grade\n";
        cout << "3. Display Report\n";
        cout << "4. Exit\n";
        cout << "Choose: ";
        cin >> option;

        if (option == 1)
        {
            string name;
            cout << "Enter student name: ";
            cin.ignore();
            getline(cin, name);
            student.setName(name);
        }
        else if (option == 2)
        {
            string sub;
            double grade;
            cout << "Enter subject name: ";
            cin >> sub;
            cout << "Enter grade: ";
            cin >> grade;
            student.addRecord(sub, grade);
        }
        else if (option == 3)
        {
            student.printReport();
        }

    } while (option != 4);

    cout << "Goodbye!\n";
    return 0;
}