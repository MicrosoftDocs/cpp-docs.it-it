---
description: 'Altre informazioni su: classe condizionale'
title: Classe conditional
ms.date: 11/04/2016
f1_keywords:
- type_traits/std::conditional
helpviewer_keywords:
- conditional class
- conditional
ms.assetid: ece9f539-fb28-4e26-a79f-3264bc984493
ms.openlocfilehash: f8edbd7341598957ecbe8b0822a832973f0e06a4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324971"
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

## <a name="remarks"></a>Commenti

Il typedef del membro del modello `conditional<B, T1, T2>::type` restituisce *T1* quando *b* restituisce **`true`** e restituisce *T2* quando *b* restituisce **`false`** .

## <a name="requirements"></a>Requisiti

**Intestazione:**\<type_traits>

**Spazio dei nomi:** std

## <a name="see-also"></a>Vedi anche

[<type_traits>](../standard-library/type-traits.md)
