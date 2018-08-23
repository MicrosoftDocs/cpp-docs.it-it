---
title: Operazioni Windows (C + + CLI) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Windows [C++], Windows-specific tasks
- .NET Framework [C++], Windows operations
- Visual C++, Windows operations
- Windows operations [C++]
- .NET Framework, shutdown
- shutdown
- termination
- applications [C++], shutdown
- Visual C++, user interactive state
- user interactive state
- Visual C++, reading from Windows Registry
- registry, reading
- performance counters
- performance counters, reading Windows performance counters
- performance monitoring, Windows performance counters
- performance, counters
- counters, reading Windows performance counters
- performance
- performance monitoring
- text, retrieving from Clipboard
- Clipboard, retrieving text
- current user names
- user names, retrieving
- UserName string
- .NET Framework, version
- Version property, retrieving .NET Framework version
- computer name, retrieving
- machine name, retrieving
- computer name
- Windows [C++], version
- Windows [C++], retrieving version using Visual C++
- time, elapsed since startup
- counters, elapsed time
- startup, time elapsed since
- tick counts
- startup
- text, storing in Clipboard
- Clipboard, storing text
- registry, writing to
- Visual C++, writing to Windows Registry
ms.assetid: b9a75cb4-0589-4d5b-92cb-5e8be42b4ac0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 0f9566fb6e3117b10d0d6f4a2bccbe56fe33a28a
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42609349"
---
# <a name="windows-operations-ccli"></a>Operazioni Windows (C++/CLI)
Illustra alcune attività specifiche di Windows usando il SDK di Windows.  
  
 Gli argomenti seguenti illustrano varie operazioni di Windows eseguite con il SDK di Windows usando Visual C++.  

## <a name="determine_shutdown"></a> Determinare se l'arresto è stata avviata
Esempio di codice seguente viene illustrato come determinare se l'applicazione o a .NET Framework è in fase di chiusura. Ciò è utile per l'accesso a elementi statici in .NET Framework, poiché, durante l'arresto, questi costrutti, vengono completati dal sistema e non possono essere usati in modo affidabile. Controllando il <xref:System.Environment.HasShutdownStarted%2A> proprietà in primo luogo, per evitare potenziali errori, non l'accesso a questi elementi.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// check_shutdown.cpp  
// compile with: /clr  
using namespace System;  
int main()   
{  
   if (Environment::HasShutdownStarted)  
      Console::WriteLine("Shutting down.");  
   else  
      Console::WriteLine("Not shutting down.");  
   return 0;  
}  
```  

## <a name="determine_user"></a> Determinare lo stato interattivo dell'utente
Esempio di codice seguente viene illustrato come determinare se viene eseguito codice in un contesto utente interattivo. Se <xref:System.Environment.UserInteractive%2A> restituisce false, il codice viene eseguito come un processo del servizio o all'interno di un'applicazione Web, nel qual caso non tentare di interagire con l'utente.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// user_interactive.cpp  
// compile with: /clr  
using namespace System;  
  
int main()   
{  
   if ( Environment::UserInteractive )  
      Console::WriteLine("User interactive");  
   else  
      Console::WriteLine("Noninteractive");  
   return 0;  
}  
```  

## <a name="read_registry"></a> Leggere i dati dal Registro di sistema Windows
Il codice seguente viene illustrato come utilizzare il <xref:Microsoft.Win32.Registry.CurrentUser> chiave per leggere i dati dal Registro di sistema Windows. In primo luogo, le sottochiavi vengono enumerate utilizzando il <xref:Microsoft.Win32.RegistryKey.GetSubKeyNames%2A> metodo e quindi la sottochiave di identità viene aperta utilizzando il <xref:Microsoft.Win32.RegistryKey.OpenSubKey%2A> (metodo). Ad esempio le chiavi di primo livello, ogni sottochiave è rappresentato dal <xref:Microsoft.Win32.RegistryKey> classe. Infine, il nuovo <xref:Microsoft.Win32.RegistryKey> oggetto viene usato per enumerare le coppie chiave/valore.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// registry_read.cpp  
// compile with: /clr  
using namespace System;  
using namespace Microsoft::Win32;  
  
