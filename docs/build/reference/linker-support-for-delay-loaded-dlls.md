---
title: "Supporto per le DLL a caricamento ritardato nel linker | Microsoft Docs"
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
  - "caricamento ritardato di DLL, supporto del linker"
ms.assetid: b2d7e449-2809-42b1-9c90-2c0ca5e31a14
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Supporto per le DLL a caricamento ritardato nel linker
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il linker di Visual C\+\+ supporta il caricamento ritardato delle DLL  rendendo pertanto inutile l'utilizzo delle funzioni **LoadLibrary** e **GetProcAddress** di [!INCLUDE[winsdkshort](../../atl/reference/includes/winsdkshort_md.md)].  
  
 Prima del rilascio di Visual C\+\+ 6.0, l'unico metodo per caricare una DLL in fase di esecuzione consisteva nell'utilizzo di **LoadLibrary** e **GetProcAddress**. Nel sistema operativo la DLL veniva caricata al momento del caricamento dell'eseguibile o della DLL attiva.  
  
 A partire da Visual C\+\+ 6.0, in caso di collegamento statico a una DLL il linker fornisce opzioni che consentono di ritardare il caricamento della DLL fino al momento della chiamata di una funzione in essa contenuta.  
  
 Un'applicazione consente di eseguire il caricamento ritardato di una DLL utilizzando l'opzione del linker [\/DELAYLOAD \(Delay Load Import\)](../../build/reference/delayload-delay-load-import.md) con una funzione di supporto \(implementazione predefinita fornita da Visual C\+\+\).  La DLL verrà caricata dalla funzione di supporto in fase di esecuzione mediante una chiamata a **LoadLibrary** e **GetProcAddress**.  
  
 È consigliabile prendere in considerazione il caricamento ritardato della DLL quando:  
  
-   Non è possibile chiamare una funzione nella DLL.  
  
-   Una funzione contenuta nella DLL può essere chiamata solo in una fase successiva dell'esecuzione del programma.  
  
 Il caricamento ritardato di una DLL può essere specificato durante la compilazione di un progetto EXE o DLL.  È tuttavia consigliabile che i progetti DLL con caricamento ritardato di una o più DLL non chiamino a loro volta un punto di ingresso a caricamento ritardato in Dllmain.  
  
 Nei seguenti argomenti viene descritto il caricamento ritardato delle DLL:  
  
-   [Specifica delle DLL per il caricamento ritardato](../../build/reference/specifying-dlls-to-delay-load.md)  
  
-   [Scaricamento esplicito di una DLL a caricamento ritardato](../../build/reference/explicitly-unloading-a-delay-loaded-dll.md)  
  
-   [Caricamento di tutte le importazioni per una DLL a caricamento ritardato](../../build/reference/loading-all-imports-for-a-delay-loaded-dll.md)  
  
-   [Associazione di importazioni](../../build/reference/binding-imports.md)  
  
-   [Gestione e notifica degli errori](../../build/reference/error-handling-and-notification.md)  
  
-   [Dump delle importazioni a caricamento ritardato](../../build/reference/dumping-delay-loaded-imports.md)  
  
-   [Vincoli delle DLL a caricamento ritardato](../../build/reference/constraints-of-delay-loading-dlls.md)  
  
-   [Informazioni sulla funzione di supporto](http://msdn.microsoft.com/it-it/6279c12c-d908-4967-b0b3-cabfc3e91d3d)  
  
-   [Sviluppo di una funzione di supporto personalizzata](../../build/reference/developing-your-own-helper-function.md)  
  
## Vedere anche  
 [DLL in Visual C\+\+](../../build/dlls-in-visual-cpp.md)   
 [Collegamento](../../build/reference/linking.md)