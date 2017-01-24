---
title: "FreeLibrary e AfxFreeLibrary | Microsoft Docs"
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
  - "FreeLibrary"
  - "AfxFreeLibrary"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DLL di estensione [C++], scaricamento"
  - "AfxFreeLibrary (metodo)"
  - "scaricamento di DLL"
  - "FreeLibrary (metodo)"
  - "DLL [C++], collegamento"
  - "collegamento esplicito [C++]"
  - "DLL [C++], scaricamento"
ms.assetid: 4a48d290-3971-43e9-8e97-ba656cd0c8f8
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# FreeLibrary e AfxFreeLibrary
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Processi che in modo esplicito collegano a una DLL chiamata della [FreeLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259188) funzione quando il modulo DLL non è più necessario.  Questa funzione decrementa il conteggio dei riferimenti del modulo e, se il conteggio dei riferimenti è pari a zero, ne rimuove l'associazione dallo spazio degli indirizzi del processo.  
  
 In un'applicazione MFC, utilizzare [AfxFreeLibrary](../Topic/AfxFreeLibrary.md) anziché `FreeLibrary` per scaricare una DLL di estensione.  L'interfaccia \(prototipo di funzione\) per `AfxFreeLibrary` è la stessa di `FreeLibrary`.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Collegamento implicito](../build/linking-implicitly.md)  
  
-   [Scelta del metodo di collegamento da utilizzare](../build/determining-which-linking-method-to-use.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [LoadLibrary e AfxLoadLibrary](../build/loadlibrary-and-afxloadlibrary.md)  
  
-   [GetProcAddress](../build/getprocaddress.md)  
  
## Vedere anche  
 [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md)   
 [FreeLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259188)   
 [AfxFreeLibrary](../Topic/AfxFreeLibrary.md)