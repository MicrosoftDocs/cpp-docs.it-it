---
title: "ML Nonfatal Error A2096 | Microsoft Docs"
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
  - "A2096"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "A2096"
ms.assetid: bab0b5ee-b39f-4e44-a41a-3f949fab4297
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# ML Nonfatal Error A2096
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**segmento, gruppo, o registro di segmento previsto**  
  
 Un segmento o un gruppo era previsto non è stato trovato.  
  
 Uno dei seguenti elementi verificato:  
  
-   l'operando sinistro specificato con l'operatore di override di segmento \(**:**\) non è un registro di segmento \(CS, DS, ss, oggetti, FS, o GS\), il nome del gruppo, il nome di un segmento, o l'espressione del segmento.  
  
-   [PRESUPPORREE](../../assembler/masm/assume.md) la direttiva è stato fornito un registro di segmento senza un indirizzo valido del segmento, il registro di segmento, gruppo, o lo speciale  **PIANO** gruppo.  
  
## Vedere anche  
 [ML Error Messages](../../assembler/masm/ml-error-messages.md)