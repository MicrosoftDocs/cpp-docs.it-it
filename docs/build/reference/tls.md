---
title: "/TLS | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/TLS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/TLS (opzione dumpbin)"
  - "-TLS (opzione dumpbin)"
ms.assetid: 2b3f48f9-cac4-4351-b15c-2833b43bc709
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# /TLS
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Visualizza la struttura IMAGE\_TLS\_DIRECTORY da un file eseguibile.  
  
## Note  
 \/TLS visualizza i campi della struttura TLS nonché gli indirizzi delle funzioni di callback TLS.  
  
 Se un programma non utilizza la memoria locale dei thread, la relativa immagine non conterrà una struttura TLS.  Per ulteriori informazioni, vedere [thread](../../cpp/thread.md).  
  
 La struttura IMAGE\_TLS\_DIRECTORY è definita in winnt.h.  
  
## Vedere anche  
 [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)