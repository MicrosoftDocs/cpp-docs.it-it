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
ms.openlocfilehash: ae67373b4f2f2d4a199b939b06e6f526f1365446
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371545"
---
# <a name="dontusenewusemake-class"></a>DontUseNewUseMake (classe)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
class DontUseNewUseMake;
```

## <a name="remarks"></a>Osservazioni

Impedisce `new` l'utilizzo dell'operatore in `RuntimeClass`. Di conseguenza, è necessario utilizzare la [funzione Make.](make-function.md)

## <a name="members"></a>Membri

### <a name="public-operators"></a>Operatori pubblici

Nome                                             | Descrizione
------------------------------------------------ | ---------------------------------------------------------------------------
[DontUseNewUseMake::operator new](#operator-new) | Esegue l'overload `new` dell'operatore `RuntimeClass`e ne impedisce l'utilizzo in .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`DontUseNewUseMake`

## <a name="requirements"></a>Requisiti

**Intestazione:** implements.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="dontusenewusemakeoperator-new"></a><a name="operator-new"></a>DontUseNewUseMake::operator new

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

*Posizionamento*<br/>
Tipo da allocare.

### <a name="return-value"></a>Valore restituito

Fornisce un modo per passare argomenti `new`aggiuntivi se si esegue l'overload dell'operatore .

### <a name="remarks"></a>Osservazioni

Esegue l'overload `new` dell'operatore `RuntimeClass`e ne impedisce l'utilizzo in .
