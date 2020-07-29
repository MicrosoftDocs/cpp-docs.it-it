---
title: HANDLENullTraits (struttura)
ms.date: 09/27/2018
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits::Close
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits::GetInvalidValue
helpviewer_keywords:
- Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits structure
- Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits::Close method
- Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits::GetInvalidValue method
ms.assetid: 88a29a14-c516-40cb-a0ca-ee897a668623
ms.openlocfilehash: a7ce730b8d723a839c5b509c825cff84111ca613
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87226919"
---
# <a name="handlenulltraits-structure"></a>HANDLENullTraits (struttura)

Definisce le caratteristiche comuni di un handle non inizializzato.

## <a name="syntax"></a>Sintassi

```cpp
struct HANDLENullTraits;
```

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome   | Descrizione
------ | ---------------------
`Type` | Sinonimo di HANDLE.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                  | Descrizione
----------------------------------------------------- | -----------------------------
[HANDLENullTraits:: Close](#close)                     | Chiude l'handle specificato.
[HANDLENullTraits:: GetInvalidValue](#getinvalidvalue) | Rappresenta un handle non valido.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HANDLENullTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers:: HandleTraits

## <a name="handlenulltraitsclose"></a><a name="close"></a>HANDLENullTraits:: Close

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

## <a name="handlenulltraitsgetinvalidvalue"></a><a name="getinvalidvalue"></a>HANDLENullTraits:: GetInvalidValue

Rappresenta un handle non valido.

```cpp
inline static Type GetInvalidValue();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre **`nullptr`** .
