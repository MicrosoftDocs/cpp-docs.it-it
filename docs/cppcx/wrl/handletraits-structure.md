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
ms.openlocfilehash: 604098cd3289722767117910d6e44e272dcb8b77
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371452"
---
# <a name="handletraits-structure"></a>HANDLETraits (struttura)

Definisce le caratteristiche comuni di una maniglia.

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
[HandleTraits::Chiudi](#close)                     | Chiude l'handle specificato.
[HANDLETraits::GetInvalidValue](#getinvalidvalue) | Rappresenta un handle non valido.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HANDLETraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers.h

**Spazio dei nomi:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="handletraitsclose"></a><a name="close"></a>HandleTraits::Chiudi

Chiude l'handle specificato.

```cpp
inline static bool Close(
   _In_ Type h
);
```

### <a name="parameters"></a>Parametri

*H*<br/>
Handle da chiudere.

### <a name="return-value"></a>Valore restituito

**true** se l'handle *h* è stato chiuso correttamente; in caso contrario, **false**.

## <a name="handletraitsgetinvalidvalue"></a><a name="getinvalidvalue"></a>HANDLETraits::GetInvalidValue

Rappresenta un handle non valido.

```cpp
inline static HANDLE GetInvalidValue();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre INVALID_HANDLE_VALUE. (INVALID_HANDLE_VALUE è definito da Windows.)
