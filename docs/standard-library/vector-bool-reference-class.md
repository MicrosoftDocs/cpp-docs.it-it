---
title: Classe vector&lt;bool&gt;::reference
ms.date: 11/04/2016
f1_keywords:
- vector/vector<bool>::reference
helpviewer_keywords:
- vector<bool> reference class
ms.assetid: f27854f9-0ef0-4e7e-ad2e-cd53b6cb3334
ms.openlocfilehash: 7930c1cd93cd05a752d4997b9480c766ee26bd99
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62407718"
---
# <a name="vectorltboolgtreference-class"></a>Classe vector&lt;bool&gt;::reference

La classe `vector<bool>::reference` è una classe proxy fornita dalla [classe vector\<bool>](../standard-library/vector-bool-class.md) per simulare `bool&`.

## <a name="remarks"></a>Note

È necessario un riferimento simulato perché C++ non consente riferimenti diretti ai bit a livello nativo. `vector<bool>` utilizza un solo bit per elemento, a cui è possibile fare riferimento tramite questa classe proxy. Tuttavia, la simulazione dei riferimenti non è completata perché alcune assegnazioni non sono valide. Ad esempio, perché l'indirizzo del `vector<bool>::reference` oggetto non è possibile eseguire, il codice seguente che prova a usare `vector<bool>::operator&` non è corretto:

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
|[operator bool](../standard-library/vector-bool-reference-operator-bool.md)|Fornisce una conversione implicita da `vector<bool>::reference` al **bool**.|
|[operator=](../standard-library/vector-bool-reference-operator-assign.md)|Assegna a un bit un valore booleano o il valore di un elemento a cui si fa riferimento.|

## <a name="requirements"></a>Requisiti

**Intestazione**: \<vector>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<vector>](../standard-library/vector.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
