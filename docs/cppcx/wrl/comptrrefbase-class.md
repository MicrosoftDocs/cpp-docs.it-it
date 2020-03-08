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
ms.openlocfilehash: df4e2aa1ce650fd5b1f04baf2f7c4cd2fb4cff93
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78865821"
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
Tipo [ComPtr\<t >](comptr-class.md) o un tipo derivato da esso, non solo l'interfaccia rappresentata dal `ComPtr`.

## <a name="remarks"></a>Osservazioni

Rappresenta la classe di base per la classe [ComPtrRef](comptrref-class.md) .

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

Nome            | Descrizione
--------------- | -------------------------------------------------
`InterfaceType` | Sinonimo del tipo di parametro di modello *T*.

### <a name="public-operators"></a>Operatori pubblici

Nome                                                                       | Descrizione
-------------------------------------------------------------------------- | -----------------------------------------------------------------------------------------------------
[ComPtrRefBase:: operator IInspectable * *](#operator-iinspectable-star-star) | Esegue il cast del membro dati del [ptr_](#ptr) corrente a un puntatore a un puntatore all'interfaccia `IInspectable`.
[ComPtrRefBase:: operator IUnknown * *](#operator-iunknown-star-star)         | Esegue il cast del membro dati del [ptr_](#ptr) corrente a un puntatore a un puntatore all'interfaccia `IUnknown`.

### <a name="protected-data-members"></a>Membri dati protetti

Nome                        | Descrizione
--------------------------- | ----------------------------------------------------------------
[ComPtrRefBase: tr_:p](#ptr) | Puntatore al tipo specificato dal parametro di modello corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ComPtrRefBase`

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="operator-iinspectable-star-star"></a>Operatore ComPtrRefBase:: operator IInspectable\*\*

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
operator IInspectable**() const;
```

### <a name="remarks"></a>Osservazioni

Esegue il cast del membro dati del [ptr_](#ptr) corrente a un puntatore a un puntatore all'interfaccia `IInspectable`.

Se la `ComPtrRefBase` corrente non deriva da `IInspectable`, viene generato un errore.

Questo cast è disponibile solo se è stato definito `__WRL_CLASSIC_COM__`.

## <a name="operator-iunknown-star-star"></a>Operatore ComPtrRefBase:: operator IUnknown * *

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
operator IUnknown**() const;
```

### <a name="remarks"></a>Osservazioni

Esegue il cast del membro dati del [ptr_](#ptr) corrente a un puntatore a un puntatore all'interfaccia `IUnknown`.

Se la `ComPtrRefBase` corrente non deriva da `IUnknown`, viene generato un errore.

## <a name="ptr"></a>ComPtrRefBase: tr_:p

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
T* ptr_;
```

### <a name="remarks"></a>Osservazioni

Puntatore al tipo specificato dal parametro di modello corrente. `ptr_` è il membro dati protetto.
