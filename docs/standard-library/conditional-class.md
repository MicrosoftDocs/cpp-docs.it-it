---
title: Classe conditional
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::conditional
helpviewer_keywords:
- conditional class
- conditional
ms.assetid: ece9f539-fb28-4e26-a79f-3264bc984493
ms.openlocfilehash: b8f0f69cc1e4f6966bc9ccb63fe529436295badd
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68457315"
---
# <a name="conditional-class"></a>Classe conditional

Seleziona uno dei tipi, a seconda della condizione specificata.

## <a name="syntax"></a>Sintassi

```cpp
template <bool B, class T1, class T2>
struct conditional;

template <bool _Test, class _T1, class _T2>
using conditional_t = typename conditional<_Test, _T1, _T2>::type;
```

### <a name="parameters"></a>Parametri

*B*\
Valore che determina il tipo selezionato.

*T1*\
Il risultato di tipo quando B è true.

*T2*\
Il risultato di tipo quando B è false.

## <a name="remarks"></a>Note

Il `conditional<B, T1, T2>::type` typedef del membro del modello restituisce *T1* quando *b* restituisce **true**e restituisce *T2* quando *b* restituisce **false**.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedere anche

[<type_traits>](../standard-library/type-traits.md)
