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
ms.openlocfilehash: dc0d83f2550646572a4eff2bec7850037c6dbf6a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371328"
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

*hasWeakReferenceSupport (informazioni in base ai modelli systemdia*<br/>
**true** per allocare memoria per un oggetto che supporta i riferimenti deboli; **false** per allocare memoria per un oggetto che non supporta i riferimenti deboli.

## <a name="remarks"></a>Osservazioni

Alloca memoria per una classe attivabile, con o senza supporto di riferimento debole.

Eseguire `MakeAllocator` l'override della classe per implementare un modello di allocazione della memoria definito dall'utente.

`MakeAllocator`viene in genere utilizzato per evitare perdite di memoria se un oggetto lancia durante la costruzione.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                  | Descrizione
----------------------------------------------------- | ----------------------------------------------------------------
[MakeAllocator::MakeAllocator](#makeallocator)        | Inizializza una nuova istanza della classe `MakeAllocator`.
[MakeAllocator::MakeAllocator](#tilde-makeallocator) | Deinizializza l'istanza corrente `MakeAllocator` della classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                 | Descrizione
------------------------------------ | -----------------------------------------------------------------------------------------------------------
[MakeAllocator::Allocare](#allocate) | Alloca memoria e la associa `MakeAllocator` all'oggetto corrente.
[MakeAllocator::Detach](#detach)     | Disassocia la memoria [Allocate](#allocate) allocata dal `MakeAllocator` metodo Allocate dall'oggetto corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`MakeAllocator`

## <a name="requirements"></a>Requisiti

**Intestazione:** implements.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="makeallocatorallocate"></a><a name="allocate"></a>MakeAllocator::Allocare

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
__forceinline void* Allocate();
```

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, un puntatore alla memoria allocata; in `nullptr`caso contrario, .

### <a name="remarks"></a>Osservazioni

Alloca memoria e la associa `MakeAllocator` all'oggetto corrente.

La dimensione della memoria allocata è la `MakeAllocator` dimensione del tipo specificato dal parametro di modello corrente.

Uno sviluppatore deve `Allocate()` eseguire l'override solo del metodo per implementare un modello di allocazione della memoria diverso.

## <a name="makeallocatordetach"></a><a name="detach"></a>MakeAllocator::Detach

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
__forceinline void Detach();
```

### <a name="remarks"></a>Osservazioni

Disassocia la memoria [Allocate](#allocate) allocata dal `MakeAllocator` metodo Allocate dall'oggetto corrente.

Se si `Detach()`chiama , si è responsabili `Allocate` dell'eliminazione della memoria fornita dal metodo .

## <a name="makeallocatormakeallocator"></a><a name="makeallocator"></a>MakeAllocator::MakeAllocator

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
MakeAllocator();
```

### <a name="remarks"></a>Osservazioni

Inizializza una nuova istanza della classe `MakeAllocator`.

## <a name="makeallocatormakeallocator"></a><a name="tilde-makeallocator"></a>MakeAllocator::MakeAllocator

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
~MakeAllocator();
```

### <a name="remarks"></a>Osservazioni

Deinizializza l'istanza corrente `MakeAllocator` della classe.

Questo distruttore elimina anche la memoria allocata sottostante, se necessario.
