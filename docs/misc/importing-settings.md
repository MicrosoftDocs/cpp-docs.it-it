---
title: "Importazione delle impostazioni | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "impostazioni utente [Visual Studio SDK], importazione mediante il framework di pacchetto gestito"
  - "impostazioni IDE, importazione mediante il framework di pacchetto gestito"
  - "IDE, importazione delle impostazioni mediante il framework di pacchetto gestito"
  - "framework di pacchetto gestito, importazione delle impostazioni di ambiente"
ms.assetid: 943f9a5b-c5a5-45ce-a5a9-8d4c02f15577
caps.latest.revision: 23
caps.handback.revision: 23
manager: "douge"
---
# Importazione delle impostazioni
L'[!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] ambiente di sviluppo integrato \(IDE\) usa le classi che implementano l'interfaccia <xref:Microsoft.VisualStudio.Shell.IProfileManager> e sono registrate per supportare un'implementazione di VSPackage. Questa implementazione viene usata per recuperare lo stato di un VSPackage.  
  
 Poiché l'IDE crea un'istanza della classe che implementa l'interfaccia <xref:Microsoft.VisualStudio.Shell.IProfileManager> per supportare le impostazioni di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], l'interfaccia <xref:Microsoft.VisualStudio.Shell.IProfileManager> deve essere implementata in una classe indipendente.  
  
> [!NOTE]
>  Non implementare <xref:Microsoft.VisualStudio.Shell.IProfileManager> nella classe che implementa <xref:Microsoft.VisualStudio.Shell.Package>.  
  
### Per implementare l'esportazione delle impostazioni  
  
1.  Dichiarare la classe che implementa le impostazioni di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
     Dichiarare una classe come implementazione di <xref:Microsoft.VisualStudio.Shell.IProfileManager> e fornirle un `GUID`.  
  
    > [!NOTE]
    >  Le classi che implementano l'interfaccia <xref:Microsoft.VisualStudio.Shell.IProfileManager> devono implementare anche l'interfaccia <xref:System.ComponentModel.IComponent> Tale operazione può essere eseguita derivando la classe dalla classe <xref:System.ComponentModel.Component>.  
  
     Ad esempio:  
  
    ```  
    [Guid("XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX")]  
    internal class MyPackageProfileManager : Component, IProfileManager   
    ```  
  
2.  Assicurarsi che la classe che implementa le impostazioni recuperi i dati sullo stato dal disco.  
  
     Questa operazione viene eseguita implementando il metodo <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromXml%2A>.  
  
     Le esatte informazioni che devono essere rese persistenti e come verranno ottenute e sottoposte a marshalling dal VSPackage tali informazioni variano per ogni VSPackage.  
  
     Indipendentemente dalle informazioni che devono essere rese persistenti dal VSPackage, la classe che implementa <xref:Microsoft.VisualStudio.Shell.IProfileManager> deve usare l'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader> fornita per recuperare i dati dal file di impostazioni.  
  
     In genere, come illustrato nell'esempio riportato di seguito, <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromXml%2A> convalida anche i dati recuperati e aggiorna lo stato del VSPackage.  
  
    ```vb#  
    Dim mySvc As MyPackageService = TryCast(GetService(GetType(IVSMDMyPackage)), MyPackageService)   
    If mySvc IsNot Nothing Then   
        Dim value As String   
        Dim myState As StateObject = mySvc.MyPackage.packageState   
        reader.ReadSettingString("PbrsShowDesc", value)   
        If value Is Nothing OrElse value = "" Then   
            reader.ReportError("Unable to Help Visibility Setting")   
        Else   
            myState.HelpVisible = Not value.Equals("0")   
        End If   
        reader.ReadSettingString("PbrsAlpha", value)   
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
    ```  
  
    ```c#  
    MyPackageService mySvc = GetService(typeof(IVSMDMyPackage)) as MyPackageService;  
    if (mySvc != null){  
      string value;  
      StateObject myState = mySvc.MyPackage.packageState;  
      reader.ReadSettingString("PbrsShowDesc", out value);  
      if (value == null || value == ""){  
          reader.ReportError("Unable to Help Visibility Setting");  
      }else{  
          myState.HelpVisible = !value.Equals("0");  
      }  
      reader.ReadSettingString("PbrsAlpha", out value);  
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
    ```  
  
     Dettagli sull'implementazione:  
  
    -   Segnalare gli errori all'utente in modo interattivo tramite l'IDE usando il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader.ReportError%2A> dell'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader>:  
  
        ```vb#  
        reader.ReadSettingString("PbrsAlpha", value)   
        If value Is Nothing OrElse value = "" Then   
            reader.ReportError("Unable to Retrieve Sort Value")   
        End If  
        ```  
  
        ```c#  
          reader.ReadSettingString("PbrsAlpha", out value);  
          if (value == null || value == ""){  
              reader.ReportError("Unable to Retrieve Sort Value");  
          }  
        ```  
  
    -   Prima di richiamare effettivamente le impostazioni archiviate, un'implementazione del metodo <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromXml%2A> dovrebbe usare il metodo <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader.ReadFileVersion%2A> per verificare che la versione del metodo [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] che esporta le impostazioni archiviate sia supportata.  
  
         Nell'esempio riportato di seguito, l'implementazione verifica se le impostazioni sono state prodotte da una versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] con un numero di versione principale di `m_supportVer` e in caso contrario segnala un errore.  
  
        ```vb#  
        If pnMajor <> m_supportVer Then   
            reader.ReportError("Unsupported Version")   
        End If  
        ```  
  
        ```c#  
        if (pnMajor != m_supportVer){  
          reader.ReportError("Unsupported Version");  
        }  
        ```  
  
    -   Il file di impostazioni di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] supporta l'accesso casuale ai dati, quindi l'ordine delle operazioni di lettura e scrittura delle impostazioni non è importante. Nell'esempio seguente, l'ordine delle operazioni di scrittura nell'implementazione del metodo <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToXml%2A> è opposto alle operazioni di lettura nel metodo <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromXml%2A>.  
  
    -   Il valore dell'argomento `pszSettingName` fornito a un metodo dell'interfaccia <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter> deve identificare in modo univoco ogni elemento di dati salvato all'interno di una categoria di impostazioni.  
  
        > [!NOTE]
        >  I nomi devono essere univoci solo all'interno dell'ambito della classe di implementazione perché l'IDE usa il GUID della classe che implementa le impostazioni e il valore di `pszSettingName` per identificare ciascuna impostazione salvata. Se più metodi <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter> vengono chiamati con lo stesso valore `pszSettingName`, il valore originale viene sovrascritto nel file di impostazioni.  
  
