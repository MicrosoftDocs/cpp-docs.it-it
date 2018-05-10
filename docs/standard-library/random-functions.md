---
title: Funzioni &lt;random&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- random/std::generate_canonical
ms.assetid: 2ac9ec59-619b-4b85-a425-f729277c1bc8
helpviewer_keywords:
- std::generate_canonical
ms.openlocfilehash: c8ee20759e66c7beb295de96b8311df46555ac6b
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="ltrandomgt-functions"></a>Funzioni &lt;random&gt;

## <a name="generate_canonical"></a>  generate_canonical

Restituisce un valore a virgola mobile da una sequenza casuale.

> [!NOTE]
> Lo standard C++ ISO indica che questa funzione deve restituire valori compresi nell'intervallo [ `0`, `1`). Visual Studio non è ancora conforme a questo vincolo. Come soluzione alternativa per generare valori in questo intervallo, usare [uniform_real_distribution](../standard-library/uniform-real-distribution-class.md).

```cpp
template <class RealType, size_t Bits, class Generator>
RealType generate_canonical(Generator& Gen);
```

### <a name="parameters"></a>Parametri

`RealType` Tipo integrale a virgola mobile. Per informazioni sui tipi possibili, vedere [\<random>](../standard-library/random.md).

`Bits` Generatore di numeri casuali.

`Gen` Generatore di numeri casuali.

### <a name="remarks"></a>Note

La funzione di modello chiama ripetutamente `operator()` di `Gen` e inserisce i valori restituiti in un pacchetto in un `x` a virgola mobile di tipo `RealType` fino al recupero del numero specificato di bit di mantissa in `x`. Il numero specificato è più piccolo rispetto a `Bits` (che deve essere diverso da zero) e al numero completo di bit di mantissa in `RealType`. La prima chiamata fornisce i bit di livello più basso. La funzione restituisce `x`.

## <a name="see-also"></a>Vedere anche

[\<random>](../standard-library/random.md)<br/>
