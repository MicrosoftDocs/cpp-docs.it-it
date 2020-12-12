---
description: 'Altre informazioni su: classe ModuleBase'
title: Classe ModuleBase
ms.date: 09/21/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::ModuleBase
- implements/Microsoft::WRL::Details::ModuleBase::DecrementObjectCount
- implements/Microsoft::WRL::Details::ModuleBase::IncrementObjectCount
- implements/Microsoft::WRL::Details::ModuleBase::ModuleBase
- implements/Microsoft::WRL::Details::ModuleBase::~ModuleBase
helpviewer_keywords:
- ModuleBase class
- Microsoft::WRL::Details::ModuleBase::DecrementObjectCount method
- Microsoft::WRL::Details::ModuleBase::IncrementObjectCount method
- Microsoft::WRL::Details::ModuleBase::ModuleBase, constructor
- Microsoft::WRL::Details::ModuleBase::~ModuleBase, destructor
ms.assetid: edce7591-6893-46f7-94a7-382827775548
ms.openlocfilehash: 6540068cee62da5d1a9039a15bcb5bd53ff3aea2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97186246"
---
# <a name="modulebase-class"></a>Classe ModuleBase

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
class ModuleBase;
```

## <a name="remarks"></a>Osservazioni

Rappresenta la classe di base delle classi del [modulo](module-class.md) .

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                         | Description
-------------------------------------------- | ---------------------------------------------------------
[ModuleBase:: ModuleBase](#modulebase)        | Inizializza un'istanza della classe `Module`.
[ModuleBase:: ~ ModuleBase](#tilde-modulebase) | Consente di deinizializzare l'istanza corrente della `Module` classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                      | Description
--------------------------------------------------------- | -------------------------------------------------------------------------
[ModuleBase::D ecrementObjectCount](#decrementobjectcount) | Quando implementato, decrementa il numero di oggetti rilevati dal modulo.
[ModuleBase:: IncrementObjectCount](#incrementobjectcount) | Quando implementato, incrementa il numero di oggetti rilevati dal modulo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ModuleBase`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="modulebasemodulebase"></a><a name="tilde-modulebase"></a> ModuleBase:: ~ ModuleBase

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
virtual ~ModuleBase();
```

### <a name="remarks"></a>Commenti

Consente di deinizializzare l'istanza corrente della `ModuleBase` classe.

## <a name="modulebasedecrementobjectcount"></a><a name="decrementobjectcount"></a> ModuleBase::D ecrementObjectCount

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
virtual long DecrementObjectCount() = 0;
```

### <a name="return-value"></a>Valore restituito

Conteggio prima dell'operazione di decremento.

### <a name="remarks"></a>Commenti

Quando implementato, decrementa il numero di oggetti rilevati dal modulo.

## <a name="modulebaseincrementobjectcount"></a><a name="incrementobjectcount"></a> ModuleBase:: IncrementObjectCount

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
virtual long IncrementObjectCount() = 0;
```

### <a name="return-value"></a>Valore restituito

Conteggio prima dell'operazione di incremento.

### <a name="remarks"></a>Commenti

Quando implementato, incrementa il numero di oggetti rilevati dal modulo.

## <a name="modulebasemodulebase"></a><a name="modulebase"></a> ModuleBase:: ModuleBase

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
ModuleBase();
```

### <a name="remarks"></a>Commenti

Inizializza un'istanza della classe `Module`.
