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
ms.openlocfilehash: dd34206741ba8fee8b283e22b6e8eefb3b3efb0e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50651152"
---
# <a name="criticalsection-class"></a>CriticalSection (classe)

Rappresenta una sezione critica.

## <a name="syntax"></a>Sintassi

```cpp
class CriticalSection;
```

## <a name="members"></a>Membri

### <a name="constructor"></a>Costruttore

nome                                                        | Descrizione
----------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------
[Criticalsection:: Criticalsection](#criticalsection)        | Inizializza un oggetto di sincronizzazione che è simile a un oggetto mutex, ma può essere utilizzato da solo i thread di un singolo processo.
[CriticalSection:: ~ CriticalSection](#tilde-criticalsection) | Deinizializza ed elimina l'oggetto corrente `CriticalSection` oggetto.

### <a name="public-methods"></a>Metodi pubblici

Nome                                 | Descrizione
------------------------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------
[Criticalsection:: IsValid](#isvalid) | Indica se la sezione critica corrente è valida.
[Criticalsection:: lock](#lock)       | Attende che la proprietà dell'oggetto specificato sezione critica. La funzione restituisce quando il thread chiamante è concessa la proprietà.
[Criticalsection:: TryLock](#trylock) | Tenta di immettere una sezione critica senza bloccare. Se la chiamata ha esito positivo, il thread chiamante ha la proprietà della sezione critica.

### <a name="protected-data-members"></a>Membri dati protetti

nome                        | Descrizione
--------------------------- | ----------------------------------------
[CriticalSection::cs_](#cs) | Dichiara un membro dati di sezione critica.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CriticalSection`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="tilde-criticalsection"></a>CriticalSection:: ~ CriticalSection

Deinizializza ed elimina l'oggetto corrente `CriticalSection` oggetto.

```cpp
WRL_NOTHROW ~CriticalSection();
```

## <a name="criticalsection"></a>Criticalsection:: Criticalsection

Inizializza un oggetto di sincronizzazione che è simile a un oggetto mutex, ma può essere utilizzato da solo i thread di un singolo processo.

```cpp
explicit CriticalSection(
   ULONG spincount = 0
);
```

### <a name="parameters"></a>Parametri

*spinCount*<br/>
Il conteggio di selezione per l'oggetto sezione critica. Il valore predefinito è 0.

### <a name="remarks"></a>Note

Per altre informazioni sulle sezioni critiche e spincounts, vedere la `InitializeCriticalSectionAndSpinCount` funzionare nel `Synchronization` sezione della documentazione di Windows API.

## <a name="cs"></a>CriticalSection::cs_

Dichiara un membro dati di sezione critica.

```cpp
CRITICAL_SECTION cs_;
```

### <a name="remarks"></a>Note

Questo membro dati è protetto.

## <a name="isvalid"></a>Criticalsection:: IsValid

Indica se la sezione critica corrente è valida.

```cpp
bool IsValid() const;
```

### <a name="return-value"></a>Valore restituito

Per impostazione predefinita, restituisce sempre **true**.

## <a name="lock"></a>Criticalsection:: lock

Attende che la proprietà dell'oggetto specificato sezione critica. La funzione restituisce quando il thread chiamante è concessa la proprietà.

```cpp
SyncLock Lock();

   static SyncLock Lock(
   _In_ CRITICAL_SECTION* cs
);
```

### <a name="parameters"></a>Parametri

*cs*<br/>
Un oggetto specificato dall'utente sezione critica.

### <a name="return-value"></a>Valore restituito

Un oggetto di blocco che può essere utilizzato per sbloccare la sezione critica corrente.

### <a name="remarks"></a>Note

Il primo `Lock` function viene applicata l'oggetto corrente di sezione critica. Il secondo `Lock` function viene applicata a una sezione critica specificato dall'utente.

## <a name="trylock"></a>Criticalsection:: TryLock

Tenta di immettere una sezione critica senza bloccare. Se la chiamata ha esito positivo, il thread chiamante ha la proprietà della sezione critica.

```cpp
SyncLock TryLock();

static SyncLock TryLock(
   _In_ CRITICAL_SECTION* cs
);
```

### <a name="parameters"></a>Parametri

*cs*<br/>
Un oggetto specificato dall'utente sezione critica.

### <a name="return-value"></a>Valore restituito

Un valore diverso da zero se la sezione critica è stato immesso correttamente o il thread corrente è già proprietario della sezione critica. Zero in caso di un altro thread già proprietario della sezione critica.

### <a name="remarks"></a>Note

Il primo `TryLock` function viene applicata l'oggetto corrente di sezione critica. Il secondo `TryLock` function viene applicata a una sezione critica specificato dall'utente.
