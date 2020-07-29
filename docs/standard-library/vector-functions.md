---
title: Funzioni &lt;vector&gt;
ms.date: 11/04/2016
f1_keywords:
- vector/std::swap
ms.assetid: 6cdcf043-eef6-4330-83f0-4596fb9f968a
helpviewer_keywords:
- std::swap [vector]
ms.openlocfilehash: bf28e44b4f603b1e4d6a87f0c28b42d6cc159980
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87224552"
---
# <a name="ltvectorgt-functions"></a>Funzioni &lt;vector&gt;

## <a name="swap"></a><a name="swap"></a>scambio

Scambia gli elementi di due vettori.

```cpp
template <class Type, class Allocator>
void swap(vector<Type, Allocator>& left, vector<Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Vettore che fornisce gli elementi da scambiare o vettore i cui elementi devono essere scambiati con quelli del vettore a *sinistra*.

*sinistra*\
Vettore i cui elementi devono essere scambiati con quelli del vettore a *destra*.

### <a name="remarks"></a>Osservazioni

La funzione modello è un algoritmo specializzato sulla classe contenitore vector per eseguire la funzione membro `left` . [vector:: swap](../standard-library/vector-class.md) *(Right*). Si tratta di istanze di ordinamento parziale dei modelli di funzione da parte del compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello, **`template`** \< **class T**> **void swap**( **t&**, **t&**), nella classe Algorithm funziona per assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

### <a name="example"></a>Esempio

Vedere l'esempio di codice relativo alla classe membro [vector::swap](../standard-library/vector-class.md) per indicazioni su come usare la versione di modello di `swap`.
