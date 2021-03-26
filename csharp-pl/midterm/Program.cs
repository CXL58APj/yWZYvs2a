using System;

namespace midterm
{
    class Program
    {
        static void Main(string[] args)
        {
            string numeric = null;
            string delimiter = null;
            int length = 0;
            double sum = 0, average = 0;
            Console.Write("Enter delimited numeric string: ");
            numeric = Console.ReadLine();
            Console.Write("Enter delimiter: ");
            delimiter = Console.ReadLine();
            string[] arrayList = numeric.Split(delimiter);
            System.Console.WriteLine("--------------------");
            foreach (var _numeric in arrayList){
                System.Console.WriteLine(_numeric);
                length++;
                }
            System.Console.WriteLine("--------------------");
              for(int i=0; i<length ; i++)
              {
                  sum += Convert.ToDouble (arrayList[i]);
                  }
                  average = sum / length ;
                  System.Console.WriteLine(average ) ;
        }
    }
}
