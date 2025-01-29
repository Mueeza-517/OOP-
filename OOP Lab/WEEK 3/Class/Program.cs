using System;
using System.Collections.Generic;
using System.Transactions;


namespace Class
{
   public class Program
  {
    static void Main(string[] args)
    {
    Transcation transcation = new Transcation();
    transcation.transcation_id="1";
    transcation.product_name = "Copy";
    transcation.amount= "20";
    transcation.date="20-04-2025";

    Transcation transcation2 =  transcation;
    transcation2=transcation ;
    Console.WriteLine(transcation.transcation_id);
    Console.WriteLine(transcation.product_name);
    Console.WriteLine( transcation.product_name);
    Console.WriteLine(transcation.amount);
    Console.WriteLine(transcation.date);

    Console.ReadKey();

    Console.WriteLine(transcation2);
  
       
    }
  }
}