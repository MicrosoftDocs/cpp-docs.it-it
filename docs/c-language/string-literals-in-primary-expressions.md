---
title: "Valori letterali stringa in espressioni primarie | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "stringhe letterali, espressioni primarie"
ms.assetid: 3ec31278-527b-40d2-8c83-6b09e2d81ca6
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Valori letterali stringa in espressioni primarie
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un "valore letterale stringa" è un carattere, un carattere di tipo wide o una sequenza di caratteri adiacenti racchiusi tra virgolette doppie.  Poiché non sono variabili, né i valori letterali stringa né i relativi elementi possono essere l'operando di sinistra in un'operazione di assegnazione.  Il tipo di valore letterale stringa è una matrice di `char` \(o una matrice di `wchar_t` per i valori letterali di tipo wide\-string\).  Le matrici nelle espressioni vengono convertite in puntatori.  Vedere [Valori letterali stringa](../c-language/c-string-literals.md) per ulteriori informazioni sulle stringhe.  
  
## Vedere anche  
 [Espressioni primarie C](../c-language/c-primary-expressions.md)