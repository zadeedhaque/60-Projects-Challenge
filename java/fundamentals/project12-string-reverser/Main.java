import java.util.Scanner;

public class Main {

    public static void banner()
    {
        System.out.println("=========================================");
        System.out.println("      Z A D E E D   H A Q U E");
        System.out.println("=========================================");
        System.out.println("          STRING REVERSER");
        System.out.println("=========================================");
    }

    public static String reverseString(String text)
    {
        StringBuilder reversed = new StringBuilder();

        for(int i = text.length() - 1; i >= 0; i--)
        {
            reversed.append(text.charAt(i));
        }

        return reversed.toString();
    }

    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);

        while(true)
        {
            banner();

            System.out.println("\n1. Reverse a String");
            System.out.println("2. Exit");

            System.out.print("\nEnter your choice: ");

            if(!input.hasNextInt())
            {
                System.out.println("\nInvalid input! Please enter a number.\n");
                input.next();
                continue;
            }

            int choice = input.nextInt();
            input.nextLine();

            if(choice == 2)
            {
                System.out.println("\nThank you for using String Reverser!");
                break;
            }

            if(choice != 1)
            {
                System.out.println("\nInvalid choice!\n");
                continue;
            }

            System.out.print("\nEnter text: ");
            String text = input.nextLine();

            System.out.println("\nOriginal String:");
            System.out.println(text);

            System.out.println("\nReversed String:");
            System.out.println(reverseString(text));

            System.out.print("\nPress Enter to continue...");
            input.nextLine();
        }

        input.close();
    }
}