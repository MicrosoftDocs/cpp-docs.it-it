---
title: Funzioni &lt;set&gt;
ms.date: 11/04/2016
f1_keywords:
- set/std::swap (map)
- set/std::swap (multiset)
ms.assetid: d1277d14-8502-46c0-b820-bcda820f9406
ms.openlocfilehash: a3a63fb86caa3485b1ee14538c3eb1f1ff72923e
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79419553"
---
# <a name="ltsetgt-functions"></a>Funzioni &lt;set&gt;

## <a name="swap"></a>Scambia (mappa)

Scambia gli elementi di due set.

```cpp
template <class Key, class Traits, class Allocator>
void swap(set<Key, Traits, Allocator>& left, set<Key, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

\ a *destra*
Set che fornisce gli elementi da scambiare o il set i cui elementi devono essere scambiati con quelli del set a *sinistra*.

\ a *sinistra*
Set i cui elementi devono essere scambiati con quelli del set *right*.

### <a name="remarks"></a>Osservazioni

La funzione modello è un algoritmo specializzato sulla classe contenitore impostata per eseguire la funzione membro `left.`[swap](../standard-library/set-class.md#swap)(`right`). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello

`template` \< **classt**> **void swap**( **t &** , **t &** )

nella classe algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

### <a name="example"></a>Esempio

Vedere l'esempio di codice relativo alla classe membro [set::swap](../standard-library/set-class.md#swap) per indicazioni su come usare la versione modello di `swap`.

## <a name="swap_multiset"></a>swap (multiset)

Scambia gli elementi di due oggetti multiset.

```cpp
template <class Key, class Traits, class Allocator>
void swap(multiset<Key, Traits, Allocator>& left, multiset<Key, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

\ a *destra*
Oggetto multiset che fornisce gli elementi da scambiare o il multiset i cui elementi devono essere scambiati con quelli dell'oggetto multiset *rimasto*.

\ a *sinistra*
Multiset i cui elementi devono essere scambiati con quelli dell'oggetto multiset a *destra*.

### <a name="remarks"></a>Osservazioni

La funzione modello è un algoritmo specializzato sulla classe contenitore multiset per eseguire la funzione membro `left.`[swap](../standard-library/multiset-class.md#swap)(`right`). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello

`template` \< **classt**> **void swap**( **t &** , **t &** )

nella classe algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

### <a name="example"></a>Esempio

Vedere l'esempio di codice relativo alla classe membro [multiset::swap](../standard-library/multiset-class.md#swap) per indicazioni su come usare la versione modello di `swap`.
