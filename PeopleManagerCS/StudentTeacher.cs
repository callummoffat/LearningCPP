using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PeopleManagerCS
{
    public class StudentTeacher
        : Person             
    {
        #region Constructors
        public StudentTeacher()
            : this("Newkidd Onda Blokk", 23, 'E', "Science")
        {

        }

        public StudentTeacher(string name, int age, char averageGrade, string specialistSubject)
            : base(name, age)
        {
            InternalStudent = new Student(name, age, averageGrade, 0);
            InternalTeacher = new Teacher(name, age, specialistSubject);
        }

        #endregion
        #region Properties

        public override string Name
        {
            get
            {
                return InternalStudent.Name;
            }
            set
            {
                InternalStudent.Name = InternalTeacher.Name = value;
            }
        }

        public override int Age
        {
            get
            {
                return InternalStudent.Age;
            }
            set
            {
                InternalStudent.Age = InternalTeacher.Age = value;
            }
        }

        public char AverageGrade
        {
            get
            {
                return InternalStudent.AverageGrade;
            }
            set
            {
                InternalStudent.AverageGrade = value;
            }
        }

        public string SpecialistSubject
        {
            get
            {
                return InternalTeacher.SpecialistSubject;
            }
            set
            {
                InternalTeacher.SpecialistSubject = value;
            }
        }
        #endregion
        #region Identifiers
        public string TeacherID
        {
            get
            {
                return InternalTeacher.TeacherID;
            }
        }

        public string StudentID
        {
            get
            {
                return InternalStudent.StudentID;
            }
        }
        #endregion
        #region Internal components
        protected Teacher InternalTeacher { get; set; } = new Teacher();
        protected Student InternalStudent { get; set; } = new Student();
        #endregion
        #region Methods
        public override void Display()
        {
            Console.WriteLine("Displaying information for a student teacher...");
            Console.WriteLine($"Name: { Name }\nTeacher ID: { TeacherID }\nStudent ID: { StudentID }\nAge: { Age }\nAverage grade: { AverageGrade }\nSpecialist subject: { SpecialistSubject }");
            Console.WriteLine("Press any key to continue...");
            Console.ReadKey();
        }
        #endregion
    }
}
