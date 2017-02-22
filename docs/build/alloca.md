---
title: "alloca | Microsoft Docs"
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
ms.assetid: 2b209335-e3a0-4934-93f0-3b5925d22918
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# alloca
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'istruzione [\_alloca](../c-runtime-library/reference/alloca.md) è necessaria per mantenere lo stack allineato a 16 byte ed eventualmente per utilizzare un puntatore ai frame.  
  
 Nello stack allocato è necessario che venga incluso uno spazio, in un'area inferiore, per i parametri delle funzioni chiamate successivamente, come illustrato in [Allocazione nello stack](../build/stack-allocation.md).  
  
## Vedere anche  
 [Utilizzo dello stack](../build/stack-usage.md)