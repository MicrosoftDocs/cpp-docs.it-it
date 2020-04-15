---
title: Funzioni &lt;hash_map&gt;
ms.date: 11/04/2016
f1_keywords:
- hash_map/std::swap
- hash_map/std::swap (hash_map)
ms.assetid: 28748cd0-71f7-41b9-b068-579183645fba
ms.openlocfilehash: 7cb2e46f19bd30e3eb313cde867c6a055cb8bca5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370620"
---
# <a name="lthash_mapgt-functions"></a>Funzioni &lt;hash_map&gt;

|||
|-|-|
|[Swap](#swap)|[swap (hash_map)](#swap_hash_map)|

## <a name="swap-hash_map"></a><a name="swap_hash_map"></a>swap (hash_map)

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Scambia gli elementi di due oggetti hash_map.

```cpp
void swap(
    hash_map <Key, Type, Traits, Alloctor>& left,
    hash_map <Key, Type, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*va bene*\
Il hash_map i cui elementi devono essere scambiati con quelli della mappa *a sinistra.*

*Sinistra*\
Il hash_map i cui elementi devono essere scambiati con quelli della mappa *a destra.*

### <a name="remarks"></a>Osservazioni

La funzione modello è un algoritmo specializzato sulla classe contenitore hash_map per l'esecuzione della funzione membro `left.`[swap](../standard-library/basic-ios-class.md#swap)*(right*). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello, **template \<class T> void swap(T&, T&)**, nel file di intestazione dell'algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

## <a name="swap"></a><a name="swap"></a>Swap

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Scambia gli elementi di due oggetti hash_multimap.

```cpp
void swap(
    hash_multimap <Key, Type, Traits, Alloctor>& left,
    hash_multimap <Key, Type, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*va bene*\
Le hash_multimap i cui elementi devono essere scambiati con quelli della mappa *a sinistra.*

*Sinistra*\
Le hash_multimap i cui elementi devono essere scambiati con quelli della mappa *a destra.*

### <a name="remarks"></a>Osservazioni

La funzione modello è un algoritmo specializzato sulla classe contenitore hash_multimap per l'esecuzione della funzione membro `left.`[swap](../standard-library/hash-multimap-class.md#swap)*(right*`)`. Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello, **template \<class T> void swap(T&, T&)**, nel file di intestazione dell'algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

## <a name="see-also"></a>Vedere anche

[>hash_map><](../standard-library/hash-map.md)
