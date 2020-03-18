---
title: Funzioni &lt;random&gt;
ms.date: 09/04/2019
f1_keywords:
- random/std::generate_canonical
ms.assetid: 2ac9ec59-619b-4b85-a425-f729277c1bc8
helpviewer_keywords:
- std::generate_canonical
ms.openlocfilehash: 3d94f607fc6b7bdf22d7f573f590b451dbaa718d
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79419644"
---
# <a name="ltrandomgt-functions"></a>Funzioni &lt;random&gt;

## <a name="generate_canonical"></a>generate_canonical

Restituisce un valore a virgola mobile da una sequenza casuale.

```cpp
template <class RealType, size_t Bits, class Generator>
RealType generate_canonical(Generator& Gen);
```

### <a name="parameters"></a>Parametri

\ *RealType*
Tipo integrale a virgola mobile. Per informazioni sui tipi possibili, vedere [\<random>](../standard-library/random.md).

\ *bits*
Numero di bit di casualità da utilizzare.

\ *Generatore*
Classe generatore di numeri casuali.

\ *generazione*
Riferimento a un'istanza di un generatore di numeri casuali di tipo *Generator*.

### <a name="remarks"></a>Osservazioni

La funzione modello chiama ripetutamente `operator()` di *generazione* e comprime i valori restituiti in un valore a virgola mobile `x` di tipo *RealType* fino a quando non viene raccolto il numero specificato di bit mantissa in `x`. Il numero specificato è il più piccolo di *bit* (che deve essere diverso da zero) e il numero completo di bit mantissa in *RealType*. La prima chiamata fornisce i bit di livello più basso. La funzione restituisce `x`.
