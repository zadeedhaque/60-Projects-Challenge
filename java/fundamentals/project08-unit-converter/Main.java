import java.util.Scanner;

public class Main {


public static void banner() {
    System.out.println("=========================================");
    System.out.println("      Z A D E E D   H A Q U E");
    System.out.println("=========================================");
    System.out.println("          UNIT CONVERTER");
    System.out.println("=========================================");
}

public static void main(String[] args) {

    Scanner input = new Scanner(System.in);

    while(true)
    {
        banner();

        System.out.println("\n1. Kilometers to Miles");
        System.out.println("2. Miles to Kilometers");
        System.out.println("3. Kilograms to Pounds");
        System.out.println("4. Pounds to Kilograms");
        System.out.println("5. Exit");

        System.out.print("\nEnter your choice: ");

        if(!input.hasNextInt())
        {
            System.out.println("\nInvalid input!\n");
            input.next();
            continue;
        }

        int choice = input.nextInt();

        if(choice == 5)
        {
            System.out.println("\nThank you for using Unit Converter!");
            break;
        }

        if(choice < 1 || choice > 5)
        {
            System.out.println("\nInvalid choice!\n");
            continue;
        }

        System.out.print("\nEnter value: ");
        double value = input.nextDouble();
        double result;

        switch(choice)
        {
            case 1:
                result = value * 0.621371;

                System.out.println("\nFormula:");
                System.out.println("Miles = KM × 0.621371");

                System.out.printf(
                    "\nResult:%n%.2f KM = %.2f Miles%n%n",
                    value, result);
                break;

            case 2:
                result = value * 1.60934;

                System.out.println("\nFormula:");
                System.out.println("KM = Miles × 1.60934");

                System.out.printf(
                    "\nResult:%n%.2f Miles = %.2f KM%n%n",
                    value, result);
                break;

            case 3:
                result = value * 2.20462;

                System.out.println("\nFormula:");
                System.out.println("Pounds = KG × 2.20462");

                System.out.printf(
                    "\nResult:%n%.2f KG = %.2f Pounds%n%n",
                    value, result);
                break;

            case 4:
                result = value * 0.453592;

                System.out.println("\nFormula:");
                System.out.println("KG = Pounds × 0.453592");

                System.out.printf(
                    "\nResult:%n%.2f Pounds = %.2f KG%n%n",
                    value, result);
                break;
        }

        System.out.println("Press Enter to continue...");
        input.nextLine();
        input.nextLine();
    }

    input.close();
}


}
