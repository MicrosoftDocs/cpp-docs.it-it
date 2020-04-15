---
title: CriticalSectionTraits (struttura)
ms.date: 09/26/2018
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::GetInvalidValue
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::Unlock
helpviewer_keywords:
- Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits structure
- Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::GetInvalidValue method
- Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::Unlock method
ms.assetid: c515a1b5-4eb0-40bc-9035-c4d9352c9de7
ms.openlocfilehash: 05c93bf6a2765bd11489075067c627ab3c3ab691
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372572"
---
# <a name="criticalsectiontraits-structure"></a>CriticalSectionTraits (struttura)

Specializza un `CriticalSection` oggetto per supportare una sezione critica non valida o una funzione per rilasciare una sezione critica.

## <a name="syntax"></a>Sintassi

```
struct CriticalSectionTraits;
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome   | Descrizione
------ | -----------------------------------------------------------------------------------------------------------------
`Type` | Oggetto `typedef` che definisce un puntatore a una sezione critica. `Type` viene definito come `typedef CRITICAL_SECTION* Type;`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                       | Descrizione
---------------------------------------------------------- | -----------------
[CriticalSectionTraits::GetInvalidValue](#getinvalidvalue) | Specializza un `CriticalSection` modello in modo che il modello non sia sempre valido.
[CriticalSectionTraits::Sblocca](#unlock)                   | Specializza un `CriticalSection` modello in modo che supporti il rilascio della proprietà dell'oggetto sezione critica specificato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CriticalSectionTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers.h

**Spazio dei nomi:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="criticalsectiontraitsgetinvalidvalue"></a><a name="getinvalidvalue"></a>CriticalSectionTraits::GetInvalidValue

Specializza un `CriticalSection` modello in modo che il modello non sia sempre valido.

```cpp
inline static Type GetInvalidValue();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre un puntatore a una sezione critica non valida.

### <a name="remarks"></a>Osservazioni

Il modificatore di `Type` viene definito come `typedef CRITICAL_SECTION* Type;`.

## <a name="criticalsectiontraitsunlock"></a><a name="unlock"></a>CriticalSectionTraits::Sblocca

Specializza un `CriticalSection` modello in modo che supporti il rilascio della proprietà dell'oggetto sezione critica specificato.

```cpp
inline static void Unlock(
   _In_ Type cs
);
```

### <a name="parameters"></a>Parametri

*Cs*<br/>
Puntatore a un oggetto sezione critica.

### <a name="remarks"></a>Osservazioni

Il modificatore di `Type` viene definito come `typedef CRITICAL_SECTION* Type;`.

Per altre informazioni, vedere Funzione LeaveCriticalSection nella sezione Funzioni di **sincronizzazione** della documentazione dell'API di Windows.For more information, see **LeaveCriticalSection function** in the Synchronization Functions section of the Windows API documentation.
