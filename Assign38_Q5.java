import java.util.Scanner;

class Assign38_Q5
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo, iStart, iEnd;

        System.out.print("Enter a number: ");
        iNo = sobj.nextInt();

        System.out.print("Enter starting position : ");
        iStart = sobj.nextInt();

        System.out.print("Enter ending position : ");
        iEnd = sobj.nextInt();

        int iResult = Logic.toggleBits(iNo, iStart, iEnd);
        System.out.println("Result after toggling bits : " + iResult);

        sobj.close();
    }
}

class Logic
{
    static int toggleBits(int iNo, int iStart, int iEnd)
    {
        int iMask = 0;

        for (int i = iStart; i <= iEnd; i++)
        {
            iMask = iMask | (1 << (i - 1));
        }

        return iNo ^ iMask;
    }
}
