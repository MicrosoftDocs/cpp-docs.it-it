---
title: Funzioni &lt;set&gt;
ms.date: 11/04/2016
f1_keywords:
- set/std::swap (map)
- set/std::swap (multiset)
ms.assetid: d1277d14-8502-46c0-b820-bcda820f9406
ms.openlocfilehash: a3a63fb86caa3485b1ee14538c3eb1f1ff72923e
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68246406"
---
# <a name="ltsetgt-functions"></a>Funzioni &lt;set&gt;

## <a name="swap"></a> swap (map)

Scambia gli elementi di due set.

```cpp
template <class Key, class Traits, class Allocator>
void swap(set<Key, Traits, Allocator>& left, set<Key, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Il set che fornisce gli elementi da scambiare o il set cui elementi devono essere scambiati con quelli dell'oggetto set *sinistro*.

*A sinistra*\
Il set cui elementi devono essere scambiati con quelli dell'oggetto set *a destra*.

### <a name="remarks"></a>Note

La funzione modello è un algoritmo specializzato sulla classe contenitore set per eseguire la funzione membro `left.` [swap](../standard-library/set-class.md#swap)(`right`). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello

`template` \< **classT**> **void swap**( **T&** , **T&** )

nella classe algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

### <a name="example"></a>Esempio

Vedere l'esempio di codice relativo alla classe membro [set::swap](../standard-library/set-class.md#swap) per indicazioni su come usare la versione modello di `swap`.

## <a name="swap_multiset"></a> swap (multiset)

Scambia gli elementi di due oggetti multiset.

```cpp
template <class Key, class Traits, class Allocator>
void swap(multiset<Key, Traits, Allocator>& left, multiset<Key, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
L'oggetto multiset che fornisce gli elementi da scambiare o i cui elementi devono essere scambiati con quelli dell'oggetto multiset *sinistro*.

*A sinistra*\
L'oggetto multiset la cui elementi devono essere scambiati con quelli dell'oggetto multiset *a destra*.

### <a name="remarks"></a>Note

La funzione modello è un algoritmo specializzato sulla classe contenitore multiset per eseguire la funzione membro `left.` [swap](../standard-library/multiset-class.md#swap)(`right`). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello

`template` \< **classT**> **void swap**( **T&** , **T&** )

nella classe algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

### <a name="example"></a>Esempio

Vedere l'esempio di codice relativo alla classe membro [multiset::swap](../standard-library/multiset-class.md#swap) per indicazioni su come usare la versione modello di `swap`.
