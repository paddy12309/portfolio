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
public class Car {
    private String RegNo;
    private String Colour;
    private String Make;
    private String Model;
    
    public Car(String RegNoIn, String ColourIn, String MakeIn, String ModelIn){
        RegNo = RegNoIn;
        Colour = ColourIn;
        Make = MakeIn;
        Model = ModelIn;
    }
    
    public String getRegNo()
    {
        return RegNo;
    }
    public String getColour()
    {
        return Colour;
    }
    public String getMake()
    {
        return Make;
    }
    public String getModel()
    {
        return Model;
    }
    
}
