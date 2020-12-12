---
description: 'Altre informazioni su: Classe ComPtrRef'
title: ComPtrRef (classe)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::ComPtrRef
- client/Microsoft::WRL::Details::ComPtrRef::ComPtrRef
- client/Microsoft::WRL::Details::ComPtrRef::GetAddressOf
- client/Microsoft::WRL::Details::ComPtrRef::operator==
- client/Microsoft::WRL::Details::ComPtrRef::operator!=
- client/Microsoft::WRL::Details::ComPtrRef::operator InterfaceType**
- client/Microsoft::WRL::Details::ComPtrRef::operator*
- client/Microsoft::WRL::Details::ComPtrRef::operator T*
- client/Microsoft::WRL::Details::ComPtrRef::operator void**
- client/Microsoft::WRL::Details::ComPtrRef::ReleaseAndGetAddressOf
helpviewer_keywords:
- Microsoft::WRL::Details::ComPtrRef class
- Microsoft::WRL::Details::ComPtrRef::ComPtrRef, constructor
- Microsoft::WRL::Details::ComPtrRef::GetAddressOf method
- Microsoft::WRL::Details::ComPtrRef::operator== operator
- Microsoft::WRL::Details::ComPtrRef::operator!= operator
- Microsoft::WRL::Details::ComPtrRef::operator InterfaceType** operator
- Microsoft::WRL::Details::ComPtrRef::operator* operator
- Microsoft::WRL::Details::ComPtrRef::operator T* operator
- Microsoft::WRL::Details::ComPtrRef::operator void** operator
- Microsoft::WRL::Details::ComPtrRef::ReleaseAndGetAddressOf method
ms.assetid: d6bdfd20-e977-45b4-9ac1-1b8efbdb77de
ms.openlocfilehash: 42a0698c8eb393c84422b52ee112013b91fe39e6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97273150"
---
# <a name="comptrref-class"></a>ComPtrRef (classe)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <typename T>
class ComPtrRef : public ComPtrRefBase<T>;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Un [tipo \<T> ComPtr](comptr-class.md) o un tipo derivato da esso, non solo l'interfaccia rappresentata dall'oggetto `ComPtr` .

## <a name="remarks"></a>Commenti

