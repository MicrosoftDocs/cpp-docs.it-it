---
title: "Errore irreversibile C1054 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1054"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1054"
ms.assetid: 9cfb7307-b22a-4418-b7c0-2621b0ab5b1b
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore irreversibile C1054
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

limite del compilatore: inizializzatori eccessivamente annidati  
  
 Il limite di annidamento sugli inizializzatori \(10\-15 livelli a seconda della combinazione dei tipi di dati da inizializzare\) è stato superato nel codice.  
  
### Per correggere valutando le seguenti possibili soluzioni  
  
1.  Semplificare i tipi di dati da inizializzare per ridurre l'annidamento.  
  
2.  Inizializzare le variabili in istruzioni distinte dopo la dichiarazione.