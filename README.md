# RaceChronoDYI-TBeam

```
esptool.exe --port "COM3" --baud "921600" write-flash -z 0x1000 ./bootloader.bin 0x8000 ./partitions.bin 0xe000 ./boot_app0.bin 0x10000 ./firmware.bin
```
