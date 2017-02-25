---
title: "Errore matematico M6202 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "M6202"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "M6202"
ms.assetid: 4d17045f-c6dc-4705-9512-e9af12c35fb4
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore matematico M6202
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

"funzione": errore \_SING  
  
 Un argomento della funzione specificata è un valore di singolarità per la funzione.  La funzione non è definita per tale argomento.  
  
 L'errore chiama la funzione `_matherr` con il nome di funzione, gli argomenti e il tipo di errore.  È possibile riscrivere la funzione `_matherr` per personalizzare la gestione di alcuni errori matematici a virgola mobile di runtime.