---
title: BoolStruct (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 09/21/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::BoolStruct
- internal/Microsoft::WRL::Details::BoolStruct::Member
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Details::BoolStruct structure
- Microsoft::WRL::Details::BoolStruct::Member data member
ms.assetid: 666eae78-e81d-4fb7-a9e4-1ba617d6d4cd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 74a292f2253d29730e8ee9104ea81308081c0496
ms.sourcegitcommit: 1d9bd38cacbc783fccd3884b7b92062161c91c84
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/03/2018
ms.locfileid: "48234268"
---
# <a name="boolstruct-structure"></a>BoolStruct (struttura)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
struct BoolStruct;
```

## <a name="remarks"></a>Note

Il `BoolStruct` struttura definisce se un `ComPtr` gestisce la durata dell'oggetto di un'interfaccia. `BoolStruct` viene usato internamente dal [BoolType()](../windows/comptr-operator-microsoft-wrl-details-booltype-operator.md) operatore.

## <a name="members"></a>Membri

### <a name="public-data-members"></a>Membri dati pubblici

Nome                          | Descrizione
----------------------------- | ------------------------------------------------------------------------------------------------------------------
[Boolstruct::](#member) | Specifica che un [ComPtr](../windows/comptr-class.md) è o non lo è, gestire la durata dell'oggetto di un'interfaccia.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`BoolStruct`

## <a name="requirements"></a>Requisiti

**Intestazione:** FTM

**Namespace:** Microsoft::WRL::Details

## <a name="member"></a>Boolstruct::

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
int Member;
```

### <a name="remarks"></a>Note

Specifica che un [ComPtr](../windows/comptr-class.md) è o non lo è, gestire la durata dell'oggetto di un'interfaccia.
