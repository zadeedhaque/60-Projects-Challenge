import java.util.Random;
import java.util.Scanner;

public class Main {

    public static void displayBanner() {
        System.out.println("=========================================");
        System.out.println("        Z A D E E D   H A Q U E");
        System.out.println("=========================================");
        System.out.println("        NUMBER GUESSING GAME");
        System.out.println("=========================================");
        System.out.println();
    }

    public static void main(String[] args) {

        Random random = new Random();
        Scanner input = new Scanner(System.in);

        int secretNumber = random.nextInt(100) + 1;
        int guess = 0;
        int attempts = 0;

        displayBanner();

        System.out.println("I have selected a number between 1 and 100.");
        System.out.println("Try to guess it!\n");

        while (guess != secretNumber) {

            System.out.print("Enter your guess: ");
            guess = input.nextInt();

            attempts++;

            if (guess < secretNumber) {
                System.out.println("Too low! Try again.\n");
            }
            else if (guess > secretNumber) {
                System.out.println("Too high! Try again.\n");
            }
            else {
                System.out.println("\n=========================================");
                System.out.println("Congratulations!");
                System.out.println("You guessed the number correctly.");
                System.out.println("Secret Number: " + secretNumber);
                System.out.println("Attempts: " + attempts);
                System.out.println("=========================================");
            }
        }

        input.close();
    }
}