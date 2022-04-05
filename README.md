# NSA_Ghidra_HeaderFile_Reverse_Engeneering

HowTo reverse engineer a c or c++ header file.

The purpose of this material is to show how to reverse engeneer a .h header file in c/c++ if you don't have one.
This is a tiny concept of proof followed by a few examples.

It can happen software is shipped only with the .so library file. To use the .so library file yourself, you 
have to create a .h header file yourself if you want to interact with the library at programming level.

This repository gives a insight how to access a `.so` library by creating your own header file.
It is also possible to modify `elf` files in the same way with Ghidra.

# Howto install Ghidra in Linux.

Terminal commands:

        # Kali's repository key, look at : https://http.kali.org/kali/pool/main/k/kali-archive-keyring for new key's.
        wget https://http.kali.org/kali/pool/main/k/kali-archive-keyring/kali-archive-keyring_2022.1_all.deb 
        sudo dpkg -i kali-archive-keyring_2022.1_all.deb 
        # A debugger:
        sudo apt-get install gdb 
        # Java:
        sudo apt-get instal default-jdk
        # Kali repository :
        sudo echo "deb http://http.kali.org/kali kali-rolling main non-free contrib" >> /etc/apt/sources.list 
        sudo echo "deb-src http://http.kali.org/kali kali-rolling main non-free contrib" >> /etc/apt/sources.list 
        sudo apt-get update 
        # Ghidra :
        apt-get install ghidra 
        # Run Ghidra :
        ghidra
        
Edit /bin/ghidra, edit last line in file to `fg` foreground mode :

     "${SCRIPT_DIR}"/support/launch.sh fg Ghidra "${MAXMEM}" "" ghidra.GhidraRun "$@"
                                       

# Excersize_0, simple example.

1. We have a tiny library called `libHackMe.so` wich was shipped with no .h header file.

        The goal is to set and get a variable :
        std::string myString;
      
2. We have a Qt gui app called HackMeExe. Just a tiny program to load above libary.

        This app uses the above library to set and get the value of myString. But we have no header... ???? Howto do this?
        
        
3. We just guess how the header should look like. Inspecting the `libHackMe.so` file with the Gidra decompiler will gives us info in c++ language.

        In the file HackMeRE (Reverse Engeneering) we write down how the header file should look like. 
        Notice, We don't say anything about `myString`. So let's see how magic looks like.
        
4. App terminal output :        

        the string is : set the password
      
5. Conclusion :

        It is possible to make benefits off .so libaries when they are not shipped with header file.
        
        
        
# Excersize_1, using a external .so library simple example

Attachment : https://github.com/grotius-cnc/NSA_Ghidra_HeaderFile_Reverse_Engeneering/releases/tag/1.0.0

        This excersize is demonstrating how to reverse engineer a DraftSight library and create a .h header for it.
        Luckely we had a full directory of API header files attached with the .deb archive. This was used as cheetsheet.
        
        By using Ghidra we where able to create a new header file for the .so library.
        
        In the qt gui app `HackMeExe` we included the new header file : 
       
        The output in terminal :

        string 1 size:9
        string 2 size:16
        String 1:0
        String 2:1 💯
        
# Excersize_2,  
        
