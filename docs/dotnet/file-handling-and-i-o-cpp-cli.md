---
title: Gestione di file e I / O (C + + CLI)
ms.date: 11/04/2016
helpviewer_keywords:
- .NET Framework [C++], file handling
- files [C++], .NET Framework and
- I/O [C++], .NET Framework applications
- .NET Framework [C++], I/O
- files [C++], listing files
- directories [C++], listing files
- monitoring file system events
- FileSystemWatcher class, examples
- examples [C++], monitoring file system changes
- events [C++], monitoring
- file system events [C++]
- files [C++], binary
- binary files, reading in C++
- reading text files
- text files, reading
- files [C++], retrieving information about
- FileInfo class
- binary files, writing in C++
- files [C++], binary
- files [C++], text
- text files, writing in C++
ms.assetid: 3296fd59-a83a-40d4-bd4a-6096cc13101b
ms.openlocfilehash: 697d193f2239d9d22e8d94d479bbf24784e2c6ff
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50585653"
---
# <a name="file-handling-and-io-ccli"></a>Gestione di file e I/O (C++/CLI)
Illustra diverse operazioni di file usando .NET Framework.

Gli argomenti seguenti illustrano l'uso delle classi definite nel <xref:System.IO> dello spazio dei nomi per eseguire diverse operazioni su file.

## <a name="enumerate"></a> Enumerare i file in una Directory

Esempio di codice seguente viene illustrato come recuperare un elenco dei file in una directory. Inoltre, vengono enumerate le sottodirectory. Il codice seguente viene illustrato come utilizzare il <xref:System.IO.Directory.GetFiles%2A> <xref:System.IO.Directory.GetFiles%2A> e <xref:System.IO.Directory.GetDirectories%2A> metodi per visualizzare il contenuto della directory c:\Windows.

### <a name="example"></a>Esempio

```cpp
// enum_files.cpp
// compile with: /clr
using namespace System;
using namespace System::IO;

int main()
{
   String^ folder = "C:\\";
   array<String^>^ dir = Directory::GetDirectories( folder );
   Console::WriteLine("--== Directories inside '{0}' ==--", folder);
   for (int i=0; i<dir->Length; i++)
      Console::WriteLine(dir[i]);

   array<String^>^ file = Directory::GetFiles( folder );
   Console::WriteLine("--== Files inside '{0}' ==--", folder);
   for (int i=0; i<file->Length; i++)
      Console::WriteLine(file[i]);

   return 0;
}
```

## <a name="monitor"></a> Modifiche al sistema di monitoraggio File

Il codice seguente viene illustrato come utilizzare <xref:System.IO.FileSystemWatcher> per registrare gli eventi corrispondenti ai file viene creati, modificato, eliminato o rinominato. Invece di eseguire periodicamente il polling di una directory per le modifiche ai file, è possibile usare il <xref:System.IO.FileSystemWatcher> classe da generare gli eventi quando viene rilevata una modifica.

### <a name="example"></a>Esempio

```cpp
// monitor_fs.cpp
// compile with: /clr
#using <system.dll>

using namespace System;
using namespace System::IO;

ref class FSEventHandler
{
public:
    void OnChanged (Object^ source, FileSystemEventArgs^ e)
    {
        Console::WriteLine("File: {0} {1}",
               e->FullPath, e->ChangeType);
    }
    void OnRenamed(Object^ source, RenamedEventArgs^ e)
    {
        Console::WriteLine("File: {0} renamed to {1}",
                e->OldFullPath, e->FullPath);
    }
};

int main()
{
   array<String^>^ args = Environment::GetCommandLineArgs();

   if(args->Length < 2)
   {
      Console::WriteLine("Usage: Watcher.exe <directory>");
      return -1;
   }

   FileSystemWatcher^ fsWatcher = gcnew FileSystemWatcher( );
   fsWatcher->Path = args[1];
   fsWatcher->NotifyFilter = static_cast<NotifyFilters>
              (NotifyFilters::FileName |
               NotifyFilters::Attributes |
               NotifyFilters::LastAccess |
               NotifyFilters::LastWrite |
               NotifyFilters::Security |
               NotifyFilters::Size );

    FSEventHandler^ handler = gcnew FSEventHandler();
    fsWatcher->Changed += gcnew FileSystemEventHandler(
            handler, &FSEventHandler::OnChanged);
    fsWatcher->Created += gcnew FileSystemEventHandler(
            handler, &FSEventHandler::OnChanged);
    fsWatcher->Deleted += gcnew FileSystemEventHandler(
            handler, &FSEventHandler::OnChanged);
    fsWatcher->Renamed += gcnew RenamedEventHandler(
            handler, &FSEventHandler::OnRenamed);

    fsWatcher->EnableRaisingEvents = true;

    Console::WriteLine("Press Enter to quit the sample.");
    Console::ReadLine( );
}
```

