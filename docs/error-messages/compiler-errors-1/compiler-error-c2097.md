---
title: "Errore del compilatore C2097 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2097"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2097"
ms.assetid: 7e5b2fd4-f61c-4b8a-b265-93e987a04bd3
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C2097
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

inizializzazione non valida  
  
### Possibili cause  
  
1.  Una variabile è stata inizializzata con un valore non costante.  
  
2.  Un indirizzo breve è stato inizializzato con un indirizzo lungo.  
  
3.  Una struttura, unione o matrice locale è stata inizializzata con un'espressione non costante durante la compilazione con **\/Za**.  
  
4.  È stata effettuata un'inizializzazione con un'espressione contenente un operatore virgola.  
  
5.  È stata effettuata un'inizializzazione con un'espressione che non è costante né simbolica.