---
title: Confronto di caratteri | Microsoft Docs
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 246801abcb04cc8d9c2fd1a005183501bde240d1
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42612326"
---
# <a name="character-comparison"></a>Confronto tra caratteri
Usare i suggerimenti seguenti:  
  
-   Confronto di un byte iniziale noto con un carattere ASCII funziona correttamente:  
  
    ```  
    if( *sz1 == 'A' )  
    ```  
  
-   Confronto tra due caratteri sconosciuti richiede l'uso di una delle macro definite in Mbstring. h:  
  
    ```  
    if( !_mbccmp( sz1, sz2) )  
    ```  
  
     Ciò garantisce che entrambi i byte di un carattere a byte doppio devono essere confrontati per verificarne l'uguaglianza.  
  
## <a name="see-also"></a>Vedere anche  
 [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)   
 [Overflow del buffer](../text/buffer-overflow.md)