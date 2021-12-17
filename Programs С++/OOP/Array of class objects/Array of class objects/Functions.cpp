#include "Functions.h"


void info_about_all_students(Student* const array_of_students, const int array_size)
{

    int i = 0;
    while (i < array_size)
    {


        array_of_students[i].get_student_info();
        cout << "______________________________" << endl;
        i++;
    }
}