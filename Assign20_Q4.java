class Logic
{
    void findlargestDigit(int num)
    {
        int iDigit = 0;
        int iMax = 0;

        while( num != 0)
        {
            iDigit = num % 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
           num =  num / 10;
        }
        System.out.println("Largest digit is : "+iMax); 
    }

}

class Assign20_Q4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findlargestDigit(84329);
    }
}