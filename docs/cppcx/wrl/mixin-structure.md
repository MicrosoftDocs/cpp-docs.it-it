---
title: MixIn (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::MixIn
helpviewer_keywords:
- MixIn structure
ms.assetid: 47e2df9b-3a2e-4ae8-8ba3-b1fd3aa73566
ms.openlocfilehash: 16fd6b46d616df7163a304afa7f32ac3c095d398
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62325357"
---
# <a name="mixin-structure"></a>MixIn (struttura)

Verifica che una classe di runtime derivi da interfacce di Windows Runtime, se disponibili, quindi da interfacce COM classiche.

## <a name="syntax"></a>Sintassi

```cpp
template<
    typename Derived,
    typename MixInType,
    bool hasImplements = __is_base_of(Details::ImplementsBase, MixInType)
>
struct MixIn;
```

### <a name="parameters"></a>Parametri

*Derivati*<br/>
Un tipo derivato dal [implementa](implements-structure.md) struttura.

*MixInType*<br/>
Tipo di base.

*hasImplements*<br/>
**true** se *MixInType* è derivato dall'implementazione corrente il tipo di base; **false** in caso contrario.

## <a name="remarks"></a>Note

Se una classe è derivata da Windows Runtime e le interfacce di classi COM, l'elenco di dichiarazione di classe prima di tutto necessario elencare le interfacce di Windows Runtime e quindi qualsiasi COM classico interfacce. **MixIn** assicura che le interfacce sono specificate nell'ordine corretto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`MixIn`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)