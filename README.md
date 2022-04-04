# NSA_Ghidra_HeaderFile_Reverse_Engeneering
HowTo reverse engeneer a c++ header file

The purpose of this material is to show how to reverse engeneer a .h header file in c/c++ if you don't have one.
This is a tiny concept of proof.

Most of the time commercial software is shipped only with the .so library file. To use the .so library file yourself, you 
have to create a .h header file yourself.

This repository gives a tiny example how to access .so libaray value's when the header file of the library is not provided, lost etc.

The example is as follows :

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
        
        
        
        
        
