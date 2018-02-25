---
title: Funzioni &lt;hash_set&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- hash_set/std::swap
- hash_set/std::swap (hash_multiset)
ms.assetid: 557a0162-3728-4537-97dc-f9f6cc7ece94
caps.latest.revision: 
manager: ghogen
ms.openlocfilehash: e9d6b5fa1588809b99b26d30234337a890b08157
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="lthashsetgt-functions"></a>Funzioni &lt;hash_set&gt;
|||  
|-|-|  
|[swap](#swap)|[swap (hash_multiset)](#swap_hash_multiset)|  
  
##  <a name="swap"></a>  swap  
  
> [!NOTE]
>  Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).  
  
 Scambia gli elementi di due oggetti hash_set.  
  
```
void swap(
    hash_set <Key, Traits, Allocator>& left,
    hash_set <Key, Traits, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `right`  
 Oggetto hash_set che fornisce gli elementi da scambiare o i cui elementi devono essere scambiati con quelli dell'oggetto hash_set `left`.  
  
 `left`  
 Oggetto hash_set i cui elementi devono essere scambiati con quelli dell'oggetto hash_set `right`.  
  
### <a name="remarks"></a>Note  
 La funzione modello `swap` è un algoritmo specializzato sulla classe contenitore hash_set per l'esecuzione della funzione membro `left.`[swap](../standard-library/hash-set-class.md#swap)( `right`). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello  
  
 **template \<class T> void swap(T&, T&),**  
  
 nella classe algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.  
  
   
  
### <a name="example"></a>Esempio  
  Vedere l'esempio di codice relativo alla classe membro [hash_set::swap](../standard-library/hash-set-class.md#swap) per indicazioni su come usare la versione modello di `swap`.  
  
##  <a name="swap_hash_multiset"></a>  swap (hash_multiset)  
  
> [!NOTE]
>  Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).  
  
 Scambia gli elementi di due oggetti hash_multiset.  
  
```
void swap(hash_multiset <Key, Traits, Allocator>& left, hash_multiset <Key, Traits, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `right`  
 Oggetto hash_multiset che fornisce gli elementi da scambiare o i cui elementi devono essere scambiati con quelli dell'oggetto hash_multiset `left`.  
  
 `left`  
 Oggetto hash_multiset i cui elementi devono essere scambiati con quelli dell'oggetto hash_multiset `right`.  
  
### <a name="remarks"></a>Note  
 La funzione modello `swap` è un algoritmo specializzato sulla classe contenitore hash_multiset per l'esecuzione della funzione membro `left.`[swap](../standard-library/hash-multiset-class.md#swap)( `right`). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello  
  
 **template \<class T> void swap(T&, T&),**  
  
 nella classe algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.  
  
   
  
### <a name="example"></a>Esempio  
  Vedere l'esempio di codice relativo alla classe membro [hash_multiset::swap](../standard-library/hash-multiset-class.md#swap) per indicazioni su come usare la versione modello di `swap`.  
  
## <a name="see-also"></a>Vedere anche  
 [<hash_set>](../standard-library/hash-set.md)



