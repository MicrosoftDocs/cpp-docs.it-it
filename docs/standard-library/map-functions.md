---
title: Funzioni &lt;map&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- map/std::swap (map)
- map/std::swap (multimap)
ms.assetid: 7cb3d1a5-7add-4726-a73f-61927eafd466
ms.openlocfilehash: 36af7eb87f777686a0a83fab98032ce36e75c906
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44102525"
---
# <a name="ltmapgt-functions"></a>Funzioni &lt;map&gt;

|||
|-|-|
|[swap (map)](#swap)|[swap (multimap)](#swap_multimap)|

## <a name="swap_multimap"></a>  swap  (map)

Scambia gli elementi di due oggetti map.

```cpp
template <class key, class T, class _Pr, class _Alloc>
void swap(
    map<Key, Traits, Compare, Alloctor>& left,
    map<Key, Traits, Compare, Alloctor>& right);
```

### <a name="parameters"></a>Parametri

*right*<br/>
La mappa che fornisce gli elementi da scambiare o i cui elementi devono essere scambiati con quelli dell'oggetto map *sinistro*.

*left*<br/>
La mappa cui elementi devono essere scambiati con quelli dell'oggetto map *a destra*.

### <a name="remarks"></a>Note

La funzione modello è un algoritmo specializzato sulla classe contenitore map per eseguire la funzione membro `left`.[ swap](../standard-library/map-class.md#swap)( `right`). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello, **template** \< **class T**> **void swap**( **T&**, **T&**), nella classe algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

### <a name="example"></a>Esempio

Vedere l'esempio di codice relativo alla funzione membro [map::swap](../standard-library/map-class.md#swap) per indicazioni su come usare la versione modello di `swap`.

## <a name="swap"></a>  swap  (multimap)

Scambia gli elementi di due oggetti multimap.

```cpp
template <class key, class T, class _Pr, class _Alloc>
void swap(
    multimap<Key, Traits, Compare, Alloctor>& left,
    multimap<Key, Traits, Compare, Alloctor>& right);
```

### <a name="parameters"></a>Parametri

*right*<br/>
L'oggetto multimap che fornisce gli elementi da scambiare o i cui elementi devono essere scambiati con quelli dell'oggetto multimap *sinistro*.

*left*<br/>
L'oggetto multimap la cui elementi devono essere scambiati con quelli dell'oggetto multimap *a destra*.

### <a name="remarks"></a>Note

La funzione modello è un algoritmo specializzato sulla classe contenitore map per l'esecuzione in una classe contenitore multimap per eseguire la funzione membro `left`.[ swap](../standard-library/multimap-class.md#swap) (`right`). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello, **template** \< **class T**> **void swap**( **T&**, **T&**), nella classe algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

### <a name="example"></a>Esempio

Vedere l'esempio di codice relativo alla funzione membro [multimap::swap](../standard-library/multimap-class.md#swap) per indicazioni su come usare la versione modello di `swap`.

## <a name="see-also"></a>Vedere anche

[\<map>](../standard-library/map.md)<br/>
