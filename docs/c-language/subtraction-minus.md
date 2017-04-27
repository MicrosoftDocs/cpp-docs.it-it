---
title: Sottrazione (-) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- operators [C], subtraction
- subtraction operator, syntax
ms.assetid: 9cacba7d-20b3-4372-8a63-ba5d8ee64177
caps.latest.revision: 7
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
translationtype: Human Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 78723d67f5938f8c8e4cfd299a18de39da9787ab
ms.lasthandoff: 04/01/2017

---
# <a name="subtraction--"></a>Sottrazione (-)
L’operatore di sottrazione (**-**) sottrae il secondo operando dal primo. Entrambi gli operandi possono essere sia tipi integrali che a virgola mobile, oppure un operando può essere un puntatore e l'altro un Integer.  
  
 Quando vengono sottratti due puntatori, la differenza viene convertita in un valore integrale con segno, dividendo la differenza per la dimensione di un valore del tipo a cui sono indirizzati i puntatori. La dimensione del valore integrale viene definita dal tipo **ptrdiff_t** nel file di inclusione standard STDDEF.H. Il risultato rappresenta il numero di posizioni di memoria di tale tipo presenti tra i due indirizzi. Solo nel caso di due elementi della stessa matrice, si può essere certi che il risultato sia significativo, come illustrato in [Puntatore aritmetico](../c-language/pointer-arithmetic.md).  
  
 Quando un valore intero viene sottratto da un valore puntatore, l'operatore di sottrazione converte il valore intero (*i*), moltiplicandolo per la dimensione del valore a cui è indirizzato il puntatore. Dopo la conversione, il valore intero rappresenta le posizioni di memoria *i*, dove ogni posizione ha la lunghezza specificata dal tipo di puntatore. Quando il valore intero convertito viene sottratto dal valore puntatore, il risultato corrisponde ai percorsi dell'indirizzo di memoria *i* precedenti all'indirizzo originale. Il nuovo puntatore punta a un valore del tipo a cui è indirizzato il valore di puntatore originale.  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori di addizione C](../c-language/c-additive-operators.md)
