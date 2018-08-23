---
title: 'Metodo asyncbase:: Get_status | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::get_Status
dev_langs:
- C++
helpviewer_keywords:
- get_Status method
ms.assetid: 9823ecb9-212e-471d-b76f-7b8f21208905
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 31b333c14af6d57fb098d6aff0d0938092477de0
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42613124"
---
# <a name="asyncbasegetstatus-method"></a>Metodo AsyncBase::get_Status

Recupera un valore che indica lo stato dell'operazione asincrona.

## <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(
   get_Status
)(AsyncStatus *status) override;
```

### <a name="parameters"></a>Parametri

*status*  
Il percorso in cui viene archiviato lo stato. Per ulteriori informazioni, vedere l'enumerazione `Windows::Foundation::AsyncStatus`.

## <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, E_ILLEGAL_METHOD_CALL.

## <a name="remarks"></a>Note

Questo metodo implementa `IAsyncInfo::get_Status`.

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe AsyncBase](../windows/asyncbase-class.md)