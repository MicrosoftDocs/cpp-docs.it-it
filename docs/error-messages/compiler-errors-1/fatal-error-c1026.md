---
title: "Errore irreversibile C1026 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1026"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1026"
ms.assetid: 89bb9d40-673a-44aa-a9f4-b42c07b49d44
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore irreversibile C1026
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

overflow dello stack del parser. Programma troppo complesso  
  
 Lo spazio necessario per analizzare il programma ha provocato un overflow dello stack del compilatore.  
  
 Semplificare le espressioni con i seguenti accorgimenti:  
  
-   Riduzione dell'annidamento nelle istruzioni `for` e `switch`.  Inserimento delle istruzioni con un livello più profondo di annidamento in funzioni distinte.  
  
-   Suddivisione delle espressioni lunghe che contengono operatori virgola o chiamate a funzioni.