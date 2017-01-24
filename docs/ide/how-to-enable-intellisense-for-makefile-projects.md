---
title: "Procedura: abilitare IntelliSense per progetti makefile | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCNMakeTool.IntelliSense"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IntelliSense, progetti Makefile"
  - "progetti Makefile, IntelliSense"
ms.assetid: 9443f453-f18f-4f12-a9a1-ef9dbf8b188f
caps.latest.revision: 15
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: abilitare IntelliSense per progetti makefile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il funzionamento di IntelliSense nell'ambiente di sviluppo integrato \(IDE\) con i progetti makefile di Visual C\+\+ è compromesso quando determinate impostazioni di progetto, od opzioni del compilatore, sono impostate in modo errato.  Attenersi alla procedura di seguito riportata per configurare i progetti makefile di Visual C\+\+. In questo modo, IntelliSense potrà funzionare correttamento con i progetti makefile nell'ambiente di sviluppo di Visual Studio.  
  
### Per attivare IntelliSense in modo che funzioni con i progetti makefile nell'ambiente di sviluppo integrato \(IDE\)  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà**.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../misc/how-to-open-project-property-pages.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Selezionare la pagina delle proprietà **NMake**, quindi modificare le proprietà di **IntelliSense** in base alle necessità.  
  
    -   Impostare la proprietà **Definizioni preprocessore** per definire i simboli del preprocessore nel progetto makefile.  Per ulteriori informazioni vedere [\/D \(definizioni preprocessore\)](../build/reference/d-preprocessor-definitions.md).  
  
    -   Impostare la proprietà **Percorsi di ricerca** per specificare l'elenco delle directory in cui il compilatore dovrà effettuare la ricerca dei riferimenti da risolvere che sono stati passati alle direttive del preprocessore nel progetto makefile.  Per ulteriori informazioni, vedere [\/I \(Directory di inclusione aggiuntive\)](../build/reference/i-additional-include-directories.md).  
  
         Per i progetti che sono compilati utilizzando CL.EXE da una finestra di comando, impostare la variabile di ambiente **INCLUDE** per specificare le directory in cui il compilatore effettuerà la ricerca dei riferimenti da risolvere che sono stati passati alle direttive del preprocessore nel progetto makefile.  
  
    -   Impostare la proprietà **Inclusioni imposte** per specificare quali file di intestazione dovranno essere elaborati durante la compilazione del progetto makefile.  Per ulteriori informazioni, vedere [\/FI \(Specifica il file di inclusione da utilizzare\)](../build/reference/fi-name-forced-include-file.md).  
  
    -   Impostare la proprietà **Percorso di ricerca assembly** per specificare l'elenco delle directory in cui il compilatore dovrà effettuare la ricerca dei riferimenti agli assembly .NET da risolvere.  Per ulteriori informazioni, vedere [\/AI \(Specifica le directory di metadati\)](../build/reference/ai-specify-metadata-directories.md).  
  
    -   Impostare la proprietà **Assembly imposti** per specificare quali assembly .NET dovranno essere elaborati durante la compilazione del progetto makefile.  Per ulteriori informazioni, vedere [\/FU \(Specifica file \#using da utilizzare\)](../build/reference/fu-name-forced-hash-using-file.md).  
  
    -   Impostare la proprietà **Opzioni aggiuntive** per specificare opzioni aggiuntive del compilatore che devono essere utilizzate da Intellisense in caso di analisi di file C\+\+.  
  
4.  Scegliere **OK** per chiudere le pagine delle proprietà.  
  
5.  Utilizzare il comando **Salva tutto** per salvare le impostazioni di progetto che sono state modificate.  
  
 All'apertura successiva del progetto makefile nell'ambiente di sviluppo di Visual Studio, eseguire il comando **Pulisci soluzione** e in seguito il comando **Compila soluzione**.  Ora IntelliSense funzionerà correttamente nell'ambiente di sviluppo integrato \(IDE\).  
  
## Vedere anche  
 [Utilizzo di IntelliSense](../Topic/Using%20IntelliSense.md)   
 [Riferimenti a NMAKE](../build/nmake-reference.md)   
 [Procedura: creare un progetto C\+\+ da codice esistente](../ide/how-to-create-a-cpp-project-from-existing-code.md)