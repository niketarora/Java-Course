import java.util.Scanner;

public class ArrayOperations {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int[] numbers = new int[5];
        
        // INPUT OF ARRAY
        System.out.println("Enter 5 integers:");
        for (int i = 0; i < 5; i++) {
            numbers[i] = s.nextInt();
        }
        
        System.out.println("\n--- Array Results ---");
        displayElements(numbers);
        displaySum(numbers);
        displayLargest(numbers);
        displaySmallest(numbers);
        displaySecondLargest(numbers);
        displaySumOfAlternates(numbers);
        displayEvenCount(numbers);
        displayNumberOccurrence(numbers, s);
    }

    // i) Display array elements
    private static void displayElements(int[] arr) {
        System.out.print("Array elements: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    // ii) Calculate sum of all elements
    private static void displaySum(int[] arr) {
        int sum = 0;
        for (int num : arr) {
            sum += num;
        }
        System.out.println("Sum of elements: " + sum);
    }

    // iii) Find largest number
    private static void displayLargest(int[] arr) {
        int largest = arr[0];
        for (int num : arr) {
            if (num > largest) {
                largest = num;
            }
        }
        System.out.println("Largest number: " + largest);
    }

    // iv) Find smallest number
    private static void displaySmallest(int[] arr) {
        int smallest = arr[0];
        for (int num : arr) {
            if (num < smallest) {
                smallest = num;
            }
        }
        System.out.println("Smallest number: " + smallest);
    }

    // v) Find second largest number
    private static void displaySecondLargest(int[] arr) {
        int largest = arr[0];
        int secondLargest = arr[0];
        
        for (int num : arr) {
            if (num > largest) {
                secondLargest = largest;
                largest = num;
            } else if (num > secondLargest && num < largest) {
                secondLargest = num;
            }
        }
        System.out.println("Second largest number: " + secondLargest);
    }

    // vi) Sum of alternate elements
    private static void displaySumOfAlternates(int[] arr) {
        int sum = 0;
        for (int i = 0; i < arr.length; i += 2) {
            sum += arr[i];
        }
        System.out.println("Sum of alternate elements: " + sum);
    }

    // vii) Count of even numbers
    private static void displayEvenCount(int[] arr) {
        int count = 0;
        for (int num : arr) {
            if (num % 2 == 0) {
                count++;
            }
        }
        System.out.println("Count of even numbers: " + count);
    }

    // viii) Occurrence of a given number
    private static void displayNumberOccurrence(int[] arr, Scanner scanner) {
        System.out.print("Enter a number to find its occurrence: ");
        int number = scanner.nextInt();
        int count = 0;
        
        for (int num : arr) {
            if (num == number) {
                count++;
            }
        }
        System.out.println("Occurrence of " + number + ": " + count);
    }
}
