/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package choinka;

/**
 *
 * @author lfarul
 */
public class Choinka {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       
        for (int i = 0; i < 4; i++) {
   for (int j = 0; j < 4 - i; j++)
    System.out.print(" ");
   for (int k = 0; k < (2 * i + 1); k++)
    System.out.print("*");
   System.out.println();
  }
 }
}