Rappresenta un riferimento a un oggetto di tipo `ComPtr<T>` .

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                               | Description
---------------------------------- | -------------------------------------------------------------------------------------------------------------
[ComPtrRef:: ComPtrRef](#comptrref) | Inizializza una nuova istanza della `ComPtrRef` classe dal puntatore specificato a un altro `ComPtrRef` oggetto.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                         | Description
------------------------------------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------
[ComPtrRef:: GetAddressOf](#getaddressof)                     | Recupera l'indirizzo di un puntatore all'interfaccia rappresentata dall'oggetto corrente `ComPtrRef` .
[ComPtrRef:: ReleaseAndGetAddressOf](#releaseandgetaddressof) | Elimina l' `ComPtrRef` oggetto corrente e restituisce un puntatore a un puntatore all'interfaccia rappresentata dall' `ComPtrRef` oggetto.

### <a name="public-operators"></a>Operatori pubblici

Nome                                                                     | Description
------------------------------------------------------------------------ | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
[ComPtrRef:: operator InterfaceType * *](#operator-interfacetype-star-star) | Elimina l' `ComPtrRef` oggetto corrente e restituisce un puntatore a un puntatore all'interfaccia rappresentata dall' `ComPtrRef` oggetto.
[ComPtrRef:: operator T *](#operator-t-star)                               | Restituisce il valore del membro dati [ptr_](comptrrefbase-class.md#ptr) dell'oggetto ComPtrRef corrente.
[ComPtrRef:: operator void * *](#operator-void-star-star)                   | Elimina l' `ComPtrRef` oggetto corrente, esegue il cast del puntatore all'interfaccia rappresentata dall' `ComPtrRef` oggetto come puntatore a puntatore a **`void`** , quindi restituisce il puntatore del cast.
[ComPtrRef:: operator *](#operator-star)                                   | Recupera il puntatore all'interfaccia rappresentata dall'oggetto corrente `ComPtrRef` .
[ComPtrRef:: operator = =](#operator-equality)                              | Indica se due oggetti `ComPtrRef` sono uguali.
[ComPtrRef:: operator! =](#operator-inequality)                            | Indica se due oggetti `ComPtrRef` non sono uguali.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ComPtrRefBase`

`ComPtrRef`

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="comptrrefcomptrref"></a><a name="comptrref"></a> ComPtrRef:: ComPtrRef

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
ComPtrRef(
   _In_opt_ T* ptr
);
```

### <a name="parameters"></a>Parametri

*ptr*<br/>
Valore sottostante di un altro `ComPtrRef` oggetto.

### <a name="remarks"></a>Commenti

Inizializza una nuova istanza della `ComPtrRef` classe dal puntatore specificato a un altro `ComPtrRef` oggetto.

## <a name="comptrrefgetaddressof"></a><a name="getaddressof"></a> ComPtrRef:: GetAddressOf

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
InterfaceType* const * GetAddressOf() const;
```

### <a name="return-value"></a>Valore restituito

Indirizzo di un puntatore all'interfaccia rappresentata dall'oggetto corrente `ComPtrRef` .

### <a name="remarks"></a>Commenti

Recupera l'indirizzo di un puntatore all'interfaccia rappresentata dall'oggetto corrente `ComPtrRef` .

## <a name="comptrrefoperator"></a><a name="operator-equality"></a> ComPtrRef:: operator = =

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
bool operator==(
   const Details::ComPtrRef<ComPtr<T>>& a,
   const Details::ComPtrRef<ComPtr<U>>& b
);

bool operator==(
   const Details::ComPtrRef<ComPtr<T>>& a,
   decltype(__nullptr)
);

bool operator==(
   decltype(__nullptr),
   const Details::ComPtrRef<ComPtr<T>>& a
);

bool operator==(
   const Details::ComPtrRef<ComPtr<T>>& a,
   void* b
);

bool operator==(
   void* b,
   const Details::ComPtrRef<ComPtr<T>>& a
);
```

### <a name="parameters"></a>Parametri

*un*<br/>
Riferimento a un oggetto `ComPtrRef`.

*b*<br/>
Un riferimento a un altro `ComPtrRef` oggetto o un puntatore a un tipo anonimo ( **`void*`** ).

### <a name="return-value"></a>Valore restituito

Il primo operatore restituisce **`true`** se l'oggetto *a* è uguale all'oggetto *b*; in caso contrario, **`false`** .

Il secondo e il terzo operatore producono **`true`** se l'oggetto *a* è uguale a **`nullptr`** ; in caso contrario, **`false`** .

Il quarto e il quinto operatore restituiscono **`true`** se l'oggetto *a* è uguale all'oggetto *b*; in caso contrario, **`false`** .

### <a name="remarks"></a>Commenti

Indica se due oggetti `ComPtrRef` sono uguali.

## <a name="comptrrefoperator"></a><a name="operator-inequality"></a> ComPtrRef:: operator! =

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
bool operator!=(
   const Details::ComPtrRef<ComPtr<T>>& a,
   const Details::ComPtrRef<ComPtr<U>>& b
);

bool operator!=(
   const Details::ComPtrRef<ComPtr<T>>& a,
   decltype(__nullptr)
);

bool operator!=(
   decltype(__nullptr),
   const Details::ComPtrRef<ComPtr<T>>& a
);

bool operator!=(
   const Details::ComPtrRef<ComPtr<T>>& a,
   void* b
);

bool operator!=(
   void* b,
   const Details::ComPtrRef<ComPtr<T>>& a
);
```

### <a name="parameters"></a>Parametri

*un*<br/>
Riferimento a un oggetto `ComPtrRef`.

*b*<br/>
Un riferimento a un altro `ComPtrRef` oggetto o un puntatore a un oggetto anonimo ( **`void*`** ).

### <a name="return-value"></a>Valore restituito

Il primo operatore restituisce **`true`** se l'oggetto *a* non è uguale all'oggetto *b*; in caso contrario, **`false`** .

Il secondo e il terzo operatore producono **`true`** se l'oggetto *a* non è uguale a **`nullptr`** ; in caso contrario, **`false`** .

Il quarto e il quinto operatore producono **`true`** se l'oggetto *a* non è uguale all'oggetto *b*; in caso contrario, **`false`** .

### <a name="remarks"></a>Commenti

Indica se due oggetti `ComPtrRef` non sono uguali.

## <a name="comptrrefoperator-interfacetype"></a><a name="operator-interfacetype-star-star"></a> ComPtrRef:: operator InterfaceType\*\*

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
operator InterfaceType**();
```

### <a name="remarks"></a>Commenti

Elimina l' `ComPtrRef` oggetto corrente e restituisce un puntatore a un puntatore all'interfaccia rappresentata dall' `ComPtrRef` oggetto.

## <a name="comptrrefoperator"></a><a name="operator-star"></a> ComPtrRef:: operator *

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
InterfaceType* operator *();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia rappresentata dall'oggetto corrente `ComPtrRef` .

### <a name="remarks"></a>Commenti

Recupera il puntatore all'interfaccia rappresentata dall'oggetto corrente `ComPtrRef` .

## <a name="comptrrefoperator-t"></a><a name="operator-t-star"></a> ComPtrRef:: operator T *

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
operator T*();
```

### <a name="remarks"></a>Commenti

Restituisce il valore del membro dati [ptr_](comptrrefbase-class.md#ptr) dell' `ComPtrRef` oggetto corrente.

## <a name="comptrrefoperator-void"></a><a name="operator-void-star-star"></a> ComPtrRef:: operator void\*\*

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
operator void**() const;
```

### <a name="remarks"></a>Commenti

Elimina l' `ComPtrRef` oggetto corrente, esegue il cast del puntatore all'interfaccia rappresentata dall' `ComPtrRef` oggetto come puntatore a puntatore a **`void`** , quindi restituisce il puntatore del cast.

## <a name="comptrrefreleaseandgetaddressof"></a><a name="releaseandgetaddressof"></a> ComPtrRef:: ReleaseAndGetAddressOf

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
InterfaceType** ReleaseAndGetAddressOf();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia rappresentata dall' `ComPtrRef` oggetto eliminato.

### <a name="remarks"></a>Commenti

Elimina l' `ComPtrRef` oggetto corrente e restituisce un puntatore a un puntatore all'interfaccia rappresentata dall' `ComPtrRef` oggetto.
