---
description: 'Altre informazioni su: &lt; funzioni di mapping &gt;'
title: Funzioni &lt;map&gt;
ms.date: 11/04/2016
f1_keywords:
- map/std::swap (map)
- map/std::swap (multimap)
ms.assetid: 7cb3d1a5-7add-4726-a73f-61927eafd466
ms.openlocfilehash: dded58c4af44bca08a5cb9e2cd0436974f48f6c8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97149513"
---
# <a name="ltmapgt-functions"></a>Funzioni &lt;map&gt;

## <a name="swap-map"></a><a name="swap_multimap"></a> Scambia (mappa)

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
Mappa i cui elementi devono essere scambiati con quelli del *diritto* mappa.

### <a name="remarks"></a>Commenti

La funzione modello è un algoritmo specializzato nella mappa della classe contenitore per eseguire la funzione membro `left` .[ swap](../standard-library/map-class.md#swap)( `right` ). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello, **`template`** \< **class T**> **void swap**( **t&**, **t&**), nella classe Algorithm funziona per assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

### <a name="example"></a>Esempio

Vedere l'esempio di codice relativo alla funzione membro [map::swap](../standard-library/map-class.md#swap) per indicazioni su come usare la versione modello di `swap`.

## <a name="swap-multimap"></a><a name="swap"></a> swap (multimap)

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

### <a name="remarks"></a>Commenti

La funzione modello è un algoritmo specializzato nella mappa della classe contenitore da eseguire sulla classe contenitore multimap per eseguire la funzione membro `left` .[ swap](../standard-library/multimap-class.md#swap) ( `right` ). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello, **`template`** \< **class T**> **void swap**( **t&**, **t&**), nella classe Algorithm funziona per assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

### <a name="example"></a>Esempio

Vedere l'esempio di codice relativo alla funzione membro [multimap::swap](../standard-library/multimap-class.md#swap) per indicazioni su come usare la versione modello di `swap`.
