---
title: SyncLockT (classe) | Microsoft Docs
ms.custom: ''
ms.date: 10/03/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::IsLocked
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::sync_
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::SyncLockT
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::~SyncLockT
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT::Unlock
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Wrappers::Details::SyncLockT class
- Microsoft::WRL::Wrappers::Details::SyncLockT::IsLocked method
- Microsoft::WRL::Wrappers::Details::SyncLockT::sync_ data member
- Microsoft::WRL::Wrappers::Details::SyncLockT::SyncLockT, constructor
- Microsoft::WRL::Wrappers::Details::SyncLockT::~SyncLockT, destructor
- Microsoft::WRL::Wrappers::Details::SyncLockT::Unlock method
ms.assetid: a967f6f7-3555-43d1-b210-2bb65d63d15e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a97b164d2ee7f5f5a6cc771d1ebec699f705cc80
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50053164"
---
# <a name="synclockt-class"></a>SyncLockT (classe)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <typename SyncTraits>
class SyncLockT;
```

### <a name="parameters"></a>Parametri

*SyncTraits*<br/>
Tipo che può assumere la proprietà di una risorsa.

## <a name="remarks"></a>Note

Rappresenta un tipo che può accettare esclusivo o la proprietà di una risorsa condivisa.

Il `SyncLockT` classe viene utilizzata, ad esempio, per facilitare l'implementazione di [SRWLock](../windows/srwlock-class.md) classe.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                      | Descrizione
----------------------------------------- | ----------------------------------------------------
[Synclockt:: Synclockt](#synclockt)        | Inizializza una nuova istanza della classe `SyncLockT`.
[SyncLockT:: ~ SyncLockT](#tilde-synclockt) | Deinizializza un'istanza del `SyncLockT` classe.

### <a name="protected-constructors"></a>Costruttori protetti

Nome                               | Descrizione
---------------------------------- | ----------------------------------------------------
[Synclockt:: Synclockt](#synclockt) | Inizializza una nuova istanza della classe `SyncLockT`.

### <a name="public-methods"></a>Metodi pubblici

Nome                             | Descrizione
-------------------------------- | --------------------------------------------------------------------------------------------------------------
[Synclockt:: IsLocked](#islocked) | Indica se l'oggetto corrente `SyncLockT` oggetto proprietario di una risorsa, ovvero, il `SyncLockT` oggetto viene *bloccato*.
[Synclockt:: Unlock](#unlock)     | Controllo della risorsa contenuta nel corrente `SyncLockT` dell'oggetto, se presente.

### <a name="protected-data-members"></a>Membri dati protetti

nome                      | Descrizione
------------------------- | -------------------------------------------------------------------
[SyncLockT::sync_](#sync) | Contiene la risorsa sottostante rappresentata dal `SyncLockT` classe.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SyncLockT`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers::Details

## <a name="tilde-synclockt"></a>SyncLockT:: ~ SyncLockT

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
~SyncLockT();
```

### <a name="remarks"></a>Note

Deinizializza un'istanza del `SyncLockT` classe.

Questo distruttore Sblocca anche corrente `SyncLockT` istanza.

## <a name="islocked"></a>Synclockt:: IsLocked

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
bool IsLocked() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il `SyncLockT` oggetto è bloccato; in caso contrario, **false**.

### <a name="remarks"></a>Note

Indica se l'oggetto corrente `SyncLockT` oggetto proprietario di una risorsa, ovvero, il `SyncLockT` oggetto viene *bloccato*.

## <a name="sync"></a>SyncLockT::sync_

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
typename SyncTraits::Type sync_;
```

### <a name="remarks"></a>Note

Contiene la risorsa sottostante rappresentata dal `SyncLockT` classe.

## <a name="synclockt"></a>Synclockt:: Synclockt

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
SyncLockT(
   _Inout_ SyncLockT&& other
);

explicit SyncLockT(
   typename SyncTraits::Type sync = SyncTraits::GetInvalidValue()
);
```

### <a name="parameters"></a>Parametri

*other*<br/>
Un riferimento rvalue a un altro `SyncLockT` oggetto.

*sync*<br/>
Un riferimento a un altro `SyncLockWithStatusT` oggetto.

### <a name="remarks"></a>Note

Inizializza una nuova istanza della classe `SyncLockT`.

Il primo costruttore inizializza l'oggetto corrente `SyncLockT` oggetto da un altro `SyncLockT` oggetto specificato dal parametro *altri*e quindi invalida l'altro `SyncLockT` oggetto. Il secondo costruttore viene `protected`e la inizializza corrente `SyncLockT` oggetto da uno stato non valido.

## <a name="unlock"></a>Synclockt:: Unlock

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
void Unlock();
```

### <a name="remarks"></a>Note

Controllo della risorsa contenuta nel corrente `SyncLockT` dell'oggetto, se presente.
