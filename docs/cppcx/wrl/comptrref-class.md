---
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
ms.openlocfilehash: 281e02d85e70a84530e6980d31669a73091448d5
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58784837"
---
# <a name="comptrref-class"></a>ComPtrRef (classe)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <typename T>
class ComPtrRef : public ComPtrRefBase<T>;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Oggetto [ComPtr\<T >](comptr-class.md) tipo o un tipo derivato da essa, non soltanto l'interfaccia rappresentata dal `ComPtr`.

## <a name="remarks"></a>Note

Rappresenta un riferimento a un oggetto di tipo `ComPtr<T>`.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                               | Descrizione
---------------------------------- | -------------------------------------------------------------------------------------------------------------
[ComPtrRef::ComPtrRef](#comptrref) | Inizializza una nuova istanza di `ComPtrRef` classe dal puntatore specificato a un altro `ComPtrRef` oggetto.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                         | Descrizione
------------------------------------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------
[ComPtrRef::GetAddressOf](#getaddressof)                     | Recupera l'indirizzo di un puntatore all'interfaccia rappresentata dall'oggetto corrente `ComPtrRef` oggetto.
[ComPtrRef::ReleaseAndGetAddressOf](#releaseandgetaddressof) | Elimina l'oggetto corrente `ComPtrRef` dell'oggetto e restituisce un puntatore-a-a-puntatore all'interfaccia rappresentata dal `ComPtrRef` oggetto.

### <a name="public-operators"></a>Operatori pubblici

Nome                                                                     | Descrizione
------------------------------------------------------------------------ | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
[Operatore comptrref:: InterfaceType * *](#operator-interfacetype-star-star) | Elimina l'oggetto corrente `ComPtrRef` dell'oggetto e restituisce un puntatore-a-a-puntatore all'interfaccia rappresentata dal `ComPtrRef` oggetto.
[Operatore comptrref:: T *](#operator-t-star)                               | Restituisce il valore della [PTR _](comptrrefbase-class.md#ptr) membro dei dati dell'oggetto ComPtrRef corrente.
[Operatore comptrref:: void * *](#operator-void-star-star)                   | Elimina l'oggetto corrente `ComPtrRef` dell'oggetto, viene eseguito il cast di puntatore all'interfaccia rappresentata dal `ComPtrRef` oggetto come un puntatore a puntatore-a `void`e quindi restituisce il puntatore di cast.
[ComPtrRef::operator*](#operator-star)                                   | Recupera il puntatore all'interfaccia rappresentata dall'oggetto corrente `ComPtrRef` oggetto.
[ComPtrRef::operator==](#operator-equality)                              | Indica se due oggetti `ComPtrRef` sono uguali.
[ComPtrRef::operator!=](#operator-inequality)                            | Indica se due oggetti `ComPtrRef` non sono uguali.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ComPtrRefBase`

`ComPtrRef`

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="comptrref"></a>ComPtrRef::ComPtrRef

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
ComPtrRef(
   _In_opt_ T* ptr
);
```

### <a name="parameters"></a>Parametri

*ptr*<br/>
Il valore sottostante di un altro `ComPtrRef` oggetto.

### <a name="remarks"></a>Note

Inizializza una nuova istanza di `ComPtrRef` classe dal puntatore specificato a un altro `ComPtrRef` oggetto.

## <a name="getaddressof"></a>ComPtrRef::GetAddressOf

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
InterfaceType* const * GetAddressOf() const;
```

### <a name="return-value"></a>Valore restituito

Indirizzo di un puntatore all'interfaccia rappresentata dall'oggetto corrente `ComPtrRef` oggetto.

### <a name="remarks"></a>Note

Recupera l'indirizzo di un puntatore all'interfaccia rappresentata dall'oggetto corrente `ComPtrRef` oggetto.

## <a name="operator-equality"></a>ComPtrRef::operator==

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

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

*a*<br/>
Riferimento a un oggetto `ComPtrRef`.

*b*<br/>
Un riferimento a un'altra `ComPtrRef` oggetto o un puntatore a un tipo anonimo (`void*`).

### <a name="return-value"></a>Valore restituito

Primo operatore rese **true** se oggetti *una* è uguale all'oggetto *b*; in caso contrario, **false**.

Il secondo e terzo operatore yield **true** se oggetti *una* è uguale a **nullptr**; in caso contrario, **false**.

Gli operatori quarto e quinto yield **true** se oggetti *una* è uguale all'oggetto *b*; in caso contrario, **false**.

### <a name="remarks"></a>Note

Indica se due oggetti `ComPtrRef` sono uguali.

## <a name="operator-inequality"></a>ComPtrRef::operator!=

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

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

*a*<br/>
Riferimento a un oggetto `ComPtrRef`.

*b*<br/>
Un riferimento a un'altra `ComPtrRef` oggetto o un puntatore a un oggetto anonimo (`void*`).

### <a name="return-value"></a>Valore restituito

Primo operatore rese **true** se oggetti *una* non è uguale all'oggetto *b*; in caso contrario, **false**.

Il secondo e terzo operatore yield **true** se oggetti *una* non è uguale a **nullptr**; in caso contrario, **false**.

Gli operatori quarto e quinto yield **true** se oggetti *una* non è uguale all'oggetto *b*; in caso contrario, **false**.

### <a name="remarks"></a>Note

Indica se due oggetti `ComPtrRef` non sono uguali.

## <a name="operator-interfacetype-star-star"></a>Operatore comptrref:: InterfaceType * *

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
operator InterfaceType**();
```

### <a name="remarks"></a>Note

Elimina l'oggetto corrente `ComPtrRef` dell'oggetto e restituisce un puntatore-a-a-puntatore all'interfaccia rappresentata dal `ComPtrRef` oggetto.

## <a name="operator-star"></a>ComPtrRef::operator*

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
InterfaceType* operator *();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia rappresentata dall'oggetto corrente `ComPtrRef` oggetto.

### <a name="remarks"></a>Note

Recupera il puntatore all'interfaccia rappresentata dall'oggetto corrente `ComPtrRef` oggetto.

## <a name="operator-t-star"></a>Operatore comptrref:: T *

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
operator T*();
```

### <a name="remarks"></a>Note

Restituisce il valore della [PTR _](comptrrefbase-class.md#ptr) membro dei dati dell'oggetto corrente `ComPtrRef` oggetto.

## <a name="operator-void-star-star"></a>Operatore comptrref:: void\*\*

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
operator void**() const;
```

### <a name="remarks"></a>Note

Elimina l'oggetto corrente `ComPtrRef` dell'oggetto, viene eseguito il cast di puntatore all'interfaccia rappresentata dal `ComPtrRef` oggetto come un puntatore a puntatore-a `void`e quindi restituisce il puntatore di cast.

## <a name="releaseandgetaddressof"></a>ComPtrRef::ReleaseAndGetAddressOf

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
InterfaceType** ReleaseAndGetAddressOf();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia rappresentata da eliminati `ComPtrRef` oggetto.

### <a name="remarks"></a>Note

Elimina l'oggetto corrente `ComPtrRef` dell'oggetto e restituisce un puntatore-a-a-puntatore all'interfaccia rappresentata dal `ComPtrRef` oggetto.
