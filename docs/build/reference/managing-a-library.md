---
title: "Gestione di una libreria | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLibrarianTool.IgnoreAllDefaultLibraries"
  - "VC.Project.VCLibrarianTool.AdditionalDependencies"
  - "VC.Project.VCLibrarianTool.RemoveObjects"
  - "VC.Project.VCLibrarianTool.LibraryPaths"
  - "VC.Project.VCLibrarianTool.OutputFile"
  - "VC.Project.VCLibrarianTool.IgnoreDefaultLibraryNames"
  - "VC.Project.VCLibrarianTool.AdditionalLibraryDirectories"
  - "VC.Project.VCLibrarianTool.ListContentsFile"
  - "VC.Project.VCLibrarianTool.ListContents"
  - "VC.Project.VCLibrarianTool.SubSystemVersion"
  - "VC.Project.VCLibrarianTool.IgnoreDefaultLibraryName"
  - "VC.Project.VCLibrarianTool.SubSystem"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/CONVERT (opzione di Gestione librerie)"
  - "/LIBPATH (opzione di Gestione librerie)"
  - "/LINK50COMPAT (opzione di Gestione librerie)"
  - "/LIST (opzione di Gestione librerie)"
  - "/OUT (opzione di Gestione librerie)"
  - "/REMOVE (opzione di Gestione librerie)"
  - "/SUBSYSTEM (opzione di Gestione librerie)"
  - "CONVERT (opzione di Gestione librerie)"
  - "-CONVERT (opzione di Gestione librerie)"
  - "LIB [C++], gestione delle librerie COFF"
  - "LIBPATH (opzione di Gestione librerie)"
  - "-LIBPATH (opzione di Gestione librerie)"
  - "LINK50COMPAT (opzione di Gestione librerie)"
  - "-LINK50COMPAT (opzione di Gestione librerie)"
  - "LIST (opzione di Gestione librerie)"
  - "-LIST (opzione di Gestione librerie)"
  - "file oggetto"
  - "file oggetto, compilazione e modifica"
  - "OUT (opzione di Gestione librerie)"
  - "-OUT (opzione di Gestione librerie)"
  - "REMOVE (opzione di Gestione librerie)"
  - "-REMOVE (opzione di Gestione librerie)"
  - "SUBSYSTEM (opzione di Gestione librerie)"
  - "-SUBSYSTEM (opzione di Gestione librerie)"
ms.assetid: f56a8b85-fbdc-4c09-8d8e-00f0ffe1da53
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Gestione di una libreria
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La modalità predefinita di LIB è la compilazione o la modifica di una libreria di oggetti COFF.  LIB viene eseguito in questa modalità quando non si specifica l'opzione \/EXTRACT \(per copiare un oggetto in un file\) o \/DEF \(per compilare una libreria di importazione\).  
  
 Per compilare una libreria sulla base di oggetti e\/o librerie, utilizzare la seguente sintassi:  
  
