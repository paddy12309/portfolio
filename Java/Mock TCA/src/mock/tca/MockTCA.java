/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mock.tca;

import java.util.Scanner;

/**
 *
 * @author patrick-r-d-west
 */
public class MockTCA {
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        System.out.println("Please select and option:");
        System.out.println("A -Add a dog");
        System.out.println("B -Remove a dog");
        System.out.println("C -View a dogs info");
        System.out.println("X -Quit");
        
        int state = 1;
        Company comp = new Company();
        
        //scanner
        Scanner scanIn = new Scanner(System.in); 
        String input = scanIn.nextLine();
            
            
        }

    }
    

