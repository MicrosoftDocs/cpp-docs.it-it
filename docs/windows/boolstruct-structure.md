---
title: BoolStruct (struttura)
ms.date: 09/21/2018
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::BoolStruct
- internal/Microsoft::WRL::Details::BoolStruct::Member
helpviewer_keywords:
- Microsoft::WRL::Details::BoolStruct structure
- Microsoft::WRL::Details::BoolStruct::Member data member
ms.assetid: 666eae78-e81d-4fb7-a9e4-1ba617d6d4cd
ms.openlocfilehash: d79ea93bf95040efe79e3e3c57ceb3397fd257de
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50643404"
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
