---
title: "Supporto a virgola mobile per il codice precedente (Visual C++) | Microsoft Docs"
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
ms.assetid: a2a26b96-7bc2-418a-981a-51aa1a0294a2
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Supporto a virgola mobile per il codice precedente (Visual C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il contenuto dei registri MMX e di stack a virgola mobile \(MM0\-MM7\/ST0\-ST7\) viene mantenuto tra i vari scambi di contesto.  Per questi registri non esiste alcuna convenzione di chiamata esplicita.  L'utilizzo di questi registri è assolutamente vietato nei codici in modalità kernel.  
  
## Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)