int main( )  
{  
   array<String^>^ key = Registry::CurrentUser->GetSubKeyNames( );  
  
   Console::WriteLine("Subkeys within CurrentUser root key:");  
   for (int i=0; i<key->Length; i++)  
   {  
      Console::WriteLine("   {0}", key[i]);  
   }  
  
   Console::WriteLine("Opening subkey 'Identities'...");  
   RegistryKey^ rk = nullptr;  
   rk = Registry::CurrentUser->OpenSubKey("Identities");  
   if (rk==nullptr)  
   {  
      Console::WriteLine("Registry key not found - aborting");  
      return -1;  
   }  
  
   Console::WriteLine("Key/value pairs within 'Identities' key:");  
   array<String^>^ name = rk->GetValueNames( );  
   for (int i=0; i<name->Length; i++)  
   {  
      String^ value = rk->GetValue(name[i])->ToString();  
      Console::WriteLine("   {0} = {1}", name[i], value);  
   }  
  
   return 0;  
}  
```  
  
### <a name="remarks"></a>Note  
 Il <xref:Microsoft.Win32.Registry> classe è semplicemente un contenitore per le istanze statiche di <xref:Microsoft.Win32.RegistryKey>. Ogni istanza rappresenta un nodo del Registro di sistema radice. Le istanze sono <xref:Microsoft.Win32.Registry.ClassesRoot>, <xref:Microsoft.Win32.Registry.CurrentConfig>, <xref:Microsoft.Win32.Registry.CurrentUser>, <xref:Microsoft.Win32.Registry.LocalMachine>, e <xref:Microsoft.Win32.Registry.Users>.  
  
 Oltre a essere statico, gli oggetti all'interno di <xref:Microsoft.Win32.Registry> classe sono di sola lettura. Inoltre, le istanze del <xref:Microsoft.Win32.RegistryKey> gli oggetti di classe che vengono creati per accedere al contenuto del Registro di sistema sono di sola lettura anche. Per un esempio di come eseguire l'override di questo comportamento, vedere [procedura: scrivere dati nel Registro di sistema di Windows (C + + / CLI)](../dotnet/how-to-write-data-to-the-windows-registry-cpp-cli.md).  
  
 Esistono altri due oggetti nella <xref:Microsoft.Win32.Registry> classe: <xref:Microsoft.Win32.Registry.DynData> e <xref:Microsoft.Win32.Registry.PerformanceData>. Sono entrambi istanze del <xref:Microsoft.Win32.RegistryKey> classe. Il <xref:Microsoft.Win32.Registry.DynData> oggetto contiene le informazioni del Registro di sistema dinamico, che sono supportate solo in Windows 98 e Windows Me. Il <xref:Microsoft.Win32.Registry.PerformanceData> oggetto può essere utilizzato per accedere alle informazioni sui contatori delle prestazioni per le applicazioni che usano il sistema di monitoraggio delle prestazioni di Windows. Il <xref:Microsoft.Win32.Registry.PerformanceData> nodo rappresenta le informazioni che non vengono effettivamente memorizzate nel Registro di sistema e pertanto non possono essere visualizzate mediante Regedit.exe.  

## <a name="read_performance"></a> Leggere i contatori delle prestazioni di Windows
Alcune applicazioni e i sottosistemi Windows espongono i dati sulle prestazioni tramite il sistema delle prestazioni di Windows. Questi contatori sono accessibili tramite il <xref:System.Diagnostics.PerformanceCounterCategory> e <xref:System.Diagnostics.PerformanceCounter> classi, che si trovano nel <xref:System.Diagnostics?displayProperty=fullName> dello spazio dei nomi.  
  
 Esempio di codice seguente Usa queste classi per recuperare e visualizzare un contatore che viene aggiornato da Windows per indicare la percentuale di tempo in cui il processore è occupato.  
  
> [!NOTE]
>  Per l'esecuzione di questo esempio in Windows Vista sono necessari privilegi di amministratore.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// processor_timer.cpp  
// compile with: /clr  
#using <system.dll>  
  
using namespace System;  
using namespace System::Threading;  
using namespace System::Diagnostics;  
using namespace System::Timers;  
  
ref struct TimerObject  
{  
public:  
   static String^ m_instanceName;  
   static PerformanceCounter^ m_theCounter;  
  
public:  
   static void OnTimer(Object^ source, ElapsedEventArgs^ e)  
   {  
      try   
      {  
         Console::WriteLine("CPU time used: {0,6} ",  
          m_theCounter->NextValue( ).ToString("f"));  
      }   
      catch(Exception^ e)  
      {  
         if (dynamic_cast<InvalidOperationException^>(e))  
         {  
            Console::WriteLine("Instance '{0}' does not exist",  
                  m_instanceName);  
            return;  
         }  
         else  
         {  
            Console::WriteLine("Unknown exception... ('q' to quit)");  
            return;  
         }  
      }  
   }  
};  
  
int main()  
{  
   String^ objectName = "Processor";  
   String^ counterName = "% Processor Time";  
   String^ instanceName = "_Total";  
  
   try  
   {  
      if ( !PerformanceCounterCategory::Exists(objectName) )  
      {  
         Console::WriteLine("Object {0} does not exist", objectName);  
         return -1;  
      }  
   }  
   catch (UnauthorizedAccessException ^ex)  
   {  
      Console::WriteLine("You are not authorized to access this information.");  
      Console::Write("If you are using Windows Vista, run the application with ");  
      Console::WriteLine("administrative privileges.");  
      Console::WriteLine(ex->Message);  
      return -1;  
   }  
  
   if ( !PerformanceCounterCategory::CounterExists(  
          counterName, objectName) )  
   {  
      Console::WriteLine("Counter {0} does not exist", counterName);  
      return -1;  
   }  
  
   TimerObject::m_instanceName = instanceName;  
   TimerObject::m_theCounter = gcnew PerformanceCounter(  
          objectName, counterName, instanceName);  
  
   System::Timers::Timer^ aTimer = gcnew System::Timers::Timer();  
   aTimer->Elapsed += gcnew ElapsedEventHandler(&TimerObject::OnTimer);  
   aTimer->Interval = 1000;  
   aTimer->Enabled = true;  
   aTimer->AutoReset = true;  
  
   Console::WriteLine("reporting CPU usage for the next 10 seconds");  
   Thread::Sleep(10000);  
   return 0;  
}  
```  

