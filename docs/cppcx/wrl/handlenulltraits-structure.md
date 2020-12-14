---
description: 'Altre informazioni su: Struttura HANDLENullTraits'
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
ms.openlocfilehash: 14d5eaab36be24b5450b66c35c9cf5cbba39ea4d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97229249"
---
# <a name="handlenulltraits-structure"></a>HANDLENullTraits (struttura)

Definisce le caratteristiche comuni di un handle non inizializzato.

## <a name="syntax"></a>Sintassi

```cpp
struct HANDLENullTraits;
```

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

Nome   | Description
------ | ---------------------
`Type` | Sinonimo di HANDLE.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                  | Description
----------------------------------------------------- | -----------------------------
[HANDLENullTraits:: Close](#close)                     | Chiude l'handle specificato.
[HANDLENullTraits:: GetInvalidValue](#getinvalidvalue) | Rappresenta un handle non valido.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HANDLENullTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Spazio dei nomi:** Microsoft:: WRL:: Wrappers:: HandleTraits

## <a name="handlenulltraitsclose"></a><a name="close"></a> HANDLENullTraits:: Close

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

## <a name="handlenulltraitsgetinvalidvalue"></a><a name="getinvalidvalue"></a> HANDLENullTraits:: GetInvalidValue

Rappresenta un handle non valido.

```cpp
inline static Type GetInvalidValue();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre **`nullptr`** .