## <a name="read_binary"></a> Leggere un File binario

Esempio di codice seguente viene illustrato come leggere i dati binari da un file, usando due classi dal <xref:System.IO?displayProperty=fullName> dello spazio dei nomi: <xref:System.IO.FileStream> e <xref:System.IO.BinaryReader>. <xref:System.IO.FileStream> rappresenta il file effettivo. <xref:System.IO.BinaryReader> fornisce un'interfaccia per il flusso che consente l'accesso binario.

L'esempio di codice legge un file denominato bin contenente interi in formato binario. Per informazioni su questo tipo di file, vedere [procedura: scrivere un File binario (C + + / CLI)](../dotnet/how-to-write-a-binary-file-cpp-cli.md).

### <a name="example"></a>Esempio

```cpp
// binary_read.cpp
// compile with: /clr
#using<system.dll>
using namespace System;
using namespace System::IO;

int main()
{
   String^ fileName = "data.bin";
   try
   {
      FileStream^ fs = gcnew FileStream(fileName, FileMode::Open);
      BinaryReader^ br = gcnew BinaryReader(fs);

      Console::WriteLine("contents of {0}:", fileName);
      while (br->BaseStream->Position < br->BaseStream->Length)
         Console::WriteLine(br->ReadInt32().ToString());

      fs->Close( );
   }
   catch (Exception^ e)
   {
      if (dynamic_cast<FileNotFoundException^>(e))
         Console::WriteLine("File '{0}' not found", fileName);
      else
         Console::WriteLine("Exception: ({0})", e);
      return -1;
   }
   return 0;
}
```

## <a name="read_text"></a> Leggere un File di testo

Il codice seguente viene illustrato come aprire e leggere un file di testo una riga alla volta, utilizzando il <xref:System.IO.StreamReader> definito nella classe di <xref:System.IO?displayProperty=fullName> dello spazio dei nomi. Un'istanza di questa classe viene usata per aprire un file di testo e quindi il <xref:System.IO.StreamReader.ReadLine%2A?displayProperty=fullName> metodo viene utilizzato per recuperare ciascuna riga.

Questo esempio di codice legge un file denominato textfile. txt e contiene il testo. Per informazioni su questo tipo di file, vedere [procedura: scrivere un File di testo (C + + / CLI)](../dotnet/how-to-write-a-text-file-cpp-cli.md).

### <a name="example"></a>Esempio

```cpp
// text_read.cpp
// compile with: /clr
#using<system.dll>
using namespace System;
using namespace System::IO;

int main()
{
   String^ fileName = "textfile.txt";
   try
   {
      Console::WriteLine("trying to open file {0}...", fileName);
      StreamReader^ din = File::OpenText(fileName);

      String^ str;
      int count = 0;
      while ((str = din->ReadLine()) != nullptr)
      {
         count++;
         Console::WriteLine("line {0}: {1}", count, str );
      }
   }
   catch (Exception^ e)
   {
      if (dynamic_cast<FileNotFoundException^>(e))
         Console::WriteLine("file '{0}' not found", fileName);
      else
         Console::WriteLine("problem reading file '{0}'", fileName);
   }

   return 0;
}
```

## <a name="retrieve"></a> Recuperare informazioni sui File

L'esempio di codice seguente illustra il <xref:System.IO.FileInfo> classe. Quando si conosce il nome di un file, è possibile utilizzare questa classe per recuperare informazioni sul file, ad esempio le dimensioni del file, directory, il nome completo e data e ora di creazione e dell'ultima modifica.

