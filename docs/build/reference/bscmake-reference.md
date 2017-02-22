---
title: "Riferimenti a BSCMAKE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".bsc (file), compilazione"
  - "BSC (file di informazioni di visualizzazione), compilazione"
  - "finestre di ricerca"
  - "bsc (file), compilazione"
  - "BSCMAKE"
  - "BSCMAKE, riferimento"
  - "Microsoft Browse Information Maintenance Utility"
ms.assetid: b97ad994-1355-4809-98db-6abc12c6fb13
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Riferimenti a BSCMAKE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

> [!WARNING]
>  Sebbene BSCMAKE venga ancora installato con Visual Studio, non viene più usato dall'IDE.  A partire da Visual Studio 2008, le informazioni di visualizzazione e sui simboli vengono automaticamente archiviate in un file sdf di SQL Server nella cartella della soluzione.  
  
 Microsoft Browse Information Maintenance Utility \(BSCMAKE.EXE\) compila un file di informazioni di visualizzazione \(bsc\) dai file sbr creati durante la compilazione.  È possibile visualizzare un file di informazioni di visualizzazione nel Visualizzatore oggetti.  Per informazioni sul Visualizzatore oggetti, vedere [Spostamento all'interno del Visualizzatore oggetti](http://msdn.microsoft.com/it-it/53eb91aa-08c6-4299-8e3c-a877ae8d0c55).  
  
 Quando si compila il programma, è possibile creare automaticamente un file di informazioni di visualizzazione per il programma, usando BSCMAKE per compilare il file.  Non è necessario sapere come eseguire BSCMAKE se si crea il file di informazioni di visualizzazione nell'ambiente di sviluppo di Visual C\+\+.  Tuttavia, può essere opportuno leggere questo argomento per conoscere le scelte possibili.  
  
 Se si compila il programma all'esterno dell'ambiente di sviluppo, si può comunque creare un file bsc personalizzato che è possibile esaminare nell'ambiente.  Eseguire BSCMAKE sui file sbr creati durante la compilazione.  
  
> [!NOTE]
>  È possibile avviare questo strumento solo dal prompt dei comandi di [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)].  Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.  
  
 Questa sezione presenta i seguenti argomenti:  
  
-   [Cenni preliminari sulla compilazione di file di informazioni di visualizzazione](../../build/reference/building-browse-information-files-overview.md)  
  
-   [Compilazione di un file bsc](../../build/reference/building-a-dot-bsc-file.md)  
  
-   [Riga di comando di BSCMAKE](../../build/reference/bscmake-command-line.md)  
  
-   [File di comando di BSCMAKE](../../build/reference/bscmake-command-file-response-file.md)  
  
-   [Opzioni di BSCMAKE](../../build/reference/bscmake-options.md)  
  
-   [Codici di uscita di BSCMAKE](../../build/reference/bscmake-exit-codes.md)  
  
## Vedere anche  
 [Strumenti per la compilazione in C\/C\+\+](../../build/reference/c-cpp-build-tools.md)