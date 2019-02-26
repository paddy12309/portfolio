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
public class Dog {
    //attributes
    private String Name;
    private String OwnerName;
    private String Gender;
    private String Breed;
    private int Age;
    private String Notes;
    
    //constructor
    public Dog(String NameIn, String OwnerNameIn, String GenderIn, String BreedIn, int AgeIn, String NotesIn)
    {
        Name = NameIn;
        OwnerName = OwnerNameIn;
        Gender = GenderIn;
        Breed = BreedIn;
        Age = AgeIn;
        Notes = NotesIn;
    }
    
    //getters
    public String getName()
    {
        return Name;
    }
    public String getOwnerName()
    {
        return OwnerName;
    }
    public String getGender()
    {
        return Gender;
    }
    public String getBreed()
    {
        return Breed;
    }
    public int getAge()
    {
        return Age;
    }
    public String getNotes()
    {
        return Notes;
    }
    
}
