import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Action_demo_3 {
    public static void main(String[] args) {
    JFrame zzz = new JFrame("Action Demo Part 3 😊😊😊😊😊");
    zzz.setBounds(100,100,700,500);
    zzz.setVisible(true);
    zzz.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    Container screen = zzz.getContentPane();
    screen.setLayout(null);

    JButton butt = new JButton("Click Me !");
    butt.setVisible(true);
    butt.setBounds(100,100,100,50);
    screen.add(butt);

    butt.addActionListener(new ActionListener() {
        @Override
        public void actionPerformed(ActionEvent e) {
            screen.setBackground(Color.DARK_GRAY);
            zzz.setTitle("Button Clicked!");
        }
    });
    }
}
