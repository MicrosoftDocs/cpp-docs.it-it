---
title: "Percorsi di ricerca dei dipendenti | Microsoft Docs"
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
  - "dipendenti, NMAKE"
  - "NMAKE (programma), dipendenti"
ms.assetid: bf998e47-da74-48b5-891d-d3d8ce57264b
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Percorsi di ricerca dei dipendenti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ogni dipendente presenta un percorso facoltativo di ricerca, come riportato di seguito.  
  
## Sintassi  
  
```  
{directory[;directory...]}dependent  
```  
  
## Osservazioni  
 In NMAKE la ricerca di un dipendente viene eseguita prima nella directory corrente, quindi nelle altre directory secondo l'ordine specificato.  Il percorso di ricerca può essere specificato, per intero o in parte, mediante una macro.  Racchiudere i nomi delle directory tra parentesi graffe \({ }\) e separare le varie directory con un punto e virgola \(;\).  Non è consentito l'uso di spazi o tabulazioni.  
  
## Vedere anche  
 [Dipendenti](../build/dependents.md)