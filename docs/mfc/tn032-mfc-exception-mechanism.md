---
title: "TN032: meccanismo di eccezioni MFC | Microsoft Docs"
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
  - "vc.mfc.exceptions"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CException (classe), utilizzo"
  - "MFC, eccezioni"
  - "TN032"
ms.assetid: 0271f0aa-82cb-47a2-b7ea-e88126fc7e43
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# TN032: meccanismo di eccezioni MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le versioni precedenti di Visual C\+\+ non supportano il meccanismo di eccezione C\+\+ standard e le macro fornite da MFC **TRY\/CATCH\/THROW** che vengano utilizzate.  Questa versione di Visual C\+\+ supporta pienamente le eccezioni C\+\+.  In questa nota sono stati trattati alcuni dettagli di implementazione avanzati delle macro precedenti incluso come pulire automaticamente gli oggetti basati su stack.  Poiché le eccezioni C\+\+ supportano la rimozione dello stack per impostazione predefinita, questa nota tecnica non è più necessaria.  
  
 Fare riferimento a [Eccezioni: Utilizzare le macro MFC e le eccezioni C\+\+](../mfc/exceptions-using-mfc-macros-and-cpp-exceptions.md) per ulteriori informazioni sulle differenze tra le macro MFC e le nuove parole chiave C\+\+.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)