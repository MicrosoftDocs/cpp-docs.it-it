---
title: Classe discard_block_engine | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- random/std::discard_block_engine
dev_langs:
- C++
helpviewer_keywords:
- discard_block_engine class
ms.assetid: aa84808e-38fe-4fa0-9f73-d5b9a653345b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1b65cfbe156ba462af9e87abf82d63023cfdc44b
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38957438"
---
# <a name="discardblockengine-class"></a>Classe discard_block_engine

Genera una sequenza casuale, eliminando i valori restituiti dal motore di base corrispondente.

## <a name="syntax"></a>Sintassi

```cpp
template <class Engine, size_t P, size_t R>
class discard_block_engine;
```

### <a name="parameters"></a>Parametri

*Motore* il tipo di motore di base.

*P* **dimensione del blocco**. Numero di valori in ogni blocco.

*R* **blocco usato**. Numero di valori usati in ogni blocco. Le rimanenti verranno eliminati (`P` - `R`). **Precondizione:** `0 < R ≤ P`

## <a name="members"></a>Membri

||||
|-|-|-|
|`discard_block_engine::discard_block_engine`|`discard_block_engine::base`|`discard_block_engine::discard`|
|`discard_block_engine::operator()`|`discard_block_engine::base_type`|`discard_block_engine::seed`|

Per altre informazioni sui membri del motore, vedere [\<random>](../standard-library/random.md).

## <a name="remarks"></a>Note

Questa classe modello descrive un adattatore del motore che produce valori scartando alcuni dei valori restituiti dal rispettivo motore di base.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<random>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<random>](../standard-library/random.md)<br/>
