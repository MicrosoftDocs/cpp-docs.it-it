---
title: Aritmetica dei puntatori | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- pointer arithmetic
- arithmetic pointer
ms.assetid: eb924a29-59d3-48a5-9d62-9424790730eb
caps.latest.revision: 6
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 4af0f378f5a89beeb8ce2ccfb4340f0b8538ce36
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="pointer-arithmetic"></a>Puntatore aritmetico
Le operazioni additive che includono un puntatore e un intero forniscono risultati significativi solo se l'operando del puntatore indirizza un membro della matrice e il valore intero produce un offset all'interno dei limiti della stessa matrice. Quando il valore intero viene convertito in un offset di indirizzo, il compilatore presuppone che solo posizioni di memoria della stessa dimensione si trovino tra l'indirizzo originale e l'indirizzo più l'offset.  
  
 Questa ipotesi è valida per membri della matrice. Per definizione, una matrice è una serie di valori dello stesso tipo; i relativi elementi si trovano in posizioni di memoria contigui. Tuttavia, non viene garantito che l'archiviazione per qualsiasi tipo eccetto gli elementi della matrice sia soddisfatta dallo stesso tipo di identificatori. Ovvero spazi vuoti possono apparire tra le posizioni di memoria, persino posizioni dello stesso tipo. Di conseguenza, i risultati dell'aggiunta o della sottrazione da indirizzi di qualsiasi valore eccetto elementi di matrice sono non definiti.  
  
 Analogamente, quando due valori di puntatore vengono sottratti, la conversione suppone che solo valori dello stesso tipo, senza spazi vuoti, rientrino tra gli indirizzi forniti dagli operandi.  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori di addizione C](../c-language/c-additive-operators.md)