## <a name="retrieve_text"></a> Recuperare testo dagli Appunti
Il codice seguente viene illustrato come utilizzare il <xref:System.Windows.Forms.Clipboard.GetDataObject%2A> restituiscono un puntatore a funzione membro di <xref:System.Windows.Forms.IDataObject> interfaccia. Questa interfaccia può quindi essere eseguita una query per il formato dei dati e consente di recuperare i dati effettivi.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// read_clipboard.cpp  
// compile with: /clr  
#using <system.dll>  
#using <system.Drawing.dll>  
#using <system.windows.forms.dll>  
  
using namespace System;  
using namespace System::Windows::Forms;  
  
[STAThread] int main( )  
{  
   IDataObject^ data = Clipboard::GetDataObject( );  
  
   if (data)  
   {  
      if (data->GetDataPresent(DataFormats::Text))   
      {  
         String^ text = static_cast<String^>  
           (data->GetData(DataFormats::Text));  
         Console::WriteLine(text);   
      }  
      else  
         Console::WriteLine("Nontext data is in the Clipboard.");  
   }  
   else   
   {  
      Console::WriteLine("No data was found in the Clipboard.");  
   }  
  
   return 0;  
}  
```  

## <a name="retrieve_current"></a> Recuperare il nome utente corrente
Esempio di codice seguente viene illustrato il recupero del nome dell'utente corrente (il nome dell'utente connesso in Windows). Il nome viene archiviato nel <xref:System.Environment.UserName%2A> stringa che viene definita nel <xref:System.Environment> dello spazio dei nomi.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// username.cpp  
// compile with: /clr  
using namespace System;  
  
int main()   
{  
   Console::WriteLine("\nCurrent user: {0}", Environment::UserName);  
   return 0;  
}  
```  

