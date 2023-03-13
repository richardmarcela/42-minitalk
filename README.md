# 42-minitalk

![imagem](https://user-images.githubusercontent.com/101434516/212424039-fc6ad919-de75-4143-804d-a6748d0fcafc.png)

This is a 42 project. The purpose is to create a data exchange between server and client with UNIX signals. 

### 1 - First things first, you need to clone this repository: 

    git clone https://github.com/richardmarcela/42-minitalk.git
  
### 2 - Go to Minitalk and run <b>make</b>

    cd 42-minitalk/
    make
        
### 3 - Run server to get its PID and use it on client side to send the message you want. 
    
    ./server
    ./client <server_PID> <message>

and that's basically it! :)
