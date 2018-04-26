---
title: Classe discard_block_engine | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- random/std::discard_block_engine
dev_langs:
- C++
helpviewer_keywords:
- discard_block_engine class
ms.assetid: aa84808e-38fe-4fa0-9f73-d5b9a653345b
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 59136111b6d4f594d84040c02270b219ad55ae0f
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="discardblockengine-class"></a>Classe discard_block_engine

Genera una sequenza casuale, eliminando i valori restituiti dal motore di base corrispondente.

## <a name="syntax"></a>Sintassi

```cpp
template <class Engine, size_t P, size_t R>
class discard_block_engine;
```

### <a name="parameters"></a>Parametri

`Engine` Il tipo di motore di base.

`P` **Dimensione del blocco**. Numero di valori in ogni blocco.

`R` **Blocco usato**. Numero di valori usati in ogni blocco. Il resto viene scartato ( `P` - `R`). **Precondizione**:`0 < R ≤ P`

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
