---
title: Confronto di caratteri | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- comparing characters
- MBCS [C++], character comparison
- characters [C++], comparing
ms.assetid: 18846e44-3e6e-40c4-9b42-3153fb15db20
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b969783a19c0836a8ab81d75820fc688df3ef31e
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33854951"
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