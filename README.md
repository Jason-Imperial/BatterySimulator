---
Title: BatterySimulator
Contributors: Lingding Zhang, Yang Jiang
---

# Statement
Welcome to use this simulator!   
To use this simulator, you should install OpenFOAM6 and ParaView5.4.0 on your computer as well.  
This simulator is under GPLv3 which means you can use it for free. However, you **cannot** use it for any commercial purpose. 
The simulator has been tested successfully under ubuntu-18.04.6 environment, please ensure your system environment is higher than this one(ubuntu-20 is also acceptable).

# Installation Guide
1. Use `git clone` command to get the *BatterySimulator* folder or download the .zip file directly.
2. Open the folder and you will see two subfolders, *GUI* and *SourceCode*. If you just want to use the simulator, just ignore *SourceCode* folder. 
3. Make sure `make` module is installed on your computer correctly. If not, install it by command `sudo apt-get install make`.
4. Make sure OpenFOAM6 and ParaView5.4.0 are already installed on your computer correctly. If not, follow the steps on <a href="https://openfoam.org/download/6-ubuntu/">official site</a>.
5. Find the file */opt/openfoam6/etc/controlDict* and use `sudo` command to open it. Find the line `dimensionSet 1;`(You can use `ctrl+f` to locate), then change `1` to `0` and save it.
6. Open terminal under *GUI* folder and input `./BatterySimulator`, then you can use the simulator.

* If you have problems with running the simulator, below methods may help you
* Open terminal where you can see *GUI* folder, and input command `sudo chmod -R 777 GUI`.
* Download *Qt Designer* or *Qt Creator* from Qt official site(more recent version ubuntu-18 and ubuntu-20 should already come with Qt Designer)

# User guide
To use this simulator is very simple, you only need to follow the hints on the interfaces and start to create your own projects!  
There are only a few things that need a bit more explanations:
1. If you are the first time to run a project, you **must** click **Modify* button on Geometry interface at least once even if you do not change parameters on this interface.
2. The GUI embeds the linux terminal function. You don't need to input any command during the process, however, if you want to execute commands, you can do it.
3. You can view your geometry through *View Geometry* once you clicked **Modify* button on Geometry interface(This means related geometry files will be generated). This will open ParaView and later operations will be perforamed through ParaView instead of BatterySimulator.
4. Once you generated related results files through *Run/Resume* button on Control interface, you can click *View Results*. This will open a new interface, and you can view kinds of graphs intuitively.

# Citing BatterySimulator
Any academic work using this code or derivatives thereof, **_Must_** cite the original paper that this code was released alongside.
