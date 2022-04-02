# STM32F429I Discovery board

## Hardware Block Diagram

![alt text](https://github.com/Davidadebiyi/Making-Embedded-Systems-Course/blob/main/assignments/week-2/images/STM32F429-discovery-board.drawio.png)


## Summary

The STM32F429I Discovery board has a STM32F429ZI MCU, which is a microcontroller based on the high-performance Arm cortex M4 32-bit core.

### Specifications

#### Processor

The processor is a STM32F429ZI MCU which is based on the high-performance Arm Cortex M4 32-bit core

#### Memory

- Flash - 2Mbytes
- RAM - 64-Mbit (SDRAM)

#### Special peripherals

- LCD-TFT controller
- FPU - A special processing unit for floating-point arithmetics
- Art Accelerator - For graphical applications


#### ADC

It has one 12-bit ADC.


##### 12-bit ADC features
- 12-bit, 10-bit, 8-bit or 6-bit configurable resolution
- Interrupt generation at the end of conversion, end of injected conversion, and in case of
analog watchdog or overrun events
- Single and continuous conversion modes
- Scan mode for automatic conversion of channel 0 to channel ‘n’
- Data alignment with in-built data coherency
- Channel-wise programmable sampling time
- External trigger option with configurable polarity for both regular and injected
conversions
- Discontinuous mode
- Dual/Triple mode (on devices with 2 ADCs or more)
- Configurable DMA data storage in Dual/Triple ADC mode
- Configurable delay between conversions in Dual/Triple interleaved mode
- ADC conversion type (refer to the datasheets)
- ADC supply requirements: 2.4 V to 3.6 V at full speed and down to 1.8 V at slower
speed
- ADC input range: V REF– ≤ V IN ≤ V REF+
- DMA request generation during regular channel conversion

#### Ok, I want this board!
Dev kit cost - $29.90 (DIgikey)\
STM32U585AI MCU - ~20.60 (Digikey but not in stock there or in other distributors I trust)