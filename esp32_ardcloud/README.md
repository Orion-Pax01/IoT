### Alt approach using AWS: [esp32 AWS](https://github.com/Nycto-c05/esp32_aws)

# ESP32 with Arduino Cloud

## Step 1 : Cloud Config

 - Go to [Arduino Cloud](arduino.cc).
 - Download Arduino Cloud agent.
 - Create an Account & log in.
 - Click on top right cloud icon.
 - ##### Device Configs
	 - Connect the Board
	 - Side Bar >  Sketches
	 - Create new Sketch
	 - Check board/model name (Important)
	 - Side Bar > Devices > Add Device
	 - Select 3rd Party Device > ESP32 > and select the model name 
	 - Name Model
	 - Download Device ID and Security Key
 - ##### Configure new Thing
	 - Add Thing
	 - Add Cloud Variable > Declare variable name > Select variable type > Select Variable permission >  Select update policy >  Click Add Variable
	 - Create 3 variables as: 
		 -	led, bool, R&W, On Change
		 -	humi, Relative Humidity, Read Only, On Change
		 -	temp, Temperature  Sensor (C), Read Only, On Change
		 
	 
	- Right sidebar >  Associate Device > Select recently configured Device (esp32).
	- Right Sidebar >  Network > Set WiFi Name, Password and the downloaded secret key.
	- Top Bar > Sketch > Download Sketch (It'll download a folder with the necessary files).

## Step 2 : IDE Config

- Unzip it and open the sketch file.
- Go to [GitHub file](https://github.com/Orion-Pax01/IoT/blob/main/esp32_ardcloud/sketch.cpp), which has the sketch code.
- Take that code and put in the sketch file you have downloaded.
- Go the Arduino IDE and open all the downloaded files there.
- Update the secrets.h with the Device Key, WiFi Password and WiFi SSID.
- Go to thingProperties.h and update the same.
- Upload Code.

## Step 3 :  DashBoard

- Sidebar >  Dashboards > Create new Dashboard.
- Add > Add Visualization widget (Gauge) > Link Variable > Humi (Variable) >  Change Widget Name.
- Do the Same for temperature.
- Add Widget > Switch > Link Variable > Link with led variable.
- You can download the Sensor Data.
