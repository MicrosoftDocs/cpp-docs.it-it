---
title: 'Metodo asyncbase:: Continueasyncoperation | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::ContinueAsyncOperation
dev_langs:
- C++
helpviewer_keywords:
- ContinueAsyncOperation method
ms.assetid: ce38181d-2fc3-4579-b0ce-237a3c7648bc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b83d7a0bb5eadede42d2572d5ebc5a02a0fe9a0e
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42607185"
---
# <a name="asyncbasecontinueasyncoperation-method"></a>Metodo AsyncBase::ContinueAsyncOperation

Determina se l'operazione asincrona deve continuare l'elaborazione o deve interrompersi.

## <a name="syntax"></a>Sintassi

```cpp
inline bool ContinueAsyncOperation();
```

## <a name="return-value"></a>Valore restituito

**true** se lo stato corrente dell'operazione asincrona *avviato*, ovvero l'operazione deve continuare. In caso contrario, **false**, ovvero l'operazione deve interrompersi.

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe AsyncBase](../windows/asyncbase-class.md)