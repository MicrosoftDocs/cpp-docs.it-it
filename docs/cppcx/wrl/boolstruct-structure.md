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
ms.openlocfilehash: cdec425e317585abbd9730447e2c4fbb19b8250a
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58785368"
---
# <a name="boolstruct-structure"></a>BoolStruct (struttura)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
struct BoolStruct;
```

## <a name="remarks"></a>Note

Il `BoolStruct` struttura definisce se un `ComPtr` gestisce la durata dell'oggetto di un'interfaccia. `BoolStruct` viene usato internamente dal [BoolType()](comptr-class.md#operator-microsoft-wrl-details-booltype) operatore.

## <a name="members"></a>Membri

### <a name="public-data-members"></a>Membri dati pubblici

Nome                          | Descrizione
----------------------------- | ------------------------------------------------------------------------------------------------------------------
[Boolstruct::](#member) | Specifica che un [ComPtr](comptr-class.md) è o non lo è, gestire la durata dell'oggetto di un'interfaccia.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`BoolStruct`

## <a name="requirements"></a>Requisiti

**Intestazione:** FTM

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="member"></a>Boolstruct::

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
int Member;
```

### <a name="remarks"></a>Note

Specifica che un [ComPtr](comptr-class.md) è o non lo è, gestire la durata dell'oggetto di un'interfaccia.
