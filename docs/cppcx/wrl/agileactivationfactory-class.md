---
title: Classe AgileActivationFactory
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::AgileActivationFactory
ms.assetid: fab98f32-bb93-4c0f-badb-49fbddb194b0
ms.openlocfilehash: d4f437f87861293cb6048ed6acb05428c466b3f3
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80214201"
---
# <a name="agileactivationfactory-class"></a>Classe AgileActivationFactory

Rappresenta una factory di attivazione intuitiva che implementa [FtmBase](ftmbase-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template <
    typename I0 = Details::Nil,
    typename I1 = Details::Nil,
    typename I2 = Details::Nil,
    FactoryCacheFlags cacheFlagValue = FactoryCacheDefault
>
class AgileActivationFactory :
    public ActivationFactory<
        Implements<FtmBase, I0>,
        I1,
        I2,
        cacheFlagValue
    >;
```

## <a name="requirements"></a>Requisiti

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)<br/>
[Classe ActivationFactory](activationfactory-class.md)
