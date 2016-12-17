---
title: "Collegamento di un eseguibile a una DLL | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DLL [C++], collegamento"
  - "collegamento dinamico in fase di carico [C++]"
  - "file eseguibili [C++], collegamento a DLL"
  - "collegamento esplicito [C++]"
  - "collegamento implicito [C++]"
  - "collegamento [C++], DLL"
  - "caricamento di DLL [C++]"
  - "fase di esecuzione [C++], collegamento"
ms.assetid: 7592e276-dd6e-4a74-90c8-e1ee35598ea3
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Collegamento di un eseguibile a una DLL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un file eseguibile si collega o carica una DLL in uno dei due modi seguenti:  
  
-   [Collegamento implicito](../build/linking-implicitly.md)  
  
-   [Collegamento esplicito](../build/linking-explicitly.md)  
  
 Il collegamento implicito viene talvolta definito caricamento statico o collegamento dinamico in fase di caricamento.  Il collegamento esplicito viene invece definito caricamento dinamico o collegamento dinamico in fase di esecuzione.  
  
 Con il collegamento implicito, l'eseguibile che utilizza la DLL si collega a una libreria di importazione \(file lib\) fornita dal creatore della DLL.  Il sistema operativo carica la DLL quando viene caricato l'eseguibile che la utilizza.  L'eseguibile client chiama le funzioni esportate della DLL come se fossero contenute nell'eseguibile.  
  
 Con il collegamento esplicito, l'eseguibile che utilizza la DLL deve effettuare delle chiamate di funzione per caricare e scaricare esplicitamente la DLL e per accedere alle funzioni esportate della DLL.  L'eseguibile client deve chiamare le funzioni esportate tramite un puntatore a funzione.  
  
 Un eseguibile può utilizzare la stessa DLL con entrambi i metodi di collegamento.  Questi meccanismi non si escludono a vicenda, poiché un eseguibile può collegarsi a una DLL in modo implicito mentre un altro può connettersi a essa in modo esplicito.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Utilizzo di librerie di importazione e file di esportazione](../build/reference/working-with-import-libraries-and-export-files.md)  
  
-   [Scelta del metodo di collegamento da utilizzare](../build/determining-which-linking-method-to-use.md)  
  
-   [Percorso di ricerca utilizzato da Windows per l'individuazione di una DLL](../build/search-path-used-by-windows-to-locate-a-dll.md)  
  
## Vedere anche  
 [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md)