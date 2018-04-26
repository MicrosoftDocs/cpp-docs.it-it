---
title: Classe independent_bits_engine | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- random/std::independent_bits_engine
dev_langs:
- C++
helpviewer_keywords:
- independent_bits_engine class
ms.assetid: 889e9a82-f457-49a7-9d2e-26e0fc3cd907
caps.latest.revision: 17
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 01979567e29796288c124e6e5a55dcf9b44ee6e0
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="independentbitsengine-class"></a>Classe independent_bits_engine

Genera una sequenza casuale di numeri con un numero specificato di bit tramite la creazione di nuovi pacchetti di bit dai valori restituiti dal motore di base corrispondente.

## <a name="syntax"></a>Sintassi

```cpp
template <class Engine, size_t W, class UIntType>
class independent_bits_engine;
```

### <a name="parameters"></a>Parametri

`Engine` Il tipo di motore di base.

`W` **Dimensione parola**. Dimensione, in bit, di ogni numero generato. **Precondizione:** `0 < W ≤ numeric_limits<UIntType>::digits`

`UIntType` Il tipo di risultato unsigned integer. Per informazioni sui tipi possibili, vedere [\<random>](../standard-library/random.md).

## <a name="members"></a>Membri

||||
|-|-|-|
|`independent_bits_engine::independent_bits_engine`|`independent_bits_engine::base`|`independent_bits_engine::discard`|
|`independent_bits_engine::operator()`|`independent_bits_engine::base_type`|`independent_bits_engine::seed`|

Per altre informazioni sui membri del motore, vedere [\<random>](../standard-library/random.md).

## <a name="remarks"></a>Note

Questa classe modello descrive un *adattatore del motore* che produce valori mediante la creazione di nuovi pacchetti di bit dai valori restituiti dal rispettivo motore di base, generando valori a `W` bit.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<random>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<random>](../standard-library/random.md)<br/>
