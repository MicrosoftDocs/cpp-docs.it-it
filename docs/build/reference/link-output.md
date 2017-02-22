---
title: "Output di LINK | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "link"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ilk (file)"
  - "DLL [C++], come output del linker"
  - "file eseguibili [C++], come output del linker"
  - "file [C++], LINK"
  - "ILK (file)"
  - "librerie di importazione [C++], creazione"
  - "LINK (strumento) [C++], file MAP"
  - "LINK (strumento) [C++], output"
  - "linker [C++], file di output"
  - "file MAP [C++]"
  - "file MAP [C++], output LINK"
  - "file di output [C++], linker"
ms.assetid: a98b557c-1947-447a-be1f-616fb45a9580
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Output di LINK
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'output di LINK include file exe, file MAP e messaggi.  
  
##  <a name="_core_output_files"></a> File di output  
 Il file di output predefinito prodotto in LINK è un file exe.  Se è specificata l'opzione [\/DLL](../../build/reference/dll-build-a-dll.md), viene compilato un file DLL.  È possibile controllare il nome file dell'output con l'opzione [Nome del file di output \(\/OUT\)](../../build/reference/out-output-file-name.md).  
  
 In modalità incrementale in LINK viene creato un file ilk in cui memorizzare le informazioni sullo stato per compilazioni incrementali successive del programma.  Per informazioni dettagliate sui file ilk, vedere [File ILK](../../build/reference/dot-ilk-files-as-linker-input.md).  Per ulteriori informazioni sul collegamento incrementale, vedere l'opzione [\/INCREMENTAL \(Collegamento incrementale\)](../../build/reference/incremental-link-incrementally.md).  
  
 Quando in LINK viene creato un programma che contiene esportazioni, in genere una DLL, viene compilato anche un file lib, a meno che nella compilazione non si faccia uso di un file exp.  È possibile controllare il nome file della libreria di importazione con l'opzione [\/IMPLIB](../../build/reference/implib-name-import-library.md).  
  
 Se è specificata l'opzione [Genera file MAP \(\/MAP\)](../../build/reference/map-generate-mapfile.md), viene creato un file MAP.  
  
 Se è specificata l'opzione [Genera informazioni di debug \(\/DEBUG\)](../../build/reference/debug-generate-debug-info.md), viene creato un file PDB in cui vengono memorizzate informazioni di debug per il programma.  
  
##  <a name="_core_other_output"></a> Altro output  
 Quando si digita il comando `link` senza altro input della riga di comando, viene visualizzata un'istruzione di utilizzo che riepiloga le opzioni di LINK.  
  
 Viene visualizzato un messaggio con informazioni sul copyright e sulla versione di LINK e ripetuto l'input del file di comando, a meno che non venga utilizzata l'opzione [Non visualizzare messaggio di avvio \(\/NOLOGO\)](../../build/reference/nologo-suppress-startup-banner-linker.md).  
  
 È possibile utilizzare l'opzione [Stampa messaggi sullo stato \(\/VERBOSE\)](../../build/reference/verbose-print-progress-messages.md) per visualizzare informazioni dettagliate sulla compilazione.  
  
 In LINK vengono prodotti messaggi di errore e di avviso nel formato LNK*nnnn*.  Il prefisso degli errori e l'intervallo di numeri vengono utilizzati anche in LIB, DUMPBIN e EDITBIN.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)