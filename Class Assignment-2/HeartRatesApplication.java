import java.util.Scanner;
import java.time.LocalDate;
import java.time.Period;

class DateOfBirth {
    private int day;
    private int month;
    private int year;
    public DateOfBirth(int day, int month, int year) {
        if (month < 1 || month > 12) {
            throw new IllegalArgumentException("Month must be 1-12");
        }
        if (day < 1 || day > 31) {
            throw new IllegalArgumentException("Day must be 1-31");
        }
        if (year > LocalDate.now().getYear()) {
            throw new IllegalArgumentException("Year cannot be in the future");
        }
        this.day = day;
        this.month = month;
        this.year = year;
    }
    public int getDay() { return day; }
    public int getMonth() { return month; }
    public int getYear() { return year; }

    public void setDay(int day) { this.day = day; }
    public void setMonth(int month) { this.month = month; }
    public void setYear(int year) { this.year = year; }

    @Override
    public String toString() {
        return day + "/" + month + "/" + year;
    }
}

class HeartRates {
    private String firstName;
    private String lastName;
    private DateOfBirth dob;

    public HeartRates(String firstName, String lastName, DateOfBirth dob) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.dob = dob;
    }
                  
    public String getFirstName() { return firstName; }
    public void setFirstName(String firstName) { this.firstName = firstName; }

    public String getLastName() { return lastName; }
    public void setLastName(String lastName) { this.lastName = lastName; }

    public DateOfBirth getDob() { return dob; }
    public void setDob(DateOfBirth dob) { this.dob = dob; }

    public int getAge() {
        LocalDate birthDate = LocalDate.of(dob.getYear(), dob.getMonth(), dob.getDay());
        LocalDate currentDate = LocalDate.now();
        return Period.between(birthDate, currentDate).getYears();
    }

    public int getMaxHeartRate() {
        return 220 - getAge();
    }

    public String getTargetHeartRateRange() {
        double lower = getMaxHeartRate() * 0.50;
        double upper = getMaxHeartRate() * 0.85;
        return String.format("%.1f - %.1f bpm", lower, upper);
    }
}

public class HeartRatesApplication {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        HeartRates[] persons = new HeartRates[2];

        for (int i = 0; i < 2; i++) {
            System.out.println("Enter information for Person " + (i + 1) + ":");
            System.out.print("First Name: ");
            String firstName = sc.next();

            System.out.print("Last Name: ");
            String lastName = sc.next();

            System.out.print("Birth Day (1-31): ");
            int day = sc.nextInt();

            System.out.print("Birth Month (1-12): ");
            int month = sc.nextInt();

            System.out.print("Birth Year: ");
            int year = sc.nextInt();

            DateOfBirth dob = new DateOfBirth(day, month, year);
            persons[i] = new HeartRates(firstName, lastName, dob);
        }

        System.out.println("\n---------------------------------------------------------------");
        System.out.printf("%-10s %-10s %-12s %-5s %-15s %-20s\n",
                "FirstName", "LastName", "DOB", "Age", "Max HR", "Target HR Range");
        System.out.println("---------------------------------------------------------------");

        for (HeartRates p : persons) {
            System.out.printf("%-10s %-10s %-12s %-5d %-15d %-20s\n",
                    p.getFirstName(), p.getLastName(), p.getDob(),
                    p.getAge(), p.getMaxHeartRate(), p.getTargetHeartRateRange());
        }
        System.out.println("---------------------------------------------------------------");
        sc.close();
    }
}
 {
    
}
