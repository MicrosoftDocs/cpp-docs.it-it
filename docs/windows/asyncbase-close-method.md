---
title: 'Metodo asyncbase:: Close | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::Close
dev_langs:
- C++
helpviewer_keywords:
- Close method
ms.assetid: a52b1124-754b-4393-b491-64aae0c22f1c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 732eb6f8668f7742e23e1ea410dcc659bc3d36c7
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42605346"
---
# <a name="asyncbaseclose-method"></a>Metodo AsyncBase::Close

Termina l'operazione asincrona.

## <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(
   Close
)(void) override;
```

## <a name="return-value"></a>Valore restituito

S_OK se l'operazione chiude o è già chiusa. in caso contrario, E_ILLEGAL_STATE_CHANGE.

## <a name="remarks"></a>Note

**Close ()** è un'implementazione predefinita di `IAsyncInfo::Close`, e non esegue alcuna operazione effettiva. Per chiudere effettivamente un'operazione asincrona, eseguire l'override di `OnClose()` metodo virtuale puro.

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe AsyncBase](../windows/asyncbase-class.md)