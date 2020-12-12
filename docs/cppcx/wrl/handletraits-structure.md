---
description: 'Altre informazioni su: struttura HANDLETraits'
title: HANDLETraits (struttura)
ms.date: 09/27/2018
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits::Close
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits::GetInvalidValue
helpviewer_keywords:
- Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits structure
- Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits::Close method
- Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits::GetInvalidValue method
ms.assetid: 22963e88-d857-4624-9182-7c986daff722
ms.openlocfilehash: c3eef03c724b1ba868ba67ed251acdb310d8b66f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97250023"
---
# <a name="handletraits-structure"></a>HANDLETraits (struttura)

Definisce le caratteristiche comuni di un handle.

## <a name="syntax"></a>Sintassi

```cpp
struct HANDLETraits;
```

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

Nome   | Description
------ | ---------------------
`Type` | Sinonimo di HANDLE.

### <a name="public-methods"></a>Metodi pubblici

Nome                                              | Description
------------------------------------------------- | -----------------------------
[HANDLETraits:: Close](#close)                     | Chiude l'handle specificato.
[HANDLETraits:: GetInvalidValue](#getinvalidvalue) | Rappresenta un handle non valido.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HANDLETraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers:: HandleTraits

## <a name="handletraitsclose"></a><a name="close"></a> HANDLETraits:: Close

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

**`true`** se handle *h* è stato chiuso correttamente; in caso contrario, **`false`** .

## <a name="handletraitsgetinvalidvalue"></a><a name="getinvalidvalue"></a> HANDLETraits:: GetInvalidValue

Rappresenta un handle non valido.

```cpp
inline static HANDLE GetInvalidValue();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre INVALID_HANDLE_VALUE. (INVALID_HANDLE_VALUE è definito da Windows).