Questo codice recupera informazioni sul file per Notepad.exe.

### <a name="example"></a>Esempio

```cpp
// file_info.cpp
// compile with: /clr
using namespace System;
using namespace System::IO;

int main()
{
   array<String^>^ args = Environment::GetCommandLineArgs();
   if (args->Length < 2)
   {
      Console::WriteLine("\nUSAGE : file_info <filename>\n\n");
      return -1;
   }

   FileInfo^ fi = gcnew FileInfo( args[1] );

   Console::WriteLine("file size: {0}", fi->Length );

   Console::Write("File creation date:  ");
   Console::Write(fi->CreationTime.Month.ToString());
   Console::Write(".{0}", fi->CreationTime.Day.ToString());
   Console::WriteLine(".{0}", fi->CreationTime.Year.ToString());

   Console::Write("Last access date:  ");
   Console::Write(fi->LastAccessTime.Month.ToString());
   Console::Write(".{0}", fi->LastAccessTime.Day.ToString());
   Console::WriteLine(".{0}", fi->LastAccessTime.Year.ToString());

   return 0;
}
```

## <a name="write_binary"></a> Scrivere un File binario

Esempio di codice seguente illustra la scrittura di dati binari in un file. Due classi di <xref:System.IO> vengono utilizzati lo spazio dei nomi: <xref:System.IO.FileStream> e <xref:System.IO.BinaryWriter>. <xref:System.IO.FileStream> rappresenta il file effettivo, mentre <xref:System.IO.BinaryWriter> fornisce un'interfaccia per il flusso che consente l'accesso binario.

Esempio di codice seguente scrive un file contenente interi in formato binario. Questo file può essere letti con il codice in [procedura: leggere un File binario (C + + / CLI)](../dotnet/how-to-read-a-binary-file-cpp-cli.md).

### <a name="example"></a>Esempio

```cpp
// binary_write.cpp
// compile with: /clr
#using<system.dll>
using namespace System;
using namespace System::IO;

int main()
{
   array<Int32>^ data = {1, 2, 3, 10000};

   FileStream^ fs = gcnew FileStream("data.bin", FileMode::Create);
   BinaryWriter^ w = gcnew BinaryWriter(fs);

   try
   {
      Console::WriteLine("writing data to file:");
      for (int i=0; i<data->Length; i++)
      {
         Console::WriteLine(data[i]);
         w->Write(data[i]);
      }
   }
   catch (Exception^)
   {
     Console::WriteLine("data could not be written");
     fs->Close();
     return -1;
   }

   fs->Close();
   return 0;
}
```

## <a name="write_text"></a> Scrivere un File di testo

Esempio di codice seguente viene illustrato come creare un file di testo e scrivere un testo mediante il <xref:System.IO.StreamWriter> (classe), che viene definito nel <xref:System.IO> dello spazio dei nomi. Il <xref:System.IO.StreamWriter> costruttore accetta il nome del file da creare. Se il file esiste, viene sovrascritto (a meno che non si passa True come secondo <xref:System.IO.StringWriter> argomento del costruttore).

Il file viene quindi archiviato utilizzando il <xref:System.IO.StreamWriter.Write%2A> e <xref:System.IO.TextWriter.WriteLine%2A> funzioni.

### <a name="example"></a>Esempio

```cpp
// text_write.cpp
// compile with: /clr
using namespace System;
using namespace System::IO;

int main()
{
   String^ fileName = "textfile.txt";

   StreamWriter^ sw = gcnew StreamWriter(fileName);
   sw->WriteLine("A text file is born!");
   sw->Write("You can use WriteLine");
   sw->WriteLine("...or just Write");
   sw->WriteLine("and do {0} output too.", "formatted");
   sw->WriteLine("You can also send non-text objects:");
   sw->WriteLine(DateTime::Now);
   sw->Close();
   Console::WriteLine("a new file ('{0}') has been written", fileName);

   return 0;
}
```

## <a name="see-also"></a>Vedere anche

[Programmazione .NET con C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)

[I/O di file e di flussi](/dotnet/standard/io/index)

[Spazio dei nomi System.IO](https://msdn.microsoft.com/library/system.io.aspx)