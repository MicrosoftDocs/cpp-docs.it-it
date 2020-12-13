---
description: 'Altre informazioni su: Classe SyncLockT'
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
ms.openlocfilehash: 289a31d87ce395be2d2a72a8fe062c9c0bfa8f56
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97135109"
---
# <a name="synclockt-class"></a>SyncLockT (classe)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <typename SyncTraits>
class SyncLockT;
```

### <a name="parameters"></a>Parametri

*SyncTraits*<br/>
Tipo che può assumere la proprietà di una risorsa.

## <a name="remarks"></a>Commenti

Rappresenta un tipo che può assumere proprietà esclusive o condivise di una risorsa.

La `SyncLockT` classe viene utilizzata, ad esempio, per facilitare l'implementazione della classe [SRWLock](srwlock-class.md) .

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                      | Description
----------------------------------------- | ----------------------------------------------------
[SyncLockT:: SyncLockT](#synclockt)        | Inizializza una nuova istanza della classe `SyncLockT`.
[SyncLockT:: ~ SyncLockT](#tilde-synclockt) | Consente di deinizializzare un'istanza della `SyncLockT` classe.

### <a name="protected-constructors"></a>Costruttori protetti

Nome                               | Description
---------------------------------- | ----------------------------------------------------
[SyncLockT:: SyncLockT](#synclockt) | Inizializza una nuova istanza della classe `SyncLockT`.

### <a name="public-methods"></a>Metodi pubblici

Nome                             | Description
-------------------------------- | --------------------------------------------------------------------------------------------------------------
[SyncLockT:: locked](#islocked) | Indica se l' `SyncLockT` oggetto corrente è proprietario di una risorsa, ovvero se l' `SyncLockT` oggetto è *bloccato*.
[SyncLockT:: Unlock](#unlock)     | Rilascia il controllo della risorsa contenuta dall' `SyncLockT` oggetto corrente, se presente.

### <a name="protected-data-members"></a>Membri dati protetti

Nome                      | Description
------------------------- | -------------------------------------------------------------------
[SyncLockT:: sync_](#sync) | Include la risorsa sottostante rappresentata dalla `SyncLockT` classe.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SyncLockT`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers::D etails

## <a name="synclocktsynclockt"></a><a name="tilde-synclockt"></a> SyncLockT:: ~ SyncLockT

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
~SyncLockT();
```

### <a name="remarks"></a>Commenti

Consente di deinizializzare un'istanza della `SyncLockT` classe.

Questo distruttore Sblocca anche l' `SyncLockT` istanza corrente.

## <a name="synclocktislocked"></a><a name="islocked"></a> SyncLockT:: locked

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
bool IsLocked() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se l' `SyncLockT` oggetto è bloccato; in caso contrario, **`false`** .

### <a name="remarks"></a>Commenti

Indica se l' `SyncLockT` oggetto corrente è proprietario di una risorsa, ovvero se l' `SyncLockT` oggetto è *bloccato*.

## <a name="synclocktsync_"></a><a name="sync"></a> SyncLockT:: sync_

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
typename SyncTraits::Type sync_;
```

### <a name="remarks"></a>Commenti

Include la risorsa sottostante rappresentata dalla `SyncLockT` classe.

## <a name="synclocktsynclockt"></a><a name="synclockt"></a> SyncLockT:: SyncLockT

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

*altri*<br/>
Un riferimento rvalue a un altro `SyncLockT` oggetto.

*sincronizzazione*<br/>
Riferimento a un altro `SyncLockWithStatusT` oggetto.

### <a name="remarks"></a>Commenti

Inizializza una nuova istanza della classe `SyncLockT`.

Il primo costruttore inizializza l' `SyncLockT` oggetto corrente da un altro `SyncLockT` oggetto specificato dal parametro *other*, quindi invalida l'altro `SyncLockT` oggetto. Il secondo costruttore è **`protected`** e Inizializza l'oggetto corrente `SyncLockT` su uno stato non valido.

## <a name="synclocktunlock"></a><a name="unlock"></a> SyncLockT:: Unlock

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
void Unlock();
```

### <a name="remarks"></a>Commenti

Rilascia il controllo della risorsa contenuta dall' `SyncLockT` oggetto corrente, se presente.
