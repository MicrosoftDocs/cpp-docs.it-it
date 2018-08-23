---
title: 'Metodo asyncbase:: Checkvalidstatefordelegatecall | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::CheckValidStateForDelegateCall
dev_langs:
- C++
helpviewer_keywords:
- CheckValidStateForDelegateCall method
ms.assetid: d997ebe7-2378-4e74-a379-f0f85e6922f0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: cd3629fcaf8507abd2baf6cded3c6a63bc6fd64f
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42611500"
---
# <a name="asyncbasecheckvalidstatefordelegatecall-method"></a>Metodo AsyncBase::CheckValidStateForDelegateCall

Verifica se le proprietà di delegato possono essere modificate nello stato asincrono corrente.

## <a name="syntax"></a>Sintassi

```cpp
inline HRESULT CheckValidStateForDelegateCall();
```

## <a name="return-value"></a>Valore restituito

S_OK se le proprietà di delegato possono essere modificate. in caso contrario, E_ILLEGAL_METHOD_CALL.

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe AsyncBase](../windows/asyncbase-class.md)