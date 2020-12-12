---
description: 'Altre informazioni su: Enumerazione AsyncStatusInternal'
title: AsyncStatusInternal (enumerazione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::Details::AsyncStatusInternal
helpviewer_keywords:
- AsyncStatusInternal enumeration
ms.assetid: b783923f-3f1c-4487-9384-be572cbc62d7
ms.openlocfilehash: 3227699a0e7b8933dc5839e65fb3489328d3b1f5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97175794"
---
# <a name="asyncstatusinternal-enumeration"></a>AsyncStatusInternal (enumerazione)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
enum AsyncStatusInternal;
```

## <a name="remarks"></a>Osservazioni

Specifica un mapping tra enumerazioni interne per lo stato delle operazioni asincrone e dell' `Windows::Foundation::AsyncStatus` enumerazione.

## <a name="members"></a>Membri

`_Created`<br/>
Equivalente a `::Windows::Foundation::AsyncStatus::Created`

`_Started`<br/>
Equivalente a `::Windows::Foundation::AsyncStatus::Started`

`_Completed`<br/>
Equivalente a `::Windows::Foundation::AsyncStatus::Completed`

`_Cancelled`<br/>
Equivalente a `::Windows::Foundation::AsyncStatus::Cancelled`

`_Error`<br/>
Equivalente a `::Windows::Foundation::AsyncStatus::Error`

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL::D etails](microsoft-wrl-details-namespace.md)
