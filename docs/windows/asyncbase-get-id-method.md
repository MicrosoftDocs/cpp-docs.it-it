---
title: 'Metodo asyncbase:: Get_id | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::get_Id
dev_langs:
- C++
helpviewer_keywords:
- get_Id method
ms.assetid: 591d8366-ea76-4deb-9278-9d3bc394a42b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ee4e15293d3f1f7b5b364ea22eeea2385cc9e855
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46403877"
---
# <a name="asyncbasegetid-method"></a>Metodo AsyncBase::get_Id

Recupera l'handle dell'operazione asincrona.

## <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(
   get_Id
)(unsigned int *id) override;
```

### <a name="parameters"></a>Parametri

*ID*<br/>
Il percorso in cui viene archiviato l'handle.

## <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, E_ILLEGAL_METHOD_CALL.

## <a name="remarks"></a>Note

Questo metodo implementa `IAsyncInfo::get_Id`.

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe AsyncBase](../windows/asyncbase-class.md)