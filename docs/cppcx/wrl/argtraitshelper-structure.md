---
title: ArgTraitsHelper (struttura)
ms.date: 09/21/2018
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::ArgTraitsHelper
- event/Microsoft::WRL::Details::ArgTraitsHelper::args
helpviewer_keywords:
- Microsoft::WRL::Details::ArgTraitsHelper structure
- Microsoft::WRL::Details::ArgTraitsHelper::args constant
ms.assetid: e3f798da-0aef-4a57-95d3-d38c34c47d72
ms.openlocfilehash: 4acbd9fa660f29bbaf209282ff0e90f43621574d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81360776"
---
# <a name="argtraitshelper-structure"></a>ArgTraitsHelper (struttura)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template<typename TDelegateInterface>
struct ArgTraitsHelper;
```

### <a name="parameters"></a>Parametri

*TDelegateInterface*<br/>
Interfaccia di delegato.

## <a name="remarks"></a>Osservazioni

Consente di definire le caratteristiche comuni degli argomenti del delegato.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome         | Descrizione
------------ | ------------------------------------------------------
`methodType` | Sinonimo di `decltype(&TDelegateInterface::Invoke)`.
`Traits`     | Sinonimo di `ArgTraits<methodType>`.

### <a name="public-constants"></a>Costanti pubbliche

Nome                           | Descrizione
------------------------------ | ---------------------------------------------------------------------------------------------------------------------
[ArgTraitsHelper::args](#args) | Aiuta [ArgTraits::args](#args) mantenere il conteggio del `Invoke` numero di parametri sul metodo di un'interfaccia delegato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ArgTraitsHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** event.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="argtraitshelperargs"></a><a name="args"></a>ArgTraitsHelper::args

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
static const int args = Traits::args;
```

### <a name="remarks"></a>Osservazioni

Consente `ArgTraitsHelper::args` di mantenere il conteggio `Invoke` del numero di parametri nel metodo di un'interfaccia di delegato.
