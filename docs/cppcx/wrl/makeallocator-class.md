---
title: MakeAllocator (classe)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::MakeAllocator
- implements/Microsoft::WRL::Details::MakeAllocator::Allocate
- implements/Microsoft::WRL::Details::MakeAllocator::Detach
- implements/Microsoft::WRL::Details::MakeAllocator::MakeAllocator
- implements/Microsoft::WRL::Details::MakeAllocator::~MakeAllocator
helpviewer_keywords:
- Microsoft::WRL::Details::MakeAllocator class
- Microsoft::WRL::Details::MakeAllocator::Allocate method
- Microsoft::WRL::Details::MakeAllocator::Detach method
- Microsoft::WRL::Details::MakeAllocator::MakeAllocator, constructor
- Microsoft::WRL::Details::MakeAllocator::~MakeAllocator, destructor
ms.assetid: a1114615-abd7-4a56-9bc3-750c118f0fa1
ms.openlocfilehash: 19d3ab294df8adc059424c97e5733ae9ebb75c9c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87218377"
---
# <a name="makeallocator-class"></a>MakeAllocator (classe)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template<
    typename T,
    bool hasWeakReferenceSupport =
          !__is_base_of(RuntimeClassFlags<InhibitWeakReference>,
                        T)
>
class MakeAllocator;

template<typename T>
class MakeAllocator<T, false>;

template<typename T>
class MakeAllocator<T, true>;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Un nome di tipo.

*hasWeakReferenceSupport*<br/>
**`true`** per allocare memoria per un oggetto che supporta riferimenti deboli; **`false`** per allocare memoria per un oggetto che non supporta riferimenti deboli.

## <a name="remarks"></a>Osservazioni

Alloca memoria per una classe attivabile, con o senza supporto di riferimento debole.

Eseguire l'override della `MakeAllocator` classe per implementare un modello di allocazione della memoria definito dall'utente.

`MakeAllocator`viene in genere usato per evitare perdite di memoria se un oggetto genera un'eccezione durante la costruzione.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                  | Descrizione
----------------------------------------------------- | ----------------------------------------------------------------
[MakeAllocator:: MakeAllocator](#makeallocator)        | Inizializza una nuova istanza della classe `MakeAllocator`.
[MakeAllocator:: ~ MakeAllocator](#tilde-makeallocator) | Consente di deinizializzare l'istanza corrente della `MakeAllocator` classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                 | Descrizione
------------------------------------ | -----------------------------------------------------------------------------------------------------------
[MakeAllocator:: allocate](#allocate) | Alloca la memoria e la associa all'oggetto corrente `MakeAllocator` .
[MakeAllocator::D etach](#detach)     | Annulla l'associazione della memoria allocata dal metodo [allocate](#allocate) dall' `MakeAllocator` oggetto corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`MakeAllocator`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="makeallocatorallocate"></a><a name="allocate"></a>MakeAllocator:: allocate

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
__forceinline void* Allocate();
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un puntatore alla memoria allocata; in caso contrario, **`nullptr`** .

### <a name="remarks"></a>Osservazioni

Alloca la memoria e la associa all'oggetto corrente `MakeAllocator` .

Le dimensioni della memoria allocata corrispondono alla dimensione del tipo specificato dal `MakeAllocator` parametro di modello corrente.

Uno sviluppatore deve eseguire l'override solo del `Allocate()` metodo per implementare un modello di allocazione della memoria diverso.

## <a name="makeallocatordetach"></a><a name="detach"></a>MakeAllocator::D etach

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
__forceinline void Detach();
```

### <a name="remarks"></a>Osservazioni

Annulla l'associazione della memoria allocata dal metodo [allocate](#allocate) dall' `MakeAllocator` oggetto corrente.

Se si chiama `Detach()` , si è responsabili dell'eliminazione della memoria fornita dal `Allocate` metodo.

## <a name="makeallocatormakeallocator"></a><a name="makeallocator"></a>MakeAllocator:: MakeAllocator

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
MakeAllocator();
```

### <a name="remarks"></a>Osservazioni

Inizializza una nuova istanza della classe `MakeAllocator`.

## <a name="makeallocatormakeallocator"></a><a name="tilde-makeallocator"></a>MakeAllocator:: ~ MakeAllocator

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
~MakeAllocator();
```

### <a name="remarks"></a>Osservazioni

Consente di deinizializzare l'istanza corrente della `MakeAllocator` classe.

Questo distruttore Elimina anche la memoria allocata sottostante, se necessario.
