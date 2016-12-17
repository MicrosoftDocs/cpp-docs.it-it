---
title: "Sostituzione di macro | Microsoft Docs"
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
  - "macro, NMAKE"
  - "NMAKE (programma), sostituzione di macro"
  - "sostituzione di macro in NMAKE"
ms.assetid: 47465cfe-fd92-49db-aebe-7c2d7ecceb73
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Sostituzione di macro
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando *nomemacro* viene richiamato, tutte le occorrenze di *stringa1* nella relativa stringa di definizione vengono sostituite da *stringa2*.  
  
## Sintassi  
  
```  
$(macroname:string1=string2)  
```  
  
## Osservazioni  
 Per la sostituzione delle macro viene rilevata la distinzione tra maiuscole e minuscole e i caratteri vengono interpretati letteralmente. *stringa1* e *stringa2* non possono richiamare le macro.  La sostituzione non comporta alcuna modifica nella definizione originale.  È possibile sostituire il testo in tutte le macro già definite, a eccezione di [$$@](../build/filename-macros.md).  
  
 Prima dei due punti non devono essere presenti spazi o tabulazioni. Eventuali spazi o tabulazioni dopo i due punti verranno interpretati letteralmente.  Se *stringa2* è null, tutte le ricorrenze di *stringa1* verranno eliminate dalla stringa di definizione della macro.  
  
## Vedere anche  
 [Utilizzo di una macro di NMAKE](../build/using-an-nmake-macro.md)