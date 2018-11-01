---
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
ms.openlocfilehash: 4dd2cde62d36c46926e703e6fb649e2ae4ef7811
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50590073"
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
