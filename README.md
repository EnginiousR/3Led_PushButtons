# 🔴🟠🟢 Arduino LED & Button Control Project

This Arduino Uno project demonstrates how to **control three LEDs using three corresponding pushbuttons**. When a button is pressed, its matching LED lights up.

---

## 🔧 Components Used

- 1 × Arduino Uno
- 3 × LEDs (Red)
- 3 × Pushbuttons
- 6 × Resistors (3 for LEDs, 3 pull-down for buttons)
- 1 × Breadboard
- Jumper wires
- USB Cable

---

## 💻 How It Works

The uploaded Arduino sketch monitors each pushbutton.  
When a button is pressed (`HIGH` state), the matching LED is turned on.

- Button 1 → LED 1 turns ON
- Button 2 → LED 2 turns ON
- Button 3 → LED 3 turns ON

Each LED remains OFF unless its corresponding button is actively pressed.

---

## 📁 Files Included

- `stunning_sango1.ino` — Arduino sketch code
- `Stunning Sango.png` — Circuit diagram (Tinkercad export)

---

## 🚀 Getting Started

1. Open the `.ino` file in Arduino IDE.
2. Connect your Arduino Uno to your PC via USB.
3. Upload the code to the board.
4. Press any button and watch the LEDs respond!

---

