---
title: Classe vector&lt;bool&gt;::reference | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- vector/vector<bool>::reference
dev_langs:
- C++
helpviewer_keywords:
- vector<bool> reference class
ms.assetid: f27854f9-0ef0-4e7e-ad2e-cd53b6cb3334
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c87975e0b27934d091e896867620011a51b78d52
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38966524"
---
# <a name="vectorltboolgtreference-class"></a>Classe vector&lt;bool&gt;::reference

La classe `vector<bool>::reference` è una classe proxy fornita dalla [classe vector\<bool>](../standard-library/vector-bool-class.md) per simulare `bool&`.

## <a name="remarks"></a>Note

È necessario un riferimento simulato perché C++ non consente riferimenti diretti ai bit a livello nativo. `vector<bool>` utilizza un solo bit per elemento, a cui è possibile fare riferimento tramite questa classe proxy. Tuttavia, la simulazione dei riferimenti non è completata perché alcune assegnazioni non sono valide. Ad esempio, poiché l'indirizzo dell'oggetto `vector<bool>::reference` non può essere accettato, il codice seguente che usa [vector\<bool>::operator&#91;&#93;](http://msdn.microsoft.com/Library/97738633-690d-4069-b2d9-8c54104fbfdd) non è corretto:

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
