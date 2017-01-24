---
title: "ML Fatal Error A1010 | Microsoft Docs"
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
  - "A1010"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A1010"
ms.assetid: 9e0b5241-67f4-4740-8701-3b2d2d1ad9e4
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ML Fatal Error A1010
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**annidamento non corrispondente del blocco:**  
  
 Un inizio del blocco non aveva perché corrispondente, o una fine del blocco non ha un inizio corrispondente.  Uno dei seguenti elementi può essere coinvolto:  
  
-   Una direttiva di alto livello come [.IF](../../assembler/masm/dot-if.md),  [.REPEAT](../../assembler/masm/dot-repeat.md), o  [.WHILE](../../assembler/masm/dot-while.md).  
  
-   una direttiva dell'condizionale\-assembly come [Un'istruzione IF](../../assembler/masm/if-masm.md),  [REPEAT](../../assembler/masm/repeat.md), o  **MENTRE**.  
  
-   Una definizione di struttura o unione.  
  
-   Una definizione della routine.  
  
-   Una definizione del segmento.  
  
-   In [POPCONTEXT](../../assembler/masm/popcontext.md) direttiva.  
  
-   Una direttiva dell'condizionale\-assembly, ad esempio [ALTRIMENTI](../../assembler/masm/else-masm.md),  [ELSEIF](../../assembler/masm/elseif-masm.md), o  **ENDIF** senza una corrispondente  [Un'istruzione IF](../../assembler/masm/if-masm.md).  
  
## Vedere anche  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)