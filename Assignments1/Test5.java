class HR {

    int id;
    String name;
    double salary;
double cmi;

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
void setCommission(double cmi) {
        System.out.println("in setCommission()");
        this.cmi =cmi;
    }
}

class Test5 {

    public static void main(String[] args) {

       HR  h1;
        h1 = new HR ();

       h1.setID(101);
        System.out.println(h1.id);

        h1.setName("Harsha");
        System.out.println(h1.name);

        h1.setSalary(1200.5);
        System.out.println(h1.salary);

       h1.setCommission(100.5);
        System.out.println(h1.cmi);
    }
}