```  
LIB [options...] files...  
```  
  
 Questo comando consente di creare una libreria da uno o più file di input \(*files*\).  *files* può essere costituito da file oggetto COFF, file oggetto OMF a 32 bit o librerie COFF esistenti.  In LIB viene creata una libreria contenente tutti gli oggetti dei file specificati.  Se un file di input è un file oggetto OMF a 32 bit, viene convertito in COFF prima di procedere alla compilazione della libreria.  Non vengono accettati oggetti OMF a 32 bit contenuti in librerie create con la versione di LIB a 16 bit.  È necessario utilizzare innanzitutto la versione di LIB a 16 bit per estrarre l'oggetto. Il file oggetto estratto potrà quindi essere utilizzato come input per la versione di LIB a 32 bit.  
  
 Per impostazione predefinita, il file di output viene denominato utilizzando il nome di base del primo file oggetto o libreria e l'estensione LIB.  Tale file viene inserito nella directory corrente.  Se in tale directory è già presente un file con lo stesso nome, verrà sovrascritto dal file di output.  Per conservare una libreria esistente, utilizzare l'opzione \/OUT per specificare un nome per il file di output.  
  
 Le seguenti opzioni possono essere utilizzate per le operazioni di compilazione e modifica di una libreria:  
  
 \/LIBPATH:`dir`  
 Consente di eseguire l'override del percorso delle librerie specificato nelle variabili di ambiente.  Per informazioni dettagliate, vedere la descrizione dell'opzione [\/LIBPATH](../../build/reference/libpath-additional-libpath.md) di LINK.  
  
 \/LIST  
 Visualizza le informazioni sulla libreria di output nell'output standard.  L'output può essere reindirizzato a un file.  È possibile utilizzare \/LIST per determinare il contenuto di una libreria esistente senza modificarla.  
  
 \/NAME:*filename*  
 Quando si compila una libreria di importazione, è necessario specificare il nome della DLL per la quale compilare la libreria di importazione.  
  
 \/NODEFAULTLIB  
 Consente la rimozione di una o più librerie predefinite dall'elenco delle librerie in cui si effettuano le ricerche per la risoluzione dei riferimenti esterni.  Per ulteriori informazioni, vedere [\/NODEFAULTLIB](../../build/reference/nodefaultlib-ignore-libraries.md).  
  
 \/OUT:*filename*  
 Consente di eseguire l'override del nome predefinito per i file di output.  Per impostazione predefinita, la libreria di output viene creata nella directory corrente, con il nome di base della prima libreria o file oggetto nella riga di comando e l'estensione LIB.  
  
 \/REMOVE:*object*  
 Consente di omettere l'oggetto specificato dalla libreria di output.  LIB crea una libreria di output combinando tutti gli oggetti, siano essi in file oggetto o in librerie, quindi eliminando tutti gli oggetti specificati con \/REMOVE.  
  
 \/SUBSYSTEM:{CONSOLE &#124; EFI\_APPLICATION &#124; EFI\_BOOT\_SERVICE\_DRIVER &#124; EFI\_ROM &#124; EFI\_RUNTIME\_DRIVER &#124; NATIVE &#124; POSIX &#124; WINDOWS &#124; WINDOWSCE}\[,\#\[.\#\#\]\]  
 Consente di comunicare al sistema operativo le modalità di esecuzione di un programma creato mediante collegamento alla libreria di output.  Per ulteriori informazioni, vedere la descrizione dell'opzione [\/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md) di LINK.  
  
 Per le opzioni di LIB specificate nella riga di comando non viene rilevata la distinzione tra maiuscole e minuscole.  
  
 È possibile utilizzare LIB per effettuare le seguenti attività di gestione delle librerie:  
  
-   Aggiungere oggetti a una libreria, specificare il nome file della libreria esistente e i nomi file dei nuovi oggetti.  
  
-   Combinare due o più librerie, specificare i nomi file di tali librerie.  È possibile aggiungere oggetti e combinare librerie con un unico comando LIB.  
  
-   Sostituire un membro di una libreria con un nuovo oggetto, specificare la libreria contenente l'oggetto membro da sostituire e il nome file del nuovo oggetto o della libreria che lo contiene.  Quando un oggetto con lo stesso nome è presente in più file di input, nella libreria di output viene inserito l'ultimo oggetto specificato nel comando LIB.  Quando si sostituisce un membro di una libreria, specificare il nuovo oggetto o la nuova libreria dopo la libreria che contiene l'oggetto precedente.  
  
-   Per eliminare un membro da una libreria, utilizzare l'opzione \/REMOVE.  Le eventuali specifiche di \/REMOVE vengono elaborate dopo aver combinato tutti gli oggetti di input, indipendentemente dall'ordine specificato nella riga di comando.  
  
> [!NOTE]
>  Non è possibile eliminare un membro e contemporaneamente estrarlo in un file.  È necessario estrarre innanzitutto l'oggetto membro mediante l'opzione \/EXTRACT, quindi eseguire nuovamente LIB con l'opzione \/REMOVE.  Questo comportamento differisce da quello della versione di LIB a 16 bit per le librerie OMF fornita con altri prodotti Microsoft.  
  
## Vedere anche  
 [Riferimenti a LIB](../../build/reference/lib-reference.md)