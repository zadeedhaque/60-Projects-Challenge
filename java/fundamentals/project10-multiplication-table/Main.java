import java.util.Scanner;

public class Main {

    public static void banner()
    {
        System.out.println("=========================================");
        System.out.println("      Z A D E E D   H A Q U E");
        System.out.println("=========================================");
        System.out.println("   MULTIPLICATION TABLE GENERATOR");
        System.out.println("=========================================");
    }

    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);

        while(true)
        {
            banner();

            System.out.println("\n1. Generate Multiplication Table");
            System.out.println("2. Exit");

            System.out.print("\nEnter your choice: ");

            if(!input.hasNextInt())
            {
                System.out.println("\nInvalid input! Please enter a number.\n");
                input.next();
                continue;
            }

            int choice = input.nextInt();

            if(choice == 2)
            {
                System.out.println("\nThank you for using the program!");
                break;
            }

            if(choice != 1)
            {
                System.out.println("\nInvalid choice!\n");
                continue;
            }

            System.out.print("\nEnter a number: ");

            if(!input.hasNextInt())
            {
                System.out.println("\nInvalid input!\n");
                input.next();
                continue;
            }

            int number = input.nextInt();

            System.out.println("\n=========================================");
            System.out.println("Multiplication Table of " + number);
            System.out.println("=========================================");

            for(int i = 1; i <= 10; i++)
            {
                System.out.println(
                        number + " x " +
                        i + " = " +
                        (number * i));
            }

            System.out.println("\nPress Enter to continue...");
            input.nextLine();
            input.nextLine();
        }

        input.close();
    }
}