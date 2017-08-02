---
title: Archiviazione e allineamento di strutture | Microsoft Docs
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
- alignment of structures
- structure storage
- storing structures
- packing structures
ms.assetid: 60ff292f-2595-4f37-ae00-4c4b4f047196
caps.latest.revision: 8
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Human Translation
ms.sourcegitcommit: d6eb43b2e77b11f4c85f6cf7e563fe743d2a7093
ms.openlocfilehash: 8a0f7231b8c3e3f15e650044164c55b42d159c6b
ms.contentlocale: it-it
ms.lasthandoff: 05/18/2017

---
# <a name="storage-and-alignment-of-structures"></a>Archiviazione e allineamento di strutture
**Sezione specifica Microsoft**  
  
 I membri di struttura vengono archiviati in modo sequenziale nell'ordine in cui sono dichiarati: il primo avrà l'indirizzo di memoria più basso e l'ultimo quello più alto.  
  
 Ogni oggetto dati ha un *alignment-requirement*. Per le strutture, il requisito è il più elevato dei relativi membri. A ogni oggetto viene allocato un *offset* affinché  
  
 *offset* `%` *alignment-requirement* `==` 0  
  
 I campi di bit adiacenti vengono compressi nella stessa unità di allocazione a 1, 2 o 4 byte se i tipi integrali sono della stessa dimensione e se il campo di bit successivo rientra nell'unità di allocazione corrente senza oltrepassare il limite imposto dai requisiti di allineamento comuni dei campi di bit.  
  
 Per risparmiare spazio o per rispettare la conformità alle strutture di dati esistenti, è consigliabile archiviare le strutture in modo più o meno compatto. L'opzione del compilatore [/Zp](../build/reference/zp-struct-member-alignment.md)[*n*] e [#pragma pack](../preprocessor/pack.md) controllano il modo in cui i dati della struttura vengono "compressi" in memoria. Quando si usa l'opzione /Zp[*n*] (dove *n* è 1, 2, 4, 8 o 16), ogni membro di struttura dopo il primo viene archiviato entro i limiti di byte, ovvero in base al requisito di allineamento del campo o al requisito delle dimensioni di compressione (*n*), a seconda di quale dei due è inferiore. Espressi sotto forma di formula, i limiti dei byte sono  
  
```  
min( n, sizeof( item ) )  
```  
  
 dove *n* è la dimensione di compressione espressa con l'opzione /Zp[*n*] e *item* è il membro di struttura. La dimensione di compressione predefinita è /Zp8.  
  
 Per utilizzare il pragma `pack` per specificare la compressione in modo diverso da quella specificata nella riga di comando per una determinata struttura, inserire il pragma `pack`, in cui le dimensioni di compressione sono 1, 2, 4, 8 o 16, prima della struttura. Per ripristinare la compressione fornita nella riga di comando, specificare il pragma `pack` senza argomenti.  
  
 Per impostazione predefinita, con il compilatore C Microsoft i campi di bit vengono impostati sulla dimensione **long**. I membri di struttura vengono allineati in base alla dimensione del tipo o alla dimensione di /Zp[*n*], a seconda di quale delle due è inferiore. La dimensione predefinita è 4.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni di struttura](../c-language/structure-declarations.md)
