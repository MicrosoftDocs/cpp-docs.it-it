---
title: Membro dati EventSource::targets_ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::EventSource::targets_
dev_langs:
- C++
helpviewer_keywords:
- targets_ data member
ms.assetid: 5d5cee05-3315-4514-bce2-19173c923c7d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: fcdcb759c90009410f76a4b10039a0d976ca0cc4
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42605115"
---
# <a name="eventsourcetargets-data-member"></a>Membro dati EventSource::targets_

Matrice di uno o più gestori di eventi.

## <a name="syntax"></a>Sintassi

```cpp
ComPtr<Details::EventTargetArray> targets_;
```

## <a name="remarks"></a>Note

Quando l'evento rappresentato dall'oggetto corrente **EventSource** oggetto è presente, vengono chiamati i gestori di eventi.

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche
[Classe EventSource](../windows/eventsource-class.md)