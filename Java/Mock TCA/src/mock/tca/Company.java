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
public class Company {
    
    //attributes
    private final Enclosure[] Enclosures = new Enclosure[10];
        
    //add Dog
    private boolean addDog(Dog DogIn, Enclosure OccupantIn, Enclosure DaysBookedIn)
    {
        for (Enclosure Enclosure : Enclosures) {
            if (Enclosure.getOccupant() == null) {
                Enclosure.setOccupant(DogIn);
                Enclosure.setDaysBooked(DaysBookedIn);
                return true;
            }
        }
        return false;
    }
    
    //Remove Dog
    public boolean removerDog(int EnNo)
    {
        for (Enclosure Enclosure : Enclosures) {
            if (Enclosure != null) {
                int En_No = Enclosure.getEnNo();
                if (En_No == EnNo) {
                    Enclosure.setOccupant(null);
                    return true;
                }
            }
        }
        return false;
    }
    
    //View Dog
    public Dog viewDog(int EnNo)
    {
        for (Enclosure Enclosure : Enclosures) {
            if (Enclosure != null) {
                int En_No = Enclosure.getEnNo();
                if (En_No == EnNo) {
                    return Enclosure.getOccupant();
                }
            }
        }
        return null;
        
    }
    
}
