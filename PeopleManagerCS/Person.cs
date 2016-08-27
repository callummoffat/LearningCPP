using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PeopleManagerCS
{
    public abstract class Person
    {
        public Person()
            : this("Nothing S. Peshal", 32)
        {

        }

        public Person(string name, int age)
        {
            Name = name;
            Age = age;
        }

        public virtual string Name { get; set; }
        public virtual int Age { get; set; }

        public abstract void Display();
        
       
    }
}
