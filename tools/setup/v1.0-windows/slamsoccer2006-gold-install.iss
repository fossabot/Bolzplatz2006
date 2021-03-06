; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

[Setup]
AppName=Slam Soccer 2006 - Gold Edition
AppVerName=Slam Soccer 2006 - Gold Edition - v1.0
AppPublisher=Xenoage Software
AppPublisherURL=http://www.xenoage.com
AppSupportURL=http://www.xenoage.com/slamsoccer2006/
AppUpdatesURL=http://www.xenoage.com/slamsoccer2006/
DefaultDirName={pf}\Slam Soccer 2006
DefaultGroupName=Slam Soccer 2006
AllowNoIcons=yes
LicenseFile=D:\Werkstatt\Bolzplatz2006\setup\v1.0-windows\bolzplatz2006\license-gold.txt
InfoBeforeFile=D:\Werkstatt\Bolzplatz2006\setup\v1.0-windows\other\gold.txt
OutputDir=D:\Werkstatt\Bolzplatz2006\setup\v1.0-windows\output
OutputBaseFilename=slamsoccer2006-gold-install
Compression=lzma
SolidCompression=yes
Uninstallable=no

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Files]
Source: "D:\Werkstatt\Bolzplatz2006\setup\v1.0-windows\other\en\teameditor.exe"; DestDir: "{app}";Flags: ignoreversion
Source: "D:\Werkstatt\Bolzplatz2006\setup\v1.0-windows\other\en\stadiumeditor.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\Werkstatt\Bolzplatz2006\setup\v1.0-windows\bolzplatz2006\gold.jar"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\Werkstatt\Bolzplatz2006\setup\v1.0-windows\bolzplatz2006\license-gold.txt"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\Werkstatt\Bolzplatz2006\setup\v1.0-windows\other\srcgold\*"; DestDir: "{app}\srcgold"; Flags: ignoreversion recursesubdirs createallsubdirs
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Icons]
Name: "{group}\Stadium-Editor"; Filename: "{app}\stadiumeditor.exe"
Name: "{group}\Team-Editor"; Filename: "{app}\teameditor.exe"
