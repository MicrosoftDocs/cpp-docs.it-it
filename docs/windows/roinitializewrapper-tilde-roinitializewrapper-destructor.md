---
title: 'RoInitializeWrapper:: ~ RoInitializeWrapper distruttore | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::RoInitializeWrapper::~RoInitializeWrapper
dev_langs:
- C++
ms.assetid: afef4c1f-ffde-4cd2-8654-8de4182eb5f4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5548eb413f0d5cd4c72983e00bdf65f61bb98f6d
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42597923"
---
# <a name="roinitializewrapperroinitializewrapper-destructor"></a>Distruttore RoInitializeWrapper::~RoInitializeWrapper

Non inizializza il Runtime di Windows.

## <a name="syntax"></a>Sintassi

```cpp
~RoInitializeWrapper()  
```

## <a name="remarks"></a>Note

Il **RoInitializeWrapper** classe richiama `Windows::Foundation::Uninitialize()`.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="see-also"></a>Vedere anche

[Classe HandleT](../windows/handlet-class.md)