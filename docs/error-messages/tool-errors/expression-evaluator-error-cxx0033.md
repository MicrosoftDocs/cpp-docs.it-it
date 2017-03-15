---
title: "Errore dell‘analizzatore di espressioni CXX0033 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "CXX0033"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAN0033"
  - "CXX0033"
ms.assetid: 0bd62c5b-de89-481f-9b12-88fe84805afe
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore dell‘analizzatore di espressioni CXX0033
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

errore nelle informazioni di tipo OMF  
  
 Il file eseguibile non ha un formato OMF \(Object Module Format\) valido per il debug.  
  
 Questo errore è identico all'errore CAN0033.  
  
### Possibili cause  
  
1.  Il file eseguibile non è stato creato con il linker distribuito con questa versione di Visual C\+\+.  Ricollegare il codice dell'oggetto utilizzando la versione corrente di LINK.exe.  
  
2.  Il file EXE potrebbe essere danneggiato.  Ricompilare e ricollegare il programma.