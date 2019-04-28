---
title: Classe Platform::Collections::BackInsertIterator
ms.date: 03/27/2019
ms.topic: reference
f1_keywords:
- COLLECTION/Platform::Collections::BackInsertIterator::BackInsertIterator
helpviewer_keywords:
- BackInsertIterator Class
ms.assetid: aecee1ff-100d-4129-b84b-1966f0923dbf
ms.openlocfilehash: 02aee3101156b28dbd59ccd51c071e6774ca1e7a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62161602"
---
# <a name="platformcollectionsbackinsertiterator-class"></a>Classe Platform::Collections::BackInsertIterator

Rappresenta un iteratore che inserisce, anziché sovrascrivere, elementi nel back-end di una raccolta sequenziale.

## <a name="syntax"></a>Sintassi

```
template <typename T>
class BackInsertIterator :
public ::std::iterator<::std::output_iterator_tag, void, void, void, void>;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di elemento nella raccolta corrente.

### <a name="remarks"></a>Note

La classe BackInsertIterator implementa le regole richieste da [back_insert_iterator Class](../standard-library/back-insert-iterator-class.md).

### <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[BackInsertIterator::BackInsertIterator](#ctor)|Inizializza una nuova istanza della classe BackInsertIterator.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Operatore BackInsertIterator::operator*](#operator-dereference)|Recupera un riferimento all'oggetto BackInsertIterator corrente.|
|[Operatore BackInsertIterator::operator++](#operator-increment)|Restituisce un riferimento all'oggetto BackInsertIterator corrente. L'iteratore è invariato.|
|[Operatore BackInsertIterator::operator=](#operator-assign)|Aggiunge l'oggetto specificato alla fine della raccolta sequenziale corrente.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`BackInsertIterator`

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Platform::Collections

---
## <a name="ctor"></a>  Costruttore backinsertiterator:: Backinsertiterator

Inizializza una nuova istanza della classe `BackInsertIterator`.

## <a name="syntax"></a>Sintassi

```

explicit BackInsertIterator(
   Windows::Foundation::Collections::IVector<T>^ v);
```

#### <a name="parameters"></a>Parametri

*v*<br/>
Un IVector\<T > oggetti.

### <a name="remarks"></a>Note

Un oggetto `BackInsertIterator` inserisce gli elementi dopo l'ultimo elemento dell'oggetto specificato dal parametro `v`.

## <a name="operator-assign"></a>  Backinsertiterator:: operator = (operatore)

Aggiunge l'oggetto specificato alla fine della raccolta sequenziale corrente.

## <a name="syntax"></a>Sintassi

```
BackInsertIterator& operator=( const T& t);
```

#### <a name="parameters"></a>Parametri

*t*<br/>
Oggetto da aggiungere alla raccolta corrente.

### <a name="return-value"></a>Valore restituito

Riferimento all'oggetto BackInsertIterator corrente.

## <a name="operator-dereference"></a>  Operatore backinsertiterator:: operator *

Recupera un riferimento all'oggetto BackInsertIterator corrente.

## <a name="syntax"></a>Sintassi

```
BackInsertIterator& operator*();
```

### <a name="return-value"></a>Valore restituito

Riferimento all'oggetto BackInsertIterator corrente.

### <a name="remarks"></a>Note

Questo operatore restituisce un riferimento all'oggetto BackInsertIterator corrente, non a qualsiasi elemento nella raccolta corrente.

## <a name="operator-increment"></a>  Operatore backinsertiterator:: operator + +

Restituisce un riferimento all'oggetto BackInsertIterator corrente. L'iteratore è invariato.

## <a name="syntax"></a>Sintassi

```

BackInsertIterator& operator++();

BackInsertIterator operator++(int);
```

### <a name="return-value"></a>Valore restituito

Riferimento all'oggetto BackInsertIterator corrente.

### <a name="remarks"></a>Note

In base alla progettazione, l'esempio della prima sintassi determina dei pre-incrementi dell'oggetto BackInsertIterator corrente e la seconda sintassi ne determina dei post-incrementi. Il tipo `int` nella seconda sintassi indica un'operazione di post-incremento, non un effettivo operando Integer.

Tuttavia, questo operatore in realtà non modifica l'oggetto BackInsertIterator. Restituisce invece un riferimento all'iteratore corrente invariato. Si tratta dello stesso comportamento [operatore *](#operator-dereference).

## <a name="see-also"></a>Vedere anche

[Platform Namespace](platform-namespace-c-cx.md)
