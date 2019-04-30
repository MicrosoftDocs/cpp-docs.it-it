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
ms.openlocfilehash: 254796c03d25a77da22c48881c086a41ffbfeb82
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62403217"
---
# <a name="modulebase-class"></a>Classe ModuleBase

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
class ModuleBase;
```

## <a name="remarks"></a>Note

Rappresenta la classe di base di [modulo](module-class.md) classi.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                         | Descrizione
-------------------------------------------- | ---------------------------------------------------------
[ModuleBase::ModuleBase](#modulebase)        | Inizializza un'istanza della classe `Module`.
[ModuleBase:: ~ ModuleBase](#tilde-modulebase) | Deinizializza l'istanza corrente del `Module` classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                      | Descrizione
--------------------------------------------------------- | -------------------------------------------------------------------------
[ModuleBase::DecrementObjectCount](#decrementobjectcount) | Quando viene implementato, decrementa il numero di oggetti registrati dal modulo.
[ModuleBase::IncrementObjectCount](#incrementobjectcount) | Quando implementato, incrementa il numero di oggetti registrati dal modulo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ModuleBase`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="tilde-modulebase"></a>ModuleBase::~ModuleBase

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
virtual ~ModuleBase();
```

### <a name="remarks"></a>Note

Deinizializza l'istanza corrente del `ModuleBase` classe.

## <a name="decrementobjectcount"></a>ModuleBase::DecrementObjectCount

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
virtual long DecrementObjectCount() = 0;
```

### <a name="return-value"></a>Valore restituito

Il conteggio prima dell'operazione di decremento.

### <a name="remarks"></a>Note

Quando viene implementato, decrementa il numero di oggetti registrati dal modulo.

## <a name="incrementobjectcount"></a>ModuleBase::IncrementObjectCount

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
virtual long IncrementObjectCount() = 0;
```

### <a name="return-value"></a>Valore restituito

Il conteggio prima dell'operazione di incremento.

### <a name="remarks"></a>Note

Quando implementato, incrementa il numero di oggetti registrati dal modulo.

## <a name="modulebase"></a>ModuleBase::ModuleBase

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
ModuleBase();
```

### <a name="remarks"></a>Note

Inizializza un'istanza della classe `Module`.
