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
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58785608"
---
# <a name="comptrrefbase-class"></a>ComPtrRefBase (classe)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <typename T>
class ComPtrRefBase;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Oggetto [ComPtr\<T >](comptr-class.md) tipo o un tipo derivato da essa, non soltanto l'interfaccia rappresentata dal `ComPtr`.

## <a name="remarks"></a>Note

Rappresenta la classe base per il [ComPtrRef](comptrref-class.md) classe.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome            | Descrizione
--------------- | -------------------------------------------------
`InterfaceType` | Un sinonimo per il tipo di parametro di modello *T*.

### <a name="public-operators"></a>Operatori pubblici

Nome                                                                       | Descrizione
-------------------------------------------------------------------------- | -----------------------------------------------------------------------------------------------------
[Operatore comptrrefbase:: IInspectable * *](#operator-iinspectable-star-star) | L'oggetto corrente viene eseguito il cast [PTR _](#ptr) membro dati da un puntatore a un oggetto-puntatore-al `IInspectable` interfaccia.
[Operatore comptrrefbase:: IUnknown * *](#operator-iunknown-star-star)         | L'oggetto corrente viene eseguito il cast [PTR _](#ptr) membro dati da un puntatore a un oggetto-puntatore-al `IUnknown` interfaccia.

### <a name="protected-data-members"></a>Membri dati protetti

Nome                        | Descrizione
--------------------------- | ----------------------------------------------------------------
[ComPtrRefBase::ptr_](#ptr) | Puntatore al tipo specificato dal parametro di modello corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ComPtrRefBase`

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="operator-iinspectable-star-star"></a>Operatore comptrrefbase:: IInspectable\* \* operatore

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
operator IInspectable**() const;
```

### <a name="remarks"></a>Note

L'oggetto corrente viene eseguito il cast [PTR _](#ptr) membro dati da un puntatore a un oggetto-puntatore-al `IInspectable` interfaccia.

Viene generato un errore se l'oggetto corrente `ComPtrRefBase` non deriva da `IInspectable`.

Questo cast è disponibile solo se `__WRL_CLASSIC_COM__` è definito.

## <a name="operator-iunknown-star-star"></a>Operator IUnknown * * operatore comptrrefbase::

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
operator IUnknown**() const;
```

### <a name="remarks"></a>Note

L'oggetto corrente viene eseguito il cast [PTR _](#ptr) membro dati da un puntatore a un oggetto-puntatore-al `IUnknown` interfaccia.

Viene generato un errore se l'oggetto corrente `ComPtrRefBase` non deriva da `IUnknown`.

## <a name="ptr"></a>ComPtrRefBase::ptr_

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
T* ptr_;
```

### <a name="remarks"></a>Note

Puntatore al tipo specificato dal parametro di modello corrente. `ptr_` è il membro dei dati protetti.
