---
title: Indici di byte | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- MBCS [C++], byte indices
- byte indices [C++]
ms.assetid: f6e7774a-86c6-41c2-89e3-74fd46432e47
caps.latest.revision: "7"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.openlocfilehash: ec28ce5e577fe4d1e766934095d22a7e64a6a3da
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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