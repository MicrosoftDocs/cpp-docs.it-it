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
ms.openlocfilehash: 02420f2657c7d7d6a7a0294f0321717a3bb2b5d7
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54336772"
---
# <a name="dontusenewusemake-class"></a>DontUseNewUseMake (classe)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
class DontUseNewUseMake;
```

## <a name="remarks"></a>Note

Impedisce usando l'operatore `new` in `RuntimeClass`. Di conseguenza, è necessario usare il [rendere funzione](make-function.md) invece.

## <a name="members"></a>Membri

### <a name="public-operators"></a>Operatori pubblici

Nome                                             | Descrizione
------------------------------------------------ | ---------------------------------------------------------------------------
[Nuovo dontusenewusemake:: operator](#operator-new) | Operatore di overload `new` e impedisce l'utilizzo `RuntimeClass`.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`DontUseNewUseMake`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL::Details

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

*placement*<br/>
Il tipo da allocare.

### <a name="return-value"></a>Valore restituito

Fornisce un modo per passare argomenti aggiuntivi se si esegue l'overload di operatore `new`.

### <a name="remarks"></a>Note

Operatore di overload `new` e impedisce l'utilizzo `RuntimeClass`.