## <a name="retrieve_dotnet"></a> Recuperare la versione di .NET Framework
Esempio di codice seguente viene illustrato come determinare la versione di .NET Framework attualmente installato con il <xref:System.Environment.Version%2A> proprietà, ovvero un puntatore a un <xref:System.Version> oggetto che contiene le informazioni sulla versione.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// dotnet_ver.cpp  
// compile with: /clr  
using namespace System;  
int main()   
{  
   Version^ version = Environment::Version;  
   if (version)  
   {  
      int build = version->Build;  
      int major = version->Major;  
      int minor = version->Minor;  
      int revision = Environment::Version->Revision;  
      Console::Write(".NET Framework version: ");  
      Console::WriteLine("{0}.{1}.{2}.{3}",   
            build, major, minor, revision);  
   }  
   return 0;  
}  
```  

## <a name="retrieve_local"></a> Recuperare il nome del computer locale 
Esempio di codice seguente viene illustrato il recupero del nome del computer locale (il nome del computer perché viene visualizzato in una rete). È possibile farlo tramite il recupero di <xref:System.Environment.MachineName%2A> stringa che viene definita nel <xref:System.Environment> dello spazio dei nomi.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// machine_name.cpp  
// compile with: /clr  
using namespace System;  
  
int main()   
{  
   Console::WriteLine("\nMachineName: {0}", Environment::MachineName);  
   return 0;  
}  
```  

## <a name="retrieve_version"></a> Recuperare la versione di Windows
Esempio di codice seguente viene illustrato come recuperare le informazioni di versione e la piattaforma del sistema operativo corrente. Queste informazioni vengono archiviate nel <xref:System.Environment.OSVersion%2A?displayProperty=fullName> proprietà ed è costituito da un'enumerazione che descrive la versione di Windows in altri termini e un <xref:System.Environment.Version%2A> oggetto contenente la build esatta del sistema operativo.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// os_ver.cpp  
// compile with: /clr  
using namespace System;  
  
int main()   
{  
   OperatingSystem^ osv = Environment::OSVersion;  
   PlatformID id = osv->Platform;  
   Console::Write("Operating system: ");  
  
   if (id == PlatformID::Win32NT)  
      Console::WriteLine("Win32NT");  
   else if (id == PlatformID::Win32S)  
      Console::WriteLine("Win32S");  
   else if (id == PlatformID::Win32Windows)  
      Console::WriteLine("Win32Windows");  
   else  
      Console::WriteLine("WinCE");  
  
   Version^ version = osv->Version;  
   if (version)  
   {  
      int build = version->Build;  
      int major = version->Major;  
      int minor = version->Minor;  
      int revision = Environment::Version->Revision;  
      Console::Write("OS Version: ");  
      Console::WriteLine("{0}.{1}.{2}.{3}",   
                   build, major, minor, revision);  
   }  
  
   return 0;  
}  
```  

## <a name="retrieve_time"></a> Recuperare il tempo trascorso dall'avvio
Esempio di codice seguente viene illustrato come determinare il conteggio dei tick, o numero di millisecondi trascorsi da Windows è stato avviato. Questo valore viene archiviato nel <xref:System.Environment.TickCount%2A?displayProperty=fullName> membro e, poiché si tratta di un valore a 32 bit, viene reimpostato su zero approssimativamente ogni 24,9 giorni.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// startup_time.cpp  
// compile with: /clr  
using namespace System;  
  
int main( )   
{  
   Int32 tc = Environment::TickCount;  
   Int32 seconds = tc / 1000;  
   Int32 minutes = seconds / 60;  
   float hours = static_cast<float>(minutes) / 60;  
   float days = hours / 24;  
  
   Console::WriteLine("Milliseconds since startup: {0}", tc);  
   Console::WriteLine("Seconds since startup: {0}", seconds);  
   Console::WriteLine("Minutes since startup: {0}", minutes);  
   Console::WriteLine("Hours since startup: {0}", hours);  
   Console::WriteLine("Days since startup: {0}", days);  
  
   return 0;  
}  
```  

