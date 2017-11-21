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
ms.openlocfilehash: 0b9098dc20c33cccfd64631e7732be0128cb5bb0
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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