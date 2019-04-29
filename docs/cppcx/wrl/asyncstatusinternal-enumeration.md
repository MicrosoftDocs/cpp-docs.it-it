---
title: AsyncStatusInternal (enumerazione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::Details::AsyncStatusInternal
helpviewer_keywords:
- AsyncStatusInternal enumeration
ms.assetid: b783923f-3f1c-4487-9384-be572cbc62d7
ms.openlocfilehash: f12bf4aafc87e44a6e2fb15ba79de4a9744bea58
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62398784"
---
# <a name="asyncstatusinternal-enumeration"></a>AsyncStatusInternal (enumerazione)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
enum AsyncStatusInternal;
```

## <a name="remarks"></a>Note

Specifica un mapping tra enumerazioni interne per lo stato delle operazioni asincrone e `Windows::Foundation::AsyncStatus` enumerazione.

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

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](microsoft-wrl-details-namespace.md)