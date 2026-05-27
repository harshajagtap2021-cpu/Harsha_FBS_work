class Student {

    int frn;
    String studentName;
    double distanceCovered;

    void setFrn(int f) {
        System.out.println("in setFrn()");
        this.frn = f;
    }

    void setStudentName(String name) {
        System.out.println("in setStudentName()");
        this.studentName = name;
    }

    void setDistanceCovered(double d) {
        System.out.println("in setDistanceCovered()");
        this.distanceCovered = d;
    }
}

class Test2 {

    public static void main(String[] args) {

        Student s1;
        s1 = new Student();

        s1.setFrn(101);
        System.out.println(s1.frn);

        s1.setStudentName("Harsha");
        System.out.println(s1.studentName);

        s1.setDistanceCovered(12.5);
        System.out.println(s1.distanceCovered);
    }
}