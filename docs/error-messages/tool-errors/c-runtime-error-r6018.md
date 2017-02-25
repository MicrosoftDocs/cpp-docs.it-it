---
title: "R6018 errore di Runtime C | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "R6018"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "R6018"
ms.assetid: f6dd40d1-a119-4d8b-b39e-97350ea23349
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore R6018 del linguaggio C in fase di esecuzione 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Errore di heap imprevisto.  
  
 Si è verificato un errore imprevisto mentre il programma eseguiva un'operazione di gestione della memoria.  
  
 L'errore si verifica in genere quando il programma modifica inavvertitamente i dati dell'heap di runtime.  Tuttavia, esso può anche essere causato da un errore interno al codice di runtime o del sistema operativo.  
  
 Se il compilatore fornisce una libreria contenente `_heapchk` e `_heapwalk`, è possibile utilizzare queste funzioni per diagnosticare l'errore.