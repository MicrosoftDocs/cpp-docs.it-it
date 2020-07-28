---
title: CriticalSection (classe)
ms.date: 09/24/2018
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::CriticalSection
- corewrappers/Microsoft::WRL::Wrappers::CriticalSection::cs_
- corewrappers/Microsoft::WRL::Wrappers::CriticalSection::IsValid
- corewrappers/Microsoft::WRL::Wrappers::CriticalSection::Lock
- corewrappers/Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection
- corewrappers/Microsoft::WRL::Wrappers::CriticalSection::CriticalSection
- corewrappers/Microsoft::WRL::Wrappers::CriticalSection::TryLock
helpviewer_keywords:
- Microsoft::WRL::Wrappers::CriticalSection class
- Microsoft::WRL::Wrappers::CriticalSection::cs_ data member
- Microsoft::WRL::Wrappers::CriticalSection::IsValid method
- Microsoft::WRL::Wrappers::CriticalSection::Lock method
- Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection, destructor
- Microsoft::WRL::Wrappers::CriticalSection::CriticalSection, constructor
- Microsoft::WRL::Wrappers::CriticalSection::TryLock method
ms.assetid: f2e0a024-71a3-4f6b-99ea-d93a4a608ac4
ms.openlocfilehash: b95e512f89ee1ff32ca9f1bea51bce643d185a2e
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87220522"
---
# <a name="criticalsection-class"></a>CriticalSection (classe)

Rappresenta un oggetto sezione critica.

## <a name="syntax"></a>Sintassi

```cpp
class CriticalSection;
```

## <a name="members"></a>Membri

### <a name="constructor"></a>Costruttore

Nome                                                        | Descrizione
----------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------
[CriticalSection:: CriticalSection](#criticalsection)        | Inizializza un oggetto di sincronizzazione simile a un oggetto mutex, ma può essere utilizzato solo dai thread di un singolo processo.
[CriticalSection:: ~ CriticalSection](#tilde-criticalsection) | Consente di deinizializzare ed eliminare definitivamente l' `CriticalSection` oggetto corrente.

### <a name="public-methods"></a>Metodi pubblici

Nome                                 | Descrizione
------------------------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------
[CriticalSection:: IsValid](#isvalid) | Indica se la sezione critica corrente è valida.
[CriticalSection:: Lock](#lock)       | Attende la proprietà dell'oggetto sezione critico specificato. La funzione restituisce quando al thread chiamante viene concessa la proprietà.
[CriticalSection:: TryLock](#trylock) | Tenta di immettere una sezione critica senza blocco. Se la chiamata ha esito positivo, il thread chiamante acquisisce la proprietà della sezione critica.

### <a name="protected-data-members"></a>Membri dati protetti

Nome                        | Descrizione
--------------------------- | ----------------------------------------
[CriticalSection:: cs_](#cs) | Dichiara un membro dati della sezione critica.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CriticalSection`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers

## <a name="criticalsectioncriticalsection"></a><a name="tilde-criticalsection"></a>CriticalSection:: ~ CriticalSection

Consente di deinizializzare ed eliminare definitivamente l' `CriticalSection` oggetto corrente.

```cpp
WRL_NOTHROW ~CriticalSection();
```

## <a name="criticalsectioncriticalsection"></a><a name="criticalsection"></a>CriticalSection:: CriticalSection

Inizializza un oggetto di sincronizzazione simile a un oggetto mutex, ma può essere utilizzato solo dai thread di un singolo processo.

```cpp
explicit CriticalSection(
   ULONG spincount = 0
);
```

### <a name="parameters"></a>Parametri

*SpinCount*<br/>
Il numero di spin per l'oggetto sezione critica. Il valore predefinito è 0.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulle sezioni critiche e spincounts, vedere la `InitializeCriticalSectionAndSpinCount` funzione nella `Synchronization` sezione dell'API Windows documentazione.

## <a name="criticalsectioncs_"></a><a name="cs"></a>CriticalSection:: cs_

Dichiara un membro dati della sezione critica.

```cpp
CRITICAL_SECTION cs_;
```

### <a name="remarks"></a>Osservazioni

Questo membro dati è protetto.

## <a name="criticalsectionisvalid"></a><a name="isvalid"></a>CriticalSection:: IsValid

Indica se la sezione critica corrente è valida.

```cpp
bool IsValid() const;
```

### <a name="return-value"></a>Valore restituito

Per impostazione predefinita, restituisce sempre **`true`** .

## <a name="criticalsectionlock"></a><a name="lock"></a>CriticalSection:: Lock

Attende la proprietà dell'oggetto sezione critico specificato. La funzione restituisce quando al thread chiamante viene concessa la proprietà.

```cpp
SyncLock Lock();

   static SyncLock Lock(
   _In_ CRITICAL_SECTION* cs
);
```

### <a name="parameters"></a>Parametri

*CS*<br/>
Oggetto sezione critica specificato dall'utente.

### <a name="return-value"></a>Valore restituito

Oggetto Lock che può essere utilizzato per sbloccare la sezione critica corrente.

### <a name="remarks"></a>Osservazioni

La prima `Lock` funzione ha effetto sull'oggetto sezione critica corrente. La seconda `Lock` funzione interessa una sezione critica specificata dall'utente.

## <a name="criticalsectiontrylock"></a><a name="trylock"></a>CriticalSection:: TryLock

Tenta di immettere una sezione critica senza blocco. Se la chiamata ha esito positivo, il thread chiamante acquisisce la proprietà della sezione critica.

```cpp
SyncLock TryLock();

static SyncLock TryLock(
   _In_ CRITICAL_SECTION* cs
);
```

### <a name="parameters"></a>Parametri

*CS*<br/>
Oggetto sezione critica specificato dall'utente.

### <a name="return-value"></a>Valore restituito

Valore diverso da zero se la sezione critica è stata immessa correttamente o il thread corrente è già proprietario della sezione critica. Zero se un altro thread è già proprietario della sezione critica.

### <a name="remarks"></a>Osservazioni

La prima `TryLock` funzione ha effetto sull'oggetto sezione critica corrente. La seconda `TryLock` funzione interessa una sezione critica specificata dall'utente.
