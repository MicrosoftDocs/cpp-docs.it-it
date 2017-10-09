---
title: Spaziatura interna e allineamento di membri di struttura | Microsoft Docs
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
- structure members, padding and alignment
ms.assetid: c999820b-dd47-41fc-b923-e4c7ebbcd30f
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: 6c3a87f1277abb9d5cf3b9d87c6713104ba8e108
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="padding-and-alignment-of-structure-members"></a>Riempimento e allineamento dei membri della struttura
**ANSI 3.5.2.1** Riempimento e allineamento dei membri delle strutture. Indica anche se un campo di bit può gestire un limite dell'unità di archiviazione  
  
 I membri di struttura vengono archiviati in modo sequenziale nell'ordine in cui sono dichiarati: il primo avrà l'indirizzo di memoria più basso e l'ultimo quello più alto.  
  
 Ogni oggetto dati dispone di un requisito di allineamento. Il requisito di allineamento per tutti i dati ad eccezione di strutture, unioni e matrici è la dimensione dell'oggetto o la dimensione di compressione corrente (specificata con /Zp o il pragma `pack`, qualunque sia inferiore). Per strutture, unioni e matrici, il requisito di allineamento è il requisito di allineamento di maggiori dimensioni dei propri membri. A ogni oggetto viene allocato un offset affinché  
  
 *offset*  `%` *alignment-requirement* `==` 0  
  
 I campi di bit adiacenti vengono compressi nella stessa unità di allocazione a 1, 2 o 4 byte se i tipi integrali sono della stessa dimensione e se il campo di bit successivo rientra nell'unità di allocazione corrente senza oltrepassare il limite imposto dai requisiti di allineamento comuni dei campi di bit.  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, unioni, enumerazioni e campi di bit](../c-language/structures-unions-enumerations-and-bit-fields.md)
