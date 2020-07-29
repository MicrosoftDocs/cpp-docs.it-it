---
title: MixIn (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::MixIn
helpviewer_keywords:
- MixIn structure
ms.assetid: 47e2df9b-3a2e-4ae8-8ba3-b1fd3aa73566
ms.openlocfilehash: cfa03706bc6030b337009f7228466a26e242aa6b
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221536"
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

*Derivato*<br/>
Tipo derivato dalla struttura [Implements](implements-structure.md) .

*MixInType*<br/>
Tipo di base.

*hasImplements*<br/>
**`true`** Se *MixInType* è derivato dall'implementazione corrente del tipo di base; **`false`** in caso contrario,.

## <a name="remarks"></a>Osservazioni

Se una classe è derivata dalle interfacce Windows Runtime e COM della classe, l'elenco di dichiarazioni di classe deve innanzitutto elencare tutte le interfacce di Windows Runtime e quindi le interfacce COM classiche. **Mixin** garantisce che le interfacce siano specificate nell'ordine corretto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`MixIn`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft:: WRL](microsoft-wrl-namespace.md)
