# 📺 TV-B-Gone ESP32-C3 SuperMini

Устройство для выключения телевизоров и проекторов по IR. Основано на ESP32-C3 SuperMini + IR transmitter модуль (3 пина).

![CI](https://github.com/labubuahhginger/TVBGoneC3/actions/workflows/build.yml/badge.svg)

---

## 🔧 Железо

| Компонент | Описание |
|-----------|----------|
| ESP32-C3 SuperMini | Основная плата |
| IR Transmitter (3-pin) | Модуль с встроенным транзистором |

### Подключение

```
IR Transmitter → ESP32-C3 SuperMini
VCC  → 3.3V
GND  → GND
DAT  → GPIO3
```

Кнопка запуска — встроенная **BOOT** (GPIO9).  
Индикатор — встроенный **LED** (GPIO8).

---

## 📡 Поддерживаемые протоколы

- NEC
- SIRC (Sony) — 12 / 15 / 20 бит
- RC5 (Philips)
- JVC
- Panasonic

---

## 📺 Поддерживаемые устройства

**Телевизоры:** Samsung, LG, Sony, Philips, Panasonic, Sharp, Toshiba, Hitachi, Hisense, TCL, Vizio, JVC, Mitsubishi, Vestel, Beko

**Проекторы:** BenQ, Epson, Optoma, ViewSonic, Acer, Infocus, NEC, Panasonic, Sony VPL, Casio

---

## 🚀 Сборка и прошивка

### Требования

- [PlatformIO](https://platformio.org/)
- VS Code + PlatformIO IDE расширение

### Сборка

```bash
pio run
```

### Прошивка

```bash
pio run -t upload
```

### Монитор порта

```bash
pio device monitor
```

---

## ▶️ Использование

1. Прошей ESP32-C3
2. Нажми кнопку **BOOT**
3. LED загорится — устройство отправляет IR коды
4. LED погаснет — готово

---

## 📁 Структура проекта

```
TVBGoneC3/
├── src/
│   └── main.cpp
├── .github/
│   └── workflows/
│       └── build.yml
├── platformio.ini
└── README.md
```

---

## 📜 Лицензия

MIT