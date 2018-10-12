---
title: Classe SyncLockWithStatusT | Microsoft Docs
ms.custom: ''
ms.date: 10/03/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::GetStatus
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::IsLocked
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::status_
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::SyncLockWithStatusT
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT class
- Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::GetStatus method
- Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::IsLocked method
- Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::status_ data member
- Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::SyncLockWithStatusT, constructor
ms.assetid: 4832fd93-0ac8-4168-9404-b43fefea7476
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 36cee8d6f2cb41a22574f60c5cf86747228205bb
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49163075"
---
# <a name="synclockwithstatust-class"></a>Classe SyncLockWithStatusT

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <typename SyncTraits>
class SyncLockWithStatusT : public SyncLockT<SyncTraits>;
```

### <a name="parameters"></a>Parametri

*SyncTraits*<br/>
Un tipo che può accettare esclusivo o la proprietà di una risorsa condivisa.

## <a name="remarks"></a>Note

Rappresenta un tipo che può accettare esclusivo o la proprietà di una risorsa condivisa.

Il `SyncLockWithStatusT` classe viene utilizzata per implementare il [Mutex](../windows/mutex-class1.md) e [semaforo](../windows/semaphore-class.md) classi.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                             | Descrizione
---------------------------------------------------------------- | --------------------------------------------------------------
[Synclockwithstatust:: Synclockwithstatust](#synclockwithstatust) | Inizializza una nuova istanza della classe `SyncLockWithStatusT`.

### <a name="protected-constructors"></a>Costruttori protetti

Nome                                                             | Descrizione
---------------------------------------------------------------- | --------------------------------------------------------------
[Synclockwithstatust:: Synclockwithstatust](#synclockwithstatust) | Inizializza una nuova istanza della classe `SyncLockWithStatusT`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                         | Descrizione
-------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------
[Synclockwithstatust:: GetStatus](#getstatus) | Recupera lo stato di attesa dell'oggetto corrente `SyncLockWithStatusT` oggetto.
[Synclockwithstatust:: IsLocked](#islocked)   | Indica se l'oggetto corrente `SyncLockWithStatusT` oggetto proprietario di una risorsa, ovvero, il `SyncLockWithStatusT` oggetto viene *bloccato*.

### <a name="protected-data-members"></a>Membri dati protetti

nome                                    | Descrizione
--------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------
[SyncLockWithStatusT::status_](#status) | Contiene il risultato dell'operazione di attesa sottostanti dopo un'operazione di blocco su un oggetto in base a corrente `SyncLockWithStatusT` oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SyncLockT`

`SyncLockWithStatusT`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers::Details

## <a name="getstatus"></a>Synclockwithstatust:: GetStatus

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
DWORD GetStatus() const;
```

### <a name="return-value"></a>Valore restituito

Il risultato di un'operazione di attesa per l'oggetto che si basa sul `SyncLockWithStatusT` classe, ad esempio un [Mutex](../windows/mutex-class1.md) oppure [semaforo](../windows/semaphore-class.md). Zero (0) indica che l'operazione di attesa restituito lo stato segnalato; in caso contrario, un altro stato si è verificato, come valore di timeout è scaduto.

### <a name="remarks"></a>Note

Recupera lo stato di attesa dell'oggetto corrente `SyncLockWithStatusT` oggetto.

La funzione GetStatus recupera il valore dell'oggetto sottostante [Status](#status) (membro dati). Quando un oggetto basato sul `SyncLockWithStatusT` classe esegue un'operazione di blocco, l'oggetto è in attesa prima di tutto per l'oggetto divenga disponibile. Il risultato di tale operazione di attesa viene archiviato nel `status_` (membro dati). I valori possibili del `status_` (membro dati) sono i valori restituiti dell'operazione di attesa. Per altre informazioni, vedere i valori restituiti di `WaitForSingleObjectEx()` (funzione) in MSDN Library.

## <a name="islocked"></a>Synclockwithstatust:: IsLocked

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
bool IsLocked() const;
```

### <a name="remarks"></a>Note

Indica se l'oggetto corrente `SyncLockWithStatusT` oggetto proprietario di una risorsa, ovvero, il `SyncLockWithStatusT` oggetto viene *bloccato*.

### <a name="return-value"></a>Valore restituito

**true** se il `SyncLockWithStatusT` oggetto è bloccato; in caso contrario, **false**.

## <a name="status"></a>SyncLockWithStatusT::status_

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
DWORD status_;
```

### <a name="remarks"></a>Note

Contiene il risultato dell'operazione di attesa sottostanti dopo un'operazione di blocco su un oggetto in base a corrente `SyncLockWithStatusT` oggetto.

## <a name="synclockwithstatust"></a>Synclockwithstatust:: Synclockwithstatust

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

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

*other*<br/>
Un riferimento rvalue a un altro `SyncLockWithStatusT` oggetto.

*sync*<br/>
Un riferimento a un altro `SyncLockWithStatusT` oggetto.

*status*<br/>
Il valore della [Status](#status) membro dati del *altri* parametro o i *sincronizzazione* parametro.

### <a name="remarks"></a>Note

Inizializza una nuova istanza della classe `SyncLockWithStatusT`.

Il primo costruttore inizializza l'oggetto corrente `SyncLockWithStatusT` oggetto da un altro `SyncLockWithStatusT` specificato dal parametro *altri*e quindi invalida l'altro `SyncLockWithStatusT` oggetto. Il secondo costruttore viene `protected`e la inizializza corrente `SyncLockWithStatusT` oggetto da uno stato non valido.
