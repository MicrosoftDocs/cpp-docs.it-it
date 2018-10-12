---
title: HANDLENullTraits (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 09/27/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits::Close
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits::GetInvalidValue
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits structure
- Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits::Close method
- Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits::GetInvalidValue method
ms.assetid: 88a29a14-c516-40cb-a0ca-ee897a668623
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1060d28e35a52e2a8c5c550664d36d8272628526
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49161736"
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
`Type` | Un sinonimo di HANDLE.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                  | Descrizione
----------------------------------------------------- | -----------------------------
[Handlenulltraits:: Close](#close)                     | Chiude l'handle specificato.
[Handlenulltraits:: Getinvalidvalue](#getinvalidvalue) | Rappresenta un handle non valido.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`HANDLENullTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## <a name="close"></a>Handlenulltraits:: Close

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

## <a name="getinvalidvalue"></a>Handlenulltraits:: Getinvalidvalue

Rappresenta un handle non valido.

```cpp
inline static Type GetInvalidValue();
```

### <a name="return-value"></a>Valore restituito

Restituisce sempre `nullptr`.
