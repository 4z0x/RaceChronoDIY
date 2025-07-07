# 🚀 Flashing Instructions
## 📦 Firmware
Download the firmware archive from the Releases section.

Extract the contents to a directory of your choice.

## 🛠️ Esptool
### Option 1: Precompiled Binary
Download the appropriate [esptool](https://github.com/espressif/esptool/releases) release for your operating system.

Extract its contents into the folder where you extracted the firmware.

### Option 2: Install via pip
```bash
pip install esptool
```

## 🔧 Flash the Device
From the firmware directory, run the following command:

```bash
esptool.py --port "PORT" --baud 921600 write_flash -z \
  0x1000 bootloader.bin \
  0x8000 partitions.bin \
  0xe000 boot_app0.bin \
  0x10000 firmware.bin
```

<strong>Replace "PORT" with your actual serial port (/dev/ttyUSB* on Linux/macOS or COM* on Windows).</strong>