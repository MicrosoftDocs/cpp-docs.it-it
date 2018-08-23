---
title: Incremento e decremento dei puntatori | Microsoft Docs
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f4fff5d7ec20ce052e4d831f1556432186ebc7bb
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42603360"
---
# <a name="incrementing-and-decrementing-pointers"></a>Incremento e decremento dei puntatori
Usare i suggerimenti seguenti:  
  
-   Fare riferimento a byte iniziali, finale non byte. Non è in genere sicuro a un puntatore a un byte finale. È in genere più sicuro analizzare una stringa in avanti anziché in ordine inverso.  
  
-   Esistono puntatore incrementare o decrementare funzioni e macro disponibili per lo spostamento di un intero carattere:  
  
    ```  
    sz1++;  
    ```  
  
     diventa:  
  
    ```  
    sz1 = _mbsinc( sz1 );  
    ```  
  
     Il `_mbsinc` e `_mbsdec` funzioni correttamente incrementano e decrementano `character` unità, indipendentemente dalle dimensioni del carattere.  
  
-   Per decrementi, è necessario un puntatore all'inizio della stringa, come illustrato di seguito:  
  
    ```  
    sz2--;  
    ```  
  
     diventa:  
  
    ```  
    sz2 = _mbsdec( sz2Head, sz2 );  
    ```  
  
     In alternativa, potrebbe essere il puntatore iniziale a un carattere valido nella stringa, in modo che:  
  
    ```  
    sz2Head < sz2  
    ```  
  
     È necessario disporre di un puntatore a un byte iniziale valido noto.  
  
-   Si potrebbe voler mantenere un puntatore al carattere precedente per chiamate più rapide a `_mbsdec`.  
  
## <a name="see-also"></a>Vedere anche  
 [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)   
 [Indici di byte](../text/byte-indices.md)