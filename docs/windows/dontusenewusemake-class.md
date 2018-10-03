---
title: DontUseNewUseMake (classe) | Microsoft Docs
ms.custom: ''
ms.date: 09/21/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::DontUseNewUseMake
- implements/Microsoft::WRL::Details::DontUseNewUseMake::operator new
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Details::DontUseNewUseMake class
- Microsoft::WRL::Details::DontUseNewUseMake::operator new operator
ms.assetid: 8b38d07b-fc14-4cea-afb9-4c1a7dde0093
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9c1f3a57401a3ab2efd45cab2dace127010c24e6
ms.sourcegitcommit: 1d9bd38cacbc783fccd3884b7b92062161c91c84
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/03/2018
ms.locfileid: "48235282"
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
