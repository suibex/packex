#include <iostream>
#include <cstring>
#include <stdio.h>
#include <cstdlib>
#include <string>
using namespace std;
//Downloading archives
void disDownload()
{   
    
    string disc;
    string debian;
    string gzip;

    string distro;
    cout<<"What version of Discord do you want [debian,tar] ? ";
    cin>>distro;
    if(distro.compare("debian")==0 || distro.compare("DEBIAN")==0)
    {
        cout<<"\nAre you sure [Y][N] ? ";
        cin>> debian;
        if(debian.compare("y")==0 || debian.compare("yes")==0 || debian.compare("Y")==0)
        {
            cout<<"\nDiscord downloaded.\n";
            system("wget -O discord.deb 'https://discordapp.com/api/download?platform=linux&format=deb'");



        }  
        else if(debian.compare("n")==0 || debian.compare("no")==0 || debian.compare("N")==0)
        {
            cout<<"\nCanceled.";
            exit;


        }


    }
   else if(distro.compare("tar")==0)
   {
        cout<<"\nAre you sure [Y][N] ? ";
        cin>> gzip;
        if(gzip.compare("y")==0 || gzip.compare("yes")==0|| gzip.compare("Y")==0)
        {
                    cout<<"Discord downloaded.\n";
                    system("wget -O discord-0.0.13.tar.gz 'https://discordapp.com/api/download?platform=linux&format=tar.gz'");



        }  
        else if(gzip.compare("n")==0 || gzip.compare("no")==0|| gzip.compare("N")==0)
        {
            cout<<"\nCanceled.";
            exit;


        }



   }
   
}
void TeamViewer()
{
    string teamview;
    string operz;
    cout<<"Loading packages...\n";

    cout<<"Are you sure [Y][N] ? ";
    cin>>operz;
    if(operz.compare("Y") == 0 || operz.compare("y") == 0 || operz.compare("YES")==0)
    {
        
        cout<<"\nTeamviewer downloaded.\n";
        system("wget -O teamviewer_15.15.5_amd64.deb https://download.teamviewer.com/download/linux/teamviewer_amd64.deb");
    }
    else if(operz.compare("n")==0 || operz.compare("N") || operz.compare("NO"))
    {

        cout<<"Canceled.\n";
        exit;
    }
}

void Vscode()
{
    string vscode;
    string oper;
    cout<<"Loading packages...\n";

    cout<<"Are you sure [Y][N] ? ";
    cin>>oper;
    if(oper.compare("Y") == 0 || oper.compare("y") == 0 || oper.compare("YES")==0)
    {
        
        cout<<"\nSteam downloaded.\n";
        system("wget  -O  steam_latest.deb  https://cdn.cloudflare.steamstatic.com/client/installer/steam.deb ");
    }
    else if(oper.compare("n")==0 || oper.compare("N") || oper.compare("NO")==0)
    {

        cout<<"Canceled.\n";
        exit;
    }
}

void IDA()
{
    string ajda;
    cout<<"Loading packages...\n";

    cout<<"Are you sure [Y][N] ? ";
    cin>>ajda;
    if(ajda.compare("Y") == 0 || ajda.compare("y") == 0 || ajda.compare("YES")==0)
    {
        
        cout<<"\nIDA downloaded.\n";
        system("wget  -O  idafree70_linux.run https://out7.hex-rays.com/files/idafree70_linux.run ");
    }
    else if(ajda.compare("n")==0 || ajda.compare("N") || ajda.compare("NO")==0)
    {

        cout<<"Canceled.\n";
        exit;
    }
}

void HDDSentinel()
{
    string hdd;
    cout<<"Loading packages...\n";

    cout<<"Are you sure [Y][N] ? ";
    cin>>hdd;
    if(hdd.compare("Y") == 0 || hdd.compare("y") == 0 || hdd.compare("YES")==0)
    {
        
        cout<<"\nHDD Sentinel downloaded.\n";
        system("wget  -O  hdsentinel_gui64bit.tar.xzhttps://www.hdsentinel.com/hdslin/hdsentinel_gui64bit.tar.xz ");
    }
    else if(hdd.compare("n")==0 || hdd.compare("N") || hdd.compare("NO")==0)
    {

        cout<<"Canceled.\n";
        exit;
    }
}

void OBS()
{
    string obes;
    cout<<"Are you sure [Y][N] ?";
    cin>> obes;
    if(obes.compare("Y")==0 || obes.compare("y")==0 || obes.compare("YES")==0)
    {
        cout<<"Downloading ffmpeg..";
        system("sudo apt install ffmpeg");
        cout<<"Adding OBS repository.";
        system("sudo add-apt-repository ppa:obsproject/obs-studio");
        cout<<"Installing OBS";
        system("sudo apt install obs-studio");

    }
    else if(obes.compare("n")==0 || obes.compare("N")==0 || obes.compare("NO")==0)
    {
        
        cout<<"Canceled.\n";
        exit;
    }
}

void Viber()
{
    string viberz;
    cout<<"Are you sure [Y][N] ? ";
    cin>>viberz;
    if(viberz.compare("y")==0 || viberz.compare("Y")==0 || viberz.compare("YES")==0)
    {   
        cout<<"Viber downloaded.\n";
        system("wget -O viber.deb https://download.cdn.viber.com/cdn/desktop/Linux/viber.deb");
    }
    else if(viberz.compare("n")==0 || viberz.compare("N")==0 || viberz.compare("NO")==0)
    {   
        cout<<"\nCanceled.\n";
        exit;
    }
}

int main(char argc,const char *argv[])
{
    const char *team = "teamviewer";
    const char *obzi="obs";
    const char *vajber="viber";

    const char *hddsent= "hddsentinel";
    const char *help = "--help";
    const char *discord="discord";
    const char *steam = "steam";
    const char *ida_name = "ida";
    if(argc != 2)
    {
        cout<<"\rUSAGE: /packex  {package} -[DOWNLOAD PACKAGES]\n /packex --help  [HELP FOR STARTERS]\n";
        return 1;

        
        
    }
    if(strcmp(argv[1],discord)==0)
    {
        disDownload();

        
        return 0;
    }
    else if(strcmp(argv[1],team)==0)
    {
        TeamViewer();
        return 0;



    }
    else if(strcmp(argv[1],help)==0)
    {
        system("cat packex_h.txt");
    }
    else if(strcmp(argv[1],steam)==0)
    {
    
        Vscode();
        return 0;



    }
    else if(strcmp(argv[1],ida_name)==0)
    {
        IDA();
        return 0;



    }
    else if(strcmp(argv[1],hddsent)==0 )
    {
        HDDSentinel();
        return 0;
    }
    else if(strcmp(argv[1],obzi)==0)
    {
        OBS();
        return 0;
    }
    else if(strcmp(argv[1],vajber)==0)
    {   
        Viber();
        return 0;
    }
}