## <a name="store_text"></a> Store testo negli Appunti
Il codice seguente viene illustrato come utilizzare il <xref:System.Windows.Forms.Clipboard> definito nell'oggetto di <xref:System.Windows.Forms> dello spazio dei nomi per archiviare una stringa. Questo oggetto fornisce due funzioni membro: <xref:System.Windows.Forms.Clipboard.SetDataObject%2A> e <xref:System.Windows.Forms.Clipboard.GetDataObject%2A>. Dati vengono archiviati negli Appunti per l'invio di qualsiasi oggetto derivato dalla <xref:System.Object> a <xref:System.Windows.Forms.Clipboard.SetDataObject%2A>.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// store_clipboard.cpp  
// compile with: /clr  
#using <System.dll>  
#using <System.Drawing.dll>  
#using <System.Windows.Forms.dll>  
  
using namespace System;  
using namespace System::Windows::Forms;  
  
[STAThread] int main()  
{  
   String^ str = "This text is copied into the Clipboard.";  
  
   // Use 'true' as the second argument if  
   // the data is to remain in the clipboard  
   // after the program terminates.  
   Clipboard::SetDataObject(str, true);  
  
   Console::WriteLine("Added text to the Clipboard.");  
  
   return 0;  
}  
```  

## <a name="write_data"></a> Scrivere dati nel Registro di sistema di Windows
Il codice seguente viene illustrato come utilizzare il <xref:Microsoft.Win32.Registry.CurrentUser> tasto per creare un'istanza scrivibile della <xref:Microsoft.Win32.RegistryKey> classe corrispondente il **Software** chiave. Il <xref:Microsoft.Win32.RegistryKey.CreateSubKey%2A> metodo viene quindi utilizzato per creare una nuova chiave e di aggiungere coppie chiave/valore.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// registry_write.cpp  
// compile with: /clr  
using namespace System;  
using namespace Microsoft::Win32;  
  
int main()  
{  
   // The second OpenSubKey argument indicates that  
   // the subkey should be writable.   
   RegistryKey^ rk;  
   rk  = Registry::CurrentUser->OpenSubKey("Software", true);  
   if (!rk)  
   {  
      Console::WriteLine("Failed to open CurrentUser/Software key");  
      return -1;  
   }  
  
   RegistryKey^ nk = rk->CreateSubKey("NewRegKey");  
   if (!nk)  
   {  
      Console::WriteLine("Failed to create 'NewRegKey'");  
      return -1;  
   }  
  
   String^ newValue = "NewValue";  
   try  
   {  
      nk->SetValue("NewKey", newValue);  
      nk->SetValue("NewKey2", 44);  
   }  
   catch (Exception^)  
   {  
      Console::WriteLine("Failed to set new values in 'NewRegKey'");  
      return -1;  
   }  
  
   Console::WriteLine("New key created.");  
   Console::Write("Use REGEDIT.EXE to verify ");  
   Console::WriteLine("'CURRENTUSER/Software/NewRegKey'\n");  
   return 0;  
}  
```  
  
### <a name="remarks"></a>Note  
 È possibile usare .NET Framework per accedere al registro con il <xref:Microsoft.Win32.Registry> e [RegistryKey](https://msdn.microsoft.com/en-us/library/microsoft.win32.registrykey.aspx) classi, che sono entrambi definiscono nel <xref:Microsoft.Win32> dello spazio dei nomi. Il **Registro di sistema** classe è un contenitore per le istanze statiche del <xref:Microsoft.Win32.RegistryKey> classe. Ogni istanza rappresenta un nodo del Registro di sistema radice. Le istanze sono <xref:Microsoft.Win32.Registry.ClassesRoot>, <xref:Microsoft.Win32.Registry.CurrentConfig>, <xref:Microsoft.Win32.Registry.CurrentUser>, <xref:Microsoft.Win32.Registry.LocalMachine>, e <xref:Microsoft.Win32.Registry.Users>.  

## <a name="related-sections"></a>Sezioni correlate  
 <xref:System.Environment>  
  
## <a name="see-also"></a>Vedere anche  
 [Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)

 [Introduzione al monitoraggio delle prestazioni](http://msdn.microsoft.com/en-us/d40f10b9-e2b7-4ec8-a9b3-706929e5bf35) 