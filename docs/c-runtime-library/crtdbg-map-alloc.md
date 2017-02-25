---
title: "_CRTDBG_MAP_ALLOC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CRTDBG_MAP_ALLOC"
  - "_CRTDBG_MAP_ALLOC"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CRTDBG_MAP_ALLOC (macro)"
  - "allocazione di memoria, nelle build di debug"
  - "CRTDBG_MAP_ALLOC (macro)"
ms.assetid: 435242b8-caea-4063-b765-4a608200312b
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# _CRTDBG_MAP_ALLOC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando il flag **\_CRTDBG\_MAP\_ALLOC** è definito nella versione di debug di un'applicazione, la versione di base delle funzioni dell'heap sono mappate direttamente nelle corrispondenti versioni di debug.  Il flag viene utilizzato in Crtdbg.h per eseguire il mapping.  Questo flag è disponibile solo quando il flag di [\_DEBUG](../c-runtime-library/debug.md) è stato definito nell'applicazione.  
  
 Per ulteriori informazioni su come utilizzare la versione di debug rispetto alla versione di base di una funzione dell'heap, vedere [Utilizzare la versione di debug rispetto alla versione di base](../Topic/Debug%20Versions%20of%20Heap%20Allocation%20Functions.md).  
  
## Vedere anche  
 [Flag di controllo](../c-runtime-library/control-flags.md)