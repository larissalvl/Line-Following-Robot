# 🤖 Line-Following Robot

[Leia em Português](README.md)

Autonomous robot capable of following a line on the ground, using optical sensors and Arduino. Developed as a hands-on basic robotics project.

---

## 🎥 Demonstration

> 📹 *[Robot in action]*

https://github.com/user-attachments/assets/2fb094ea-56fe-4fe2-8c35-f8c776347f2f

---

## 🛠️ Technologies and Components

**Hardware**
- Arduino Uno
- Optical sensors (photoresistors) — line detection
- 2x DC Motors
- H-Bridge Motor Driver
- Robot chassis + wheels

**Software**
- Language: C++ (Arduino IDE)

---

## ⚙️ How It Works

1. The optical sensors detect the difference in brightness between the line (usually black) and the background (usually white)
2. The Arduino continuously reads the sensor values
3. Based on the readings, the Arduino adjusts motor speed and direction to keep the robot aligned with the line
4. If a sensor detects that the robot has drifted off the line, it automatically corrects its path

---

## 📁 Repository Structure

```
Line-Following-Robot/
├── code/
│   └── segue_linha.ino   # Main Arduino code
└── README.md
```

---

## 🚀 How to Use

1. Assemble the circuit with the optical sensors positioned at the front bottom of the robot
2. Upload the `.ino` file to the Arduino via Arduino IDE
3. Calibrate the sensors according to the ambient lighting, if needed
4. Place the robot on the line and turn it on

---

## 📚 Context

Project developed for the **Oriented Experimentation** course in the Computer Science program at Universidade de Fortaleza (Unifor), 1st semester of 2025.

Developed in pairs — responsible for **Arduino programming and sensor reading logic**.

---

## 👩‍💻 Author

**Larissa Vieira**
[LinkedIn](https://linkedin.com/in/larissalvl) · [Instagram @larissalvl](https://instagram.com/larissalvl)
