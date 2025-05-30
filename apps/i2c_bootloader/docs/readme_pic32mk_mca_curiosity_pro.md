---
grand_parent: I2C Bootloader Applications
parent: I2C Bootloader
title: Building and Running on PIC32MK MCA Curiosity Pro
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# Building and Running the I2C Bootloader applications

## Downloading and building the application

To clone or download this application from Github,go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/bootloader_apps_i2c) and then click Clone button to clone this repo or download as zip file. This content can also be download using content manager by following [these instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki)

Path of the application within the repository is **apps/i2c_bootloader/**

To build the application, refer to the following table and open the project using its IDE.

### Bootloader Application

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| bootloader/firmware/pic32mk_mca_curiosity_pro.X    | MPLABX Project for [PIC32MK MCA Curiosity Pro](https://www.microchip.com/en-us/development-tool/EV15D86A)|


### Test Application

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| test_app/firmware/pic32mk_mca_curiosity_pro.X    | MPLABX Project for [PIC32MK MCA Curiosity Pro](https://www.microchip.com/en-us/development-tool/EV15D86A)|


## Setting up [PIC32MK MCA Curiosity Pro](https://www.microchip.com/en-us/development-tool/EV15D86A)

- [SAM E54 Xplained Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/atsame54-xpro) is used as the **Host development kit** and [PIC32MK MCA Curiosity Pro](https://www.microchip.com/en-us/development-tool/EV15D86A) is used as the **Target Development Kit**

    ![i2c_bootloader_host_target_connection](../../docs/images/i2c_bootloader_host_target_connection.png)

- Connect the I2C SDA line Pin 11 (SDA2/RA8) on EXT1 of the **Target Development Kit** to the I2C SDA line Pin 11 (SERCOM7 PAD[0]/PD08) on EXT2 of the **Host development kit**
- Connect the I2C SCL line Pin 12 (SCL2/RB4) on EXT1 of the **Host development kit** to the I2C SCL line Pin 12 (SERCOM7 PAD[1]/PD09) on EXT2 of the **Host development kit**
- Connect a ground wire between the Host development kit and Target development kit
- Connect the Debug USB port on the Host development kit to the computer using a micro USB cable
- Connect the Debug USB port on the Target development kit to the computer using a micro USB cable


## Building and Configuring I2C Host Applications

### **Using I2C SDCARD Host application to send the application binary to Target development kit**

![host_app_sdcard_setup](../../docs/images/i2c_bootloader_host_sdcard.png)

If the SDCARD Host Development Kit being used is other than [SAM E54 Xplained Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/atsame54-xpro) then follow the steps mentioned in [Configuring SDCARD Host application project](../../docs/readme_configure_host_app_sdcard.md#configuring-the-sdcard-host-application)

1. Open the SDCARD host application project *host_app_sdcard/firmware/sam_e54_xpro.X* in the IDE
    - If a SDCARD host application project of different development kit is used then open that project in the IDE
2. Make sure that the APP_I2C_BOOTLOADER_TARGET_DEVICE macro is set to the target board being programmed
    
3. Build and program the SDCARD host application using the IDE on to the I2C host dvelopment kit

4. Open the test application project *test_app/firmware/pic32mk_mca_curiosity_pro.X* in the IDE
5. Build the project to generate the binary **(Do not program the binary)**

6. Copy the application binary into the SD card and insert the SD card in the SD card slot available on the  [SAM E54 Xplained Pro Evaluation Kit](https://www.microchip.com/developmenttools/ProductDetails/atsame54-xpro) 

7. Open the Terminal application (Ex.:Tera Term) on the computer
8. Configure the serial port settings for **Host Development kit** as follows:
    - Baud : 115200
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None

9. Jump to [Running The Application](#running-the-application)

## Running the Application

1. Open the bootloader project *bootloader/firmware/pic32mk_mca_curiosity_pro.X* in the IDE
2. Build and program the application using the IDE on to the **Target development kit**
    - **LED1** will be turned-on to indicate that bootloader code is running on the target
    - **LED1** will also turn on when the bootloader does not find a valid application; i.e. the first word of the application (stack pointer), contains 0xFFFFFFFF

3. **If the test application is being programmed**, Open the Terminal application (Ex.:Tera Term) on the computer and configure the serial port settings for **Target Development kit** as follows:
    - Baud : 115200
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None

4. Press the Switch **SW0** on the Host development kit to trigger programming of the application binary
5. Once the programming is complete,
    - **LED0** on the Host development kit will be turned on indicating success

    - If **SDCARD Host application** was used to program the application binary following message will be displayed on the terminal of **Host development kit**

        ![i2c_bootloader_host_app_sdcard_output](../../docs/images/i2c_bootloader_host_app_sdcard_output.png)

    - The target development kit will be reset. Upon re-start, the boot-loader will jump to the user application

    - If the test application is programmed then **LED1** should start blinking and you should see below output on the **Target development kit** console

        ![output](./images/btl_i2c_test_app_console_success.png)

6. Press and hold the Switch **SW200** to trigger Bootloader from test application and you should see below output

    ![output](./images/btl_i2c_test_app_console_trigger_bootloader.png)

7. Press Reset button on the Host development kit to reprogram the application binary
8. Repeat Steps 4-5 once
    - This step is to verify that bootloader is running after triggering bootloader from test application in Step 6


## Additional Steps (Optional)

### Using SDCARD Host application

- If multiple Target development kit are to be programmed using the same Host development kit then refer to [Configuring SDCARD Host application project](../../docs/readme_configure_host_app_sdcard.md)

- Once done repeat the applicable steps mentioned in [Running The Application](#running-the-application)
