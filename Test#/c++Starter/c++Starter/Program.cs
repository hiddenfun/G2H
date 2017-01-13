using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using liblib;

namespace csharp
{
    class Program
    {
        static void Main(string[] args)
        {
           WrapLib test = new WrapLib();
            Console.WriteLine(test.summarizer(1, 3));
            test.phoenix();
        }
    }
}
