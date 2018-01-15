---
title: Confronto di caratteri | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- comparing characters
- MBCS [C++], character comparison
- characters [C++], comparing
ms.assetid: 18846e44-3e6e-40c4-9b42-3153fb15db20
caps.latest.revision: "8"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 28c2cd3a2e868a595d73d06b5cae8e71ec8cc313
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="character-comparison"></a>Confronto tra caratteri
Utilizzare i suggerimenti seguenti:  
  
-   Confronto tra un byte iniziale noto con un carattere ASCII funziona correttamente:  
  
    ```  
    if( *sz1 == 'A' )  
    ```  
  
-   Il confronto di due caratteri sconosciuti richiede l'utilizzo di una delle macro definite in Mbstring. h:  
  
    ```  
    if( !_mbccmp( sz1, sz2) )  
    ```  
  
     In questo modo si garantisce che entrambi i byte di un carattere a byte doppio vengono confrontati per verificarne l'uguaglianza.  
  
## <a name="see-also"></a>Vedere anche  
 [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)   
 [Overflow del buffer](../text/buffer-overflow.md)