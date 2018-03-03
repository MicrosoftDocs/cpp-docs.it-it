---
title: Indici di byte | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- MBCS [C++], byte indices
- byte indices [C++]
ms.assetid: f6e7774a-86c6-41c2-89e3-74fd46432e47
caps.latest.revision: 
author: ghogen
ms.author: ghogen
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 594acadeedad06e9720180c38bd0bcd657391879
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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