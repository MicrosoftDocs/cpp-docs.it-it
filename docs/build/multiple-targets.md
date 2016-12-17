---
title: "Destinazioni multiple | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "makefile, destinazioni"
  - "destinazioni multiple in NMAKE"
  - "destinazioni, più in NMAKE"
  - "NMAKE (programma), le destinazioni"
ms.assetid: b609a179-0b9f-4b08-9930-998047588ae0
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Destinazioni multiple
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

NMAKE valuta destinazioni multiple in una singola dipendenza come se ciascuna fosse specificata in un blocco di descrizione separato.  
  
 Ad esempio, in questo corso...  
  
```Output  
bounce.exe leap.exe : jump.obj  
   echo Building...  
```  
  
 ... valutato come:  
  
```Output  
bounce.exe : jump.obj  
   echo Building...  
leap.exe : jump.obj  
   echo Building...  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Destinazioni](../build/targets.md)