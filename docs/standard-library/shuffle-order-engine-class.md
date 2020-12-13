---
description: 'Altre informazioni su: shuffle_order_engine Class'
title: Classe shuffle_order_engine
ms.date: 11/04/2016
f1_keywords:
- random/std::shuffle_order_engine
- random/std::shuffle_order_engine::base
- random/std::shuffle_order_engine::discard
- random/std::shuffle_order_engine::operator()
- random/std::shuffle_order_engine::base_type
- random/std::shuffle_order_engine::seed
helpviewer_keywords:
- std::shuffle_order_engine [C++]
- std::shuffle_order_engine [C++], base
- std::shuffle_order_engine [C++], discard
- std::shuffle_order_engine [C++], base_type
- std::shuffle_order_engine [C++], seed
ms.assetid: 0bcd1fb0-44d7-4e59-bb1b-4a9b673a960d
ms.openlocfilehash: 3be8438ac0809d697d081d998450bde09d1d583e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97154019"
---
# <a name="shuffle_order_engine-class"></a>Classe shuffle_order_engine

Genera una sequenza casuale riordinando i valori restituiti dal motore di base corrispondente.

## <a name="syntax"></a>Sintassi

```cpp
template <class Engine, size_t K>
class shuffle_order_engine;
```

### <a name="parameters"></a>Parametri

*Motore*\
Tipo del motore di base.

*K*\
**Dimensioni tabella**. Numero di elementi nel buffer (tabella). **Precondizione**: `0 < K`

## <a name="members"></a>Membri

`shuffle_order_engine::shuffle_order_engine`\
`shuffle_order_engine::base`\
`shuffle_order_engine::base_type`\
`shuffle_order_engine::discard`\
`shuffle_order_engine::operator()`\
`shuffle_order_engine::seed`

Per ulteriori informazioni sui membri del motore, vedere [\<random>](../standard-library/random.md) .

## <a name="remarks"></a>Commenti

Questo modello di classe descrive un *adattatore del motore* che produce valori riordinando i valori restituiti dal relativo motore di base. Ogni costruttore inserisce nella tabella interna i valori *K* restituiti dal motore di base e un elemento casuale è selezionato dalla tabella quando viene richiesto un valore.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<random>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<random>](../standard-library/random.md)
