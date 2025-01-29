using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Sign_In
{
    class Program
    {
        static void Main(String[] args)
        {
            string path = "E:\\OOP Lab\\Sign_In\\Sign_In\\user.txt";
            string[] Password = new string[5];
            string[] Name = new string[5];
            int option;
            do
            {
                readData(path, Name, Password);
                Console.Clear();
                option = Menu();
                Console.Clear();
                if (option == 1)
                {
                    Console.WriteLine("Enter name");
                    string n = Console.ReadLine();
                    Console.WriteLine("Enter Password");
                    String p = Console.ReadLine();
                    SignIn(n, p, Name, Password);
                }
                if (option == 2)
                {
                    Console.WriteLine("Enter New Name");
                    string n = Console.ReadLine();
                    Console.WriteLine("Enter New Password");
                    String p = Console.ReadLine();
                    SignUp(n, p, path);
                }
            }
            while (option < 3);
            Console.Read();
        }
        static int Menu()
        {
            int option;
            Console.WriteLine("1.SignIn");
            Console.WriteLine("2.SignUp");
            Console.WriteLine("Enter Option");
            option = int.Parse(Console.ReadLine());
            return option;
        }

        static string parseData(string record, int field)
        {
            int comma = 1;
            string item = "";
            for (int x = 0; x < record.Length; x++)
            {
                if (record[x] == ',')
                {
                    comma++;
                }
                else if (comma == field)
                {
                    item = item + record[x];
                }
            }
            return item;
        }

        static void readData(string path, string[] Name, string[] Password)
        {
            int x = 0;
            if (File.Exists(path))
            {
                StreamReader fileVariable = new StreamReader(path);
                string record;
                while ((record = fileVariable.ReadLine()) != null)
                {
                    Name[x] = parseData(record, 1);
                    Password[x] = parseData(record, 2);
                    x++;
                    if (x >= 5)
                    {
                        break;
                    }
                }
                fileVariable.Close();
            }
            else
            {
                Console.WriteLine("Not Exists");
            }
        }

        static void SignIn(string n, string p, string[] Name, string[] Password)
        {
            bool flag = false;
            for (int x = 0; x < 5; x++)
            {
                if (n == Name[x] && p == Password[x])
                {
                    Console.WriteLine("Valid User");
                    flag = true;
                }
            }
            if (flag == false)
            {
                Console.WriteLine("InValid User");
            }
            Console.ReadKey();
        }

        static void SignUp(string path, string n, string p)
        {
            StreamWriter file = new StreamWriter(path, true);
            file.WriteLine(n + ","+ p);
            file.Flush();
            file.Close();
        }
    }
}

