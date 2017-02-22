---
title: "Percorso di ricerca utilizzato da Windows per l&#39;individuazione di una DLL | Microsoft Docs"
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
  - "DLL [C++], percorso di ricerca di Windows"
  - "ricerca di DLL"
  - "ricerche di DLL conosciute [C++]"
  - "individuazione di DLL"
  - "percorsi di ricerca [C++]"
  - "ricerca [C++], DLL"
  - "Windows [C++], percorso di ricerca DLL"
ms.assetid: 84bfb380-ad7b-4962-b2d0-51b19a45f1bb
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Percorso di ricerca utilizzato da Windows per l&#39;individuazione di una DLL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Indipendentemente dal tipo di collegamento utilizzato \(implicito o esplicito\), viene prima effettuata la ricerca delle DLL conosciute, ad esempio Kernel32.dll e User32.dll.  Le DLL vengono quindi cercate nella sequenza riportata di seguito.  
  
1.  La directory in cui si trova il modulo eseguibile per il processo corrente.  
  
2.  La directory corrente.  
  
3.  La directory di sistema di Windows.  La funzione **GetSystemDirectory** recupera il percorso di questa directory.  
  
4.  La directory Windows.  La funzione **GetWindowsDirectory** recupera il percorso di questa directory.  
  
5.  Le directory elencate nella variabile di ambiente PATH.  
  
    > [!NOTE]
    >  La variabile di ambiente LIBPATH non viene utilizzata.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Collegamento implicito](../build/linking-implicitly.md)  
  
-   [Collegamento esplicito](../build/linking-explicitly.md)  
  
-   [Scelta del metodo di collegamento da utilizzare](../build/determining-which-linking-method-to-use.md)  
  
## Vedere anche  
 [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md)