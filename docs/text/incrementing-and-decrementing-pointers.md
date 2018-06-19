---
title: Incremento e decremento dei puntatori | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- incrementing pointers
- MBCS [C++], pointers
- pointers [C++], multibyte characters
- decrementing pointers
ms.assetid: 0872b4a0-e2bd-4004-8319-070efb76f2fd
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 82a6f792ce622481cbbab821b8a5446186bd692d
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33857129"
---
# <a name="incrementing-and-decrementing-pointers"></a>Incremento e decremento dei puntatori
Utilizzare i suggerimenti seguenti:  
  
-   Consente di scegliere i byte iniziali e non a quelli finali. Non è in genere sicuro a un puntatore a un byte finale. È in genere più sicuro analizzare una stringa in avanti anziché in ordine inverso.  
  
-   Sono disponibili funzioni di incremento/decremento di puntatore e le macro disponibili per lo spostamento di un intero carattere:  
  
    ```  
    sz1++;  
    ```  
  
     Diventa:  
  
    ```  
    sz1 = _mbsinc( sz1 );  
    ```  
  
     Il `_mbsinc` e `_mbsdec` funzioni correttamente incrementano e decrementano `character` unità, indipendentemente dalle dimensioni del carattere.  
  
-   Per diminuisce, è necessario un puntatore all'inizio della stringa, come illustrato di seguito:  
  
    ```  
    sz2--;  
    ```  
  
     Diventa:  
  
    ```  
    sz2 = _mbsdec( sz2Head, sz2 );  
    ```  
  
     In alternativa, potrebbe essere il puntatore di testa un carattere valido nella stringa, di modo che:  
  
    ```  
    sz2Head < sz2  
    ```  
  
     È necessario disporre di un puntatore a un byte iniziale noto e valido.  
  
-   È possibile conservare un puntatore al carattere precedente per le chiamate più veloce alle `_mbsdec`.  
  
## <a name="see-also"></a>Vedere anche  
 [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)   
 [Indici di byte](../text/byte-indices.md)