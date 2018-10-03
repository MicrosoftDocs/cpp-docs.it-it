---
title: ArgTraitsHelper (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 09/21/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::ArgTraitsHelper
- event/Microsoft::WRL::Details::ArgTraitsHelper::args
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Details::ArgTraitsHelper structure
- Microsoft::WRL::Details::ArgTraitsHelper::args constant
ms.assetid: e3f798da-0aef-4a57-95d3-d38c34c47d72
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b608f5da893019d7700891968dcdc06489c563ea
ms.sourcegitcommit: 1d9bd38cacbc783fccd3884b7b92062161c91c84
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/03/2018
ms.locfileid: "48234229"
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

nome                           | Descrizione
------------------------------ | ---------------------------------------------------------------------------------------------------------------------
[Argtraitshelper:: args](#args) | Aiuta [argtraits:: args](#args) Mantieni il numero di parametri sul `Invoke` metodo di un'interfaccia di delegato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ArgTraitsHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Namespace:** Microsoft::WRL::Details

## <a name="args"></a>Argtraitshelper:: args

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
static const int args = Traits::args;
```

### <a name="remarks"></a>Note

Aiuta `ArgTraitsHelper::args` mantenere il numero di parametri sul `Invoke` metodo di un'interfaccia di delegato.
