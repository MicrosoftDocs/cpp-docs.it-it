---
title: Funzioni &lt;set&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- set/std::swap (map)
- set/std::swap (multiset)
ms.assetid: d1277d14-8502-46c0-b820-bcda820f9406
ms.openlocfilehash: aac2aaa09f609cd88c2bfab0e3fb66f4edade293
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33857038"
---
# <a name="ltsetgt-functions"></a>Funzioni &lt;set&gt;

|||
|-|-|
|[swap (map)](#swap)|[swap (multiset)](#swap_multiset)|

## <a name="swap"></a>  swap  (map)

Scambia gli elementi di due set.

```cpp
template <class Key, class Traits, class Allocator>
void swap(set<Key, Traits, Allocator>& left, set<Key, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

`right` Il set che fornisce gli elementi da scambiare o il set cui elementi devono essere scambiati con quelli del set di `left`.

`left` Il set cui elementi devono essere scambiati con quelli del set di `right`.

### <a name="remarks"></a>Note

La funzione modello è un algoritmo specializzato sulla classe contenitore set per l'esecuzione della funzione membro `left.`[swap](../standard-library/set-class.md#swap)( `right`). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello

`template` \< **classT**> **void swap**( **T&**, **T&**)

nella classe algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

### <a name="example"></a>Esempio

Vedere l'esempio di codice relativo alla classe membro [set::swap](../standard-library/set-class.md#swap) per indicazioni su come usare la versione modello di `swap`.

## <a name="swap_multiset"></a>  swap  (multiset)

Scambia gli elementi di due oggetti multiset.

```cpp
template <class Key, class Traits, class Allocator>
void swap(multiset<Key, Traits, Allocator>& left, multiset<Key, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

`right` Il multiset che fornisce gli elementi da scambiare o multiset cui elementi devono essere scambiati con quelli del multiset `left`.

`left` Il multiset cui elementi devono essere scambiati con quelli del multiset `right`.

### <a name="remarks"></a>Note

La funzione modello è un algoritmo specializzato sulla classe contenitore multiset per l'esecuzione della funzione membro `left.`[swap](../standard-library/multiset-class.md#swap)( `right`). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello

`template` \< **classT**> **void swap**( **T&**, **T&**)

nella classe algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

### <a name="example"></a>Esempio

Vedere l'esempio di codice relativo alla classe membro [multiset::swap](../standard-library/multiset-class.md#swap) per indicazioni su come usare la versione modello di `swap`.

## <a name="see-also"></a>Vedere anche

[\<set>](../standard-library/set.md)<br/>
