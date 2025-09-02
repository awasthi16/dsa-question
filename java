import java.util.*;

public class ArrayQuestions {

    // 1. Read and print array
    public static void readAndPrint() {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[5];
        System.out.println("Enter 5 numbers:");
        for (int i = 0; i < arr.length; i++) arr[i] = sc.nextInt();
        System.out.println("Array elements:");
        for (int x : arr) System.out.print(x + " ");
        System.out.println();
    }

    // 2. Sum of array
    public static void sumArray(int[] arr) {
        int sum = 0;
        for (int x : arr) sum += x;
        System.out.println("Sum = " + sum);
    }

    // 3. Max and Min
    public static void maxMin(int[] arr) {
        int max = arr[0], min = arr[0];
        for (int x : arr) {
            if (x > max) max = x;
            if (x < min) min = x;
        }
        System.out.println("Max = " + max + ", Min = " + min);
    }

    // 4. Count even and odd
    public static void countEvenOdd(int[] arr) {
        int even = 0, odd = 0;
        for (int x : arr) {
            if (x % 2 == 0) even++;
            else odd++;
        }
        System.out.println("Even = " + even + ", Odd = " + odd);
    }

    // 5. Reverse array
    public static void reverseArray(int[] arr) {
        System.out.print("Reversed: ");
        for (int i = arr.length - 1; i >= 0; i--) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    // 6. Linear search
    public static void searchElement(int[] arr, int key) {
        boolean found = false;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == key) {
                System.out.println("Found at index " + i);
                found = true;
                break;
            }
        }
        if (!found) System.out.println("Not Found");
    }

    // 7. Copy array
    public static void copyArray(int[] arr) {
        int[] copy = Arrays.copyOf(arr, arr.length);
        System.out.println("Copied Array: " + Arrays.toString(copy));
    }

    // 8. Second largest
    public static void secondLargest(int[] arr) {
        Arrays.sort(arr);
        System.out.println("Second Largest = " + arr[arr.length - 2]);
    }

    // 9. Frequency of each element
    public static void frequency(int[] arr) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int x : arr) map.put(x, map.getOrDefault(x, 0) + 1);
        System.out.println("Frequencies: " + map);
    }

    // 10. Palindrome array
    public static void isPalindrome(int[] arr) {
        int n = arr.length;
        boolean flag = true;
        for (int i = 0; i < n / 2; i++) {
            if (arr[i] != arr[n - 1 - i]) {
                flag = fa
