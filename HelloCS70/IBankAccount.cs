using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelloCS70
{
    public abstract class BankAccount
    {

        public decimal Balance { get; private set; }
        public abstract void Deposit(decimal amount);
        public abstract void Withdraw(decimal amount);

     }
}
