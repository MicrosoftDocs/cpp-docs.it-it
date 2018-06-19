---
title: È in conflitto con x86 compilatore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 8e47f0d3-afe0-42d9-9efa-de239ddd3a05
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7cd72de4922c297b4a230e0dc0fb606b56a2a473
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32366913"
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