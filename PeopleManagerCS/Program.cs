using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PeopleManagerCS
{
    class Program
    {
        static void Main(string[] args)
        {
            List<Person> people = new List<Person>()
            {
                new Student(),
                new Teacher(),
                new StudentTeacher(),
            };

            foreach (var person in people)
            {
                Console.WriteLine("______________");
                person.Display();
                Console.WriteLine();
            }
        }
    }
}
