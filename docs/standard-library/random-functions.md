---
title: Funzioni &lt;random&gt;
ms.date: 11/04/2016
f1_keywords:
- random/std::generate_canonical
ms.assetid: 2ac9ec59-619b-4b85-a425-f729277c1bc8
helpviewer_keywords:
- std::generate_canonical
ms.openlocfilehash: 87b640d4f3aa3fbfa23ad5603d84102301e71ea4
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68240393"
---
# <a name="ltrandomgt-functions"></a>Funzioni &lt;random&gt;

## <a name="generate_canonical"></a> generate_canonical

Restituisce un valore a virgola mobile da una sequenza casuale.

> [!NOTE]
> Lo standard C++ ISO indica che questa funzione deve restituire valori compresi nell'intervallo [ `0`, `1`). Visual Studio non è ancora conforme a questo vincolo. Come soluzione alternativa per generare valori in questo intervallo, usare [uniform_real_distribution](../standard-library/uniform-real-distribution-class.md).

```cpp
template <class RealType, size_t Bits, class Generator>
RealType generate_canonical(Generator& Gen);
```

### <a name="parameters"></a>Parametri

*RealType*\
Tipo integrale a virgola mobile. Per informazioni sui tipi possibili, vedere [\<random>](../standard-library/random.md).

*BITS*\
Generatore di numeri casuali.

*Generazione*\
Generatore di numeri casuali.

### <a name="remarks"></a>Note

Le chiamate di funzione di modello `operator()` dei *Gen* più volte e inserisce i valori restituiti in un valore a virgola mobile `x` di tipo *RealType* fino a quando non dispone di recupero del numero specificato di bit di mantissa in `x`. Il numero specificato è il meno elevato tra *Bits* (che deve essere diverso da zero) e il numero completo di bit di mantissa *RealType*. La prima chiamata fornisce i bit di livello più basso. La funzione restituisce `x`.
