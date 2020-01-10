---
title: 'Procedura: utilizzare winmdidl.exe e midlrt.exe per creare file con estensione .h dai metadati di Windows'
ms.date: 11/04/2016
ms.topic: reference
ms.assetid: 4be8ba11-c223-44ad-9256-7e1edae9a7bc
ms.openlocfilehash: 3aa7cd28a37ec7187cc3c87927a83e45eeda2a4e
ms.sourcegitcommit: 5f276064779d90a4cfda758f89e0c0f1e4d1a188
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/09/2020
ms.locfileid: "75791723"
---
# <a name="how-to-use-winmdidlexe-and-midlrtexe-to-create-h-files-from-windows-metadata"></a>Procedura: utilizzare winmdidl.exe e midlrt.exe per creare file con estensione .h dai metadati di Windows

Winmdidl.exe e midlrt.exe consentono l'interazione a livello COM tra componenti Windows Runtime e in codice C++ nativi. Winmdidl.exe accetta come input un file con estensione winmd che contiene i metadati per un componente Windows Runtime e restituisce un file IDL. Midlrt.exe converte il file IDL in file di intestazione che il codice C++ può utilizzare. Entrambi gli strumenti si eseguono dalla riga di comando.

Questi strumenti possono essere usati in due scenari principali:

- Creazione di file IDL e di intestazione personalizzati, in modo che un'app C++ scritta usando la libreria di modelli per Windows Runtime possa usare un componente Windows Runtime personalizzato.

- Generazione di file proxy e stub per tipi di evento definiti dall'utente in un componente Windows Runtime. Per ulteriori informazioni, vedere [eventi personalizzati e funzioni di accesso agli eventi in Windows Runtime Components](/windows/uwp/winrt-components/custom-events-and-event-accessors-in-windows-runtime-components).

Questi strumenti sono necessari solo per l'analisi di file winmd personalizzati. I file con estensione h e idl per i componenti del sistema operativo Windows vengono generati automaticamente. Per impostazione predefinita, in Windows 8.1, si trovano in \Program Files (x86) \Windows Kits\8.1\Include\winrt\\.

## <a name="location-of-the-tools"></a>Percorso degli strumenti

Per impostazione predefinita, in [Windows 8.1, winmdidl. exe e midlrt. exe si trovano in C:\Programmi (x86) \Windows Kits\8.1\\. Le versioni degli strumenti sono disponibili anche nelle cartelle \bin\x86\ e \bin\x64\.

## <a name="winmdidl-command-line-arguments"></a>Argomenti della riga di comando di winmdidl

```
Winmdidl.exe [/nologo] [/suppressversioncheck] [/time] [/outdir:dir] [/banner:file] [/utf8] Winmdfile
```

**/nologo**<br/>
Impedisce la visualizzazione sulla console delle informazioni sul copyright e il numero di versione di winmdidl.

**/suppressversioncheck**<br/>
Non usato.

**/time**<br/>
Visualizza il tempo di esecuzione totale nell'output della console.

**/OutDir:** <em>dir</em><br/>
Specifica una directory di output. Se il percorso contiene spazi, usare le virgolette. La directory di output predefinita è *\<unità >* : \Users\\ *\<username >* \AppData\Local\VirtualStore\Program Files (x86) \microsoft Visual Studio 12,0\\.

**/banner:** <em>file</em><br/>
Specifica un file che contiene del testo personalizzato da anteporre al messaggio di copyright predefinito e al numero di versione di winmdidl all'inizio del file IDL generato. Se il percorso contiene spazi, usare le virgolette.

**/utf8**<br/>
Comporta la formattazione del file nel formato UTF-8.

*Winmdfile*<br/>
Nome del file con estensione winmd da analizzare. Se il percorso contiene spazi, usare le virgolette.

## <a name="midlrt-command-line-arguments"></a>Argomenti della riga di comando di Midlrt

Vedere [componenti di MIDLRT e Windows Runtime](/windows/win32/Midl/midlrt-and-windows-runtime-components).

## <a name="examples"></a>Esempi

L'esempio seguente mostra un comando di winmdidl nel prompt dei comandi di Visual Studio x86. Specifica una directory di output, e un file che contiene il testo del messaggio speciale da aggiungere al file IDL generato.

`C:\Program Files (x86)\Microsoft Visual Studio 12.0>winmdidl /nologo /outdir:c:\users\giraffe\documents\ /banner:c:\users\giraffe\documents\banner.txt "C:\Users\giraffe\Documents\Visual Studio 2013\Projects\Test_for_winmdidl\Debug\Test_for_winmdidl\test_for_winmdidl.winmd"`

L'esempio che segue mostra la visualizzazione della console da winmdidl che indica che l'operazione è riuscita.

**Generazione di c:\users\giraffe\documents\\\ Test_for_winmdidl. idl**

Successivamente, midlrt viene eseguito sul file IDL generato. Si noti che l'argomento **metadata_dir** viene specificato dopo il nome del file con estensione IDL. Il percorso di \WinMetadata\ è obbligatorio: è il percorso di windows.winmd.

`C:\Program Files (x86)\Microsoft Visual Studio 12.0> midlrt "c:\users\username\documents\test_for_winmdidl.idl" /metadata_dir "C:\Windows\System32\WinMetadata"`

## <a name="remarks"></a>Note

Il file di output di un'operazione di winmdidl ha lo stesso nome del file di input, ma con estensione idl.

Se si sviluppa un componente Windows Runtime a cui verrà eseguito l'accesso dalla Libreria Windows Runtime, è possibile specificare che winmdidl.exe e midlrt.exe devono essere eseguiti come passaggi di post-compilazione, in modo che per ogni compilazione vengano generati automaticamente i file IDL e H. Per un esempio, vedere [generazione di eventi nei componenti Windows Runtime](/windows/uwp/winrt-components/raising-events-in-windows-runtime-components).