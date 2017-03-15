---
title: "Confronto tra caratteri | Microsoft Docs"
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
  - "caratteri [C++], confronto"
  - "confronto dei caratteri"
  - "MBCS [C++], caratteri (confronto)"
ms.assetid: 18846e44-3e6e-40c4-9b42-3153fb15db20
caps.latest.revision: 8
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 8
---
# Confronto tra caratteri
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Attenersi ai suggerimenti indicati di seguito.  
  
-   Il confronto tra un byte iniziale noto e un carattere ASCII funziona correttamente:  
  
    ```  
    if( *sz1 == 'A' )  
    ```  
  
-   Il confronto tra due caratteri sconosciuti richiede l'utilizzo di una delle macro definite in Mbstring.h:  
  
    ```  
    if( !_mbccmp( sz1, sz2) )  
    ```  
  
     In tal modo, entrambi i byte di un carattere a byte doppio vengono confrontati per stabilire l'uguaglianza.  
  
## Vedere anche  
 [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)   
 [Overflow del buffer](../text/buffer-overflow.md)