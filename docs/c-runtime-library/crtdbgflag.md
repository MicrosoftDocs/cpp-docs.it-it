---
title: "_crtDbgFlag | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_crtDbgFlag"
  - "crtDbgFlag"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_crtDbgFlag (costante)"
  - "crtDbgFlag (costante)"
  - "heap di debug, flag di controllo"
  - "heap di debug, rilevamento memoria"
  - "abilitare i flag di rilevazione allocazione memoria"
  - "allocazione di memoria, flag di rilevamento"
  - "memoria, rilevamento sull'heap di debug"
ms.assetid: 9e7adb47-8ab9-4e19-81d5-e2f237979973
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# _crtDbgFlag
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il flag **\_crtDbgFlag** è costituito da cinque campi di bit che controllano come viene eseguito il monitoraggio, la verifica, la creazione di report e il dump delle allocazioni di memoria nella versione di debug dell'heap.  I campi di bit del flag vengono impostati tramite la funzione [\_CrtSetDbgFlag](../c-runtime-library/reference/crtsetdbgflag.md).  Questo flag e i relativi campi di bit vengono dichiarati in Crtdbg.h.  Questo flag è disponibile solo se è stato definito il flag [\_DEBUG](../c-runtime-library/debug.md) nell'applicazione.  
  
 Per altre informazioni su come usare questo flag con altre funzioni di debug, vedere [Funzioni per la creazione di report sullo stato dello heap](../Topic/CRT%20Debug%20Heap%20Details.md#BKMK_Heap_State_Reporting_Functions).  
  
## Vedere anche  
 [Flag di controllo](../c-runtime-library/control-flags.md)