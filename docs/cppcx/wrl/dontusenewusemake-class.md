---
description: 'Altre informazioni su: classe DontUseNewUseMake'
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
ms.openlocfilehash: f6b6740e472123e59565e3bad16e4a535a4e17fb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97272903"
---
# <a name="dontusenewusemake-class"></a>DontUseNewUseMake (classe)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
class DontUseNewUseMake;
```

## <a name="remarks"></a>Osservazioni

Impedisce l'utilizzo `new` dell'operatore in `RuntimeClass` . Di conseguenza, è necessario usare invece la [funzione Make](make-function.md) .

## <a name="members"></a>Membri

### <a name="public-operators"></a>Operatori pubblici

Nome                                             | Description
------------------------------------------------ | ---------------------------------------------------------------------------
[DontUseNewUseMake:: operator new](#operator-new) | Overloads Operator `new` e ne impedisce l'utilizzo in `RuntimeClass` .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`DontUseNewUseMake`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="dontusenewusemakeoperator-new"></a><a name="operator-new"></a> DontUseNewUseMake:: operator new

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
void* operator new(
   size_t,
   _In_ void* placement
);
```

### <a name="parameters"></a>Parametri

*__unnamed0*<br/>
Parametro senza nome che specifica il numero di byte di memoria da allocare.

*posizionamento*<br/>
Tipo da allocare.

### <a name="return-value"></a>Valore restituito

Fornisce un modo per passare argomenti aggiuntivi se si esegue l'overload dell'operatore `new` .

### <a name="remarks"></a>Commenti

Overloads Operator `new` e ne impedisce l'utilizzo in `RuntimeClass` .
