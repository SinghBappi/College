import javax.swing.*;
import  java.awt.*;
import java.awt.event.*;


public class Action_Demo_4 {
    public  static Container screen;
    public static void main(String[] args) {
        JFrame frame = new JFrame("Action Demo Part 4");
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setBounds(100,100,700,500);
        screen = frame.getContentPane();
        screen.setLayout(null);

        JButton red = new JButton("Red!");
        JButton yellow = new JButton("Yellow!");
        JButton green = new JButton("Green!");
        red.setBounds(100,100,100,50);
        yellow.setBounds(250,100,100,50);
        green.setBounds(400,100,100,50);



        screen.add(red);
        screen.add(yellow);
        screen.add(green);

        red.addActionListener(new Red());
    }
}
class Red implements ActionListener{
    @Override
//    JFrame frame;
    //

    public void actionPerformed(ActionEvent e) {
        Action_Demo_4.screen.setBackground(Color.RED);
//        frame.setTitle("Color ho gaya Red !");
//        frame.setVisible(this.frame.true);

    }
}
