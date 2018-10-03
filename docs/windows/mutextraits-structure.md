---
title: MutexTraits (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 09/27/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::MutexTraits
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::MutexTraits::Unlock
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Wrappers::HandleTraits::MutexTraits structure
- Microsoft::WRL::Wrappers::HandleTraits::MutexTraits::Unlock method
ms.assetid: 6582df80-b9ba-4892-948f-d572a3b23d54
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 15ed7d9dc3a1b97e05712e003fa61f662901fc18
ms.sourcegitcommit: 1d9bd38cacbc783fccd3884b7b92062161c91c84
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/03/2018
ms.locfileid: "48234989"
---
# <a name="mutextraits-structure"></a>MutexTraits (struttura)

Definisce le caratteristiche comuni del [Mutex](../windows/mutex-class1.md) classe.

## <a name="syntax"></a>Sintassi

```cpp
struct MutexTraits : HANDLENullTraits;
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

Nome                           | Descrizione
------------------------------ | ------------------------------------------------
[Mutextraits:: Unlock](#unlock) | Rilascia il controllo esclusivo di una risorsa condivisa.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HANDLENullTraits`

`MutexTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

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
