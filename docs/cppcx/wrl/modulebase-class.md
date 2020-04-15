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
ms.openlocfilehash: 13a8ceef3133e9946524e1fcd02e96535eccd7fc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371267"
---
# <a name="modulebase-class"></a>Classe ModuleBase

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
class ModuleBase;
```

## <a name="remarks"></a>Osservazioni

Rappresenta la classe base delle classi [Module.](module-class.md)

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                         | Descrizione
-------------------------------------------- | ---------------------------------------------------------
[ModuleBase::ModuleBase](#modulebase)        | Inizializza un'istanza della classe `Module`.
[ModuleBase::](#tilde-modulebase) | Deinizializza l'istanza corrente `Module` della classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                      | Descrizione
--------------------------------------------------------- | -------------------------------------------------------------------------
[ModuleBase::DecrementObjectCount](#decrementobjectcount) | Quando implementato, decrementa il numero di oggetti rilevati dal modulo.
[ModuleBase::IncrementObjectCount](#incrementobjectcount) | Quando implementato, incrementa il numero di oggetti rilevati dal modulo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ModuleBase`

## <a name="requirements"></a>Requisiti

**Intestazione:** implements.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="modulebasemodulebase"></a><a name="tilde-modulebase"></a>ModuleBase::

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
virtual ~ModuleBase();
```

### <a name="remarks"></a>Osservazioni

Deinizializza l'istanza corrente `ModuleBase` della classe.

## <a name="modulebasedecrementobjectcount"></a><a name="decrementobjectcount"></a>ModuleBase::DecrementObjectCount

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
virtual long DecrementObjectCount() = 0;
```

### <a name="return-value"></a>Valore restituito

Conteggio prima dell'operazione di decremento.

### <a name="remarks"></a>Osservazioni

Quando implementato, decrementa il numero di oggetti rilevati dal modulo.

## <a name="modulebaseincrementobjectcount"></a><a name="incrementobjectcount"></a>ModuleBase::IncrementObjectCount

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
virtual long IncrementObjectCount() = 0;
```

### <a name="return-value"></a>Valore restituito

Conteggio prima dell'operazione di incremento.

### <a name="remarks"></a>Osservazioni

Quando implementato, incrementa il numero di oggetti rilevati dal modulo.

## <a name="modulebasemodulebase"></a><a name="modulebase"></a>ModuleBase::ModuleBase

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
ModuleBase();
```

### <a name="remarks"></a>Osservazioni

Inizializza un'istanza della classe `Module`.
