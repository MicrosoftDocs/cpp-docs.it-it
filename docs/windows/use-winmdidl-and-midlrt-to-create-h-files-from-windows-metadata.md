---
title: "Procedura: utilizzare winmdidl.exe e midlrt.exe per creare file con estensione .h dai metadati di Windows | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 4be8ba11-c223-44ad-9256-7e1edae9a7bc
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: utilizzare winmdidl.exe e midlrt.exe per creare file con estensione .h dai metadati di Windows
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Winmdidl.exe e midlrt.exe consentono l'interazione a livello COM tra componenti Windows Runtime e in codice C\+\+ nativi.  Winmdidl.exe accetta come input un file con estensione winmd che contiene i metadati per un componente Windows Runtime e restituisce un file IDL.  Midlrt.exe converte il file IDL in file di intestazione che il codice C\+\+ può utilizzare.  Entrambi gli strumenti si eseguono dalla riga di comando.  
  
 Questi strumenti possono essere usati in due scenari principali:  
  
-   Creazione di file IDL e di intestazione personalizzati, in modo che un'app C\+\+ scritta usando la libreria di modelli per Windows Runtime possa usare un componente Windows Runtime personalizzato.  
  
-   Generazione di file proxy e stub per tipi di evento definiti dall'utente in un componente Windows Runtime.  Per altre informazioni, vedere [Generazione di eventi nei componenti Windows Runtime](../Topic/Raising%20Events%20in%20Windows%20Runtime%20Components.md).  
  
 Questi strumenti sono necessari solo per l'analisi di file winmd personalizzati.  I file con estensione h e idl per i componenti del sistema operativo Windows vengono generati automaticamente.  Per impostazione predefinita, in [!INCLUDE[win81](../misc/includes/win81_md.md)] si trovano in \\Programmi \(x86\)\\Windows Kits\\8.1\\Include\\winrt\\.  
  
## Percorso degli strumenti  
 Per impostazione predefinita, in [!INCLUDE[win81](../misc/includes/win81_md.md)] winmdidl.exe e midlrt.exe si trovano in C:\\Programmi \(x86\) \\Windows Kits\\8.1\\.  Le versioni degli strumenti sono disponibili anche nelle cartelle \\bin\\x86\\ e \\bin\\x64\\.  
  
## Argomenti della riga di comando di winmdidl  
  
```  
  
Winmdidl.exe [/nologo] [/supressversioncheck] [/time] [/outdir:dir] [/banner:file] [/utf8] Winmdfile  
  
```  
  
 `/nologo`  
 Impedisce la visualizzazione sulla console delle informazioni sul copyright e il numero di versione di winmdidl.  
  
 `/supressversioncheck`  
 Non usato.  
  
 `/time`  
 Visualizza il tempo di esecuzione totale nell'output della console.  
  
 \/outdir:\<dir\>  
 Specifica una directory di output.  Se il percorso contiene spazi, usare le virgolette.  La directory di output predefinita è *\<unità\>*:\\Utenti\\*\<nomeutente\>*\\AppData\\Local\\VirtualStore\\Program Files \(x86\)\\Microsoft Visual Studio 12.0\\.  
  
 `/banner:<file>`  
 Specifica un file che contiene del testo personalizzato da anteporre al messaggio di copyright predefinito e al numero di versione di winmdidl all'inizio del file IDL generato.  Se il percorso contiene spazi, usare le virgolette.  
  
 `/utf8`  
 Comporta la formattazione del file nel formato UTF\-8.  
  
 `Winmdfile`  
 Nome del file con estensione winmd da analizzare.  Se il percorso contiene spazi, usare le virgolette.  
  
## Argomenti della riga di comando di Midlrt  
 Vedere [Componenti Windows Runtime e MIDLRT](http://msdn.microsoft.com/library/windows/desktop/hh869900\(v=vs.85\).aspx).  
  
## Esempi  
 L'esempio seguente mostra un comando di winmdidl nel prompt dei comandi di Visual Studio x86.  Specifica una directory di output, e un file che contiene il testo del messaggio speciale da aggiungere al file IDL generato.  
  
 **C:\\Program Files \(x86\)\\Microsoft Visual Studio 12.0\>winmdidl \/nologo \/outdir:c:\\users\\giraffe\\documents\\ \/banner:c:\\users\\giraffe\\documents\\banner.txt "C:\\Users\\giraffe\\Documents\\Visual Studio 2013\\Projects\\Test\_for\_winmdidl\\Debug\\Test\_for\_winmdidl\\test\_for\_winmdidl.winmd"**  
  
 L'esempio che segue mostra la visualizzazione della console da winmdidl che indica che l'operazione è riuscita.  
  
 **Generating c:\\users\\giraffe\\documents\\\\Test\_for\_winmdidl.idl**  
  
 Successivamente, midlrt viene eseguito sul file IDL generato.  Si noti che l'argomento **metadata\_dir** viene specificato dopo il nome del file IDL.  Il percorso di \\WinMetadata\\ è obbligatorio: è il percorso di windows.winmd.  
  
 **C:\\Program Files \(x86\)\\Microsoft Visual Studio 12.0\> midlrt "c:\\users\\mblome\\documents\\test\_for\_winmdidl.idl" \/metadata\_dir "C:\\Windows\\System32\\WinMetadata"**  
  
## Note  
 Il file di output di un'operazione di winmdidl ha lo stesso nome del file di input, ma con estensione idl.  
  
 Se si sviluppa un componente Windows Runtime a cui verrà eseguito l'accesso dalla Libreria Windows Runtime, è possibile specificare che winmdidl.exe e midlrt.exe devono essere eseguiti come passaggi di post\-compilazione, in modo che per ogni compilazione vengano generati automaticamente i file IDL e H.   Per un esempio, vedere [Generazione di eventi nei componenti Windows Runtime](../Topic/Raising%20Events%20in%20Windows%20Runtime%20Components.md).