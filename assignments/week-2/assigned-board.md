# B-U5851-IOT02A

## Hardware Block Diagram

![alt text](https://github.com/Davidadebiyi/Making-Embedded-Systems-Course/blob/main/assignments/week-2/images/Discovery-IoT-board.drawio.png)


## Summary

The B-U5851-IOT02A has a STM32U585AI MCU, which is an ultra-low-power microcontroller based on the high-performance Arm cortex M33 32-bit core.

### Specifications

#### Memory

- Flash - 2Mbytes
- RAM - 786Kbytes

#### Special peripherals

- MDF/ADF - Set of digital filters 
- FPU - A special processing unit for floating-point arithmetics
- Art Accelerator - For graphical applications
- Touch-sensing controller

#### ADC

It has two ADCs, a 14-bit ADC and a 12-bit.

##### 14-bit ADC features
- High-performance
    - 14-, 12-, 10- or 8-bit configurable resolution
    - Self-calibration (both offset and linearity)
    - Faster conversion time by lowering resolution
    - Management of single-ended or differential inputs (programmable per channels)
    - Data can be routed to MDF for post processing
    - Four dedicated data registers for the injected channels
    - Channel-wise programmable sampling time
    and much more
- Oversampler
    - 32-bit data register
    - Oversampling ratio adjustable from 2 to 1024
    - Programmable data right and left shift
- Data preconditioning
- Low-power features
    - Speed adaptive low-power mode to reduce ADC consumption when operating at
    low frequency
    - Slow bus frequency application while keeping optimum ADC performance
    - Automatic control to avoid ADC overrun in low AHB bus clock frequency
    application (auto-delayed mode)
- Three analog watchdogs
- ADC input range: V SSA < V IN < V REF+

##### 12-bit ADC features
- High performance
    - 12-, 10-, 8- or 6-bit configurable resolution
    - A/D conversion time: 0.4 μs for 12-bit resolution (2.5 MHz), faster conversion
    times obtained by lowering resolution
    - Self-calibration
    - Programmable sampling time
    - Data alignment with built-in data coherency
    - DMA support
- Low-power
    - HCLK frequency reduced for low-power operation while still keeping optimum
    ADC performance
    - Wait mode: ADC overrun prevented in applications with low frequency HCLK
    - Auto-off mode: ADC automatically powered off except during the active
    conversion phase, dramatically reducing the ADC power consumption
    - Autonomous mode: In low-power modes down to Stop 2 mode, the ADC4 is
    automatically switched on when a trigger occurs to start conversion, and it is
    automatically switched off after conversion. Data are transfered in SRAM
    with DMA.
    - ADC4 interrupts wake up the device from Stop 0, Stop 1 and Stop 2 modes.
- Analog input channels
    - Up to 19 external analog inputs
- Start-of-conversion can be initiated:
    - By software
    - By hardware triggers with configurable polarity (timer events or GPIO input
    events)
- Conversion modes
    - Conversion of a single channel or scan of a sequence of channels
    - Selected inputs converted once per trigger in Single mode
    - Selected inputs converted continuously in Continuous mode
    - Discontinuous mode
- Interrupt generation at the end of sampling, end of conversion, end of sequence
conversion, and in case of analog watchdog or overrun events, with wakeup from Stop
capability
- Analog watchdog
- Oversampler
    - 16-bit data register
    - Oversampling ratio adjustable from 2 to 256
    - Programmable data shift up to 8 bits
- ADC supply requirements: 1.62 to 3.6 V
- ADC input range: V SSA < V IN < VREF+

#### Ok, I want this board!
Dev kit cost - $65.00 (DIgikey)\
STM32U585AI MCU - ~$15.00 (not in stock in distributors I trust)

