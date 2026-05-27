class Employee {

    int id;
    String name;
    double salary;

    void setID(int id) {
        System.out.println("in setID()");
        this.id = id;
    }

    void setName(String name) {
        System.out.println("in setName()");
        this.name = name;
    }

    void setSalary(double salary) {
        System.out.println("in setSalary()");
        this.salary =salary;
    }

}

class Test4 {

    public static void main(String[] args) {

       Employee  e1;
        e1 = new Employee ();

       e1.setID(101);
        System.out.println(e1.id);

        e1.setName("Harsha");
        System.out.println(e1.name);

        e1.setSalary(1200.5);
        System.out.println(e1.salary);

       
    }
}