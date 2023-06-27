#ifndef PESO_H_INCLUDED
#define PESO_H_INCLUDED

void PesoMulher() {
    clrscr1();
    textcolor(5);
    printf(R"EOF(
 | _ \___ ______  |  \/  |___ __| (_)___  | _ \__ _ _ _ __ _  |  \/  |_  _| | |_  ___ _ _ 
 |  _/ -_)_-< _ \ | |\/| / -_) _` | / _ \ |  _/ _` | '_/ _` | | |\/| | || | | ' \/ -_) '_|
 |_| \___/__\___/ |_|  |_\___\__,_|_\___/ |_| \__,_|_| \__,_| |_|  |_|\_,_|_|_||_\___|_|)EOF");
 textcolor(15);
    printf(" \n1,50 metros   | 42 kg - 57 kg\n1,55 metros   | 45 kg - 61 kg\n1,65 metros   | 51 kg - 69 kg\n1,70 metros   | 54 kg - 73 kg\n1,75 metros   | 57 kg - 77 kg\n1,80 metros   | 61 kg - 82 kg\n1,85 metros   | 64 kg - 86 kg\n1,90 metros   | 68 kg - 91 kg\n");
}

void PesoHomem() {
    clrscr1();
    textcolor(1);
    printf(R"EOF(
 | _ \___ ______  |  \/  |___ __| (_)___  | _ \__ _ _ _ __ _  | || |___ _ __  ___ _ __  
 |  _/ -_)_-< _ \ | |\/| / -_) _` | / _ \ |  _/ _` | '_/ _` | | __ / _ \ '  \/ -_) '  \ 
 |_| \___/__\___/ |_|  |_\___\__,_|_\___/ |_| \__,_|_| \__,_| |_||_\___/_|_|_\___|_|_|_|)EOF");    
 textcolor(15);
    printf("Peso Ideal Para os Homens\n1,50 metros   | 45 kg - 59 kg\n1,55 metros   | 48 kg - 63 kg\n1,60 metros   | 51 kg - 67 kg\n1,65 metros   | 54 kg - 71 kg\n1,70 metros   | 57 kg - 75 kg\n1,75 metros   | 61 kg - 80 kg\n1,80 metros   | 64 kg - 85 kg\n1,85 metros   | 68 kg - 90 kg\n1,90 metros   | 72 kg - 95 kg\n");
}

#endif // PESO_H_INCLUDED
