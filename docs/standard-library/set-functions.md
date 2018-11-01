---
title: Funzioni &lt;set&gt;
ms.date: 11/04/2016
f1_keywords:
- set/std::swap (map)
- set/std::swap (multiset)
ms.assetid: d1277d14-8502-46c0-b820-bcda820f9406
ms.openlocfilehash: 3873a85218c738b3a9693926e064a10b82a553c1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50467340"
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

*right*<br/>
Il set che fornisce gli elementi da scambiare o il set cui elementi devono essere scambiati con quelli dell'oggetto set *sinistro*.

*left*<br/>
Il set cui elementi devono essere scambiati con quelli dell'oggetto set *a destra*.

### <a name="remarks"></a>Note

La funzione modello è un algoritmo specializzato sulla classe contenitore set per eseguire la funzione membro `left.` [swap](../standard-library/set-class.md#swap)(`right`). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello

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

*right*<br/>
L'oggetto multiset che fornisce gli elementi da scambiare o i cui elementi devono essere scambiati con quelli dell'oggetto multiset *sinistro*.

*left*<br/>
L'oggetto multiset la cui elementi devono essere scambiati con quelli dell'oggetto multiset *a destra*.

### <a name="remarks"></a>Note

La funzione modello è un algoritmo specializzato sulla classe contenitore multiset per eseguire la funzione membro `left.` [swap](../standard-library/multiset-class.md#swap)(`right`). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello

`template` \< **classT**> **void swap**( **T&**, **T&**)

nella classe algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

### <a name="example"></a>Esempio

Vedere l'esempio di codice relativo alla classe membro [multiset::swap](../standard-library/multiset-class.md#swap) per indicazioni su come usare la versione modello di `swap`.

## <a name="see-also"></a>Vedere anche

[\<set>](../standard-library/set.md)<br/>
