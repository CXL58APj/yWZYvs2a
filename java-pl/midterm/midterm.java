import java.util.Scanner;
class midterm{
    public static void main (String[] args){
        Scanner _input = new Scanner(System.in);
        float sum =0, average=0;
        System.out.print("Enter delimited numeric string: ");
        String _numeric = _input.next();
        System.out.print("Enter delimiter: ");
        String _delimiter = _input.next();
        String[] arrayList = _numeric.split(_delimiter);
        for (int i = 0; i < arrayList.length; i++) {
            sum += Float.parseFloat(arrayList[i]);
          }
          average= sum / arrayList.length;
          System.out.print("The average is: " + average);
}
    }   