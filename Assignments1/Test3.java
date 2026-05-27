class PlacedStudent {

    int frn;
    String studentName;
    double distanceCovered;
    String companyName;
    String designation;

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

    void setcompanyName(String copname) {
        System.out.println("in setcompanyName()");
        this.companyName = copname;
    }


    void setdesignation(String desig) {
        System.out.println("in setdesignation()");
        this.designation = desig;
    }

}

class Test3 {

    public static void main(String[] args) {

        PlacedStudent p1;
        p1 = new PlacedStudent();

       p1.setFrn(101);
        System.out.println(p1.frn);

        p1.setStudentName("Harsha");
        System.out.println(p1.studentName);

        p1.setDistanceCovered(12.5);
        System.out.println(p1.distanceCovered);

         p1.setcompanyName("TCS Company Pune");
       System.out.println(p1.companyName);

         p1.setdesignation("Software Seveloper");
        System.out.println(p1.designation);
    }
}