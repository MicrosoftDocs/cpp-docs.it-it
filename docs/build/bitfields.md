---
title: "Campi di bit | Microsoft Docs"
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
  - "campi di bit"
ms.assetid: e9a1010d-1e1b-487f-9943-3c574e08f544
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Campi di bit
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I campi di bit delle strutture sono limitati a 64 bit e possono essere di tipo signed int, unsigned int, int64 o unsigned int64.  Per i campi di bit che superano il limite per il tipo verranno ignorati alcuni bit in modo da allineare il campo di bit all'allineamento del tipo successivo.  Ad esempio, i campi di bit integer non possono superare un limite a 32 bit.  
  
## Vedere anche  
 [Tipi e archiviazione](../build/types-and-storage.md)