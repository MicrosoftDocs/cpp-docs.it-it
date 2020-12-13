---
description: 'Altre informazioni su: struttura BoolStruct'
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
ms.openlocfilehash: d0c30f554cf2f7ebc3bfaf825b43dc28329f697e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338801"
---
# <a name="boolstruct-structure"></a>BoolStruct (struttura)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
struct BoolStruct;
```

## <a name="remarks"></a>Osservazioni

La `BoolStruct` struttura definisce se un `ComPtr` oggetto gestisce la durata degli oggetti di un'interfaccia. `BoolStruct` viene usato internamente dall'operatore [BoolType ()](comptr-class.md#operator-microsoft-wrl-details-booltype) .

## <a name="members"></a>Membri

### <a name="public-data-members"></a>Membri dati pubblici

Nome                          | Description
----------------------------- | ------------------------------------------------------------------------------------------------------------------
[BoolStruct:: member](#member) | Specifica che un [ComPtr](comptr-class.md) è o non è in grado di gestire la durata degli oggetti di un'interfaccia.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`BoolStruct`

## <a name="requirements"></a>Requisiti

**Intestazione:** Internal. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="boolstructmember"></a><a name="member"></a> BoolStruct:: member

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
int Member;
```

### <a name="remarks"></a>Commenti

Specifica che un [ComPtr](comptr-class.md) è o non è in grado di gestire la durata degli oggetti di un'interfaccia.
