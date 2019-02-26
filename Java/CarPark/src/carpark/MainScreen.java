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

import java.awt.GridBagConstraints;
import java.awt.GridBagLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

public class MainScreen extends JFrame implements ActionListener{
    
    private Parking parking;
    private GridBagConstraints constraints;
    
    private JLabel lblRegNo;
    private JLabel lblColour;
    private JLabel lblMake;
    private JLabel lblModel;
    
    private JTextField txt_RegNo;
    private JTextField txt_Colour;
    private JTextField txt_Make;
    private JTextField txt_Model;
    
    private JButton btnAdd;
    private JButton btnRemove;
    
    
    public MainScreen()
    {   
        parking = new Parking();
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(new GridBagLayout());
        constraints = new GridBagConstraints();
        
        initComponents();
        layoutComponents();
        
    }
    
    public void initComponents()
    {
        lblRegNo = new JLabel("Reg No.");
        lblColour = new JLabel("colour");
        lblMake = new JLabel("Make");
        lblModel = new JLabel("Model");
        
        txt_RegNo = new JTextField();
        txt_Colour = new JTextField();
        txt_Make = new JTextField();
        txt_Model = new JTextField();
        
        btnAdd = new JButton("Add");
        btnAdd.addActionListener(this);
        btnRemove = new JButton("Remove");
        btnRemove.addActionListener(this);
        
        
        
    }
    
   public void layoutComponents()
    {
        constraints.gridy = 0;
        constraints.gridx = 0;
        constraints.gridwidth = 1;
        this.add(lblRegNo, constraints);
        
        constraints.gridy = 0;
        constraints.gridx = 1;
        constraints.fill = GridBagConstraints.HORIZONTAL;
        this.add(txt_RegNo, constraints);
        
        constraints.gridy = 1;
        constraints.gridx = 0;
        this.add(lblColour, constraints);
        
        constraints.gridy = 1;
        constraints.gridx = 1;
        constraints.fill = GridBagConstraints.HORIZONTAL;
        this.add(txt_Colour, constraints);
        
        constraints.gridy = 2;
        constraints.gridx = 0;
        this.add(lblMake, constraints);
        
        constraints.gridy = 2;
        constraints.gridx = 1;
        constraints.fill = GridBagConstraints.HORIZONTAL;
        this.add(txt_Make, constraints);
        
        constraints.gridy = 3;
        constraints.gridx = 0;
        this.add(lblModel, constraints);
        
        constraints.gridy = 3;
        constraints.gridx = 1;
        constraints.fill = GridBagConstraints.HORIZONTAL;
        this.add(txt_Model, constraints);
        
        constraints.gridy = 4;
        constraints.gridx = 0;
        this.add(btnAdd, constraints);
        
        constraints.gridy = 4;
        constraints.gridx = 1;
        this.add(btnRemove, constraints);
    }

    @Override
    public void actionPerformed(ActionEvent ev)
    {
        if (ev.getSource().equals(btnAdd))
        {
            String RegNo = txt_RegNo.getText();
            String Colour = txt_Colour.getText();
            String Make = txt_Make.getText();
            String Model = txt_Model.getText();
            
            if(parking.addCar(new Car(RegNo, Colour, Make, Model)))
            {
                JOptionPane.showMessageDialog(null, "car has been added");
            }
            else
            {
                    JOptionPane.showMessageDialog(null, "car has not been added");
            }
        }
        else if(ev.getSource().equals(btnRemove))
        {
            String RegNo = txt_RegNo.getText();
            
            
            if(parking.removeCar(RegNo))
            {
                JOptionPane.showMessageDialog(null, "car has been removed");
            }
            else
            {
                JOptionPane.showMessageDialog(null, "car was not there");
            }
        }
        
    }
}

