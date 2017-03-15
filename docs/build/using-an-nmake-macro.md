---
title: "Utilizzo di una macro di NMAKE | Microsoft Docs"
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
  - "macro, NMAKE"
  - "NMAKE (macro), utilizzo"
ms.assetid: 95c87fbc-76e6-48c0-8536-9bfe179f328e
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Utilizzo di una macro di NMAKE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per utilizzare una macro, racchiuderne il nome tra parentesi precedute da un simbolo di dollaro \($\) come riportato di seguito.  
  
## Sintassi  
  
```  
$(macroname)  
```  
  
## Osservazioni  
 Non sono consentiti spazi.  Le parentesi sono facoltative se *macroname* è costituito da un solo carattere.  La stringa di definizione sostituisce $\(*macroname*\). Una macro non definita viene sostituita con una stringa null.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
 [Sostituzione di macro](../build/macro-substitution.md)  
  
## Vedere anche  
 [Macro e NMAKE](../build/macros-and-nmake.md)