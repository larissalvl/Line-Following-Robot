# 🤖 Robô Segue-Linha

[Read in English](README_en.md)

Robô autônomo capaz de seguir uma linha traçada no chão, utilizando sensores ópticos e Arduino. Desenvolvido como projeto prático de robótica básica.

---

## 🎥 Demonstração

> 📹 *[Robô funcionando]*

https://github.com/user-attachments/assets/2fb094ea-56fe-4fe2-8c35-f8c776347f2f

---

## 🛠️ Tecnologias e Componentes

**Hardware**
- Arduino Uno
- Sensores ópticos (fotorresistores) — detecção da linha
- 2x Motor DC
- Ponte H (controle dos motores)
- Chassi de robô + rodas

**Software**
- Linguagem: C++ (Arduino IDE)

---

## ⚙️ Como funciona

1. Os sensores ópticos captam a diferença de luminosidade entre a linha (geralmente preta) e o fundo (geralmente branco)
2. O Arduino lê os valores dos sensores continuamente
3. Com base na leitura, o Arduino ajusta a velocidade e direção dos motores para manter o robô alinhado sobre a linha
4. Se um sensor detecta a saída da linha, o robô corrige a trajetória automaticamente

---

## 📁 Estrutura do Repositório

```
Line-Following-Robot/
├── code/
│   └── segue_linha.ino   # Código principal do Arduino
└── README.md
```

---

## 🚀 Como usar

1. Monte o circuito com os sensores ópticos posicionados na parte frontal inferior do robô
2. Carregue o arquivo `.ino` no Arduino via Arduino IDE
3. Calibre os sensores conforme a iluminação do ambiente, se necessário
4. Posicione o robô sobre a linha e ligue

---

## 📚 Contexto

Projeto desenvolvido na disciplina de **Experimentação Orientada** do curso de Ciência da Computação na Universidade de Fortaleza (Unifor), 1º semestre de 2025.

Desenvolvido em dupla — responsável pela **programação do Arduino e lógica de leitura dos sensores**.

---

## 👩‍💻 Autora

**Larissa Vieira**
[LinkedIn](https://linkedin.com/in/larissalvl) · [Instagram @larissalvl](https://instagram.com/larissalvl)
