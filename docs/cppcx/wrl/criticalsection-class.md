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
ms.openlocfilehash: 5deb89e795d1886ca316886ae1ea260ce1f36fd1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372597"
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
[CriticalSection::CriticalSection](#criticalsection)        | Inizializza un oggetto di sincronizzazione simile a un oggetto mutex, ma che può essere utilizzato solo dai thread di un singolo processo.
[Sezione Critica::](#tilde-criticalsection) | Deinizializza ed elimina l'oggetto corrente. `CriticalSection`

### <a name="public-methods"></a>Metodi pubblici

Nome                                 | Descrizione
------------------------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------
[CriticalSection::IsValid](#isvalid) | Indica se la sezione critica corrente è valida.
[CriticalSection::Lock](#lock)       | Attende la proprietà dell'oggetto sezione critica specificato. La funzione restituisce quando al thread chiamante viene concessa la proprietà.
[CriticalSection::TryLock](#trylock) | Tenta di entrare in una sezione critica senza bloccare. Se la chiamata ha esito positivo, il thread chiamante assume la proprietà della sezione critica.

### <a name="protected-data-members"></a>Membri dati protetti

Nome                        | Descrizione
--------------------------- | ----------------------------------------
[Sezione critica::cs_](#cs) | Dichiara un membro dati di sezione critica.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CriticalSection`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers.h

**Spazio dei nomi:** Microsoft::WRL::Wrappers

## <a name="criticalsectioncriticalsection"></a><a name="tilde-criticalsection"></a>Sezione Critica::

Deinizializza ed elimina l'oggetto corrente. `CriticalSection`

```cpp
WRL_NOTHROW ~CriticalSection();
```

## <a name="criticalsectioncriticalsection"></a><a name="criticalsection"></a>CriticalSection::CriticalSection

Inizializza un oggetto di sincronizzazione simile a un oggetto mutex, ma che può essere utilizzato solo dai thread di un singolo processo.

```cpp
explicit CriticalSection(
   ULONG spincount = 0
);
```

### <a name="parameters"></a>Parametri

*spincount*<br/>
Conteggio rotazione per l'oggetto sezione critica. Il valore predefinito è 0.

### <a name="remarks"></a>Osservazioni

Per altre informazioni sulle sezioni critiche `InitializeCriticalSectionAndSpinCount` e sul `Synchronization` numero di spincount, vedere la funzione nella sezione documenation dell'API di Windows.For more information about critical sections and spincounts, see the function in the section of the Windows API documenation.

## <a name="criticalsectioncs_"></a><a name="cs"></a>Sezione critica::cs_

Dichiara un membro dati di sezione critica.

```cpp
CRITICAL_SECTION cs_;
```

### <a name="remarks"></a>Osservazioni

Questo membro dati è protetto.

## <a name="criticalsectionisvalid"></a><a name="isvalid"></a>CriticalSection::IsValid

Indica se la sezione critica corrente è valida.

```cpp
bool IsValid() const;
```

### <a name="return-value"></a>Valore restituito

Per impostazione predefinita, restituisce sempre **true**.

## <a name="criticalsectionlock"></a><a name="lock"></a>CriticalSection::Lock

Attende la proprietà dell'oggetto sezione critica specificato. La funzione restituisce quando al thread chiamante viene concessa la proprietà.

```cpp
SyncLock Lock();

   static SyncLock Lock(
   _In_ CRITICAL_SECTION* cs
);
```

### <a name="parameters"></a>Parametri

*Cs*<br/>
Oggetto sezione critica specificato dall'utente.

### <a name="return-value"></a>Valore restituito

Oggetto di blocco che può essere utilizzato per sbloccare la sezione critica corrente.

### <a name="remarks"></a>Osservazioni

La `Lock` prima funzione influisce sull'oggetto sezione critica corrente. La `Lock` seconda funzione influisce su una sezione critica specificata dall'utente.

## <a name="criticalsectiontrylock"></a><a name="trylock"></a>CriticalSection::TryLock

Tenta di entrare in una sezione critica senza bloccare. Se la chiamata ha esito positivo, il thread chiamante assume la proprietà della sezione critica.

```cpp
SyncLock TryLock();

static SyncLock TryLock(
   _In_ CRITICAL_SECTION* cs
);
```

### <a name="parameters"></a>Parametri

*Cs*<br/>
Oggetto sezione critica specificato dall'utente.

### <a name="return-value"></a>Valore restituito

Un valore diverso da zero se la sezione critica viene immessa correttamente o il thread corrente è già proprietario della sezione critica. zero se un altro thread possiede già la sezione critica.

### <a name="remarks"></a>Osservazioni

La `TryLock` prima funzione influisce sull'oggetto sezione critica corrente. La `TryLock` seconda funzione influisce su una sezione critica specificata dall'utente.
