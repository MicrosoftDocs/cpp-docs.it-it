---
title: Classe independent_bits_engine
ms.date: 11/04/2016
f1_keywords:
- random/std::independent_bits_engine
helpviewer_keywords:
- independent_bits_engine class
ms.assetid: 889e9a82-f457-49a7-9d2e-26e0fc3cd907
ms.openlocfilehash: 28c9301d270ef516a1acc59f6ab06f0e61a1c9c5
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72687933"
---
# <a name="independent_bits_engine-class"></a>Classe independent_bits_engine

Genera una sequenza casuale di numeri con un numero specificato di bit tramite la creazione di nuovi pacchetti di bit dai valori restituiti dal motore di base corrispondente.

## <a name="syntax"></a>Sintassi

```cpp
template <class Engine, size_t W, class UIntType>
class independent_bits_engine;
```

### <a name="parameters"></a>Parametri

@No__t_1 del *motore*
Tipo del motore di base.

@No__t_1 *W*
**Dimensione parola**. Dimensione, in bit, di ogni numero generato. **Precondizione**:`0 < W ≤ numeric_limits<UIntType>::digits`

@No__t_1 *UIntType*
Tipo di risultato Unsigned Integer. Per informazioni sui tipi possibili, vedere [\<random>](../standard-library/random.md).

## <a name="members"></a>Members

||||
|-|-|-|
|`independent_bits_engine::independent_bits_engine`|`independent_bits_engine::base`|`independent_bits_engine::discard`|
|`independent_bits_engine::operator()`|`independent_bits_engine::base_type`|`independent_bits_engine::seed`|

Per altre informazioni sui membri del motore, vedere [\<random>](../standard-library/random.md).

## <a name="remarks"></a>Note

Questo modello di classe descrive un *adattatore del motore* che produce valori riimballando i bit dai valori restituiti dal motore di base, ottenendo i valori *W*-bit.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<random>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<random>](../standard-library/random.md)
