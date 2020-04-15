---
title: Operazioni Windows (C++/CLI)
ms.date: 11/04/2016
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
ms.openlocfilehash: 99fce804ad30e01bdbaa99b1636a5238ff535f8b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371778"
---
# <a name="windows-operations-ccli"></a>Operazioni Windows (C++/CLI)

Illustra varie attività specifiche di Windows utilizzando Windows SDK.

Negli argomenti seguenti vengono illustrate varie operazioni di Windows eseguite con Windows SDK utilizzando Visual C.

## <a name="determine-if-shutdown-has-started"></a><a name="determine_shutdown"></a>Determinare se l'arresto è iniziato

Nell'esempio di codice riportato di seguito viene illustrato come determinare se l'applicazione o .NET Framework sta terminando. Ciò è utile per accedere agli elementi statici in .NET Framework perché, durante l'arresto, questi costrutti vengono finalizzati dal sistema e non possono essere utilizzati in modo affidabile. Controllando prima <xref:System.Environment.HasShutdownStarted%2A> la proprietà, è possibile evitare potenziali errori non accedendo a questi elementi.

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

## <a name="determine-the-user-interactive-state"></a><a name="determine_user"></a>Determinare lo stato interattivo dell'utente

Esempio di codice seguente viene illustrato come determinare se il codice viene eseguito in un contesto interattivo dell'utente. Se <xref:System.Environment.UserInteractive%2A> è false, il codice viene eseguito come processo di servizio o dall'interno di un'applicazione Web, nel qual caso non è consigliabile tentare di interagire con l'utente.

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

## <a name="read-data-from-the-windows-registry"></a><a name="read_registry"></a>Leggere i dati dal Registro di sistema di WindowsRead Data from the Windows Registry

Nell'esempio di <xref:Microsoft.Win32.Registry.CurrentUser> codice riportato di seguito viene utilizzata la chiave per leggere i dati dal Registro di sistema di Windows. In primo luogo, le sottochiavi vengono enumerate utilizzando il <xref:Microsoft.Win32.RegistryKey.GetSubKeyNames%2A> metodo e <xref:Microsoft.Win32.RegistryKey.OpenSubKey%2A> quindi la sottochiave Identities viene aperta utilizzando il metodo . Come le chiavi radice, ogni sottochiave è rappresentata dalla <xref:Microsoft.Win32.RegistryKey> classe. Infine, il <xref:Microsoft.Win32.RegistryKey> nuovo oggetto viene utilizzato per enumerare le coppie chiave/valore.

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

### <a name="remarks"></a>Osservazioni

La <xref:Microsoft.Win32.Registry> classe è semplicemente un contenitore per le istanze statiche di <xref:Microsoft.Win32.RegistryKey>. Ogni istanza rappresenta un nodo radice del Registro di sistema. Le istanze <xref:Microsoft.Win32.Registry.CurrentConfig> <xref:Microsoft.Win32.Registry.CurrentUser>sono <xref:Microsoft.Win32.Registry.LocalMachine> <xref:Microsoft.Win32.Registry.ClassesRoot>, <xref:Microsoft.Win32.Registry.Users>, , , e .

Oltre a essere statici, <xref:Microsoft.Win32.Registry> gli oggetti all'interno della classe sono di sola lettura. Inoltre, le <xref:Microsoft.Win32.RegistryKey> istanze della classe create per accedere al contenuto degli oggetti del Registro di sistema sono anche di sola lettura. Per un esempio di come eseguire l'override di questo comportamento, vedere [procedura: scrivere dati nel Registro](../dotnet/how-to-write-data-to-the-windows-registry-cpp-cli.md)di sistema di Windows (C , C , CLI ) .

Esistono due oggetti aggiuntivi <xref:Microsoft.Win32.Registry> nella <xref:Microsoft.Win32.Registry.DynData> <xref:Microsoft.Win32.Registry.PerformanceData>classe: e . Entrambi sono istanze della <xref:Microsoft.Win32.RegistryKey> classe . L'oggetto <xref:Microsoft.Win32.Registry.DynData> contiene informazioni dinamiche del Registro di sistema, che è supportato solo in Windows 98 e Windows Me. L'oggetto <xref:Microsoft.Win32.Registry.PerformanceData> può essere utilizzato per accedere alle informazioni sui contatori delle prestazioni per le applicazioni che utilizzano il sistema di monitoraggio delle prestazioni di Windows. Il <xref:Microsoft.Win32.Registry.PerformanceData> nodo rappresenta informazioni che non sono effettivamente archiviate nel Registro di sistema e pertanto non possono essere visualizzate utilizzando Regedit.exe.

## <a name="read-windows-performance-counters"></a><a name="read_performance"></a>Lettura dei contatori delle prestazioni di WindowsRead Windows Performance Counters

Alcune applicazioni e sottosistemi di Windows espongono i dati sulle prestazioni tramite il sistema di prestazioni di Windows.Some applications and Windows subsystems expose performance data through the Windows performance system. È possibile accedere a <xref:System.Diagnostics.PerformanceCounterCategory> questi <xref:System.Diagnostics.PerformanceCounter> contatori utilizzando <xref:System.Diagnostics?displayProperty=fullName> le classi e , che risiedono nello spazio dei nomi .

Nell'esempio di codice riportato di seguito vengono utilizzate queste classi per recuperare e visualizzare un contatore aggiornato da Windows per indicare la percentuale di tempo in cui il processore è occupato.

