---
title: "Esportazione delle impostazioni | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "IDE, esportazione delle impostazioni mediante il framework di pacchetto gestito"
  - "framework di pacchetto gestito, esportazione delle impostazioni di ambiente"
  - "impostazioni utente [Visual Studio SDK], esportazione mediante il framework di pacchetto gestito"
  - "impostazioni IDE, esportazione mediante il framework di pacchetto gestito"
ms.assetid: cb3ddb38-4e75-4f05-a83a-8396345bc36c
caps.latest.revision: 24
caps.handback.revision: 24
manager: "douge"
---
# Esportazione delle impostazioni
L'ambiente di sviluppo integrato di \(IDE\) [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] utilizza le classi che implementano l'interfaccia e le classi di <xref:Microsoft.VisualStudio.Shell.IProfileManager> registrate come supporto a quella specificata di un VSPackage per salvare lo stato di un VSPackage.  
  
 Poiché l'ide crea un'istanza di una classe che implementa l'interfaccia di <xref:Microsoft.VisualStudio.Shell.IProfileManager> per supportare le impostazioni, <xref:Microsoft.VisualStudio.Shell.IProfileManager> deve essere implementato in una classe indipendente.  
  
> [!NOTE]
>  Non distribuire <xref:Microsoft.VisualStudio.Shell.IProfileManager> sulla classe che implementa <xref:Microsoft.VisualStudio.Shell.Package>.  
  
### Per implementare l'esportazione delle impostazioni  
  
1.  Dichiarare una classe che implementa le impostazioni di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] .  
  
     Dichiarare una classe come implementare l'interfaccia di <xref:Microsoft.VisualStudio.Shell.IProfileManager> e fornirla a un GUID.  
  
    > [!NOTE]
    >  Le classi che implementano <xref:Microsoft.VisualStudio.Shell.IProfileManager> deve implementare anche <xref:System.ComponentModel.IComponent>.  Questa operazione può essere eseguita derivando una classe da <xref:System.ComponentModel.Component>.  
  
     Di seguito è riportato un esempio:  
  
    ```  
    [Guid("XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX")]  
    internal class MyPackageProfileManager : Component, IProfileManager   
    ```  
  
2.  Verificare che la classe che implementa le impostazioni ottiene le informazioni sullo stato corrette.  Questa procedura è specifica di ogni package VS e può includere ottenere lo stato da automazione, eseguire una query sulle chiavi del Registro di sistema, o interrogare il package VS.  
  
     In genere, come nell'esempio seguente, utilizzare l'implementazione del metodo di <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromStorage%2A> per convalidare e appoggio delle informazioni sullo stato di un VSPackage.  
  
    > [!NOTE]
    >  Il metodo di <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromStorage%2A> viene chiamato dall'IDE quando si inizializza il package VS che supporta.  
  
     In questo caso, l'implementazione del metodo di <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromStorage%2A> effettuare queste operazioni:  
  
    -   Ottiene l'accesso alle informazioni sullo stato nella configurazione e le informazioni di configurazione correnti di un VSPackage archiviate nel Registro di sistema.  
  
        ```vb#  
        Dim mySvc As MyPackageService = TryCast(GetService(GetType(IVSMDMyPackage)), MyPackageService)   
        Dim package As Package = TryCast(GetService(GetType(Package)), Package)   
        Dim rootKey As RegistryKey = package.UserRegistryRoot  
        ```  
  
        ```c#  
        MyPackageService mySvc = GetService(typeof(IVSMDMyPackage)) as MyPackageService;  
        Package package = GetService(typeof(Package)) as Package;  
        RegistryKey rootKey = package.UserRegistryRoot;  
        ```  
  
    -   A seconda del valore restituito dal metodo di `MakeCurrentSettingTheDefault` del package VS, aggiorna le impostazioni del Registro di sistema utilizzando lo stato corrente di package VS, lo stato o tramite le impostazioni del Registro di sistema.  
  
        ```vb#  
        If mySvc.MyPackage.MakeCurrentSettingTheDefault() Then   
            DirectCast(mySvc.MyPackage.packageState, IComPropertyBrowser).SaveState(pbrsKey)   
        Else   
            DirectCast(mySvc.MyPackage.packageState, IComPropertyBrowser).LoadState(pbrsKey)   
        End If  
        ```  
  
        ```c#  
        if (mySvc.MyPackage.MakeCurrentSettingTheDefault()){  
          ((IComPropertyBrowser)mySvc.MyPackage.packageState).SaveState(pbrsKey);  
        }else{  
          ((IComPropertyBrowser)mySvc.MyPackage.packageState).LoadState(pbrsKey);  
        }  
        ```  
  
         Per semplicità in questo esempio, a meno che il metodo di `MakeCurrentSettingsTheDefault` restituisca `true`, lo stato corrente viene reimpostato sempre predefiniti che viene memorizzato nel Registro di sistema.  
  
