/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import org.w3c.dom.Text;

import java.awt.*;
import java.util.concurrent.TimeUnit;

/**
 *
 * @author ignorance
 */
public class CalcolatriceScientifica extends javax.swing.JFrame {
    public CalcolatriceScientifica() {
        initComponents();
    }

    // <editor-fold defaultstate="collapsed" desc="Class Variables"> //
    public String operator = "";
    public double number1 = 0;
    public double number2 = 0;
    // </editor-fold> //

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        TextFieldResult = new javax.swing.JTextField();
        ButtonBack = new javax.swing.JButton();
        ButtonReset = new javax.swing.JButton();
        ButtonRoot = new javax.swing.JButton();
        ButtonAdd = new javax.swing.JButton();
        NumberButton9 = new javax.swing.JButton();
        NumberButton8 = new javax.swing.JButton();
        NumberButton7 = new javax.swing.JButton();
        NumberButton6 = new javax.swing.JButton();
        NumberButton5 = new javax.swing.JButton();
        NumberButton4 = new javax.swing.JButton();
        NumberButton3 = new javax.swing.JButton();
        NumberButton2 = new javax.swing.JButton();
        NumberButton1 = new javax.swing.JButton();
        NumberButton0 = new javax.swing.JButton();
        ButtonDot = new javax.swing.JButton();
        ButtonMul = new javax.swing.JButton();
        ButtonMin = new javax.swing.JButton();
        ButtonDiv = new javax.swing.JButton();
        ButtonEqs = new javax.swing.JButton();
        ButtonSin = new javax.swing.JButton();
        ButtonASin = new javax.swing.JButton();
        ButtonCos = new javax.swing.JButton();
        ButtonACos = new javax.swing.JButton();
        ButtonTan = new javax.swing.JButton();
        ButtonATan = new javax.swing.JButton();
        ButtonLog = new javax.swing.JButton();
        ButtonLn = new javax.swing.JButton();
        ButtonX2 = new javax.swing.JButton();
        ButtonX10 = new javax.swing.JButton();
        ONButton = new javax.swing.JRadioButton();
        MainMenu = new javax.swing.JMenuBar();
        MenuFile = new javax.swing.JMenu();
        MenuStandard = new javax.swing.JMenuItem();
        MenuScientifica = new javax.swing.JMenuItem();
        MenuEdit = new javax.swing.JMenu();
        MenuGetSize = new javax.swing.JMenuItem();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setResizable(false);
        addWindowListener(new java.awt.event.WindowAdapter() {
            public void windowActivated(java.awt.event.WindowEvent evt) {
                formWindowActivated(evt);
            }
        });

        TextFieldResult.setAutoscrolls(false);
        TextFieldResult.setFocusable(false);

