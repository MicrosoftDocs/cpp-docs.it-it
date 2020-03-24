---
title: AsyncStatusInternal (enumerazione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::Details::AsyncStatusInternal
helpviewer_keywords:
- AsyncStatusInternal enumeration
ms.assetid: b783923f-3f1c-4487-9384-be572cbc62d7
ms.openlocfilehash: 0eadd1e3a287feecd36b00b231b42c31218352c1
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80214149"
---
# <a name="asyncstatusinternal-enumeration"></a>AsyncStatusInternal (enumerazione)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
enum AsyncStatusInternal;
```

## <a name="remarks"></a>Osservazioni

Specifica un mapping tra enumerazioni interne per lo stato delle operazioni asincrone e l'enumerazione `Windows::Foundation::AsyncStatus`.

## <a name="members"></a>Members

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

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](microsoft-wrl-details-namespace.md)
