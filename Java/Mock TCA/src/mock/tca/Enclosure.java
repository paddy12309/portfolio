/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mock.tca;

/**
 *
 * @author patrick-r-d-west
 */
public class Enclosure {
    //attributes
    private int EnNo;
    private int DaysBooked;
    private int Price_day;
    private Dog Occupant;
    
    //constructor
    public Enclosure(int EnNoIn, int Price_dayIn)
    {
        EnNo = EnNoIn;
        Price_day = Price_dayIn;
        EnNo = 0;
        Price_day = 0;
    }
   
    //getters
    public int getEnNo()
    {
        return EnNo;
    }
    public int getDaysBooked()
    {
        return DaysBooked;
    }
    public int Price_day()
    {
        return Price_day;
    }
    public Dog getOccupant()
    {
        return Occupant;
    }
    
    //setters
    public void setDaysBooked(int DaysBookedIn)
    {
        DaysBooked = DaysBookedIn;
    }
    public void setOccupant(Dog OccupantIn)
    {
        Occupant = OccupantIn;
    }

    void setDaysBooked(Enclosure DaysBookedIn) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
}
