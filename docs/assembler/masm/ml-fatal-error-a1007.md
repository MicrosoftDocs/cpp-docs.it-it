---
title: "ML Fatal Error A1007 | Microsoft Docs"
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
  - "A1007"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A1007"
ms.assetid: bcf9c826-beb3-4e93-91fe-1ffd34995fbf
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ML Fatal Error A1007
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**livello di annidamento troppo in profondità**  
  
 L'assemblatore ha raggiunto il limite di annidamento.  Il limite è altrimenti 20 livelli a eccezione di quanto indicato.  
  
 Uno dei seguenti elementi è stato annidati troppo profondamente:  
  
-   Una direttiva di alto livello come [.IF](../../assembler/masm/dot-if.md),  [.REPEAT](../../assembler/masm/dot-repeat.md), o  [.WHILE](../../assembler/masm/dot-while.md).  
  
-   Una definizione della struttura.  
  
-   una direttiva dell'condizionale\-assembly.  
  
-   Una definizione della routine.  
  
-   In [PUSHCONTEXT](../../assembler/masm/pushcontext.md) direttiva \(il limite è 10\).  
  
-   Una definizione del segmento.  
  
-   un file di inclusione.  
  
-   una macro.  
  
## Vedere anche  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)