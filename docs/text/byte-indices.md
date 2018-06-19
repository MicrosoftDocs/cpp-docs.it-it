---
title: Indici di byte | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MBCS [C++], byte indices
- byte indices [C++]
ms.assetid: f6e7774a-86c6-41c2-89e3-74fd46432e47
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 509e66c7ea458519eaa9dc4f52c8a6b65c789d0f
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33863800"
---
# <a name="byte-indices"></a>Indici di byte
Utilizzare i suggerimenti seguenti:  
  
-   Quando si utilizza con un indice di vettori di byte in una stringa presenta problemi simili a quelli per la modifica del puntatore. Si consideri questo esempio, che consente di analizzare una stringa di un carattere di barra rovesciata:  
  
    ```  
    while ( rgch[ i ] != '\\' )  
        i++;  
    ```  
  
     Questo potrebbe essere indice di un byte finale, un responsabile e pertanto potrebbe non indicare a un `character`.  
  
-   Utilizzare il [mbclen](../c-runtime-library/reference/mbclen-mblen-mblen-l.md) funzione per risolvere il problema descritto:  
  
    ```  
    while ( rgch[ i ] != '\\' )  
        i += _mbclen ( rgch + i );  
    ```  
  
     Questa stringa indicizza correttamente a un byte iniziale, pertanto per un `character`. Il `_mbclen` funzione determina la dimensione di un carattere (1 o 2 byte).  
  
## <a name="see-also"></a>Vedere anche  
 [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)   
 [Ultimo carattere di una stringa](../text/last-character-in-a-string.md)