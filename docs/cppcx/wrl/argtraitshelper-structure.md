---
description: 'Altre informazioni su: Struttura ArgTraitsHelper'
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
ms.openlocfilehash: a749c48c72c837eb0898d32ddd08410b87918871
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97175859"
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
Interfaccia del delegato.

## <a name="remarks"></a>Commenti

Consente di definire le caratteristiche comuni degli argomenti del delegato.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome         | Description
------------ | ------------------------------------------------------
`methodType` | Sinonimo di `decltype(&TDelegateInterface::Invoke)`.
`Traits`     | Sinonimo di `ArgTraits<methodType>`.

### <a name="public-constants"></a>Costanti pubbliche

Nome                           | Description
------------------------------ | ---------------------------------------------------------------------------------------------------------------------
[ArgTraitsHelper:: args](#args) | Helps [ArgTraits:: args](#args) mantiene il conteggio del numero di parametri nel `Invoke` metodo di un'interfaccia del delegato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ArgTraitsHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="argtraitshelperargs"></a><a name="args"></a> ArgTraitsHelper:: args

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
static const int args = Traits::args;
```

### <a name="remarks"></a>Commenti

Consente di `ArgTraitsHelper::args` gestire il conteggio del numero di parametri nel `Invoke` metodo di un'interfaccia del delegato.
