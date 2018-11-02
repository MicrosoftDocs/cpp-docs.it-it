---
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
ms.openlocfilehash: 4a65b7335626cc36a4eecbe61465778889a9e7e8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50502128"
---
# <a name="modulebase-class"></a>Classe ModuleBase

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
class ModuleBase;
```

## <a name="remarks"></a>Note

Rappresenta la classe di base di [modulo](../windows/module-class.md) classi.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                         | Descrizione
-------------------------------------------- | ---------------------------------------------------------
[Modulebase:: Modulebase](#modulebase)        | Inizializza un'istanza della classe `Module`.
[ModuleBase:: ~ ModuleBase](#tilde-modulebase) | Deinizializza l'istanza corrente del `Module` classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                      | Descrizione
--------------------------------------------------------- | -------------------------------------------------------------------------
[Modulebase:: Decrementobjectcount](#decrementobjectcount) | Quando viene implementato, decrementa il numero di oggetti registrati dal modulo.
[Modulebase:: Incrementobjectcount](#incrementobjectcount) | Quando implementato, incrementa il numero di oggetti registrati dal modulo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ModuleBase`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="tilde-modulebase"></a>ModuleBase:: ~ ModuleBase

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
virtual ~ModuleBase();
```

### <a name="remarks"></a>Note

Deinizializza l'istanza corrente del `ModuleBase` classe.

## <a name="decrementobjectcount"></a>Modulebase:: Decrementobjectcount

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
virtual long DecrementObjectCount() = 0;
```

### <a name="return-value"></a>Valore restituito

Il conteggio prima dell'operazione di decremento.

### <a name="remarks"></a>Note

Quando viene implementato, decrementa il numero di oggetti registrati dal modulo.

## <a name="incrementobjectcount"></a>Modulebase:: Incrementobjectcount

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
virtual long IncrementObjectCount() = 0;
```

### <a name="return-value"></a>Valore restituito

Il conteggio prima dell'operazione di incremento.

### <a name="remarks"></a>Note

Quando implementato, incrementa il numero di oggetti registrati dal modulo.

## <a name="modulebase"></a>Modulebase:: Modulebase

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
ModuleBase();
```

### <a name="remarks"></a>Note

Inizializza un'istanza della classe `Module`.
