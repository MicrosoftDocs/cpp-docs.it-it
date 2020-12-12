---
description: 'Altre informazioni su: classe ComPtrRefBase'
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
ms.openlocfilehash: 4dce58e8292092084916c24153d543f2a45856fa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97273137"
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
Un [tipo \<T> ComPtr](comptr-class.md) o un tipo derivato da esso, non solo l'interfaccia rappresentata dall'oggetto `ComPtr` .

## <a name="remarks"></a>Commenti

Rappresenta la classe di base per la classe [ComPtrRef](comptrref-class.md) .

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome            | Description
--------------- | -------------------------------------------------
`InterfaceType` | Sinonimo del tipo di parametro di modello *T*.

### <a name="public-operators"></a>Operatori pubblici

Nome                                                                       | Description
-------------------------------------------------------------------------- | -----------------------------------------------------------------------------------------------------
[ComPtrRefBase:: operator IInspectable * *](#operator-iinspectable-star-star) | Esegue il cast del membro dati del [ptr_](#ptr) corrente a un puntatore a un puntatore all' `IInspectable` interfaccia.
[ComPtrRefBase:: operator IUnknown * *](#operator-iunknown-star-star)         | Esegue il cast del membro dati del [ptr_](#ptr) corrente a un puntatore a un puntatore all' `IUnknown` interfaccia.

### <a name="protected-data-members"></a>Membri dati protetti

Nome                        | Description
--------------------------- | ----------------------------------------------------------------
[ComPtrRefBase: tr_:p](#ptr) | Puntatore al tipo specificato dal parametro di modello corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ComPtrRefBase`

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="comptrrefbaseoperator-iinspectable-operator"></a><a name="operator-iinspectable-star-star"></a>Operatore ComPtrRefBase:: operator IInspectable \* \*

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
operator IInspectable**() const;
```

### <a name="remarks"></a>Commenti

Esegue il cast del membro dati del [ptr_](#ptr) corrente a un puntatore a un puntatore all' `IInspectable` interfaccia.

Se l'oggetto corrente `ComPtrRefBase` non deriva da, viene generato un errore `IInspectable` .

Questo cast è disponibile solo se `__WRL_CLASSIC_COM__` è definito.

## <a name="comptrrefbaseoperator-iunknown-operator"></a><a name="operator-iunknown-star-star"></a> Operatore ComPtrRefBase:: operator IUnknown * *

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
operator IUnknown**() const;
```

### <a name="remarks"></a>Commenti

Esegue il cast del membro dati del [ptr_](#ptr) corrente a un puntatore a un puntatore all' `IUnknown` interfaccia.

Se l'oggetto corrente `ComPtrRefBase` non deriva da, viene generato un errore `IUnknown` .

## <a name="comptrrefbaseptr_"></a><a name="ptr"></a> ComPtrRefBase: tr_:p

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
T* ptr_;
```

### <a name="remarks"></a>Commenti

Puntatore al tipo specificato dal parametro di modello corrente. `ptr_` membro dati protetto.
