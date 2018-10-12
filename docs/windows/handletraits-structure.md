---
title: HANDLETraits (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 09/27/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits::Close
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits::GetInvalidValue
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits structure
- Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits::Close method
- Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits::GetInvalidValue method
ms.assetid: 22963e88-d857-4624-9182-7c986daff722
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3e670dca205f07d1e13a93f8acd0df5965b45109
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49161710"
---
# <a name="handletraits-structure"></a>HANDLETraits (struttura)

Definisce le caratteristiche comuni di un handle.

## <a name="syntax"></a>Sintassi

```cpp
struct HANDLETraits;
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome   | Descrizione
------ | ---------------------
`Type` | Un sinonimo di HANDLE.

### <a name="public-methods"></a>Metodi pubblici

Nome                                              | Descrizione
------------------------------------------------- | -----------------------------
[Handletraits:: Close](#close)                     | Chiude l'handle specificato.
[Handletraits:: Getinvalidvalue](#getinvalidvalue) | Rappresenta un handle non valido.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HANDLETraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="close"></a>Handletraits:: Close

Chiude l'handle specificato.

```cpp
inline static bool Close(
   _In_ Type h
);
```

### <a name="parameters"></a>Parametri

*h*<br/>
Handle da chiudere.

### <a name="return-value"></a>Valore restituito

**true** se gestiscono *h* chiuso correttamente; in caso contrario, **false**.

## <a name="getinvalidvalue"></a>Handletraits:: Getinvalidvalue

Rappresenta un handle non valido.

```cpp
inline static HANDLE GetInvalidValue();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre INVALID_HANDLE_VALUE. (INVALID_HANDLE_VALUE è definito da Windows).