        ButtonBack.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        ButtonBack.setText("← ");
        ButtonBack.setMaximumSize(new java.awt.Dimension(41, 25));
        ButtonBack.setMinimumSize(new java.awt.Dimension(41, 25));
        ButtonBack.setPreferredSize(new java.awt.Dimension(41, 25));
        ButtonBack.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonBackActionPerformed(evt);
            }
        });

        ButtonReset.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        ButtonReset.setText("C");
        ButtonReset.setMaximumSize(new java.awt.Dimension(41, 25));
        ButtonReset.setMinimumSize(new java.awt.Dimension(41, 25));
        ButtonReset.setPreferredSize(new java.awt.Dimension(41, 25));
        ButtonReset.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonResetActionPerformed(evt);
            }
        });

        ButtonRoot.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        ButtonRoot.setText("√");
        ButtonRoot.setMaximumSize(new java.awt.Dimension(41, 25));
        ButtonRoot.setMinimumSize(new java.awt.Dimension(41, 25));
        ButtonRoot.setPreferredSize(new java.awt.Dimension(41, 25));
        ButtonRoot.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonRootActionPerformed(evt);
            }
        });

        ButtonAdd.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        ButtonAdd.setText("+");
        ButtonAdd.setMaximumSize(new java.awt.Dimension(41, 25));
        ButtonAdd.setMinimumSize(new java.awt.Dimension(41, 25));
        ButtonAdd.setPreferredSize(new java.awt.Dimension(41, 25));
        ButtonAdd.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonAddActionPerformed(evt);
            }
        });

        NumberButton9.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        NumberButton9.setText("9");
        NumberButton9.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                NumberButton9ActionPerformed(evt);
            }
        });

        NumberButton8.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        NumberButton8.setText("8");
        NumberButton8.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                NumberButton8ActionPerformed(evt);
            }
        });

        NumberButton7.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        NumberButton7.setText("7");
        NumberButton7.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                NumberButton7ActionPerformed(evt);
            }
        });

        NumberButton6.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        NumberButton6.setText("6");
        NumberButton6.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                NumberButton6ActionPerformed(evt);
            }
        });

        NumberButton5.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        NumberButton5.setText("5");
        NumberButton5.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                NumberButton5ActionPerformed(evt);
            }
        });

        NumberButton4.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        NumberButton4.setText("4");
        NumberButton4.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                NumberButton4ActionPerformed(evt);
            }
        });

        NumberButton3.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        NumberButton3.setText("3");
        NumberButton3.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                NumberButton3ActionPerformed(evt);
            }
        });

        NumberButton2.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        NumberButton2.setText("2");
        NumberButton2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                NumberButton2ActionPerformed(evt);
            }
        });

        NumberButton1.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        NumberButton1.setText("1");
        NumberButton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                NumberButton1ActionPerformed(evt);
            }
        });

        NumberButton0.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        NumberButton0.setText("0");
        NumberButton0.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                NumberButton0ActionPerformed(evt);
            }
        });

        ButtonDot.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        ButtonDot.setText(".");
        ButtonDot.setMaximumSize(new java.awt.Dimension(41, 25));
        ButtonDot.setMinimumSize(new java.awt.Dimension(41, 25));
        ButtonDot.setPreferredSize(new java.awt.Dimension(41, 25));
        ButtonDot.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonDotActionPerformed(evt);
            }
        });

        ButtonMul.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        ButtonMul.setText("×");
        ButtonMul.setMaximumSize(new java.awt.Dimension(41, 25));
        ButtonMul.setMinimumSize(new java.awt.Dimension(41, 25));
        ButtonMul.setPreferredSize(new java.awt.Dimension(41, 25));
        ButtonMul.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonMulActionPerformed(evt);
            }
        });

        ButtonMin.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        ButtonMin.setText("-");
        ButtonMin.setMaximumSize(new java.awt.Dimension(41, 25));
        ButtonMin.setMinimumSize(new java.awt.Dimension(41, 25));
        ButtonMin.setPreferredSize(new java.awt.Dimension(41, 25));
        ButtonMin.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonMinActionPerformed(evt);
            }
        });

        ButtonDiv.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        ButtonDiv.setText("÷");
        ButtonDiv.setMaximumSize(new java.awt.Dimension(41, 25));
        ButtonDiv.setMinimumSize(new java.awt.Dimension(41, 25));
        ButtonDiv.setPreferredSize(new java.awt.Dimension(41, 25));
        ButtonDiv.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonDivActionPerformed(evt);
            }
        });

        ButtonEqs.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        ButtonEqs.setText("=");
        ButtonEqs.setMaximumSize(new java.awt.Dimension(41, 25));
        ButtonEqs.setMinimumSize(new java.awt.Dimension(41, 25));
        ButtonEqs.setPreferredSize(new java.awt.Dimension(41, 25));
        ButtonEqs.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonEqsActionPerformed(evt);
            }
        });

        ButtonSin.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        ButtonSin.setText("Sin");
        ButtonSin.setMaximumSize(new java.awt.Dimension(41, 25));
        ButtonSin.setMinimumSize(new java.awt.Dimension(41, 25));
        ButtonSin.setPreferredSize(new java.awt.Dimension(41, 25));
        ButtonSin.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonSinActionPerformed(evt);
            }
        });

        ButtonASin.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        ButtonASin.setText("aSin");
        ButtonASin.setMaximumSize(new java.awt.Dimension(41, 25));
        ButtonASin.setMinimumSize(new java.awt.Dimension(41, 25));
        ButtonASin.setPreferredSize(new java.awt.Dimension(41, 25));
        ButtonASin.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonASinActionPerformed(evt);
            }
        });

        ButtonCos.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        ButtonCos.setText("Cos");
        ButtonCos.setMaximumSize(new java.awt.Dimension(41, 25));
        ButtonCos.setMinimumSize(new java.awt.Dimension(41, 25));
        ButtonCos.setPreferredSize(new java.awt.Dimension(41, 25));
        ButtonCos.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonCosActionPerformed(evt);
            }
        });

        ButtonACos.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        ButtonACos.setText("aCos");
        ButtonACos.setMaximumSize(new java.awt.Dimension(41, 25));
        ButtonACos.setMinimumSize(new java.awt.Dimension(41, 25));
        ButtonACos.setPreferredSize(new java.awt.Dimension(41, 25));
        ButtonACos.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonACosActionPerformed(evt);
            }
        });

        ButtonTan.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        ButtonTan.setText("Tan");
        ButtonTan.setMaximumSize(new java.awt.Dimension(41, 25));
        ButtonTan.setMinimumSize(new java.awt.Dimension(41, 25));
        ButtonTan.setPreferredSize(new java.awt.Dimension(41, 25));
        ButtonTan.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonTanActionPerformed(evt);
            }
        });

        ButtonATan.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        ButtonATan.setText("aTan");
        ButtonATan.setMaximumSize(new java.awt.Dimension(41, 25));
        ButtonATan.setMinimumSize(new java.awt.Dimension(41, 25));
        ButtonATan.setPreferredSize(new java.awt.Dimension(41, 25));
        ButtonATan.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonATanActionPerformed(evt);
            }
        });

        ButtonLog.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        ButtonLog.setText("Log");
        ButtonLog.setMaximumSize(new java.awt.Dimension(41, 25));
        ButtonLog.setMinimumSize(new java.awt.Dimension(41, 25));
        ButtonLog.setPreferredSize(new java.awt.Dimension(41, 25));
        ButtonLog.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonLogActionPerformed(evt);
            }
        });

        ButtonLn.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        ButtonLn.setText("Ln");
        ButtonLn.setMaximumSize(new java.awt.Dimension(41, 25));
        ButtonLn.setMinimumSize(new java.awt.Dimension(41, 25));
        ButtonLn.setPreferredSize(new java.awt.Dimension(41, 25));
        ButtonLn.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonLnActionPerformed(evt);
            }
        });

        ButtonX2.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        ButtonX2.setText("X²");
        ButtonX2.setMaximumSize(new java.awt.Dimension(41, 25));
        ButtonX2.setMinimumSize(new java.awt.Dimension(41, 25));
        ButtonX2.setPreferredSize(new java.awt.Dimension(41, 25));
        ButtonX2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonX2ActionPerformed(evt);
            }
        });

        ButtonX10.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        ButtonX10.setText("X¹⁰");
        ButtonX10.setMaximumSize(new java.awt.Dimension(41, 25));
        ButtonX10.setMinimumSize(new java.awt.Dimension(41, 25));
        ButtonX10.setPreferredSize(new java.awt.Dimension(41, 25));
        ButtonX10.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ButtonX10ActionPerformed(evt);
            }
        });

        ONButton.setText("ON");
        ONButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ONButtonActionPerformed(evt);
            }
        });

        MainMenu.setFocusable(false);

        MenuFile.setText("File");
        MenuFile.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                MenuFileActionPerformed(evt);
            }
        });

        MenuStandard.setAccelerator(javax.swing.KeyStroke.getKeyStroke(java.awt.event.KeyEvent.VK_Q, java.awt.event.InputEvent.CTRL_MASK));
        MenuStandard.setText("Standard");
        MenuStandard.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                MenuStandardActionPerformed(evt);
            }
        });
        MenuFile.add(MenuStandard);

        MenuScientifica.setAccelerator(javax.swing.KeyStroke.getKeyStroke(java.awt.event.KeyEvent.VK_A, java.awt.event.InputEvent.CTRL_MASK));
        MenuScientifica.setText("Scientifica");
        MenuScientifica.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                MenuScientificaActionPerformed(evt);
            }
        });
        MenuFile.add(MenuScientifica);

        MainMenu.add(MenuFile);

        MenuEdit.setText("Edit");
        MenuEdit.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                MenuEditActionPerformed(evt);
            }
        });

        MenuGetSize.setText("Get sizes");
        MenuGetSize.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                MenuGetSizeActionPerformed(evt);
            }
        });
        MenuEdit.add(MenuGetSize);

        MainMenu.add(MenuEdit);

        setJMenuBar(MainMenu);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(layout.createSequentialGroup()
                                .addComponent(NumberButton4, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(NumberButton5, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(NumberButton6, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(ButtonMul, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(18, 18, 18)
                                .addComponent(ButtonTan, javax.swing.GroupLayout.PREFERRED_SIZE, 70, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                                .addComponent(ButtonATan, javax.swing.GroupLayout.PREFERRED_SIZE, 70, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(layout.createSequentialGroup()
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addGroup(layout.createSequentialGroup()
                                        .addComponent(NumberButton1, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(NumberButton2, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(NumberButton3, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(ButtonDiv, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE))
                                    .addGroup(layout.createSequentialGroup()
                                        .addGap(3, 3, 3)
                                        .addComponent(ONButton)
                                        .addGap(12, 12, 12)
                                        .addComponent(NumberButton0, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(ButtonDot, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(ButtonEqs, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)))
                                .addGap(18, 18, 18)
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                    .addComponent(ButtonLog, javax.swing.GroupLayout.DEFAULT_SIZE, 70, Short.MAX_VALUE)
                                    .addComponent(ButtonX2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                    .addComponent(ButtonLn, javax.swing.GroupLayout.DEFAULT_SIZE, 70, Short.MAX_VALUE)
                                    .addComponent(ButtonX10, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))))
                        .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(layout.createSequentialGroup()
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addGroup(layout.createSequentialGroup()
                                        .addComponent(ButtonBack, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(ButtonReset, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE))
                                    .addGroup(layout.createSequentialGroup()
                                        .addComponent(NumberButton7, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(NumberButton8, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)))
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                    .addGroup(layout.createSequentialGroup()
                                        .addComponent(NumberButton9, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(ButtonMin, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addGap(18, 18, 18)
                                        .addComponent(ButtonCos, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                                    .addGroup(layout.createSequentialGroup()
                                        .addComponent(ButtonRoot, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                        .addComponent(ButtonAdd, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addGap(18, 18, 18)
                                        .addComponent(ButtonSin, javax.swing.GroupLayout.PREFERRED_SIZE, 70, javax.swing.GroupLayout.PREFERRED_SIZE)))
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(ButtonACos, javax.swing.GroupLayout.PREFERRED_SIZE, 70, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addComponent(ButtonASin, javax.swing.GroupLayout.PREFERRED_SIZE, 70, javax.swing.GroupLayout.PREFERRED_SIZE)))
                            .addComponent(TextFieldResult, javax.swing.GroupLayout.PREFERRED_SIZE, 218, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(0, 0, Short.MAX_VALUE))))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(TextFieldResult, javax.swing.GroupLayout.DEFAULT_SIZE, 37, Short.MAX_VALUE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(ButtonBack, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonReset, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonRoot, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonAdd, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonSin, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonASin, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(NumberButton9, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                        .addComponent(NumberButton7, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(NumberButton8, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(ButtonMin, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(ButtonCos, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addComponent(ButtonACos, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(NumberButton5, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(NumberButton6, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonMul, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(NumberButton4, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonTan, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonATan, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(NumberButton1, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(NumberButton2, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(NumberButton3, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonDiv, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonLog, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonLn, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(NumberButton0, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonDot, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonEqs, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonX2, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ButtonX10, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(ONButton, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addContainerGap())
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents
    
    // <editor-fold defaultstate="collapsed" desc="Disable and Enable funcs">
    public void disable()
    {
        ButtonACos.setEnabled(false);
        ButtonASin.setEnabled(false);
        ButtonATan.setEnabled(false);
        ButtonAdd.setEnabled(false);
        ButtonBack.setEnabled(false);
        ButtonCos.setEnabled(false);
        ButtonDiv.setEnabled(false);
        ButtonDot.setEnabled(false);
        ButtonEqs.setEnabled(false);
        ButtonLn.setEnabled(false);
        ButtonLog.setEnabled(false);
        ButtonMin.setEnabled(false);
        ButtonMul.setEnabled(false);
        ButtonReset.setEnabled(false);
        ButtonRoot.setEnabled(false);
        ButtonSin.setEnabled(false);
        ButtonTan.setEnabled(false);
        ButtonX10.setEnabled(false);
        ButtonX2.setEnabled(false);
        MainMenu.setEnabled(false);
        MenuEdit.setEnabled(false);
        MenuFile.setEnabled(false);
        MenuGetSize.setEnabled(false);
        MenuScientifica.setEnabled(false);
        MenuStandard.setEnabled(false);
        NumberButton0.setEnabled(false);
        NumberButton1.setEnabled(false);
        NumberButton2.setEnabled(false);
        NumberButton3.setEnabled(false);
        NumberButton4.setEnabled(false);
        NumberButton5.setEnabled(false);
        NumberButton6.setEnabled(false);
        NumberButton7.setEnabled(false);
        NumberButton8.setEnabled(false);
        NumberButton9.setEnabled(false);
        // ONButton.setEnabled(false); pepega
        TextFieldResult.setEnabled(false);
    }
    
    public void enable()
    {
        ButtonACos.setEnabled(true);
        ButtonASin.setEnabled(true);
        ButtonATan.setEnabled(true);
        ButtonAdd.setEnabled(true);
        ButtonBack.setEnabled(true);
        ButtonCos.setEnabled(true);
        ButtonDiv.setEnabled(true);
        ButtonDot.setEnabled(true);
        ButtonEqs.setEnabled(true);
        ButtonLn.setEnabled(true);
        ButtonLog.setEnabled(true);
        ButtonMin.setEnabled(true);
        ButtonMul.setEnabled(true);
        ButtonReset.setEnabled(true);
        ButtonRoot.setEnabled(true);
        ButtonSin.setEnabled(true);
        ButtonTan.setEnabled(true);
        ButtonX10.setEnabled(true);
        ButtonX2.setEnabled(true);
        MainMenu.setEnabled(true);
        MenuEdit.setEnabled(true);
        MenuFile.setEnabled(true);
        MenuGetSize.setEnabled(true);
        MenuScientifica.setEnabled(true);
        MenuStandard.setEnabled(true);
        NumberButton0.setEnabled(true);
        NumberButton1.setEnabled(true);
        NumberButton2.setEnabled(true);
        NumberButton3.setEnabled(true);
        NumberButton4.setEnabled(true);
        NumberButton5.setEnabled(true);
        NumberButton6.setEnabled(true);
        NumberButton7.setEnabled(true);
        NumberButton8.setEnabled(true);
        NumberButton9.setEnabled(true);
        // ONButton.setEnabled(true); pepega
        TextFieldResult.setEnabled(true);
    }
    // </editor-fold>
    
    // <editor-fold defaultstate="collapsed" desc="Menu buttons">
    private void MenuStandardActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_MenuStandardActionPerformed
        this.setSize(246, 391);
        // TextFieldResult.setSize(224, 37);
    }//GEN-LAST:event_MenuStandardActionPerformed

    private void MenuScientificaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_MenuScientificaActionPerformed
        this.setSize(416, 391);
        try
        {
            Thread.sleep(100);
        }
        catch (Exception e)
        {
            // ignore
        }
        // TextFieldResult.setSize(380, 37);
    }//GEN-LAST:event_MenuScientificaActionPerformed

    private void MenuGetSizeActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_MenuGetSizeActionPerformed
        System.out.println("JFrame:\nWidth = " + this.getWidth() + "\nHeight = " + this.getHeight());
        System.out.println("Result Area:\nWidth = " + TextFieldResult.getWidth() + "\nHeight = " + TextFieldResult.getHeight()
                    + "\nPreferred size = " + TextFieldResult.getPreferredSize());
    }//GEN-LAST:event_MenuGetSizeActionPerformed
    
    private void ONButtonActionPerformed(java.awt.event.ActionEvent evt) {                                         
        if (ONButton.isSelected())
        {
            enable();
        }
        else if (!ONButton.isSelected())
        {
            disable();
        }
    }
    
    private void MenuFileActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_MenuFileActionPerformed
        //TextFieldResult.setSize(TextFieldResult.getSize());
    }//GEN-LAST:event_MenuFileActionPerformed

    private void MenuEditActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_MenuEditActionPerformed
        //TextFieldResult.setSize(TextFieldResult.getSize());
    }//GEN-LAST:event_MenuEditActionPerformed
    // </editor-fold> //

    // <editor-fold defaultstate="collapsed" desc="Form launch event"> //
    private void formWindowActivated(java.awt.event.WindowEvent evt) {//GEN-FIRST:event_formWindowActivated
        this.setSize(246, 391);
        TextFieldResult.setSize(224, 37);
        disable();
    }//GEN-LAST:event_formWindowActivated
    // </editor-fold> //

    // <editor-fold defaultstate="collapsed" desc="Back and reset">//
    private void ButtonBackActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonBackActionPerformed
        TextFieldResult.setText(TextFieldResult.getText().substring(0, TextFieldResult.getText().length() - 1));
    }//GEN-LAST:event_ButtonBackActionPerformed

    private void ButtonResetActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonResetActionPerformed
        operator = "";
        number1 = 0;
        number2 = 0;
        TextFieldResult.setText("");
    }//GEN-LAST:event_ButtonResetActionPerformed
    // </editor-fold> //

    // <editor-fold defaultstate="collapsed" desc="Number buttons"> //
    private void ButtonDotActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonDotActionPerformed
        if (!TextFieldResult.getText().contains("."))
        {
            if (!TextFieldResult.getText().equals("") || !TextFieldResult.getText().equals("MATH ERROR"))
            {
                TextFieldResult.setText(TextFieldResult.getText() + ".");
            }
            else
            {
                TextFieldResult.setText("0.");
            }
        }
    }//GEN-LAST:event_ButtonDotActionPerformed

    private void NumberButton0ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_NumberButton0ActionPerformed
        if (!TextFieldResult.getText().equals("MATH ERROR"))
        {
            TextFieldResult.setText(TextFieldResult.getText() + "0");
        }
        else
        {
            TextFieldResult.setText("0");
        }
    }//GEN-LAST:event_NumberButton0ActionPerformed

    private void NumberButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_NumberButton1ActionPerformed
        if (!TextFieldResult.getText().equals("MATH ERROR"))
        {
            TextFieldResult.setText(TextFieldResult.getText() + "1");
        }
        else
        {
            TextFieldResult.setText("1");
        }
    }//GEN-LAST:event_NumberButton1ActionPerformed

    private void NumberButton2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_NumberButton2ActionPerformed
        if (!TextFieldResult.getText().equals("MATH ERROR"))
    {
        TextFieldResult.setText(TextFieldResult.getText() + "2");
    }
    else
    {
        TextFieldResult.setText("2");
    }
    }//GEN-LAST:event_NumberButton2ActionPerformed

    private void NumberButton3ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_NumberButton3ActionPerformed
        if (!TextFieldResult.getText().equals("MATH ERROR"))
    {
        TextFieldResult.setText(TextFieldResult.getText() + "3");
    }
    else
    {
        TextFieldResult.setText("3");
    }
    }//GEN-LAST:event_NumberButton3ActionPerformed

    private void NumberButton4ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_NumberButton4ActionPerformed
    if (!TextFieldResult.getText().equals("MATH ERROR"))
    {
        TextFieldResult.setText(TextFieldResult.getText() + "4");
    }
    else
    {
        TextFieldResult.setText("4");
    }
    }//GEN-LAST:event_NumberButton4ActionPerformed

    private void NumberButton5ActionPerformed(java.awt.event.ActionEvent evt) {
    if (!TextFieldResult.getText().equals("MATH ERROR"))
    {
        TextFieldResult.setText(TextFieldResult.getText() + "5");
    }
    else
    {
        TextFieldResult.setText("5");
    }
    }                                             

    private void NumberButton6ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_NumberButton5ActionPerformed
    if (!TextFieldResult.getText().equals("MATH ERROR"))
    {
        TextFieldResult.setText(TextFieldResult.getText() + "6");
    }
    else
    {
        TextFieldResult.setText("6");
    }
    }//GEN-LAST:event_NumberButton5ActionPerformed

    private void NumberButton7ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_NumberButton7ActionPerformed
    if (!TextFieldResult.getText().equals("MATH ERROR"))
    {
        TextFieldResult.setText(TextFieldResult.getText() + "7");
    }
    else
    {
        TextFieldResult.setText("7");
    }
    }//GEN-LAST:event_NumberButton7ActionPerformed

    private void NumberButton8ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_NumberButton8ActionPerformed
    if (!TextFieldResult.getText().equals("MATH ERROR"))
    {
        TextFieldResult.setText(TextFieldResult.getText() + "8");
    }
    else
    {
        TextFieldResult.setText("8");
    }
    }//GEN-LAST:event_NumberButton8ActionPerformed

    private void NumberButton9ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_NumberButton9ActionPerformed
    if (!TextFieldResult.getText().equals("MATH ERROR"))
    {
        TextFieldResult.setText(TextFieldResult.getText() + "9");
    }
    else
    {
        TextFieldResult.setText("9");
    }
    }//GEN-LAST:event_NumberButton9ActionPerformed
    // </editor-fold> //

    // <editor-fold defaultstate="collapsed" desc="Basic operators">//
    private void ButtonRootActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonRootActionPerformed
        if ((!TextFieldResult.getText().equals("")) && (Double.parseDouble(TextFieldResult.getText()) > 0))
        {
            TextFieldResult.setText(Double.toString(Math.sqrt(Double.parseDouble(TextFieldResult.getText()))));
        }
        else
        {
            TextFieldResult.setText("MATH ERROR");
        }
    }//GEN-LAST:event_ButtonRootActionPerformed

    private void ButtonAddActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonAddActionPerformed
        if (!TextFieldResult.getText().equals(""))
        {
            number1 = Double.parseDouble(TextFieldResult.getText());
            operator = "+";
            TextFieldResult.setText("");
        }
    }//GEN-LAST:event_ButtonAddActionPerformed

    private void ButtonMinActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonMinActionPerformed
        if (TextFieldResult.getText().equals(""))
        {
            TextFieldResult.setText(TextFieldResult.getText() + "-");
        }
        else
        {
            number1 = Double.parseDouble(TextFieldResult.getText());
            operator = "-";
            TextFieldResult.setText("");
        }
    }//GEN-LAST:event_ButtonMinActionPerformed

    private void ButtonMulActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonMulActionPerformed
        if (!TextFieldResult.getText().equals(""))
        {
            number1 = Double.parseDouble(TextFieldResult.getText());
            operator = "*";
            TextFieldResult.setText("");
        }
    }//GEN-LAST:event_ButtonMulActionPerformed

    private void ButtonDivActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonDivActionPerformed
        if (!TextFieldResult.getText().equals(""))
        {
            number1 = Double.parseDouble(TextFieldResult.getText());
            operator = "/";
            TextFieldResult.setText("");
        }
    }//GEN-LAST:event_ButtonDivActionPerformed

    private void ButtonEqsActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonEqsActionPerformed
        number2 = Double.parseDouble(TextFieldResult.getText());
        if (!(operator.equals("")))
        {
            switch (operator) {
                case "+": TextFieldResult.setText(Double.toString(number1 + number2));
                case "-": TextFieldResult.setText(Double.toString(number1 - number2));
                case "*": TextFieldResult.setText(Double.toString(number1 * number2));
                case "/": TextFieldResult.setText(Double.toString(number1 / number2));
            }
        }

    }//GEN-LAST:event_ButtonEqsActionPerformed
    // </editor-fold> //

    // <editor-fold defaultstate="collapsed" desc="Advanced operators">//
    private void ButtonSinActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonSinActionPerformed
        TextFieldResult.setText(Double.toString(Math.sin(Double.parseDouble(TextFieldResult.getText()))));
    }//GEN-LAST:event_ButtonSinActionPerformed

    private void ButtonASinActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonASinActionPerformed
        TextFieldResult.setText(Double.toString(Math.asin(Double.parseDouble(TextFieldResult.getText()))));
    }//GEN-LAST:event_ButtonASinActionPerformed

    private void ButtonCosActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonCosActionPerformed
        TextFieldResult.setText(Double.toString(Math.cos(Double.parseDouble(TextFieldResult.getText()))));
    }//GEN-LAST:event_ButtonCosActionPerformed

    private void ButtonACosActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonACosActionPerformed
        TextFieldResult.setText(Double.toString(Math.acos(Double.parseDouble(TextFieldResult.getText()))));
    }//GEN-LAST:event_ButtonACosActionPerformed

    private void ButtonTanActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonTanActionPerformed
        TextFieldResult.setText(Double.toString(Math.tan(Double.parseDouble(TextFieldResult.getText()))));
    }//GEN-LAST:event_ButtonTanActionPerformed

    private void ButtonATanActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonATanActionPerformed
        TextFieldResult.setText(Double.toString(Math.atan(Double.parseDouble(TextFieldResult.getText()))));
    }//GEN-LAST:event_ButtonATanActionPerformed

    private void ButtonLogActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonLogActionPerformed
        if ((!TextFieldResult.getText().equals("")) && (Double.parseDouble(TextFieldResult.getText()) > 0))
        {
            TextFieldResult.setText(Double.toString(Math.log10(Double.parseDouble(TextFieldResult.getText()))));
        }
        else
        {
            TextFieldResult.setText("MATH ERROR");
        }
    }//GEN-LAST:event_ButtonLogActionPerformed

    private void ButtonLnActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonLnActionPerformed
        if ((!TextFieldResult.getText().equals("")) && (Double.parseDouble(TextFieldResult.getText()) > 0))
        {
            TextFieldResult.setText(Double.toString(Math.log(Double.parseDouble(TextFieldResult.getText()))));
        }
        else
        {
            TextFieldResult.setText("MATH ERROR");
        }
    }//GEN-LAST:event_ButtonLnActionPerformed

    private void ButtonX2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonX2ActionPerformed
        TextFieldResult.setText(Double.toString(Math.pow(Double.parseDouble(TextFieldResult.getText()), 2)));
    }//GEN-LAST:event_ButtonX2ActionPerformed

    private void ButtonX10ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ButtonX10ActionPerformed
        TextFieldResult.setText(Double.toString(Math.pow(Double.parseDouble(TextFieldResult.getText()), 10)));
    }//GEN-LAST:event_ButtonX10ActionPerformed
    // </editor-fold> //

    /**
     * @param args the command line arguments
     */
    // <editor-fold defaultstate="collapsed" desc="Main function">
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(CalcolatriceScientifica.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(CalcolatriceScientifica.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(CalcolatriceScientifica.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(CalcolatriceScientifica.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new CalcolatriceScientifica().setVisible(true);
            }
        });
    }
    // </editor-fold>

    // <editor-fold defaultstate="collapsed" desc="Variables">
    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton ButtonACos;
    private javax.swing.JButton ButtonASin;
    private javax.swing.JButton ButtonATan;
    private javax.swing.JButton ButtonAdd;
    private javax.swing.JButton ButtonBack;
    private javax.swing.JButton ButtonCos;
    private javax.swing.JButton ButtonDiv;
    private javax.swing.JButton ButtonDot;
    private javax.swing.JButton ButtonEqs;
    private javax.swing.JButton ButtonLn;
    private javax.swing.JButton ButtonLog;
    private javax.swing.JButton ButtonMin;
    private javax.swing.JButton ButtonMul;
    private javax.swing.JButton ButtonReset;
    private javax.swing.JButton ButtonRoot;
    private javax.swing.JButton ButtonSin;
    private javax.swing.JButton ButtonTan;
    private javax.swing.JButton ButtonX10;
    private javax.swing.JButton ButtonX2;
    private javax.swing.JMenuBar MainMenu;
    private javax.swing.JMenu MenuEdit;
    private javax.swing.JMenu MenuFile;
    private javax.swing.JMenuItem MenuGetSize;
    private javax.swing.JMenuItem MenuScientifica;
    private javax.swing.JMenuItem MenuStandard;
    private javax.swing.JButton NumberButton0;
    private javax.swing.JButton NumberButton1;
    private javax.swing.JButton NumberButton2;
    private javax.swing.JButton NumberButton3;
    private javax.swing.JButton NumberButton4;
    private javax.swing.JButton NumberButton5;
    private javax.swing.JButton NumberButton6;
    private javax.swing.JButton NumberButton7;
    private javax.swing.JButton NumberButton8;
    private javax.swing.JButton NumberButton9;
    private javax.swing.JRadioButton ONButton;
    private javax.swing.JTextField TextFieldResult;
    // End of variables declaration//GEN-END:variables
    //</editor-fold>
}