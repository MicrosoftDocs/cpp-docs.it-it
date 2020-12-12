---
description: 'Altre informazioni su: discard_block_engine Class'
title: Classe discard_block_engine
ms.date: 11/04/2016
f1_keywords:
- random/std::discard_block_engine
helpviewer_keywords:
- discard_block_engine class
ms.assetid: aa84808e-38fe-4fa0-9f73-d5b9a653345b
ms.openlocfilehash: 0879dacac70afc78a9c77314ce5042580c6cbb39
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324516"
---
# <a name="discard_block_engine-class"></a>Classe discard_block_engine

Genera una sequenza casuale, eliminando i valori restituiti dal motore di base corrispondente.

## <a name="syntax"></a>Sintassi

```cpp
template <class Engine, size_t P, size_t R>
class discard_block_engine;
```

### <a name="parameters"></a>Parametri

*Motore*\
Tipo del motore di base.

*P*\
**Dimensioni del blocco**. Numero di valori in ogni blocco.

*R*\
**Blocco usato**. Numero di valori usati in ogni blocco. Il resto viene rimosso ( `P`  -  `R` ). **Precondizione**: `0 < R ≤ P`

## <a name="members"></a>Membri

`discard_block_engine::discard_block_engine`\
`discard_block_engine::base`\
`discard_block_engine::base_type`\
`discard_block_engine::discard`\
`discard_block_engine::operator()`\
`discard_block_engine::seed`

Per ulteriori informazioni sui membri del motore, vedere [\<random>](../standard-library/random.md) .

## <a name="remarks"></a>Commenti

Questo modello di classe descrive un adattatore del motore che produce valori ignorando alcuni dei valori restituiti dal motore di base.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<random>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[\<random>](../standard-library/random.md)
