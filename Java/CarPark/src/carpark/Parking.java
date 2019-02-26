/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package carpark;

/**
 *
 * @author patrickrdwest
 */
public class Parking {
    private Car[] spaces = new Car[15];
    
        
    
 
    //method add car 
    public boolean addCar(Car CarIn)
    {
        for(int i = 0; i < spaces.length; i++)
        {
            if(spaces[i] == null)
            {
                spaces[i] = CarIn;
                return true;
            }
     }
        return false;
    }
    
    //remove car
    public boolean removeCar(String RegNo)
    {
        for(int i = 0; i < spaces.length; i++)
        {
            if(spaces[i] != null)
            {
                String Reg_no = spaces[i].getRegNo();
                if(Reg_no.equals(RegNo))
                {
                    spaces[i] = null;
                    return true;
                }
                
            }
     }
        return false;
    }
    
}
