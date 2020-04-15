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
ms.openlocfilehash: 4f2a5acf6edb824cff2121c1b6444181b5cfcf98
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371844"
---
# <a name="boolstruct-structure"></a>BoolStruct (struttura)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
struct BoolStruct;
```

## <a name="remarks"></a>Osservazioni

La `BoolStruct` struttura definisce `ComPtr` se un oggetto gestisce la durata dell'oggetto di un'interfaccia. `BoolStruct`viene utilizzato internamente dall'operatore [BoolType().](comptr-class.md#operator-microsoft-wrl-details-booltype)

## <a name="members"></a>Membri

### <a name="public-data-members"></a>Membri dati pubblici

Nome                          | Descrizione
----------------------------- | ------------------------------------------------------------------------------------------------------------------
[BoolStruct::Membro](#member) | Specifica che un [ComPtr](comptr-class.md) è, o non è, la gestione della durata dell'oggetto di un'interfaccia.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`BoolStruct`

## <a name="requirements"></a>Requisiti

**Intestazione:** internal.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="boolstructmember"></a><a name="member"></a>BoolStruct::Membro

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
int Member;
```

### <a name="remarks"></a>Osservazioni

Specifica che un [ComPtr](comptr-class.md) è, o non è, la gestione della durata dell'oggetto di un'interfaccia.