3.  Verificare che la classe che implementa le impostazioni anche mantiene lo stato su disco.  
  
     Effettiva scrittura di informazioni sullo stato del file su disco delle impostazioni venga sempre eseguita dall'implementazione della classe del metodo di <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToXml%2A> .  Le specifiche di un'operazione del writer delle impostazioni dipendono da essa.  
  
     Tuttavia, la classe deve accedere alle informazioni sullo stato e deve utilizzare l'interfaccia fornita di <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter> per salvare i dati nel file dell'impostazione.  
  
     In genere, come nell'esempio, l'implementazione del metodo di <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToXml%2A> non convalida le informazioni sullo stato.  La convalida viene eseguita nel metodo di <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromStorage%2A> .  Invece, l'implementazione solo ottiene l'accesso alle informazioni sullo stato e lo scrive, in questo caso, in formato stringa.  
  
    ```vb#  
    Dim mySvc As MyPackageService = TryCast(GetService(GetType(MyPackage)), MyPackageService)   
    If mySvc IsNot Nothing Then   
        ' Information is stored in a StateObject   
        Dim myState As StateObject = mySvc.MyPackage.packageState   
        writer.WriteSettingString("PbrsAlpha", (If(myState.SortState = SortState.Alphabetical, "1", "0")))   
        writer.WriteSettingString("PbrsShowDesc", (If(myState.HelpVisible, "1", "0")))   
    End If  
  
    ```  
  
    ```c#  
    MyPackageService mySvc = GetService(typeof(MyPackage)) as MyPackageService;  
    if (mySvc != null) {  
      // Information is stored in a StateObject  
      StateObject myState = mySvc.MyPackage.packageState;  
     writer.WriteSettingString(   
                                "PbrsAlpha",   
                                (myState.SortState == SortState.Alphabetical ? "1" : "0"));  
      writer.WriteSettingString(   
                                "PbrsShowDesc",   
                                (myState.HelpVisible ? "1" : "0"));  
    }  
    ```  
  
     I dettagli di implementazione sono le seguenti:  
  
    -   Oltre ai dati esplicitamente scritti eimplementazione del metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsUserSettings.ExportSettings%2A> , le API inoltre salva le informazioni sulla versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] .  Di conseguenza, le impostazioni salvate possono essere si confrontano alla versione dell'IDE che le ha generate durante l'importazione delle impostazioni.  
  
    -   Il valore dell'argomento di `pszSettingName` assegnato a un metodo di interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter> necessario identificare in modo univoco ogni elemento dati salvato in una categoria di impostazioni.  
  
        > [!NOTE]
        >  I nomi devono essere univoci solo nella classe di implementazione.  L'ide utilizza il GUID della classe che implementa le impostazioni e il valore di `pszSettingName` per identificare ogni impostazione salvata.  Se più di un metodo di <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter> con lo stesso valore di `pszSettingName` viene chiamato, il valore originale viene sovrascritto nel file di impostazioni.  
  
    -   Il file di impostazioni supporta l'accesso ai dati casuali, pertanto l'ordine delle operazioni di lettura e scrittura non è importante.  Nell'esempio seguente, l'ordine delle operazioni del writer nell'implementazione del metodo di <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToXml%2A> rappresenta l'opposto di operazioni di lettura nel metodo di <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromXml%2A> .  
  
    -   Se l'implementazione può dati di mapping in uno dei quattro formati supportati, pertanto non è la restrizione su o sul tipo di dati possono essere scritti.  
  
        > [!NOTE]
        >  La suddivisione del lavoro tra <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromStorage%2A> e i metodi di <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToXml%2A> dipenderà da ed è in qualche modo arbitrario.  Ad esempio, l'implementazione potrebbe essere riscritta utilizzando un'implementazione vuota del metodo di <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromStorage%2A> e facendo tutti i eseguire il Registro di sistema e query dello stato nel metodo di <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToXml%2A> .  
  
