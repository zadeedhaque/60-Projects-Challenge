import java.util.Scanner;

public class Main {

    public static void displayBanner() {
        System.out.println("=========================================");
        System.out.println("      Z A D E E D   H A Q U E");
        System.out.println("=========================================");
        System.out.println("      TEMPERATURE CONVERTER");
        System.out.println("=========================================");
    }

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int choice;
        double temp, result;

        displayBanner();

        System.out.println("\n1. Celsius to Fahrenheit");
        System.out.println("2. Fahrenheit to Celsius");
        System.out.println("3. Celsius to Kelvin");
        System.out.println("4. Kelvin to Celsius");
        System.out.println("5. Exit");

        System.out.print("\nEnter your choice: ");
        choice = input.nextInt();

        if(choice == 5)
        {
            System.out.println("\nGoodbye!");
            input.close();
            return;
        }

        System.out.print("\nEnter temperature: ");
        temp = input.nextDouble();

        switch(choice)
        {
            case 1:
                result = (temp * 9.0 / 5.0) + 32;

                System.out.println("\nFormula:");
                System.out.println("F = (C × 9/5) + 32");

                System.out.printf("\nResult:%n%.2f °C = %.2f °F%n",
                        temp, result);
                break;

            case 2:
                result = (temp - 32) * 5.0 / 9.0;

                System.out.println("\nFormula:");
                System.out.println("C = (F - 32) × 5/9");

                System.out.printf("\nResult:%n%.2f °F = %.2f °C%n",
                        temp, result);
                break;

            case 3:
                result = temp + 273.15;

                System.out.println("\nFormula:");
                System.out.println("K = C + 273.15");

                System.out.printf("\nResult:%n%.2f °C = %.2f K%n",
                        temp, result);
                break;

            case 4:
                result = temp - 273.15;

                System.out.println("\nFormula:");
                System.out.println("C = K - 273.15");

                System.out.printf("\nResult:%n%.2f K = %.2f °C%n",
                        temp, result);
                break;

            default:
                System.out.println("\nInvalid choice!");
        }

        input.close();
    }
}