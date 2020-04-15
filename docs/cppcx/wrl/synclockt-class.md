---
title: SyncLockT (classe)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::IsLocked
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::sync_
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::SyncLockT
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::~SyncLockT
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::Unlock
helpviewer_keywords:
- Microsoft::WRL::Wrappers::Details::SyncLockT class
- Microsoft::WRL::Wrappers::Details::SyncLockT::IsLocked method
- Microsoft::WRL::Wrappers::Details::SyncLockT::sync_ data member
- Microsoft::WRL::Wrappers::Details::SyncLockT::SyncLockT, constructor
- Microsoft::WRL::Wrappers::Details::SyncLockT::~SyncLockT, destructor
- Microsoft::WRL::Wrappers::Details::SyncLockT::Unlock method
ms.assetid: a967f6f7-3555-43d1-b210-2bb65d63d15e
ms.openlocfilehash: 52c4404fa28f680a9a7a4592d03f535e8406d1a4
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374279"
---
# <a name="synclockt-class"></a>SyncLockT (classe)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <typename SyncTraits>
class SyncLockT;
```

### <a name="parameters"></a>Parametri

*Traits Di sincronizzazione*<br/>
Tipo che può assumere la proprietà di una risorsa.

## <a name="remarks"></a>Osservazioni

Rappresenta un tipo che può assumere la proprietà esclusiva o condivisa di una risorsa.

La `SyncLockT` classe viene utilizzata, ad esempio, per implementare la classe [SRWLock.](srwlock-class.md)

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                      | Descrizione
----------------------------------------- | ----------------------------------------------------
[SyncLockT::SyncLockT](#synclockt)        | Inizializza una nuova istanza della classe `SyncLockT`.
[SyncLockT:: SyncLockT](#tilde-synclockt) | Deinizializza un'istanza `SyncLockT` della classe.

### <a name="protected-constructors"></a>Costruttori protetti

Nome                               | Descrizione
---------------------------------- | ----------------------------------------------------
[SyncLockT::SyncLockT](#synclockt) | Inizializza una nuova istanza della classe `SyncLockT`.

### <a name="public-methods"></a>Metodi pubblici

Nome                             | Descrizione
-------------------------------- | --------------------------------------------------------------------------------------------------------------
[SyncLockT::IsLocked](#islocked) | Indica se l'oggetto corrente `SyncLockT` possiede una risorsa; ovvero l'oggetto `SyncLockT` è *bloccato.*
[SyncLockT::Sblocca](#unlock)     | Rilascia il controllo della risorsa `SyncLockT` mantenuta dall'oggetto corrente, se presente.

### <a name="protected-data-members"></a>Membri dati protetti

Nome                      | Descrizione
------------------------- | -------------------------------------------------------------------
[SyncLockT::sync_](#sync) | Contiene la risorsa sottostante rappresentata dalla `SyncLockT` classe .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SyncLockT`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers.h

**Spazio dei nomi:** Microsoft::WRL::Wrappers::Details

## <a name="synclocktsynclockt"></a><a name="tilde-synclockt"></a>SyncLockT:: SyncLockT

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
~SyncLockT();
```

### <a name="remarks"></a>Osservazioni

Deinizializza un'istanza `SyncLockT` della classe.

Questo distruttore sblocca anche `SyncLockT` l'istanza corrente.

## <a name="synclocktislocked"></a><a name="islocked"></a>SyncLockT::IsLocked

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
bool IsLocked() const;
```

### <a name="return-value"></a>Valore restituito

**true** se `SyncLockT` l'oggetto è bloccato; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Indica se l'oggetto corrente `SyncLockT` possiede una risorsa; ovvero l'oggetto `SyncLockT` è *bloccato.*

## <a name="synclocktsync_"></a><a name="sync"></a>SyncLockT::sync_

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
typename SyncTraits::Type sync_;
```

### <a name="remarks"></a>Osservazioni

Contiene la risorsa sottostante rappresentata dalla `SyncLockT` classe .

## <a name="synclocktsynclockt"></a><a name="synclockt"></a>SyncLockT::SyncLockT

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
SyncLockT(
   _Inout_ SyncLockT&& other
);

explicit SyncLockT(
   typename SyncTraits::Type sync = SyncTraits::GetInvalidValue()
);
```

### <a name="parameters"></a>Parametri

*Altro*<br/>
Riferimento rvalue a `SyncLockT` un altro oggetto.

*sync*<br/>
Riferimento a `SyncLockWithStatusT` un altro oggetto.

### <a name="remarks"></a>Osservazioni

Inizializza una nuova istanza della classe `SyncLockT`.

Il primo costruttore `SyncLockT` inizializza l'oggetto corrente da un altro `SyncLockT` oggetto specificato dal parametro *other*, quindi invalida l'altro `SyncLockT` oggetto. Il secondo `protected`costruttore è , `SyncLockT` e inizializza l'oggetto corrente su uno stato non valido.

## <a name="synclocktunlock"></a><a name="unlock"></a>SyncLockT::Sblocca

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
void Unlock();
```

### <a name="remarks"></a>Osservazioni

Rilascia il controllo della risorsa `SyncLockT` mantenuta dall'oggetto corrente, se presente.
