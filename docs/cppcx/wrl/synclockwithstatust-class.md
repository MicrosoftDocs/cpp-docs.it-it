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
ms.openlocfilehash: 77bcb8336e4650de7ed01a067fa1bdd7ec0ba3e8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374270"
---
# <a name="synclockwithstatust-class"></a>Classe SyncLockWithStatusT

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <typename SyncTraits>
class SyncLockWithStatusT : public SyncLockT<SyncTraits>;
```

### <a name="parameters"></a>Parametri

*Traits Di sincronizzazione*<br/>
Tipo che può assumere la proprietà esclusiva o condivisa di una risorsa.

## <a name="remarks"></a>Osservazioni

Rappresenta un tipo che può assumere la proprietà esclusiva o condivisa di una risorsa.

La `SyncLockWithStatusT` classe viene utilizzata per implementare le classi [Mutex](mutex-class.md) e [Semaphore.](semaphore-class.md)

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                             | Descrizione
---------------------------------------------------------------- | --------------------------------------------------------------
[SyncLockWithStatusT::SyncLockWithStatusT](#synclockwithstatust) | Inizializza una nuova istanza della classe `SyncLockWithStatusT`.

### <a name="protected-constructors"></a>Costruttori protetti

Nome                                                             | Descrizione
---------------------------------------------------------------- | --------------------------------------------------------------
[SyncLockWithStatusT::SyncLockWithStatusT](#synclockwithstatust) | Inizializza una nuova istanza della classe `SyncLockWithStatusT`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                         | Descrizione
-------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------
[SyncLockWithStatusT::GetStatus](#getstatus) | Recupera lo stato di `SyncLockWithStatusT` attesa dell'oggetto corrente.
[SyncLockWithStatusT::IsLocked](#islocked)   | Indica se l'oggetto corrente `SyncLockWithStatusT` possiede una risorsa; ovvero l'oggetto `SyncLockWithStatusT` è *bloccato.*

### <a name="protected-data-members"></a>Membri dati protetti

Nome                                    | Descrizione
--------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------
[SyncLockWithStatusT::status_](#status) | Contiene il risultato dell'operazione di attesa sottostante dopo `SyncLockWithStatusT` un'operazione di blocco su un oggetto basato sull'oggetto corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SyncLockT`

`SyncLockWithStatusT`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers.h

**Spazio dei nomi:** Microsoft::WRL::Wrappers::Details

## <a name="synclockwithstatustgetstatus"></a><a name="getstatus"></a>SyncLockWithStatusT::GetStatus

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
DWORD GetStatus() const;
```

### <a name="return-value"></a>Valore restituito

Risultato di un'operazione di attesa sull'oggetto basato sulla `SyncLockWithStatusT` classe , ad esempio un [Mutex](mutex-class.md) o [Semaphore](semaphore-class.md). Il valore zero (0) indica che l'operazione di attesa ha restituito lo stato segnalato; in caso contrario, si è verificato un altro stato, ad esempio il valore di timeout trascorso.

### <a name="remarks"></a>Osservazioni

Recupera lo stato di `SyncLockWithStatusT` attesa dell'oggetto corrente.

La funzione GetStatus() recupera il valore del membro dati [status_](#status) sottostante. Quando un oggetto `SyncLockWithStatusT` basato sulla classe esegue un'operazione di blocco, l'oggetto attende innanzitutto che l'oggetto diventi disponibile. Il risultato di tale operazione `status_` di attesa viene archiviato nel membro dati. I valori possibili `status_` del membro dati sono i valori restituiti dell'operazione di attesa. Per ulteriori informazioni, vedere i `WaitForSingleObjectEx()` valori restituiti della funzione in MSDN Library.

## <a name="synclockwithstatustislocked"></a><a name="islocked"></a>SyncLockWithStatusT::IsLocked

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
bool IsLocked() const;
```

### <a name="remarks"></a>Osservazioni

Indica se l'oggetto corrente `SyncLockWithStatusT` possiede una risorsa; ovvero l'oggetto `SyncLockWithStatusT` è *bloccato.*

### <a name="return-value"></a>Valore restituito

**true** se `SyncLockWithStatusT` l'oggetto è bloccato; in caso contrario, **false**.

## <a name="synclockwithstatuststatus_"></a><a name="status"></a>SyncLockWithStatusT::status_

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
DWORD status_;
```

### <a name="remarks"></a>Osservazioni

Contiene il risultato dell'operazione di attesa sottostante dopo `SyncLockWithStatusT` un'operazione di blocco su un oggetto basato sull'oggetto corrente.

## <a name="synclockwithstatustsynclockwithstatust"></a><a name="synclockwithstatust"></a>SyncLockWithStatusT::SyncLockWithStatusT

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

*Altro*<br/>
Riferimento rvalue a `SyncLockWithStatusT` un altro oggetto.

*sync*<br/>
Riferimento a `SyncLockWithStatusT` un altro oggetto.

*status*<br/>
Valore [dell'status_](#status) membro dati *dell'altro* parametro o del parametro *sync.*

### <a name="remarks"></a>Osservazioni

Inizializza una nuova istanza della classe `SyncLockWithStatusT`.

Il primo costruttore `SyncLockWithStatusT` inizializza l'oggetto corrente da un altro `SyncLockWithStatusT` specificato dal parametro *other*, quindi invalida l'altro `SyncLockWithStatusT` oggetto. Il secondo `protected`costruttore è , `SyncLockWithStatusT` e inizializza l'oggetto corrente su uno stato non valido.
