---
title: Funzioni &lt;hash_map&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- hash_map/std::swap
- hash_map/std::swap (hash_map)
ms.assetid: 28748cd0-71f7-41b9-b068-579183645fba
caps.latest.revision: 9
manager: ghogen
ms.openlocfilehash: d54cf0181a80ccb763cfe76f8eb89ade5a56b7d4
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="lthashmapgt-functions"></a>Funzioni &lt;hash_map&gt;

|||
|-|-|
|[swap](#swap)|[swap (hash_map)](#swap_hash_map)|

## <a name="swap_hash_map"></a>  swap (hash_map)

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_map](../standard-library/unordered-map-class.md).

Scambia gli elementi di due oggetti hash_map.

```cpp
void swap(
    hash_map <Key, Type, Traits, Alloctor>& left,
    hash_map <Key, Type, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

`right` Hash_map cui elementi devono essere scambiati con quelli della mappa `left`.

`left` Hash_map cui elementi devono essere scambiati con quelli della mappa `right`.

### <a name="remarks"></a>Note

La funzione modello è un algoritmo specializzato sulla classe contenitore hash_map per l'esecuzione della funzione membro `left.`[swap](../standard-library/basic-ios-class.md#swap)*(right*). Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello, **template \<class T> void swap(T&, T&)**, nel file di intestazione dell'algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

## <a name="swap"></a>  swap

> [!NOTE]
> Questa API è obsoleta. L'alternativa è la [classe unordered_multimap](../standard-library/unordered-multimap-class.md).

Scambia gli elementi di due oggetti hash_multimap.

```cpp
void swap(
    hash_multimap <Key, Type, Traits, Alloctor>& left,
    hash_multimap <Key, Type, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

`right` Hash_multimap cui elementi devono essere scambiati con quelli della mappa `left`.

`left` Hash_multimap cui elementi devono essere scambiati con quelli della mappa `right`.

### <a name="remarks"></a>Note

La funzione modello è un algoritmo specializzato sulla classe contenitore hash_multimap per l'esecuzione della funzione membro `left.`[swap](../standard-library/hash-multimap-class.md#swap)*(right*`)`. Si tratta di un'istanza dell'ordinamento parziale dei modelli di funzione eseguito dal compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello, **template \<class T> void swap(T&, T&)**, nel file di intestazione dell'algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

## <a name="see-also"></a>Vedere anche

[<hash_map>](../standard-library/hash-map.md)<br/>
