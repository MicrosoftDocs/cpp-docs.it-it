---
title: MutexTraits (struttura)
ms.date: 09/27/2018
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::MutexTraits
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::MutexTraits::Unlock
helpviewer_keywords:
- Microsoft::WRL::Wrappers::HandleTraits::MutexTraits structure
- Microsoft::WRL::Wrappers::HandleTraits::MutexTraits::Unlock method
ms.assetid: 6582df80-b9ba-4892-948f-d572a3b23d54
ms.openlocfilehash: 9bc4071e5699610a664cbf01ca3e7d36d7effc5e
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58785065"
---
# <a name="mutextraits-structure"></a>MutexTraits (struttura)

Definisce le caratteristiche comuni del [Mutex](mutex-class.md) classe.

## <a name="syntax"></a>Sintassi

```cpp
struct MutexTraits : HANDLENullTraits;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

Nome                           | Descrizione
------------------------------ | ------------------------------------------------
[MutexTraits::Unlock](#unlock) | Rilascia il controllo esclusivo di una risorsa condivisa.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HANDLENullTraits`

`MutexTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="unlock"></a>Metodo mutextraits:: Unlock

Rilascia il controllo esclusivo di una risorsa condivisa.

```cpp
inline static void Unlock(
   _In_ Type h
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Handle per un oggetto mutex.
