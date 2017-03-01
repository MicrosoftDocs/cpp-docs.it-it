---
title: Funzioni &lt;hash_set&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 557a0162-3728-4537-97dc-f9f6cc7ece94
caps.latest.revision: 7
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: 1238f4a4e75f13ccd660554de8c49646549bc2cc
ms.lasthandoff: 02/24/2017

---
# <a name="lthashsetgt-functions"></a>Funzioni &lt;hash_set&gt;
|||  
|-|-|  
|[swap](#swap)|[swap (hash_multiset)](#swap__hash_multiset_)|  
  
##  <a name="a-nameswapa--swap"></a><a name="swap"></a>  swap  
  
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
 La funzione modello `swap` è un algoritmo specializzato sulla classe contenitore hash_set per l'esecuzione della funzione membro `left``.`[swap](../standard-library/hash-set-class.md#hash_set__swap)( `right`). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello  
  
 **template \<class T> void swap(T&, T&),**  
  
 nella classe algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.  
  
 In Visual C++ .NET 2003 i membri dei file di intestazione [<hash_map>](../standard-library/hash-map.md) e [<hash_set>](../standard-library/hash-set.md) non si trovano più nello spazio dei nomi std, ma sono stati spostati nello spazio dei nomi stdext. Per altre informazioni, vedere [Spazio dei nomi stdext](../standard-library/stdext-namespace.md).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio di codice relativo alla classe membro [hash_set::swap](../standard-library/hash-set-class.md#hash_set__swap) per indicazioni su come usare la versione modello di `swap`.  
  
##  <a name="a-nameswaphashmultiseta--swap-hashmultiset"></a><a name="swap__hash_multiset_"></a>  swap (hash_multiset)  
  
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
 La funzione modello `swap` è un algoritmo specializzato sulla classe contenitore hash_multiset per l'esecuzione della funzione membro `left``.`[swap](../standard-library/hash-multiset-class.md#hash_multiset__swap)( `right`). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello  
  
 **template \<class T> void swap(T&, T&),**  
  
 nella classe algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.  
  
 In Visual C++ .NET 2003 i membri dei file di intestazione [<hash_map>](../standard-library/hash-map.md) e [<hash_set>](../standard-library/hash-set.md) non si trovano più nello spazio dei nomi std, ma sono stati spostati nello spazio dei nomi stdext. Per altre informazioni, vedere [Spazio dei nomi stdext](../standard-library/stdext-namespace.md).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio di codice relativo alla classe membro [hash_multiset::swap](../standard-library/hash-multiset-class.md#hash_multiset__swap) per indicazioni su come usare la versione modello di `swap`.  
  
## <a name="see-also"></a>Vedere anche  
 [<hash_set>](../standard-library/hash-set.md)




