---
title: "È in conflitto con x86 compilatore | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 8e47f0d3-afe0-42d9-9efa-de239ddd3a05
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: a1a039b086b806c22e9cfe5ceda907916a7cf5de
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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