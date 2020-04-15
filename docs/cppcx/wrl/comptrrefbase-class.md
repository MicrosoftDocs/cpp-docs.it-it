---
title: ComPtrRefBase (classe)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::ComPtrRefBase
- client/Microsoft::WRL::Details::ComPtrRefBase::operator IInspectable**
- client/Microsoft::WRL::Details::ComPtrRefBase::operator IUnknown**
- client/Microsoft::WRL::Details::ComPtrRefBase::ptr_
helpviewer_keywords:
- Microsoft::WRL::Details::ComPtrRefBase class
- Microsoft::WRL::Details::ComPtrRefBase::operator IInspectable** operator
- Microsoft::WRL::Details::ComPtrRefBase::operator IUnknown** operator
- Microsoft::WRL::Details::ComPtrRefBase::ptr_ data member
ms.assetid: 6d344c1a-cc13-4a3f-8a0d-f167ccb9348f
ms.openlocfilehash: 4f6dd6449cf8135ad14486d64cea95d8329e0014
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372611"
---
# <a name="comptrrefbase-class"></a>ComPtrRefBase (classe)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <typename T>
class ComPtrRefBase;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Un [tipo\<comPtr T>](comptr-class.md) o un tipo che ne deriva, non solo l'interfaccia rappresentata dall'oggetto `ComPtr`.

## <a name="remarks"></a>Osservazioni

Rappresenta la classe base per la classe [ComPtrRef.](comptrref-class.md)

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome            | Descrizione
--------------- | -------------------------------------------------
`InterfaceType` | Sinonimo del tipo di parametro di modello *T*.

### <a name="public-operators"></a>Operatori pubblici

Nome                                                                       | Descrizione
-------------------------------------------------------------------------- | -----------------------------------------------------------------------------------------------------
[ComPtrRefBase::operatore IInspectable](#operator-iinspectable-star-star) | Esegue il cast del membro dati [ptr_](#ptr) corrente a un `IInspectable` puntatore a un puntatore all'interfaccia.
[ComPtrRefBase::operatore IUnknown](#operator-iunknown-star-star)         | Esegue il cast del membro dati [ptr_](#ptr) corrente a un `IUnknown` puntatore a un puntatore all'interfaccia.

### <a name="protected-data-members"></a>Membri dati protetti

Nome                        | Descrizione
--------------------------- | ----------------------------------------------------------------
[ComPtrRefBase::ptr_](#ptr) | Puntatore al tipo specificato dal parametro di modello corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ComPtrRefBase`

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="comptrrefbaseoperator-iinspectable-operator"></a><a name="operator-iinspectable-star-star"></a>ComPtrRefBase::operatore IInspectable\* \* Operator

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
operator IInspectable**() const;
```

### <a name="remarks"></a>Osservazioni

Esegue il cast del membro dati [ptr_](#ptr) corrente a un `IInspectable` puntatore a un puntatore all'interfaccia.

Se l'oggetto corrente `ComPtrRefBase` non deriva da `IInspectable`.

Questo cast è `__WRL_CLASSIC_COM__` disponibile solo se è definito.

## <a name="comptrrefbaseoperator-iunknown-operator"></a><a name="operator-iunknown-star-star"></a>ComPtrRefBase::operatore IUnknown

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
operator IUnknown**() const;
```

### <a name="remarks"></a>Osservazioni

Esegue il cast del membro dati [ptr_](#ptr) corrente a un `IUnknown` puntatore a un puntatore all'interfaccia.

Se l'oggetto corrente `ComPtrRefBase` non deriva da `IUnknown`.

## <a name="comptrrefbaseptr_"></a><a name="ptr"></a>ComPtrRefBase::ptr_

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
T* ptr_;
```

### <a name="remarks"></a>Osservazioni

Puntatore al tipo specificato dal parametro di modello corrente. `ptr_`è il membro dati protetto.
