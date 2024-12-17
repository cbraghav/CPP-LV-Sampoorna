#include <bits/stdc++.h>

using namespace std;

class Student
{
    // access specifier
    // public:
    // data members
    string name;
    int age;
    int get_avg()
    {
        int sum = 0;
        for (auto i : marks)
            sum += i;

        return sum / marks.size();
    }

public:
    vector<int> marks;
    void set_name(string s)
    {
        name = s;
    }
    string get_name()
    {
        return name;
    }
    // functions / methods
    void print_name()
    {
        cout << "my name is " << name << endl;
    }
    void get_avg_marks()
    {
        cout << " the avg marks are " << get_avg() << endl;
    }
    void print_age()
    {
        cout << "my age is " << age << endl;
    }

    // declare -> yes but define -> no
    void print_marks();

    // default cons
    Student()
    {
        cout << "default constructor is called\n";
        name = "";
        age = 10;
    }
    // parameterized cosnt
    Student(string s, int a)
    {
        name = s;
        age = a;
        cout << "parameterized constructor is called\n";
    }
    Student(string s) : name(s)
    {

        cout << "parameterized constructor 2 is called\n";
    }

    ~Student()
    {
        cout << "destructor called\n";
    }
    // copy cons
    Student(Student &obj)
    {
        name = obj.name;

        cout << "copy cons called\n";
    }
} s1;
void Student::print_marks()
{
    for (auto i : marks)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    string name = "raghav";
    Student s2(name, 18);
    Student s3(s2);
    Student s5 = s3;
    // Student s3;

    // s3.print_name();
    // s3.set_name("yuvraj");
    // s3.print_name();
    s2.print_name();

    s1.set_name("yuv");
    s1.print_name();
    cout << 5 << endl;
    // s3.print_age();

    // s1.name = "Yuvraj";
    // s1.age = 15;
    // s1.marks.push_back(89);

    // // cout << s1.name << endl;

    // s1.set_name("Yuvraj");

    // s1.print_age();
    // s1.print_name();

    // s1.print_marks();

    // s2.name = "Raghav";
    // s2.age = 16;
    // s2.marks.push_back(75);

    // s2.marks.push_back(57);

    // s2.print_age();
    // s2.print_name();
    // // s2.print_marks();
}