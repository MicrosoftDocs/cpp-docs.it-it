---
title: "È in conflitto con x86 compilatore | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 8e47f0d3-afe0-42d9-9efa-de239ddd3a05
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2b2b9c4cf871e8436a8da34a862d205541e7dc5c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="conflicts-with-the-x86-compiler"></a>Conflitti con il compilatore x86
Tipi di dati che sono maggiori di 4 byte non vengono automaticamente allineate nello stack quando si utilizza x86 compilatore per compilare un'applicazione. Poiché l'architettura di x86 compilatore è in uno stack di allineamento a 4 byte, qualsiasi valore maggiore di 4 byte, ad esempio, un intero a 64 bit, non può essere allineato automaticamente a un indirizzo di 8 byte.  
  
 Utilizzo di dati non allineati ha due implicazioni.  
  
-   Potrebbe richiedere più tempo per accedere a percorsi non allineati superiore a quello necessario per accedere ai percorsi allineati.  
  
-   Percorsi non allineati non possono essere usati in operazioni interlocked.  
  
 Se si richiede un allineamento più rigido, utilizzare `__declspec(align(N)) on your variable declarations`. In questo modo il compilatore allineare in modo dinamico lo stack per soddisfare le specifiche. Tuttavia, in modo dinamico la regolazione dello stack in fase di esecuzione potrebbe rallentare l'esecuzione dell'applicazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi e archiviazione](../build/types-and-storage.md)   
 [align](../cpp/align-cpp.md)