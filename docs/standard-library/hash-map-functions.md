---
title: Funzioni &lt;hash_map&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 28748cd0-71f7-41b9-b068-579183645fba
caps.latest.revision: 9
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 85c900f2263ae1c1089478badc85388e3b5e8548
ms.openlocfilehash: 6c11e1f90ce05aa3a4dc22ce31bed104ef0fa795
ms.lasthandoff: 02/24/2017

---
# <a name="lthashmapgt-functions"></a>Funzioni &lt;hash_map&gt;
|||  
|-|-|  
|[swap](#swap)|[swap (hash_map)](#swap__hash_map_)|  
  
##  <a name="a-nameswaphashmapa--swap-hashmap"></a><a name="swap__hash_map_"></a>  swap (hash_map)  
  
> [!NOTE]
>  Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).  
  
 Scambia gli elementi di due oggetti hash_map.  
  
```
void swap(
    hash_map <Key, Type, Traits, Alloctor>& left,
    hash_map <Key, Type, Traits, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `right`  
 Oggetto hash_map i cui elementi devono essere scambiati con quelli dell'oggetto hash_map `left`.  
  
 `left`  
 Oggetto hash_map i cui elementi devono essere scambiati con quelli dell'oggetto hash_map `right`.  
  
### <a name="remarks"></a>Note  
 La funzione modello è un algoritmo specializzato sulla classe contenitore hash_map per l'esecuzione della funzione membro `left.`[swap](../standard-library/basic-ios-class.md#basic_ios__swap)*(right*). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello, **template \<class T> void swap(T&, T&)**, nel file di intestazione dell'algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.  
  
 In Visual C++ .NET 2003 i membri dei file di intestazione [<hash_map>](../standard-library/hash-map.md) e [<hash_set>](../standard-library/hash-set.md) non si trovano più nello spazio dei nomi std, ma sono stati spostati nello spazio dei nomi stdext. Per altre informazioni, vedere [Spazio dei nomi stdext](../standard-library/stdext-namespace.md).  
  
##  <a name="a-nameswapa--swap"></a><a name="swap"></a>  swap  
  
> [!NOTE]
>  Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).  
  
 Scambia gli elementi di due oggetti hash_multimap.  
  
```
void swap(
    hash_multimap <Key, Type, Traits, Alloctor>& left,
    hash_multimap <Key, Type, Traits, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `right`  
 Oggetto hash_multimap i cui elementi devono essere scambiati con quelli dell'oggetto hash_multimap `left`.  
  
 `left`  
 Oggetto hash_multimap i cui elementi devono essere scambiati con quelli dell'oggetto hash_multimap `right`.  
  
### <a name="remarks"></a>Note  
 La funzione modello è un algoritmo specializzato sulla classe contenitore hash_multimap per l'esecuzione della funzione membro `left.`[swap](../standard-library/hash-multimap-class.md#hash_multimap__swap)*(right*`)`. Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello, **template \<class T> void swap(T&, T&)**, nel file di intestazione dell'algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.  
  
 In Visual C++ .NET 2003 i membri dei file di intestazione [<hash_map>](../standard-library/hash-map.md) e [<hash_set>](../standard-library/hash-set.md) non si trovano più nello spazio dei nomi std, ma sono stati spostati nello spazio dei nomi stdext. Per altre informazioni, vedere [Spazio dei nomi stdext](../standard-library/stdext-namespace.md).  
  
## <a name="see-also"></a>Vedere anche  
 [<hash_map>](../standard-library/hash-map.md)




