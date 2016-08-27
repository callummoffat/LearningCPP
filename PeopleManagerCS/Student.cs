using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PeopleManagerCS
{
    public class Student
        : Person
    {
        public Student()
            : this("Mo Delstudant", 12, 'E', 8)
        {

        }

        public Student(string name, int age,
            char averageGrade, ushort schoolYear)
            : base(name, age)
        {
            AverageGrade = averageGrade;
            SchoolYear = schoolYear;
        }

        public string StudentID { get; } =
            Guid.NewGuid().ToString();
        public char AverageGrade { get; set; }
        public ushort SchoolYear { get; set; }

        public override void Display()
        {
            Console.WriteLine("Displaying information for a student...");
            Console.WriteLine($"Name: { Name }\nStudent ID: { StudentID }\nAge: { Age }\nAverage grade: { AverageGrade }\nYear at school: { SchoolYear }");
            Console.WriteLine("Press any key to continue...");
            Console.ReadKey();
        }

        

    }
}
