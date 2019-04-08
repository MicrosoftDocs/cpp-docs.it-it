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
ms.openlocfilehash: 805f0c09b0490d8cec1a0be96dcb1fc99a051371
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58784764"
---
# <a name="makeallocator-class"></a>MakeAllocator (classe)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

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
**true** ad allocare memoria per un oggetto che supporta riferimenti deboli; **false** ad allocare memoria per un oggetto che non supporta riferimenti deboli.

## <a name="remarks"></a>Note

Alloca memoria per una classe attivabile, con o senza supporto dei riferimenti deboli.

Eseguire l'override di `MakeAllocator` classe per implementare un modello di allocazione di memoria definito dall'utente.

`MakeAllocator` in genere consente di evitare perdite di memoria se un oggetto genera un'eccezione durante la costruzione.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                  | Descrizione
----------------------------------------------------- | ----------------------------------------------------------------
[MakeAllocator::MakeAllocator](#makeallocator)        | Inizializza una nuova istanza della classe `MakeAllocator`.
[MakeAllocator:: ~ MakeAllocator](#tilde-makeallocator) | Deinizializza l'istanza corrente del `MakeAllocator` classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                 | Descrizione
------------------------------------ | -----------------------------------------------------------------------------------------------------------
[MakeAllocator::Allocate](#allocate) | Alloca la memoria e lo associa corrente `MakeAllocator` oggetto.
[MakeAllocator::Detach](#detach)     | Rimuove l'associazione di memoria allocata tramite il [Allocate](#allocate) metodo dall'insieme corrente `MakeAllocator` oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`MakeAllocator`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="allocate"></a>MakeAllocator::Allocate

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
__forceinline void* Allocate();
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, un puntatore alla memoria allocata; in caso contrario, `nullptr`.

### <a name="remarks"></a>Note

Alloca la memoria e lo associa corrente `MakeAllocator` oggetto.

Le dimensioni della memoria allocata sono la dimensione del tipo specificato dall'oggetto corrente `MakeAllocator` parametro di modello.

Uno sviluppatore deve eseguire l'override solo di `Allocate()` metodo per implementare un modello di allocazione di memoria diverse.

## <a name="detach"></a>MakeAllocator::Detach

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
__forceinline void Detach();
```

### <a name="remarks"></a>Note

Rimuove l'associazione di memoria allocata tramite il [Allocate](#allocate) metodo dall'insieme corrente `MakeAllocator` oggetto.

Se si chiama `Detach()`, si è responsabile dell'eliminazione della memoria fornita dal `Allocate` (metodo).

## <a name="makeallocator"></a>MakeAllocator::MakeAllocator

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
MakeAllocator();
```

### <a name="remarks"></a>Note

Inizializza una nuova istanza della classe `MakeAllocator`.

## <a name="tilde-makeallocator"></a>MakeAllocator:: ~ MakeAllocator

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
~MakeAllocator();
```

### <a name="remarks"></a>Note

Deinizializza l'istanza corrente del `MakeAllocator` classe.

Questo distruttore elimina anche la memoria allocata sottostante, se necessario.