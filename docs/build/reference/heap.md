---
title: -HEAP | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /heap
dev_langs: C++
helpviewer_keywords:
- heap allocation, setting heap size
- HEAP editbin option
- -HEAP editbin option
- /HEAP editbin option
ms.assetid: 6ce759b5-75b7-44ff-a5fd-3a83a0ba9a48
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3d21fe68d96274eaf42c2b7d58aa025c49f8a6d6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="heap"></a>/HEAP
Consente di impostare la dimensione in byte dell'heap. Questa opzione si applica solo ai file eseguibili.  
  
```  
  
/HEAP:  
reserve[,commit]  
```  
  
## <a name="remarks"></a>Note  
 L'argomento `reserve` specifica l'allocazione totale iniziale per l'heap nella memoria virtuale. Per impostazione predefinita, la dimensione dell'heap è 1 MB. [Riferimenti a EDITBIN](../../build/reference/editbin-reference.md) arrotondamento per eccesso il valore specificato per il più vicino multiplo di 4 byte.  
  
 Facoltativo `commit` argomento viene interpretato dal sistema operativo. In un sistema operativo Windows, specifica la quantità iniziale di memoria fisica da allocare e la quantità di memoria aggiuntiva da allocare quando l'heap deve essere espanso. Memoria virtuale vincolata consente lo spazio da riservare nel file di paging. Un valore `commit` superiore consente al sistema di allocare la memoria meno spesso quando l'applicazione richiede più spazio nell'heap ma incrementa i requisiti di memoria ed eventualmente la durata di avvio dell'applicazione. Il valore `commit` deve essere minore di o uguale al valore `reserve`.  
  
 Specificare i valori `reserve` e `commit` in notazione decimale o esadecimale del linguaggio C o ottale. Ad esempio, un valore di 1 MB può essere specificato come 1048576 in decimal o come 0x100000 esadecimale o come 04000000 in ottale.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)