4.  Registrare le impostazioni che implementano la classe come fornire supporto in un VSPackage.  
  
     Applicare un'istanza di <xref:Microsoft.VisualStudio.Shell.ProvideProfileAttribute> costruita utilizzando <xref:System.Type> della classe che implementa <xref:Microsoft.VisualStudio.Shell.IProfileManager> implementazione di un VSPackage <xref:Microsoft.VisualStudio.Shell.Package> .  
  
    ```vb#  
    <ProvideProfile(GetType(MyPackageProfileManager), "CoreUI", "MyPackage", 1004, 1004, False)> _   
    <Guid("YYYYYYYY-YYYY-YYYY-YYYY-YYYYYYYYYYYY")> _   
    Class MyPackage   
        Inherits Package   
    End Class  
    ```  
  
    ```c#  
    [ProvideProfile(typeof(MyPackageProfileManager), "CoreUI", "MyPackage", 1004, 1004, false)]  
    [Guid("YYYYYYYY-YYYY-YYYY-YYYY-YYYYYYYYYYYY")]  
    class MyPackage: Package   
    ```  
  
     In questo caso, l'attributo all'IDE che la classe di `MyPackageProfileManager` fornisce un'implementazione delle impostazioni alla classe di `MyPackage` .  Il passaggio di impostazioni personalizzato nel Registro di sistema viene creato in \\Software\\Microsoft\\VisualStudio HKLM \\*versione*\\UserSettings\\ CoreUI\_MyPackage, dove *versione* è la versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], ad esempio, 10,0.  
  
     Per ulteriori informazioni, vedere [Supporto per le impostazioni utente](../Topic/Support%20for%20User%20Settings.md) e <xref:Microsoft.VisualStudio.Shell.ProvideProfileAttribute>.  
  
## Esempio  
 Nell'esempio seguente viene implementato <xref:Microsoft.VisualStudio.Shell.IProfileManager> su una classe.  
  
