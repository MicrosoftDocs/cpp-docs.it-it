---
title: "Errore di ottimizzazione PGO PG0165 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "PG0165"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PG0165"
ms.assetid: e98122e7-ddee-4a2c-96b2-d232e4c65f3e
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Errore di ottimizzazione PGO PG0165
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Lettura di "Filename.pgd": "Versione PGD non supportata \(versione non corrispondente\)".  
  
 I file PGD sono specifici del set di strumenti di un determinato compilatore.  Questo errore viene generato quando si utilizza un compilatore diverso da quello utilizzato per *Filename*.pgd.  L'errore indica che il set di strumenti del compilatore non può utilizzare i dati contenuti in *Filename*.pgd per ottimizzare il programma corrente.  
  
 Per risolvere questo problema, rigenerare il file *Filename*.pgd utilizzando il set di strumenti del compilatore corrente.