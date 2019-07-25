---
title: Classe vector&lt;bool&gt;::reference
ms.date: 11/04/2016
f1_keywords:
- vector/vector<bool>::reference
helpviewer_keywords:
- vector<bool> reference class
ms.assetid: f27854f9-0ef0-4e7e-ad2e-cd53b6cb3334
ms.openlocfilehash: 65bfc91cf5dc79fb1e5151a6f62c394b4579883b
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68453218"
---
# <a name="vectorltboolgtreference-class"></a>Classe vector&lt;bool&gt;::reference

La classe `vector<bool>::reference` è una classe proxy fornita dalla [classe vector\<bool>](../standard-library/vector-bool-class.md) per simulare `bool&`.

## <a name="remarks"></a>Note

È necessario un riferimento simulato perché C++ non consente riferimenti diretti ai bit a livello nativo. `vector<bool>` utilizza un solo bit per elemento, a cui è possibile fare riferimento tramite questa classe proxy. Tuttavia, la simulazione dei riferimenti non è completata perché alcune assegnazioni non sono valide. Ad esempio, poiché l'indirizzo dell' `vector<bool>::reference` oggetto non può essere accettato, il codice seguente che tenta di utilizzare `vector<bool>::operator&` non è corretto:

```cpp
vector<bool> vb;
// ...
bool* pb = &vb[1]; // conversion error - do not use
bool& refb = vb[1];   // conversion error - do not use
```

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|DESCRIZIONE|
|-|-|
|[flip](../standard-library/vector-bool-reference-flip.md)|Inverte il valore booleano di un elemento di vettore.|
|[operator bool](../standard-library/vector-bool-reference-operator-bool.md)|Fornisce una conversione implicita `vector<bool>::reference` da a **bool**.|
|[operator=](../standard-library/vector-bool-reference-operator-assign.md)|Assegna a un bit un valore booleano o il valore di un elemento a cui si fa riferimento.|

## <a name="requirements"></a>Requisiti

**Intestazione**: \<vector>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<vector>](../standard-library/vector.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
