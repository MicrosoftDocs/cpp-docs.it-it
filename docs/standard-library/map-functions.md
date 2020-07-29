---
title: Funzioni &lt;map&gt;
ms.date: 11/04/2016
f1_keywords:
- map/std::swap (map)
- map/std::swap (multimap)
ms.assetid: 7cb3d1a5-7add-4726-a73f-61927eafd466
ms.openlocfilehash: 8cc4a82e08963902f9ba5c21ace759c47bdd0014
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228219"
---
# <a name="ltmapgt-functions"></a>Funzioni &lt;map&gt;

## <a name="swap-map"></a><a name="swap_multimap"></a>Scambia (mappa)

Scambia gli elementi di due oggetti map.

```cpp
template <class key, class T, class _Pr, class _Alloc>
void swap(
    map<Key, Traits, Compare, Alloctor>& left,
    map<Key, Traits, Compare, Alloctor>& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Mappa che fornisce gli elementi da scambiare o la mappa i cui elementi devono essere scambiati con quelli della mappa a *sinistra*.

*sinistra*\
Mappa i cui elementi devono essere scambiati con quelli del *diritto*mappa.

### <a name="remarks"></a>Osservazioni

La funzione modello è un algoritmo specializzato nella mappa della classe contenitore per eseguire la funzione membro `left` .[ swap](../standard-library/map-class.md#swap)( `right` ). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello, **`template`** \< **class T**> **void swap**( **t&**, **t&**), nella classe Algorithm funziona per assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

### <a name="example"></a>Esempio

Vedere l'esempio di codice relativo alla funzione membro [map::swap](../standard-library/map-class.md#swap) per indicazioni su come usare la versione modello di `swap`.

## <a name="swap-multimap"></a><a name="swap"></a>swap (multimap)

Scambia gli elementi di due oggetti multimap.

```cpp
template <class key, class T, class _Pr, class _Alloc>
void swap(
    multimap<Key, Traits, Compare, Alloctor>& left,
    multimap<Key, Traits, Compare, Alloctor>& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Multimap che fornisce gli elementi da scambiare o l'oggetto multimap i cui elementi devono essere scambiati con quelli del multimap *rimasto*.

*sinistra*\
Multimap i cui elementi devono essere scambiati con quelli dell'oggetto multimap a *destra*.

### <a name="remarks"></a>Osservazioni

La funzione modello è un algoritmo specializzato nella mappa della classe contenitore da eseguire sulla classe contenitore multimap per eseguire la funzione membro `left` .[ swap](../standard-library/multimap-class.md#swap) ( `right` ). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello, **`template`** \< **class T**> **void swap**( **t&**, **t&**), nella classe Algorithm funziona per assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

### <a name="example"></a>Esempio

Vedere l'esempio di codice relativo alla funzione membro [multimap::swap](../standard-library/multimap-class.md#swap) per indicazioni su come usare la versione modello di `swap`.
