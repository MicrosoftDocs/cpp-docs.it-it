---
title: "Calcolo dei valori necessari | Microsoft Docs"
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
  - "funzioni di supporto, calcolo dei valori necessari"
ms.assetid: 4f037d0f-881a-4a48-a9d2-9f8872dfccb7
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Calcolo dei valori necessari
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le informazioni essenziali che devono essere calcolate dalla routine di supporto del caricamento ritardato sono due.  A questo scopo, sono state previste due funzioni inline nel file delayhlp.cpp che consentono di calcolare tali informazioni.  
  
-   Mediante la prima viene calcolato l'indice dell'importazione corrente in tre tabelle differenti, ovvero la tabella di indirizzi di importazione \(IAT\), la tabella di indirizzi di importazione associati \(BIAT\) e la tabella di indirizzi di importazione non associati \(UIAT\)\).  
  
-   Mediante la seconda viene calcolato il numero di importazioni in una tabella IAT valida.  
  
```  
// utility function for calculating the index of the current import  
// for all the tables (INT, BIAT, UIAT, and IAT).  
__inline unsigned  
IndexFromPImgThunkData(PCImgThunkData pitdCur, PCImgThunkData pitdBase) {  
    return pitdCur - pitdBase;  
    }  
  
// utility function for calculating the count of imports given the base  
// of the IAT. NB: this only works on a valid IAT!  
__inline unsigned  
CountOfImports(PCImgThunkData pitdBase) {  
    unsigned        cRet = 0;  
    PCImgThunkData  pitd = pitdBase;  
    while (pitd->u1.Function) {  
        pitd++;  
        cRet++;  
        }  
    return cRet;  
    }  
```  
  
## Vedere anche  
 [Understanding the Helper Function](http://msdn.microsoft.com/it-it/6279c12c-d908-4967-b0b3-cabfc3e91d3d)