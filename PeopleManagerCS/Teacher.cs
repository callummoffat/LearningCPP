using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PeopleManagerCS
{
    public class Teacher
        : Person
    {
        public Teacher()
            : this("Stik Indie Mudd", 36, "English")
        { }

        public Teacher(string name, int age, string specialistSubject)
            : base(name, age)
        {
            SpecialistSubject = specialistSubject;
        }
        public string TeacherID { get; } =
            Guid.NewGuid().ToString();
        public string SpecialistSubject { get; set; }

        public override void Display()
        {
            Console.WriteLine("Displaying information for a teacher...");
            Console.WriteLine($"Name: { Name }\nTeacher ID: { TeacherID }\nAge: { Age }\nSpecialist subject: { SpecialistSubject }");
            Console.WriteLine("Press any key to continue...");
            Console.ReadKey();
        }

    }
}