> [!NOTE]
> Per l'esecuzione di questo esempio in Windows Vista sono necessari privilegi di amministratore.

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

## <a name="retrieve-text-from-the-clipboard"></a><a name="retrieve_text"></a>Recuperare testo dagli Appunti

Nell'esempio di <xref:System.Windows.Forms.Clipboard.GetDataObject%2A> codice riportato di seguito <xref:System.Windows.Forms.IDataObject> viene utilizzata la funzione membro per restituire un puntatore all'interfaccia. È quindi possibile eseguire una query su questa interfaccia per il formato dei dati e utilizzato per recuperare i dati effettivi.

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

## <a name="retrieve-the-current-username"></a><a name="retrieve_current"></a>Recuperare il nome utente corrente

Nell'esempio di codice riportato di seguito viene illustrato il recupero del nome utente corrente (il nome dell'utente connesso a Windows). Il nome viene <xref:System.Environment.UserName%2A> archiviato nella stringa, <xref:System.Environment> definita nello spazio dei nomi.

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

## <a name="retrieve-the-net-framework-version"></a><a name="retrieve_dotnet"></a>Recuperare la versione di .NET Framework

Esempio di codice seguente viene illustrato come determinare la versione <xref:System.Environment.Version%2A> di .NET Framework <xref:System.Version> attualmente installato con la proprietà , che è un puntatore a un oggetto che contiene le informazioni sulla versione.

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

## <a name="retrieve-the-local-machine-name"></a><a name="retrieve_local"></a>Recuperare il nome del computer locale

Nell'esempio di codice riportato di seguito viene illustrato il recupero del nome del computer locale (il nome del computer così come viene visualizzato in una rete). È possibile ottenere questa <xref:System.Environment.MachineName%2A> operazione ottenendo la <xref:System.Environment> stringa definita nello spazio dei nomi.

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

## <a name="retrieve-the-windows-version"></a><a name="retrieve_version"></a>Recuperare la versione di Windows

Esempio di codice seguente viene illustrato come recuperare le informazioni sulla piattaforma e la versione del sistema operativo corrente. Queste informazioni vengono <xref:System.Environment.OSVersion%2A?displayProperty=fullName> archiviate nella proprietà ed è costituita da un'enumerazione che descrive la versione di Windows in termini generali e da un <xref:System.Environment.Version%2A> oggetto che contiene la build esatta del sistema operativo.

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

## <a name="retrieve-time-elapsed-since-startup"></a><a name="retrieve_time"></a>Recuperare il tempo trascorso dall'avvio

Esempio di codice seguente viene illustrato come determinare il conteggio o il numero di millisecondi trascorsi dall'avvio di Windows. Questo valore viene <xref:System.Environment.TickCount%2A?displayProperty=fullName> archiviato nel membro e, poiché è un valore a 32 bit, viene reimpostato su zero approssimativamente ogni 24,9 giorni.

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

## <a name="store-text-in-the-clipboard"></a><a name="store_text"></a>Memorizzazione del testo negli Appunti

Nell'esempio di <xref:System.Windows.Forms.Clipboard> codice riportato <xref:System.Windows.Forms> di seguito viene utilizzato l'oggetto definito nello spazio dei nomi per archiviare una stringa. Questo oggetto fornisce due <xref:System.Windows.Forms.Clipboard.SetDataObject%2A> <xref:System.Windows.Forms.Clipboard.GetDataObject%2A>funzioni membro: e . I dati vengono memorizzati negli Appunti <xref:System.Object> <xref:System.Windows.Forms.Clipboard.SetDataObject%2A>inviando qualsiasi oggetto derivato da a .

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

## <a name="write-data-to-the-windows-registry"></a><a name="write_data"></a>Scrittura di dati nel Registro di sistema di Windows

Nell'esempio di <xref:Microsoft.Win32.Registry.CurrentUser> codice riportato di seguito viene <xref:Microsoft.Win32.RegistryKey> illustrato come utilizzare la chiave per creare un'istanza scrivibile della classe corrispondente alla chiave **Software.** Il <xref:Microsoft.Win32.RegistryKey.CreateSubKey%2A> metodo viene quindi utilizzato per creare una nuova chiave e aggiungerla alle coppie chiave/valore.

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

### <a name="remarks"></a>Osservazioni

È possibile utilizzare .NET Framework per <xref:Microsoft.Win32.Registry> accedere <xref:Microsoft.Win32.RegistryKey> al Registro di <xref:Microsoft.Win32> sistema con le classi e , entrambe definite nello spazio dei nomi . La classe **Registry** è un contenitore per le istanze statiche della <xref:Microsoft.Win32.RegistryKey> classe. Ogni istanza rappresenta un nodo radice del Registro di sistema. Le istanze <xref:Microsoft.Win32.Registry.CurrentConfig> <xref:Microsoft.Win32.Registry.CurrentUser>sono <xref:Microsoft.Win32.Registry.LocalMachine> <xref:Microsoft.Win32.Registry.ClassesRoot>, <xref:Microsoft.Win32.Registry.Users>, , , e .

## <a name="related-sections"></a>Sezioni correlate

<xref:System.Environment>

## <a name="see-also"></a>Vedere anche

[Programmazione di .NET con C/CLI (Visual C](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
