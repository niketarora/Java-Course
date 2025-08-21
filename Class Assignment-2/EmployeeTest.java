import java.util.Scanner;

class employee{
    String name;
    int yoj;
    float salary;
    String address;
    employee(){
        name=""; yoj=2025; salary=0.0f; address="";
    }
    employee(String name, int year, float salary, String address){
        this.name=name; yoj=year; this.salary=salary; this.address=address;
    }
    void display(employee e[]){
        System.out.println("Name    YearOFJoining    Salary    Address");
        for(int i=0; i<9; i++){
            System.out.println(e[i].name +"    "+ e[i].yoj +"    "+ e[i].salary +"    "+ e[i].address);
        }
    }
}

public class  EmployeeTest{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("no.of employee:-");
        int noOfEmp = s.nextInt();
        employee[] E = new employee[noOfEmp];
        E[0] = new employee("Rohan", 2004, 20, "64C Vasant Kunj 110070");
        E[1] = new employee("Sam", 2005, 400000, "68D Dwarka 110037");
        E[2] = new employee("Ana", 2000, 0, " 26B R.K Puram 110022");
        employee emp = new employee();
        emp.display(E);
    }
}