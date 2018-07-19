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
ms.openlocfilehash: 5b0cd634dad099669d803d4a2717fc9198151781
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38954158"
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

*RealType* tipo integrale a virgola mobile. Per informazioni sui tipi possibili, vedere [\<random>](../standard-library/random.md).

*BITS* generatore di numeri casuali.

*Generazione* generatore di numeri casuali.

### <a name="remarks"></a>Note

Le chiamate di funzione di modello `operator()` dei *Gen* più volte e inserisce i valori restituiti in un valore a virgola mobile `x` di tipo *RealType* fino a quando non dispone di recupero del numero specificato di bit di mantissa in `x`. Il numero specificato è il meno elevato tra *Bits* (che deve essere diverso da zero) e il numero completo di bit di mantissa *RealType*. La prima chiamata fornisce i bit di livello più basso. La funzione restituisce `x`.

## <a name="see-also"></a>Vedere anche

[\<random>](../standard-library/random.md)<br/>
