---
title: "Utilizzo di una libreria di importazione e di un file di esportazione | Microsoft Docs"
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
  - "esportazioni circolari"
  - "file di esportazione"
  - "librerie di importazione, utilizzo"
ms.assetid: 2634256a-8aa5-4495-8c9e-6cde10e4ed76
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Utilizzo di una libreria di importazione e di un file di esportazione
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando mediante un programma \(un file eseguibile o una DLL\) vengono eseguite esportazioni in un altro programma da cui vengono effettuate anche importazioni o se mediante più di due programmi vengono eseguite esportazioni e importazioni reciproche, è necessario che i comandi per il collegamento di tali programmi consentano esportazioni circolari.  
  
 In assenza di esportazioni circolari, quando si collega un programma in cui vengono utilizzate esportazioni provenienti da un altro programma, è necessario specificare la libreria di importazione per il programma di esportazione.  Tale libreria viene creata quando si collega il programma di esportazione.  Di conseguenza, è necessario collegare il programma di esportazione prima del programma di importazione.  Se ad esempio il file DUE.dll importa da UNO.dll, è necessario innanzitutto collegare il file UNO.dll e ottenere la libreria di importazione UNO.lib.  Quindi specificare UNO.lib durante il collegamento di DUE.dll.  Quando si crea il file DUE.dll tramite il linker, viene creata anche la relativa libreria di importazione, ovvero DUE.lib.  Utilizzare DUE.lib durante il collegamento di programmi che importano da DUE.dll.  
  
 In una situazione di esportazione circolare, tuttavia, non è possibile collegare tutti i programmi interdipendenti utilizzando librerie di importazione derivate dagli altri programmi.  Nell'esempio illustrato in precedenza, se DUE.dll esporta anche verso UNO.dll, la libreria di importazione per DUE.dll non sarà ancora disponibile al momento del collegamento di UNO.dll.  In presenza di esportazioni circolari, utilizzare LIB per creare una libreria di importazione e un file di esportazione per uno dei programmi.  
  
 Scegliere innanzitutto uno dei programmi su cui eseguire LIB.  Nel comando LIB elencare tutti gli oggetti e le librerie per il programma e specificare l'opzione \/DEF.  Se il programma utilizza un file con estensione def o le specifiche dell'opzione \/EXPORT, specificare anche questi ultimi.  
  
 Dopo aver creato la libreria di importazione \(lib\) e il file di esportazione \(exp\) per il programma, utilizzare la libreria di importazione durante il collegamento dell'altro programma o degli altri programmi.  Verrà creata una libreria di importazione per ciascun programma di esportazione compilato.  Se si esegue ad esempio il comando LIB sugli oggetti e le esportazioni per UNO.dll, vengono creati UNO.lib e UNO.exp.  A questo punto si può utilizzare UNO.lib durante il collegamento del file DUE.dll. Questo passaggio consente di creare anche la libreria di importazione DUE.lib.  
  
 Collegare infine il programma scelto inizialmente.  Nel comando LINK specificare gli oggetti e le librerie per il programma, il file exp creato mediante LIB per il programma e la libreria o le librerie di importazione per le esportazioni utilizzate dal programma.  Inoltre, il comando LINK per UNO.dll contiene UNO.exp e DUE.lib, nonché gli oggetti e le librerie che devono essere inseriti in UNO.dll.  Non specificare il file con estensione def o le specifiche dell'opzione \/EXPORT nel comando LINK. Queste informazioni non sono necessarie perché le definizioni di esportazione sono contenute nel file con estensione exp.  Quando si effettua un collegamento mediante un file exp, non viene creata alcuna libreria di importazione, in quanto si presuppone che ne sia stata creata una al momento della creazione del file exp.  
  
## Vedere anche  
 [Utilizzo di librerie di importazione e file di esportazione](../../build/reference/working-with-import-libraries-and-export-files.md)