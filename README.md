# AAL
Abstracted Algorithms Layer

## How to use AAL library with custom project
once the project is exported from STM32CubeMX for Truestudio, folowing changes should be taken before openning the Truestudio project.

1- Edit .project file which is located at "./TrueSTUDIO/<project_name>/.project"

2- Add the following line of code after statement "<nature>org.eclipse.cdt.core.cnature</nature>" and save it.

	<nature>org.eclipse.cdt.core.ccnature</nature>

3- Rename the source file "./Src/main.c" to "./Src/main.cpp" 

4- Open Truestudio and create a workspace at ./TrueSTUDIO/

5- Open the project from "File" menu at "./TrueSTUDIO/<project_name>/"

6- Select the project in the "Project Explorer" and hit "Project-> Properties"

7- Under "C/C++ -> Paths and Symbols -> Include" choose "GNU C++" and add include directories which are listed at "GNU C" and also add the AAL Library's "inc" path.

8- Under same option go to Libraries and add the keyword "AAL"

9- Under same option go to Library Paths and add AAL's "AAL\Release\" folder path  

10- In Properties window go to "C/C++ Build -> Settings -> Tool Settings -> C++ Compiler -> Symbols"

11- Add following two symbols to the end of "defined symbols" list

	USE_HAL_DRIVER

	STM32F407xx      --> (if using F407 chip)

12- Apply changes, press OK.

13- in Project Explorer window, under "Applications -> User" delete main.c file, then drag and drop main.cpp file in the list.

14- Add library headers as required.

	ex. #include <AAL/HallEncoder.h>

15- Compile and run the project. 