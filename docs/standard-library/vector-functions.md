---
title: Funzioni &lt;vector&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- vector/std::swap
ms.assetid: 6cdcf043-eef6-4330-83f0-4596fb9f968a
helpviewer_keywords:
- std::swap [vector]
ms.openlocfilehash: 29b23ec4afe32d1aa383afd4fdaf3ca280d49161
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38955260"
---
# <a name="ltvectorgt-functions"></a>Funzioni &lt;vector&gt;


## <a name="swap"></a>  swap

Scambia gli elementi di due vettori.

```cpp
template <class Type, class Allocator>
void swap(vector<Type, Allocator>& left, vector<Type, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*right*  
 Vettore che fornisce gli elementi da scambiare o vettore i cui elementi devono essere scambiati con quelli del vettore *sinistro*.

*left*  
 Il vettore di cui elementi devono essere scambiati con quelli del vettore *a destra*.

### <a name="remarks"></a>Note

La funzione modello è un algoritmo specializzato sul vettore della classe contenitore per eseguire la funzione membro `left`. [Vector:: swap](../standard-library/vector-class.md) *(right*). Si tratta di istanze di ordinamento parziale dei modelli di funzione da parte del compilatore. Quando le funzioni modello sono sottoposte a overload in modo tale che la corrispondenza del modello con la chiamata di funzione non è univoca, il compilatore seleziona la versione più specializzata della funzione modello. La versione generale della funzione modello, **template** \< **class T**> **void swap**( **T&**, **T&**), nella classe algoritmo viene eseguita in base ad assegnazione ed è un'operazione lenta. La versione specializzata presente in ogni contenitore è molto più veloce, dal momento che funziona con la rappresentazione interna della classe contenitore.

### <a name="example"></a>Esempio

Vedere l'esempio di codice relativo alla classe membro [vector::swap](../standard-library/vector-class.md) per indicazioni su come usare la versione di modello di `swap`.

## <a name="see-also"></a>Vedere anche

[\<vector>](../standard-library/vector.md)<br/>
