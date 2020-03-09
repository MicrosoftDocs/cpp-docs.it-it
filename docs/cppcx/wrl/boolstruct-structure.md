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
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78865710"
---
# <a name="boolstruct-structure"></a>BoolStruct (struttura)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
struct BoolStruct;
```

## <a name="remarks"></a>Osservazioni

La struttura `BoolStruct` definisce se una `ComPtr` gestisce la durata degli oggetti di un'interfaccia. `BoolStruct` viene utilizzato internamente dall'operatore [BoolType ()](comptr-class.md#operator-microsoft-wrl-details-booltype) .

## <a name="members"></a>Members

### <a name="public-data-members"></a>Membri dati pubblici

Nome                          | Descrizione
----------------------------- | ------------------------------------------------------------------------------------------------------------------
[BoolStruct:: member](#member) | Specifica che un [ComPtr](comptr-class.md) è o non è in grado di gestire la durata degli oggetti di un'interfaccia.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`BoolStruct`

## <a name="requirements"></a>Requisiti

**Intestazione:** Internal. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="member"></a>BoolStruct:: member

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
int Member;
```

### <a name="remarks"></a>Osservazioni

Specifica che un [ComPtr](comptr-class.md) è o non è in grado di gestire la durata degli oggetti di un'interfaccia.
