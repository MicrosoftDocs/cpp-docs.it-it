---
title: Struttura MixIn
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::MixIn
helpviewer_keywords:
- MixIn structure
ms.assetid: 47e2df9b-3a2e-4ae8-8ba3-b1fd3aa73566
ms.openlocfilehash: b302d6e08e401a24b465508d5ddabcae8b16bd8f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213694"
---
# <a name="mixin-structure"></a>Struttura MixIn

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

*Derivata*<br/>
Tipo derivato dalla struttura [Implements](implements-structure.md) .

*MixInType*<br/>
Tipo di base.

*hasImplements*<br/>
**true** se *MixInType* è derivato dall'implementazione corrente del tipo di base; in caso contrario, **false** .

## <a name="remarks"></a>Osservazioni

Se una classe è derivata dalle interfacce Windows Runtime e COM della classe, l'elenco di dichiarazioni di classe deve innanzitutto elencare tutte le interfacce di Windows Runtime e quindi le interfacce COM classiche. **Mixin** garantisce che le interfacce siano specificate nell'ordine corretto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`MixIn`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)
