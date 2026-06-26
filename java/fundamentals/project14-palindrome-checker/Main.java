import java.util.Scanner;

public class Main {

    public static void banner()
    {
        System.out.println("=========================================");
        System.out.println("      Z A D E E D   H A Q U E");
        System.out.println("=========================================");
        System.out.println("        PALINDROME CHECKER");
        System.out.println("=========================================");
    }

    public static String cleanString(String text)
    {
        StringBuilder cleaned = new StringBuilder();

        for(int i = 0; i < text.length(); i++)
        {
            char ch = text.charAt(i);

            if(Character.isLetterOrDigit(ch))
            {
                cleaned.append(Character.toLowerCase(ch));
            }
        }

        return cleaned.toString();
    }

    public static boolean isPalindrome(String text)
    {
        String cleaned = cleanString(text);

        int left = 0;
        int right = cleaned.length() - 1;

        while(left < right)
        {
            if(cleaned.charAt(left) != cleaned.charAt(right))
            {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }

    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);

        while(true)
        {
            banner();

            System.out.println("\n1. Check Palindrome");
            System.out.println("2. Exit");

            System.out.print("\nEnter your choice: ");

            if(!input.hasNextInt())
            {
                System.out.println("\nInvalid input!\n");
                input.next();
                continue;
            }

            int choice = input.nextInt();
            input.nextLine();

            if(choice == 2)
            {
                System.out.println("\nThank you for using Palindrome Checker!");
                break;
            }

            if(choice != 1)
            {
                System.out.println("\nInvalid choice!\n");
                continue;
            }

            System.out.print("\nEnter text: ");
            String text = input.nextLine();

            System.out.println("\nInput:");
            System.out.println(text);

            if(isPalindrome(text))
            {
                System.out.println("\nResult:");
                System.out.println("\"" + text + "\" is a PALINDROME.");
            }
            else
            {
                System.out.println("\nResult:");
                System.out.println("\"" + text + "\" is NOT a PALINDROME.");
            }

            System.out.print("\nPress Enter to continue...");
            input.nextLine();
        }

        input.close();
    }
}