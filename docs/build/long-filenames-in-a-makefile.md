---
title: "Nomi file lunghi in un makefile | Microsoft Docs"
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
  - "nomi file lunghi"
  - "NMAKE (programma), nomi file lunghi"
ms.assetid: 626d56fc-8879-46ba-9c2d-dd386c78cccc
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Nomi file lunghi in un makefile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I nomi file lunghi devono essere racchiusi tra virgolette doppie, come nell'esempio seguente:  
  
```  
all : "VeryLongFileName.exe"  
```  
  
## Vedere anche  
 [Contenuto di un makefile](../build/contents-of-a-makefile.md)