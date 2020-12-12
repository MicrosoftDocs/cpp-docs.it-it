---
description: 'Altre informazioni su: struttura CriticalSectionTraits'
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
ms.openlocfilehash: 20e4b7dd47acf6f632c888c9bfdedeb3f4e60270
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97272942"
---
# <a name="criticalsectiontraits-structure"></a>CriticalSectionTraits (struttura)

Specializza un `CriticalSection` oggetto per supportare una sezione critica non valida o una funzione per rilasciare una sezione critica.

## <a name="syntax"></a>Sintassi

```
struct CriticalSectionTraits;
```

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

Nome   | Description
------ | -----------------------------------------------------------------------------------------------------------------
`Type` | Oggetto **`typedef`** che definisce un puntatore a una sezione critica. `Type` viene definito come `typedef CRITICAL_SECTION* Type;`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                       | Description
---------------------------------------------------------- | -----------------
[CriticalSectionTraits:: GetInvalidValue](#getinvalidvalue) | Specializza un `CriticalSection` modello in modo che il modello sia sempre non valido.
[CriticalSectionTraits:: Unlock](#unlock)                   | Specializza un `CriticalSection` modello in modo che supporti il rilascio della proprietà dell'oggetto sezione critica specificato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CriticalSectionTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers:: HandleTraits

## <a name="criticalsectiontraitsgetinvalidvalue"></a><a name="getinvalidvalue"></a> CriticalSectionTraits:: GetInvalidValue

Specializza un `CriticalSection` modello in modo che il modello sia sempre non valido.

```cpp
inline static Type GetInvalidValue();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre un puntatore a una sezione critica non valida.

### <a name="remarks"></a>Commenti

Il modificatore di `Type` viene definito come `typedef CRITICAL_SECTION* Type;`.

## <a name="criticalsectiontraitsunlock"></a><a name="unlock"></a> CriticalSectionTraits:: Unlock

Specializza un `CriticalSection` modello in modo che supporti il rilascio della proprietà dell'oggetto sezione critica specificato.

```cpp
inline static void Unlock(
   _In_ Type cs
);
```

### <a name="parameters"></a>Parametri

*CS*<br/>
Puntatore a un oggetto sezione critica.

### <a name="remarks"></a>Commenti

Il modificatore di `Type` viene definito come `typedef CRITICAL_SECTION* Type;`.

Per ulteriori informazioni, vedere la **funzione LeaveCriticalSection** nella sezione **funzioni di sincronizzazione** della documentazione dell'API Windows.
