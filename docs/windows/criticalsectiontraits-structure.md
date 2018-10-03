---
title: CriticalSectionTraits (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 09/26/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::GetInvalidValue
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::Unlock
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits structure
- Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::GetInvalidValue method
- Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::Unlock method
ms.assetid: c515a1b5-4eb0-40bc-9035-c4d9352c9de7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 420ab1019dfa2e95e00e366c64509178ad20e685
ms.sourcegitcommit: 1d9bd38cacbc783fccd3884b7b92062161c91c84
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/03/2018
ms.locfileid: "48234346"
---
# <a name="criticalsectiontraits-structure"></a>CriticalSectionTraits (struttura)

Specializza un `CriticalSection` oggetti per supportare una sezione critica non è valida o una funzione per rilasciare una sezione critica.

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
[Criticalsectiontraits:: Getinvalidvalue](#getinvalidvalue) | Specializza un `CriticalSection` modello in modo che il modello è sempre valido.
[Criticalsectiontraits:: Unlock](#unlock)                   | Specializza un `CriticalSection` modello in modo che non supporta il rilascio del proprietario dell'oggetto specificato sezione critica.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CriticalSectionTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="getinvalidvalue"></a>Criticalsectiontraits:: Getinvalidvalue

Specializza un `CriticalSection` modello in modo che il modello è sempre valido.

```cpp
inline static Type GetInvalidValue();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre un puntatore a una sezione critica non è valida.

### <a name="remarks"></a>Note

Il modificatore di `Type` viene definito come `typedef CRITICAL_SECTION* Type;`.

## <a name="unlock"></a>Criticalsectiontraits:: Unlock

Specializza un `CriticalSection` modello in modo che non supporta il rilascio del proprietario dell'oggetto specificato sezione critica.

```cpp
inline static void Unlock(
   _In_ Type cs
);
```

### <a name="parameters"></a>Parametri

*cs*<br/>
Un puntatore a un oggetto sezione critica.

### <a name="remarks"></a>Note

Il modificatore di `Type` viene definito come `typedef CRITICAL_SECTION* Type;`.

Per altre informazioni, vedere **funzione LeaveCriticalSection** nel **funzioni di sincronizzazione** sezione della documentazione dell'API di Windows.
