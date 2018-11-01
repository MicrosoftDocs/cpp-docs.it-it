---
title: DontUseNewUseMake (classe)
ms.date: 09/21/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::DontUseNewUseMake
- implements/Microsoft::WRL::Details::DontUseNewUseMake::operator new
helpviewer_keywords:
- Microsoft::WRL::Details::DontUseNewUseMake class
- Microsoft::WRL::Details::DontUseNewUseMake::operator new operator
ms.assetid: 8b38d07b-fc14-4cea-afb9-4c1a7dde0093
ms.openlocfilehash: f38833fa851030735dca34f16be9eaa9eb52069a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50466755"
---
# <a name="dontusenewusemake-class"></a>DontUseNewUseMake (classe)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
class DontUseNewUseMake;
```

## <a name="remarks"></a>Note

Impedisce usando l'operatore `new` in `RuntimeClass`. Di conseguenza, è necessario usare il [rendere funzione](../windows/make-function.md) invece.

## <a name="members"></a>Membri

### <a name="public-operators"></a>Operatori pubblici

Nome                                             | Descrizione
------------------------------------------------ | ---------------------------------------------------------------------------
[Nuovo dontusenewusemake:: operator](#operator-new) | Operatore di overload `new` e impedisce l'utilizzo `RuntimeClass`.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`DontUseNewUseMake`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="operator-new"></a>Nuovo dontusenewusemake:: operator

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
void* operator new(
   size_t,
   _In_ void* placement
);
```

### <a name="parameters"></a>Parametri

*__unnamed0*<br/>
Un parametro non denominato che specifica il numero di byte di memoria da allocare.

*selezione host*<br/>
Il tipo da allocare.

### <a name="return-value"></a>Valore restituito

Fornisce un modo per passare argomenti aggiuntivi se si esegue l'overload di operatore `new`.

### <a name="remarks"></a>Note

Operatore di overload `new` e impedisce l'utilizzo `RuntimeClass`.
