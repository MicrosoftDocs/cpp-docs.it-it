---
title: Funzioni &lt;random&gt;
ms.date: 09/04/2019
f1_keywords:
- random/std::generate_canonical
ms.assetid: 2ac9ec59-619b-4b85-a425-f729277c1bc8
helpviewer_keywords:
- std::generate_canonical
ms.openlocfilehash: 3d94f607fc6b7bdf22d7f573f590b451dbaa718d
ms.sourcegitcommit: fd0f8839da5c6a3663798a47c6b0bb6e63b518bd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2019
ms.locfileid: "70273833"
---
# <a name="ltrandomgt-functions"></a>Funzioni &lt;random&gt;

## <a name="generate_canonical"></a>generate_canonical

Restituisce un valore a virgola mobile da una sequenza casuale.

```cpp
template <class RealType, size_t Bits, class Generator>
RealType generate_canonical(Generator& Gen);
```

### <a name="parameters"></a>Parametri

*RealType*\
Tipo integrale a virgola mobile. Per informazioni sui tipi possibili, vedere [\<random>](../standard-library/random.md).

*Bit*\
Numero di bit di casualità da utilizzare.

*Generatore*\
Classe generatore di numeri casuali.

*Generazione*\
Riferimento a un'istanza di un generatore di numeri casuali di tipo *Generator*.

### <a name="remarks"></a>Note

La funzione modello chiama `operator()` ripetutamente *gen* e comprime i valori restituiti in un valore `x` a virgola mobile di tipo *RealType* fino a quando non viene raccolto il numero specificato di `x`mantissa bit in. Il numero specificato è il più piccolo di *bit* (che deve essere diverso da zero) e il numero completo di bit mantissa in *RealType*. La prima chiamata fornisce i bit di livello più basso. La funzione restituisce `x`.