3.  Assicurare la coerenza tra lo stato del VSPackage e le impostazioni archiviate in locale o memorizzate nella cache.  
  
     Questa operazione viene normalmente eseguita durante l'implementazione del metodo <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToStorage%2A>, come illustrato nell'esempio seguente. I dettagli di questa operazione sono specifici di un VSPackage e possono comprendere il recupero dello stato del VSPackage dall'automazione, l'esecuzione di query sul VSPackage e l'impostazione di chiavi del Registro di sistema.  
  
    > [!NOTE]
    >  Il metodo <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromStorage%2A> deve recuperare le informazioni salvate dal metodo <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToStorage%2A> quando il metodo <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromStorage%2A> viene chiamato dall'IDE durante l'inizializzazione del VSPackage che supporta.  
  
     Nell'esempio seguente, la classe che fornisce il supporto delle impostazioni implementa il metodo <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToStorage%2A>:  
  
    -   Ottenere l'accesso alle informazioni aggiornate sullo stato del VSPackage.  
  
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
  
    -   Usare queste informazioni per aggiornare le impostazioni del Registro di sistema del VSPackage.  
  
        ```vb#  
        If mySvc.MyPackage.packageState IsNot Nothing Then   
            Using rootKey   
                Using pbrsKey As RegistryKey = rootKey.CreateSubKey(Me.[GetType]().Name)   
                    Using pbrsKey   
                        DirectCast(mySvc.MyPackage.packageState, IComPropertyBrowser).SaveState(pbrsKey)   
                    End Using   
                End Using   
            End Using   
        End If  
        ```  
  
        ```c#  
        if (mySvc.MyPackage.packageState != null) {  
          using (rootKey) {  
            using(RegistryKey pbrsKey = rootKey.CreateSubKey(this.GetType().Name)) {  
              using (pbrsKey) {  
                ((IComPropertyBrowser)mySvc.MyPackage.packageState).SaveState(pbrsKey);  
              }  
            }  
          }  
        }  
        ```  
  
    -   > [!NOTE]
        >  La divisione del lavoro tra i metodi <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromXml%2A> e <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToStorage%2A> dipende dall'implementazione ed è in una certa misura arbitraria. Ad esempio, l'implementazione potrebbe essere riscritta con un'implementazione vuota del metodo <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromStorage%2A> e tutte le query del Registro di sistema e dello stato eseguite nel metodo <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToXml%2A>.  
  
4.  Registrare la classe che implementa le impostazioni in modo che fornisca il supporto a un VSPackage.  
  
     Applicare un'istanza del <xref:Microsoft.VisualStudio.Shell.ProvideProfileAttribute> costruito usando il <xref:System.Type> della classe che implementa <xref:Microsoft.VisualStudio.Shell.IProfileManager> per l'implementazione <xref:Microsoft.VisualStudio.Shell.Package> del VSPackage.  
  
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
  
     In questo caso, l'attributo segnala all'IDE che la classe `MyPackageProfileManager` fornisce un'implementazione delle impostazioni per la classe `MyPackage`. Il punto di impostazioni personalizzato nel Registro di sistema viene creato in HKLM\\Software\\Microsoft\\VisualStudio\\*\<versione\>*\\UserSettings\\ CoreUI\_MyPackage, dove *\<versione\>* è la versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], ad esempio 8.0.  
  
     Per altre informazioni, vedere [Supporto per le impostazioni utente](../Topic/Support%20for%20User%20Settings.md) e <xref:Microsoft.VisualStudio.Shell.ProvideProfileAttribute>.  
  
## Esempio  
 Nell'esempio seguente viene implementato <xref:Microsoft.VisualStudio.Shell.IProfileManager> in una classe.  
  
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
            ' First check if we are getting data from the correct major version.   
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
      // First check if we are getting data from the correct major version.   
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
 [Esportazione delle impostazioni](../misc/exporting-settings.md)   
 [Supporto per le impostazioni utente](../Topic/Support%20for%20User%20Settings.md)