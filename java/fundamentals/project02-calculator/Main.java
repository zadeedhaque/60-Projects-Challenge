import java.util.Scanner;

public class Main {

    public static void displayBanner() {
        System.out.println("=========================================");
        System.out.println("     Z A D E E D   H A Q U E");
        System.out.println("=========================================");
        System.out.println("        Java Calculator Project");
        System.out.println("=========================================");
    }

    public static void displayMenu() {
        System.out.println("\nChoose an operation:");
        System.out.println("1. Addition (+)");
        System.out.println("2. Subtraction (-)");
        System.out.println("3. Multiplication (*)");
        System.out.println("4. Division (/)");
        System.out.println("5. Exit");
        System.out.print("\nEnter your choice: ");
    }

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int choice;
        double num1, num2, result;
        char again='Y';

        displayBanner();

        do {
            displayMenu();
            choice = input.nextInt();

            if(choice == 5) {
                System.out.println("\nThank you for using Zadeed's Calculator!");
                break;
            }

            if(choice < 1 || choice > 5) {
                System.out.println("\nInvalid choice!");
                continue;
            }

            System.out.print("\nEnter first number: ");
            num1 = input.nextDouble();

            System.out.print("Enter second number: ");
            num2 = input.nextDouble();

            switch(choice) {

                case 1:
                    result = num1 + num2;
                    System.out.printf("\nResult = %.2f%n", result);
                    break;

                case 2:
                    result = num1 - num2;
                    System.out.printf("\nResult = %.2f%n", result);
                    break;

                case 3:
                    result = num1 * num2;
                    System.out.printf("\nResult = %.2f%n", result);
                    break;

                case 4:
                    if(num2 == 0) {
                        System.out.println("\nError: Cannot divide by zero!");
                    } else {
                        result = num1 / num2;
                        System.out.printf("\nResult = %.2f%n", result);
                    }
                    break;
            }

            System.out.print("\nPerform another calculation? (Y/N): ");
            again = input.next().charAt(0);

        } while(again == 'Y' || again == 'y');

        System.out.println("\nGoodbye!");
        input.close();
    }
}