---
title: Funzioni &lt;hash_set&gt;
ms.date: 11/04/2016
f1_keywords:
- hash_set/std::swap
- hash_set/std::swap (hash_multiset)
ms.assetid: 557a0162-3728-4537-97dc-f9f6cc7ece94
ms.openlocfilehash: 1774b0b29c7750e716f1f56def5d29ac329abec0
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88845809"
---
# <a name="lthash_setgt-functions"></a>Funzioni &lt;hash_set&gt;

[scambio](#swap)\
[swap (hash_multiset)](#swap_hash_multiset)

## <a name="swap"></a><a name="swap"></a> scambio

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Scambia gli elementi di due oggetti hash_set.

```cpp
void swap(
    hash_set <Key, Traits, Allocator>& left,
    hash_set <Key, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Il hash_set che fornisce gli elementi da scambiare o i hash_set i cui elementi devono essere scambiati con quelli della hash_set *sinistra*.

*sinistra*\
Hash_set i cui elementi devono essere scambiati con quelli del hash_set *diritto*.

### <a name="remarks"></a>Osservazioni

La `swap` funzione modello è un algoritmo specializzato sulla classe contenitore hash_set per eseguire la funzione membro `left.` [swap](../standard-library/hash-set-class.md#swap)( `right` ). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello

**\<class T>void swap template (t&, t&),**

nella classe algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

### <a name="example"></a>Esempio

Vedere l'esempio di codice relativo alla classe membro [hash_set::swap](../standard-library/hash-set-class.md#swap) per indicazioni su come usare la versione modello di `swap`.

## <a name="swap-hash_multiset"></a><a name="swap_hash_multiset"></a> Scambia (hash_multiset)

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_set](../standard-library/unordered-set-class.md).

Scambia gli elementi di due oggetti hash_multiset.

```cpp
void swap(hash_multiset <Key, Traits, Allocator>& left, hash_multiset <Key, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Il hash_multiset che fornisce gli elementi da scambiare o i hash_multiset i cui elementi devono essere scambiati con quelli della hash_multiset *sinistra*.

*sinistra*\
Hash_multiset i cui elementi devono essere scambiati con quelli del hash_multiset *diritto*.

### <a name="remarks"></a>Osservazioni

La `swap` funzione modello è un algoritmo specializzato sulla classe contenitore hash_multiset per eseguire la funzione membro `left.` [swap](../standard-library/hash-multiset-class.md#swap)( `right` ). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello

**\<class T>void swap template (t&, t&),**

nella classe algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

### <a name="example"></a>Esempio

Vedere l'esempio di codice relativo alla classe membro [hash_multiset::swap](../standard-library/hash-multiset-class.md#swap) per indicazioni su come usare la versione modello di `swap`.

## <a name="see-also"></a>Vedere anche

[<hash_set>](../standard-library/hash-set.md)
