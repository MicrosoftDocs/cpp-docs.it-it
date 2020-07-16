---
title: Classe SyncLockWithStatusT
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::GetStatus
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::IsLocked
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::status_
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::SyncLockWithStatusT
helpviewer_keywords:
- Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT class
- Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::GetStatus method
- Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::IsLocked method
- Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::status_ data member
- Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::SyncLockWithStatusT, constructor
ms.assetid: 4832fd93-0ac8-4168-9404-b43fefea7476
ms.openlocfilehash: a111e0368ec6f4fcf8e89383b6261ad25ca6ebcf
ms.sourcegitcommit: 6b3d793f0ef3bbb7eefaf9f372ba570fdfe61199
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/15/2020
ms.locfileid: "86403823"
---
# <a name="synclockwithstatust-class"></a>Classe SyncLockWithStatusT

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <typename SyncTraits>
class SyncLockWithStatusT : public SyncLockT<SyncTraits>;
```

### <a name="parameters"></a>Parametri

*SyncTraits*<br/>
Tipo che può assumere proprietà esclusive o condivise di una risorsa.

## <a name="remarks"></a>Osservazioni

Rappresenta un tipo che può assumere proprietà esclusive o condivise di una risorsa.

La `SyncLockWithStatusT` classe viene utilizzata per implementare le classi [mutex](mutex-class.md) e [Semaphore](semaphore-class.md) .

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                             | Descrizione
---------------------------------------------------------------- | --------------------------------------------------------------
[SyncLockWithStatusT:: SyncLockWithStatusT](#synclockwithstatust) | Inizializza una nuova istanza della classe `SyncLockWithStatusT`.

### <a name="protected-constructors"></a>Costruttori protetti

Nome                                                             | Descrizione
---------------------------------------------------------------- | --------------------------------------------------------------
[SyncLockWithStatusT:: SyncLockWithStatusT](#synclockwithstatust) | Inizializza una nuova istanza della classe `SyncLockWithStatusT`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                         | Descrizione
-------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------
[SyncLockWithStatusT:: GetStatus](#getstatus) | Recupera lo stato di attesa dell' `SyncLockWithStatusT` oggetto corrente.
[SyncLockWithStatusT:: locked](#islocked)   | Indica se l' `SyncLockWithStatusT` oggetto corrente è proprietario di una risorsa, ovvero se l' `SyncLockWithStatusT` oggetto è *bloccato*.

### <a name="protected-data-members"></a>Membri dati protetti

Nome                                    | Descrizione
--------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------
[SyncLockWithStatusT:: status_](#status) | Include il risultato dell'operazione di attesa sottostante dopo un'operazione di blocco su un oggetto in base all' `SyncLockWithStatusT` oggetto corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SyncLockT`

`SyncLockWithStatusT`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers::D etails

## <a name="synclockwithstatustgetstatus"></a><a name="getstatus"></a>SyncLockWithStatusT:: GetStatus

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
DWORD GetStatus() const;
```

### <a name="return-value"></a>Valore restituito

Risultato di un'operazione di attesa sull'oggetto basato sulla `SyncLockWithStatusT` classe, ad esempio un [mutex](mutex-class.md) o un [semaforo](semaphore-class.md). Zero (0) indica che l'operazione di attesa ha restituito lo stato segnalato. in caso contrario, si è verificato un altro stato, ad esempio il valore di timeout è scaduto.

### <a name="remarks"></a>Osservazioni

Recupera lo stato di attesa dell' `SyncLockWithStatusT` oggetto corrente.

La funzione GetStatus () Recupera il valore del membro dati [status_](#status) sottostante. Quando un oggetto basato sulla `SyncLockWithStatusT` classe esegue un'operazione di blocco, l'oggetto attende prima che l'oggetto diventi disponibile. Il risultato dell'operazione di attesa viene archiviato nel `status_` membro dati. I valori possibili del `status_` membro dati sono i valori restituiti dell'operazione di attesa. Per ulteriori informazioni, vedere i valori restituiti della [`WaitForSingleObjectEx`](/windows/win32/api/synchapi/nf-synchapi-waitforsingleobjectex) funzione.

## <a name="synclockwithstatustislocked"></a><a name="islocked"></a>SyncLockWithStatusT:: locked

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
bool IsLocked() const;
```

### <a name="remarks"></a>Osservazioni

Indica se l' `SyncLockWithStatusT` oggetto corrente è proprietario di una risorsa, ovvero se l' `SyncLockWithStatusT` oggetto è *bloccato*.

### <a name="return-value"></a>Valore restituito

**true** se l' `SyncLockWithStatusT` oggetto è bloccato; in caso contrario, **false**.

## <a name="synclockwithstatuststatus_"></a><a name="status"></a>SyncLockWithStatusT:: status_

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
DWORD status_;
```

### <a name="remarks"></a>Osservazioni

Include il risultato dell'operazione di attesa sottostante dopo un'operazione di blocco su un oggetto in base all' `SyncLockWithStatusT` oggetto corrente.

## <a name="synclockwithstatustsynclockwithstatust"></a><a name="synclockwithstatust"></a>SyncLockWithStatusT:: SyncLockWithStatusT

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
SyncLockWithStatusT(
   _Inout_ SyncLockWithStatusT&& other
);

explicit SyncLockWithStatusT(
   typename SyncTraits::Type sync,
   DWORD status
);
```

### <a name="parameters"></a>Parametri

*altri*<br/>
Un riferimento rvalue a un altro `SyncLockWithStatusT` oggetto.

*sincronizzazione*<br/>
Riferimento a un altro `SyncLockWithStatusT` oggetto.

*Stato*<br/>
Valore del membro dati [status_](#status) dell' *altro* parametro o del parametro *Sync* .

### <a name="remarks"></a>Osservazioni

Inizializza una nuova istanza della classe `SyncLockWithStatusT`.

Il primo costruttore inizializza l' `SyncLockWithStatusT` oggetto corrente da un altro `SyncLockWithStatusT` specificato dal parametro *other*, quindi invalida l'altro `SyncLockWithStatusT` oggetto. Il secondo costruttore è `protected` e Inizializza l'oggetto corrente `SyncLockWithStatusT` su uno stato non valido.
