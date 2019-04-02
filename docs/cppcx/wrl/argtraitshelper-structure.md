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
ms.openlocfilehash: fbba6d96106cc95910ccd9d0029cb3e9c254d7d3
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58784981"
---
# <a name="argtraitshelper-structure"></a>ArgTraitsHelper (struttura)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template<typename TDelegateInterface>
struct ArgTraitsHelper;
```

### <a name="parameters"></a>Parametri

*TDelegateInterface*<br/>
Un'interfaccia di delegato.

## <a name="remarks"></a>Note

Consente di definire le caratteristiche comuni di argomenti del delegato.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome         | Descrizione
------------ | ------------------------------------------------------
`methodType` | Sinonimo di `decltype(&TDelegateInterface::Invoke)`.
`Traits`     | Sinonimo di `ArgTraits<methodType>`.

### <a name="public-constants"></a>Costanti pubbliche

Nome                           | Descrizione
------------------------------ | ---------------------------------------------------------------------------------------------------------------------
[ArgTraitsHelper::args](#args) | Aiuta [argtraits:: args](#args) Mantieni il numero di parametri sul `Invoke` metodo di un'interfaccia di delegato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ArgTraitsHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="args"></a>ArgTraitsHelper::args

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
static const int args = Traits::args;
```

### <a name="remarks"></a>Note

Aiuta `ArgTraitsHelper::args` mantenere il numero di parametri sul `Invoke` metodo di un'interfaccia di delegato.
