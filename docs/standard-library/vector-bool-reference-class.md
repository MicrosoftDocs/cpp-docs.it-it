---
title: Classe vector&lt;bool&gt;::reference
ms.date: 11/04/2016
f1_keywords:
- vector/vector<bool>::reference
helpviewer_keywords:
- vector<bool> reference class
ms.assetid: f27854f9-0ef0-4e7e-ad2e-cd53b6cb3334
ms.openlocfilehash: 3dde17522c05a05bda04c338682b4b3f9920a972
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228102"
---
# <a name="vectorltboolgtreference-class"></a>Classe vector&lt;bool&gt;::reference

La `vector<bool>::reference` classe è una classe proxy fornita dalla [ \<bool> classe Vector](../standard-library/vector-bool-class.md) per simulare `bool&` .

## <a name="remarks"></a>Osservazioni

È necessario un riferimento simulato perché C++ non consente riferimenti diretti ai bit a livello nativo. `vector<bool>` utilizza un solo bit per elemento, a cui è possibile fare riferimento tramite questa classe proxy. Tuttavia, la simulazione dei riferimenti non è completata perché alcune assegnazioni non sono valide. Ad esempio, poiché l'indirizzo dell' `vector<bool>::reference` oggetto non può essere accettato, il codice seguente che tenta di utilizzare `vector<bool>::operator&` non è corretto:

```cpp
vector<bool> vb;
// ...
bool* pb = &vb[1]; // conversion error - do not use
bool& refb = vb[1];   // conversion error - do not use
```

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[flip](../standard-library/vector-bool-reference-flip.md)|Inverte il valore booleano di un elemento di vettore.|
|[operatore bool](../standard-library/vector-bool-reference-operator-bool.md)|Fornisce una conversione implicita da `vector<bool>::reference` a **`bool`** .|
|[operatore =](../standard-library/vector-bool-reference-operator-assign.md)|Assegna a un bit un valore booleano o il valore di un elemento a cui si fa riferimento.|

## <a name="requirements"></a>Requisiti

**Intestazione**:\<vector>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<vector>](../standard-library/vector.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