```vb#  
Imports System   
Imports System.Runtime.InteropServices   
Imports Microsoft.VisualStudio.Shell   
Imports Microsoft.VisualStudio.Shell.Interop   
Imports Microsoft.Win32   
Imports myPackageNameSpace   
Namespace myProfileManagerNameSpace  
  
    <Guid("XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX")> _   
    Friend Class MyPackageProfileManager   
        Inherits System.ComponentModel.Component   
        Implements IProfileManager   
        Friend Const m_supportVer As Integer = 8   
        Public Sub SaveSettingsToXml(ByVal writer As IVsSettingsWriter)   
            Dim mySvc As MyPackageService = TryCast(GetService(GetType(MyPackage)), MyPackageService)   
            If mySvc IsNot Nothing Then   
                ' Information is stored in a StateObject.   
                Dim myState As StateObject = mySvc.MyPackage.packageState   
                writer.WriteSettingString("PbrsAlpha", (If(myState.SortState = SortState.Alphabetical, "1", "0")))   
                writer.WriteSettingString("PbrsShowDesc", (If(myState.HelpVisible, "1", "0")))   
            End If   
        End Sub   
  
        Public Sub LoadSettingsFromXml(ByVal reader As IVsSettingsReader)   
  
            Dim pnMajor As Integer, pnMinor As Integer, pnBuild As Integer   
            ' First, check if data is obtained from the correct major version   
            reader.ReadVersion(pnMajor, pnMinor, pnBuild)   
            If pnMajor <> m_supportVer Then   
                reader.ReportError("Unsupported Version")   
            Else   
                Dim mySvc As MyPackageService = TryCast(GetService(GetType(IVSMDMyPackage)), MyPackageService)   
                If mySvc IsNot Nothing Then   
                    Dim value As String   
                    Dim myState As StateObject = mySvc.MyPackage.packageState   
                    reader.ReadSettingString("PbrsShowDesc", value)   
                    ' Not all values must be present.   
                    If value Is Nothing OrElse value = "" Then   
                        reader.ReportError("Unable to Help Visibility Setting")   
                    Else   
                        myState.HelpVisible = Not value.Equals("0")   
                    End If   
                    reader.ReadSettingString("PbrsAlpha", value)   
                    ' Not all values must be present.   
                    If value Is Nothing OrElse value = "" Then   
                        reader.ReportError("Unable to Retrieve Sort Value")   
                    Else   
                        If Not value.Equals("0") Then   
                            myState.SortState = SortState.Alphabetical   
                        Else   
                            myState.SortState = SortState.Categorized   
                        End If   
                    End If   
                End If   
            End If   
        End Sub   
  
        Public Sub SaveSettingsToStorage()   
            Dim mySvc As MyPackageService = TryCast(GetService(GetType(IVSMDMyPackage)), MyPackageService)   
            Dim package As Package = TryCast(GetService(GetType(Package)), Package)   
            Dim rootKey As RegistryKey = package.UserRegistryRoot   
  
            If mySvc.MyPackage.packageState IsNot Nothing Then   
                Using rootKey   
                    Using pbrsKey As RegistryKey = rootKey.CreateSubKey(Me.[GetType]().Name)   
                        Using pbrsKey   
                            DirectCast(mySvc.MyPackage.packageState, IComPropertyBrowser).SaveState(pbrsKey)   
                        End Using   
                    End Using   
                End Using   
            End If   
        End Sub   
  
        Public Sub LoadSettingsFromStorage()   
            Dim mySvc As MyPackageService = TryCast(GetService(GetType(IVSMDMyPackage)), MyPackageService)   
            Dim package As Package = TryCast(GetService(GetType(Package)), Package)   
            Dim rootKey As RegistryKey = package.UserRegistryRoot   
            Using rootKey   
                Dim pbrsKey As RegistryKey = rootKey.OpenSubKey(Me.[GetType]().Name)   
                If pbrsKey IsNot Nothing Then   
                    Using pbrsKey   
                        If mySvc.MyPackage.MakeCurrentSettingTheDefault() Then   
                            DirectCast(mySvc.MyPackage.packageState, IComPropertyBrowser).SaveState(pbrsKey)   
                        Else   
                            DirectCast(mySvc.MyPackage.packageState, IComPropertyBrowser).LoadState(pbrsKey)   
                        End If   
                    End Using   
                End If   
            End Using   
        End Sub   
    End Class   
End Namespace   
  
Convert C# to VB.NET  
  
```  
  
