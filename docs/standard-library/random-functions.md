---
description: 'Altre informazioni su: &lt; funzioni casuali &gt;'
title: Funzioni &lt;random&gt;
ms.date: 09/04/2019
f1_keywords:
- random/std::generate_canonical
ms.assetid: 2ac9ec59-619b-4b85-a425-f729277c1bc8
helpviewer_keywords:
- std::generate_canonical
ms.openlocfilehash: 39670fcd9b200a6bd56656bbfa07391fdd0d96be
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97163340"
---
# <a name="ltrandomgt-functions"></a>Funzioni &lt;random&gt;

## <a name="generate_canonical"></a><a name="generate_canonical"></a> generate_canonical

Restituisce un valore a virgola mobile da una sequenza casuale.

```cpp
template <class RealType, size_t Bits, class Generator>
RealType generate_canonical(Generator& Gen);
```

### <a name="parameters"></a>Parametri

*RealType*\
Tipo integrale a virgola mobile. Per i tipi possibili, vedere [\<random>](../standard-library/random.md) .

*Bit*\
Numero di bit di casualità da utilizzare.

*Generatore*\
Classe generatore di numeri casuali.

*Generazione*\
Riferimento a un'istanza di un generatore di numeri casuali di tipo *Generator*.

### <a name="remarks"></a>Commenti

La funzione modello chiama `operator()` ripetutamente *gen* e comprime i valori restituiti in un valore a virgola mobile `x` di tipo *RealType* fino a quando non viene raccolto il numero specificato di mantissa bit in `x` . Il numero specificato è il più piccolo di *bit* (che deve essere diverso da zero) e il numero completo di bit mantissa in *RealType*. La prima chiamata fornisce i bit di livello più basso. La funzione restituisce `x`.
