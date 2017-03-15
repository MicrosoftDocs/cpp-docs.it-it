---
title: "Caratteri wide | Microsoft Docs"
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
  - "caratteri wide"
ms.assetid: 165c4a12-8ab9-45fb-9964-c55e9956194c
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Caratteri wide
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**ANSI 3.1.3.4** Valore di una costante carattere Integer che contiene più di un carattere o costante carattere "wide" che contiene più di un carattere multibyte  
  
 La costante carattere normale 'ab' ha l'Integer \(int\)0x6162.  Quando è presente più di un byte, i byte letti in precedenza vengono spostati dal valore **CHAR\_BIT** e il byte successivo viene confrontato tramite l'operatore OR bit per bit con i bit **CHAR\_BIT** meno significativi.  Il numero di byte nella costante carattere multibyte non può superare sizeof\(int\), ovvero 4 per il codice di destinazione a 32 bit.  
  
 La costante carattere multibyte viene letta come descritto in precedenza e viene convertita in una costante carattere "wide" mediante la funzione di runtime `mbtowc`.  Se il risultato non è una costante carattere "wide" valida, viene generato un errore.  In ogni caso, il numero di byte esaminato dalla funzione `mbtowc` è limitato al valore di `MB_CUR_MAX`.  
  
## Vedere anche  
 [Caratteri](../c-language/characters.md)