---
title: "Cenni preliminari su LIB | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "Lib"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LIB [C++], modalità"
ms.assetid: e997d423-f574-434f-8b56-25585d137ee0
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Cenni preliminari su LIB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Mediante LIB è possibile creare librerie standard, librerie di importazione e file di esportazione utilizzabili con [LINK](../../build/reference/linker-options.md) quando si compila un programma.  LIB viene eseguito da un prompt dei comandi.  
  
 È possibile utilizzare LIB nelle seguenti modalità:  
  
-   [Compilazione o modifica di una libreria COFF](../../build/reference/managing-a-library.md)  
  
-   [Estrazione di un oggetto membro in un file](../../build/reference/extracting-a-library-member.md)  
  
-   [Creazione di un file di esportazione e di una libreria di importazione](../../build/reference/working-with-import-libraries-and-export-files.md)  
  
 Queste modalità si escludono reciprocamente e pertanto è possibile utilizzare LIB secondo un'unica modalità alla volta.  
  
## Opzioni LIB  
 Di seguito sono elencate le opzioni di lib.exe, con un collegamento a ulteriori informazioni.  
  
 **\/DEF**  
 Consente di creare un file di esportazione e una libreria di importazione.  
  
 Per ulteriori informazioni, vedere [Compilazione di una libreria di importazione e di un file di esportazione](../../build/reference/building-an-import-library-and-export-file.md).  
  
 **\/ERRORREPORT**  
 Consente di inviare a Microsoft informazioni relative agli errori interni con lib.exe.  
  
 Per ulteriori informazioni, vedere [Esecuzione di LIB](../../build/reference/running-lib.md).  
  
 **\/EXPORT**  
 Consente di esportare una fuzione dal programma.  
  
 Per ulteriori informazioni, vedere [Compilazione di una libreria di importazione e di un file di esportazione](../../build/reference/building-an-import-library-and-export-file.md).  
  
 **\/EXTRACT**  
 Consente di creare un file oggetto \(obj\) che contiene una copia di un membro di una libreria esistente.  
  
 Per ulteriori informazioni, vedere [Estrazione di membri dalle librerie](../../build/reference/extracting-a-library-member.md).  
  
 **\/INCLUDE**  
 Consente di aggiungere un simbolo alla tabella dei simboli.  
  
 Per ulteriori informazioni, vedere [Compilazione di una libreria di importazione e di un file di esportazione](../../build/reference/building-an-import-library-and-export-file.md).  
  
 **\/LIBPATH**  
 Consente di eseguire l'override del percorso delle librerie specificato nelle variabili di ambiente.  
  
 Per ulteriori informazioni, vedere [Gestione di una libreria](../../build/reference/managing-a-library.md).  
  
 **\/LIST**  
 Visualizza le informazioni sulla libreria di output nell'output standard.  
  
 Per ulteriori informazioni, vedere [Gestione di una libreria](../../build/reference/managing-a-library.md).  
  
 **\/LTCG**  
 Determina la compilazione della libreria mediante la generazione di codice in fase di collegamento.  
  
 Per ulteriori informazioni, vedere [Esecuzione di LIB](../../build/reference/running-lib.md).  
  
 **\/MACHINE**  
 Consente di specificare la piattaforma di destinazione per il programma.  
  
 Per ulteriori informazioni, vedere [Esecuzione di LIB](../../build/reference/running-lib.md).  
  
 **\/NAME**  
 Quando si compila una libreria di importazione, è necessario specificare il nome della DLL per la quale compilare la libreria di importazione.  
  
 Per ulteriori informazioni, vedere [Gestione di una libreria](../../build/reference/managing-a-library.md).  
  
 **\/NODEFAULTLIB**  
 Consente la rimozione di una o più librerie predefinite dall'elenco delle librerie in cui si effettuano le ricerche per la risoluzione dei riferimenti esterni.  
  
 Per ulteriori informazioni, vedere [Gestione di una libreria](../../build/reference/managing-a-library.md).  
  
 **\/NOLOGO**  
 Consente di evitare la visualizzazione del messaggio contenente le informazioni sul copyright e il numero di versione di LIB, nonché impedire che vengano visualizzati i file di comando.  
  
 Per ulteriori informazioni, vedere [Esecuzione di LIB](../../build/reference/running-lib.md).  
  
 **\/OUT**  
 Consente di eseguire l'override del nome predefinito per i file di output.  
  
 Per ulteriori informazioni, vedere [Gestione di una libreria](../../build/reference/managing-a-library.md).  
  
 **\/REMOVE**  
 Consente di omettere un oggetto dalla libreria di output.  
  
 Per ulteriori informazioni, vedere [Gestione di una libreria](../../build/reference/managing-a-library.md).  
  
 **\/SUBSYSTEM**  
 Consente di comunicare al sistema operativo le modalità di esecuzione di un programma creato mediante collegamento alla libreria di output.  
  
 Per ulteriori informazioni, vedere [Gestione di una libreria](../../build/reference/managing-a-library.md).  
  
 **\/VERBOSE**  
 Visualizza informazioni dettagliate sullo stato di avanzamento della sessione, inclusi i nomi dei file obj aggiunti.  
  
 Per ulteriori informazioni, vedere [Esecuzione di LIB](../../build/reference/running-lib.md).  
  
 **\/WX**  
 Considera gli avvisi come errori.  
  
 Per ulteriori informazioni, vedere [Esecuzione di LIB](../../build/reference/running-lib.md).  
  
## Vedere anche  
 [Riferimenti a LIB](../../build/reference/lib-reference.md)   
 [File di input LIB](../../build/reference/lib-input-files.md)   
 [File di output di LIB](../../build/reference/lib-output-files.md)   
 [Altri output di LIB](../../build/reference/other-lib-output.md)   
 [Struttura di una libreria](../../build/reference/structure-of-a-library.md)