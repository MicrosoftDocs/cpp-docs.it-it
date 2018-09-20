---
title: 'Metodo asyncbase:: currentStatus | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::CurrentStatus
dev_langs:
- C++
helpviewer_keywords:
- CurrentStatus method
ms.assetid: 26ee4c4a-6525-4a5f-b49c-3ca40c365eb6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 792f9f6c6d76097459498c43068f46d86b2e2349
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46401485"
---
# <a name="asyncbasecurrentstatus-method"></a>Metodo AsyncBase::CurrentStatus

Recupera lo stato dell'operazione asincrona corrente.

## <a name="syntax"></a>Sintassi

```cpp
inline void CurrentStatus(
   Details::AsyncStatusInternal *status
);
```

### <a name="parameters"></a>Parametri

*status*<br/>
Il percorso in cui questa operazione archivia lo stato corrente.

## <a name="remarks"></a>Note

Questa operazione è thread-safe.

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe AsyncBase](../windows/asyncbase-class.md)<br/>
[Enumerazione AsyncStatusInternal](../windows/asyncstatusinternal-enumeration.md)