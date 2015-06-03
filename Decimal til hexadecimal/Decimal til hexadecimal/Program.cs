using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Decimal_til_hexadecimal
{
    class Program
    {
        static void Main(string[] args)
        {
            do
            {



                break;
            }
            while (true);

            while (true)
            {
                //getting the input
                Console.WriteLine("Hello! Enter a decimal to be explicitly converted to hexadecimal.");
                int inputVar;
                inputVar = Convert.ToInt32(Console.ReadLine());

                //creating variables, assigning the inputvalue as the quotient
                int quotient, remainder, linenr = 0;
                List<int> resultHexa = new List<int>();
                quotient = inputVar;
                do
                {
                    Console.Write(linenr + ": " + quotient + " =");
                    remainder = quotient % 16;
                    quotient = quotient / 16;
                    Console.Write(" " + quotient + " * 16 + " + remainder + "\n");
                    resultHexa.Add(remainder);
                    ++linenr;
                }
                while (quotient != 0);
                Console.Write(inputVar + " converted to hexadecimal: ");
                Console.Write("0x");
                foreach (int item in resultHexa)
                {
                    Console.Write("{0:x}", item);
                }
                Console.WriteLine("\nConvert another? y/n");
                if(Console.ReadKey().Equals(ConsoleKey.N))
                {
                    Environment.Exit(1);
                }
                Console.WriteLine();
            }
            
            
        }
    }
}
