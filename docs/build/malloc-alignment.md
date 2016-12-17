---
title: "Allineamento malloc | Microsoft Docs"
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
ms.assetid: a8d1d1b4-5122-456f-9a64-a50e105e55a5
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Allineamento malloc
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

[malloc](../c-runtime-library/reference/malloc.md) viene utilizzata per restituire la memoria allineata in modo adeguato per archiviare qualsiasi oggetto con un allineamento fondamentale e che possa adattarsi alla quantità di memoria allocata.  Un *allineamento fondamentale* è un allineamento inferiore o uguale al massimo allineamento supportato dall'implementazione senza una specifica di allineamento. In Visual C\+\+ questo è l'allineamento richiesto per `double` o 8 byte.  Nel codice destinato a piattaforme a 64 bit, è 16 byte. Ad esempio, un'allocazione a quattro byte verrebbe allineata rispetto a un limite che supporta qualsiasi oggetto a quattro byte o più piccolo.  
  
 Visual C\+\+ supporta i tipi con *allineamento esteso*, anche noti come tipi *sovrallineati*.  Ad esempio, i tipi SSE [\_\_m128](../cpp/m128.md) e `__m256`, nonché i tipi dichiarati utilizzando `__declspec(align(``n``))` in cui `n` è maggiore di 8, presentano un allineamento esteso.  L'allineamento di memoria su un limite adatto a un oggetto che richiede l'allineamento esteso non è garantito da `malloc`.  Per allocare memoria per i tipi sovrallineati, utilizzare [\_aligned\_malloc](../c-runtime-library/reference/aligned-malloc.md) e le funzioni correlate.  
  
## Vedere anche  
 [Utilizzo dello stack](../build/stack-usage.md)   
 [align](../cpp/align-cpp.md)   
 [\_\_declspec](../cpp/declspec.md)