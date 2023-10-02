"""
created on : oct 2023
crated by:L Bonnie Zhu
This is the progame let Pico blink
"""

import time
from machine import Pin

blinkTime = 1

led = Pin(25,Pin.OUT)
led.value(0)

while True:
    led.vale(1)
    time.sleep(blinkTime)
    
    led.value(0)
    time.sleep(1)
    
    blinkTime += 1
    
