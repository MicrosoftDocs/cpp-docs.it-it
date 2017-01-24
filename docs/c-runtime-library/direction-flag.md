---
title: "Flag di direzione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.flags"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "flag di direzione"
ms.assetid: 0836b4af-dbbb-4ab8-a4b2-156f2e2099e2
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Flag di direzione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il flag di direzione è un flag di CPU specifico dei processori Intel 80x86.  Viene applicato a tutte le istruzioni in linguaggio assembly che utilizzano il prefisso REP \(ripeti\), ad esempio MOVS, MOVSD, MOVSW e altre.  Gli indirizzi forniti alle istruzioni a cui è possibile applicarli, vengono incrementati se il flag di direzione non è impostato.  
  
 Nelle routine di runtime del linguaggio C si presuppone che il flag di controllo sia selezionato.  Se si stanno utilizzando altre funzioni con funzioni di runtime del linguaggio C, è necessario assicurarsi che le altre funzioni ignorino il flag di direzione o lo ripristinino alle sue condizione originali.  È previsto che il flag di direzione che viene rimosso al momento dell'accesso renda il codice di runtime più veloce ed efficiente.  
  
 Le funzioni della libreria di runtime del linguaggio C, come le routine per la gestione delle stringhe e quelle per la gestione del buffer, prevedono che il flag di direzione non sia impostato.  
  
## Vedere anche  
 [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md)