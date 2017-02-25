---
title: "Errore irreversibile C1311 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1311"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1311"
ms.assetid: 6590a06c-ce9d-4f17-8f62-c809343143b8
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Errore irreversibile C1311
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

formato COFF non in grado di inizializzare in modo statico 'var' con numero byte di indirizzo  
  
 Un indirizzo con valore non noto in fase di compilazione non può essere assegnato staticamente a una variabile il cui tipo ha un'archiviazione minore di 4 byte.  
  
 Questo errore può verificarsi in un codice che sarebbe altrimenti codice C\+\+ valido.  
  
 Nell'esempio riportato di seguito viene illustrata una condizione da cui potrebbe essere generato l'errore C1311.  
  
```  
char c = (char)"Hello, world";   // C1311  
char *d = (char*)"Hello, world";   // OK  
```