```c#  
namespace myProfileManagerNameSpace  {  
  
  using System;  
  using System.Runtime.InteropServices;  
  using Microsoft.VisualStudio.Shell;  
  using Microsoft.VisualStudio.Shell.Interop;  
  using Microsoft.Win32;  
  using myPackageNameSpace;  
  
  [Guid("XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX")]  
  internal class MyPackageProfileManager : System.ComponentModel.Component , IProfileManager {  
    internal const int m_supportVer = 8;  
    public void SaveSettingsToXml(IVsSettingsWriter writer) {  
      MyPackageService mySvc = GetService(typeof(MyPackage)) as MyPackageService;  
      if (mySvc != null) {  
        // Information is stored in a StateObject.  
        StateObject myState = mySvc.MyPackage.packageState;  
        writer.WriteSettingString(   
                                  "PbrsAlpha",   
                                  (myState.SortState == SortState.Alphabetical ? "1" : "0"));  
        writer.WriteSettingString(   
                                  "PbrsShowDesc",   
                                  (myState.HelpVisible ? "1" : "0"));  
      }  
    }  
  
    public void LoadSettingsFromXml(IVsSettingsReader reader)  
    {  
  
      int pnMajor, pnMinor, pnBuild;  
      // First, check if data is obtained from the correct major version   
      reader.ReadVersion(pnMajor, pnMinor, pnBuild);  
      if (pnMajor != m_supportVer){  
        reader.ReportError("Unsupported Version");  
      }else{  
        MyPackageService mySvc = GetService(typeof(IVSMDMyPackage)) as MyPackageService;  
        if (mySvc != null){  
          string value;  
          StateObject myState = mySvc.MyPackage.packageState;  
          reader.ReadSettingString("PbrsShowDesc", out value);  
          // Not all values must be present.  
          if (value == null || value == ""){  
              reader.ReportError("Unable to Help Visibility Setting");  
          }else{  
            myState.HelpVisible = !value.Equals("0");  
          }  
          reader.ReadSettingString("PbrsAlpha", out value);  
          // Not all values must be present.  
          if (value == null || value == ""){  
              reader.ReportError("Unable to Retrieve Sort Value");  
          }else{  
            if (!value.Equals("0")){  
              myState.SortState = SortState.Alphabetical;  
            }else{  
              myState.SortState = SortState.Categorized;  
            }  
          }  
        }  
      }  
    }  
  
    public void SaveSettingsToStorage() {  
      MyPackageService mySvc = GetService(typeof(IVSMDMyPackage)) as MyPackageService;  
      Package package = GetService(typeof(Package)) as Package;  
      RegistryKey rootKey = package.UserRegistryRoot;  
  
      if (mySvc.MyPackage.packageState != null) {  
        using (rootKey) {  
          using(RegistryKey pbrsKey = rootKey.CreateSubKey(this.GetType().Name)) {  
            using (pbrsKey) {  
              ((IComPropertyBrowser)mySvc.MyPackage.packageState).SaveState(pbrsKey);  
            }  
          }  
        }  
      }  
    }  
  
    public void LoadSettingsFromStorage() {  
      MyPackageService mySvc = GetService(typeof(IVSMDMyPackage)) as MyPackageService;  
      Package package = GetService(typeof(Package)) as Package;  
      RegistryKey rootKey = package.UserRegistryRoot;  
      using (rootKey) {  
        RegistryKey pbrsKey = rootKey.OpenSubKey(this.GetType().Name);  
        if (pbrsKey != null) {  
          using (pbrsKey) {  
            if (mySvc.MyPackage.MakeCurrentSettingTheDefault()){  
              ((IComPropertyBrowser)mySvc.MyPackage.packageState).SaveState(pbrsKey);  
            }else{  
              ((IComPropertyBrowser)mySvc.MyPackage.packageState).LoadState(pbrsKey);  
            }  
          }  
        }  
      }  
    }  
  }  
}  
```  
  
## Vedere anche  
 <xref:Microsoft.VisualStudio.Shell.IProfileManager>   
 <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter>   
 [Importazione delle impostazioni](../misc/importing-settings.md)   
 [Supporto per le impostazioni utente](../Topic/Support%20for%20User%20Settings.md)