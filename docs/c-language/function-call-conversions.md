---
title: "Conversioni di chiamata di funzione | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "chiamate di funzione, conversioni di tipi di argomenti"
  - "chiamate di funzione, conversione"
  - "funzioni [C], conversioni di argomenti"
ms.assetid: 04ea0f81-509a-4913-8b12-0937a81babcf
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Conversioni di chiamata di funzione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il tipo di conversione eseguita sugli argomenti in una chiamata di funzione dipende dalla presenza di prototipo di funzione \(dichiarazione con prototipo\) con i tipi di argomento dichiarati per la funzione chiamata.  
  
 Se un prototipo di funzione è presente e include tipi di argomento dichiarati, il compilatore esegue il controllo dei tipi \(vedere [Funzioni](../c-language/functions-c.md)\).  
  
 Se non è presente alcun prototipo di funzione presente, sugli argomenti nella chiamata di funzione vengono eseguite solo le conversioni aritmetiche consuete.  Queste conversioni vengono eseguite in modo indipendente su ciascun argomento nella chiamata.  Ciò significa che un valore **float** viene convertito in un valore **double**, un valore `char` o **short** viene convertito in un valore `int` e un valore `unsigned char` o **unsigned short** viene convertito in un valore `unsigned int`.  
  
## Vedere anche  
 [Conversione di tipi](../c-language/type-conversions-c.md)