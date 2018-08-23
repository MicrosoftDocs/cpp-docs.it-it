---
title: 'Metodo synclockwithstatust:: IsLocked | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::IsLocked
dev_langs:
- C++
helpviewer_keywords:
- IsLocked method
ms.assetid: e1b75b7b-c145-471a-aa5d-71abf31f5990
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: d70a2c316f9e7994292f3dc29cef5bce993778ad
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42595063"
---
# <a name="synclockwithstatustislocked-method"></a>Metodo SyncLockWithStatusT::IsLocked

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
bool IsLocked() const;
```

## <a name="remarks"></a>Note

Indica se l'oggetto corrente **SyncLockWithStatusT** oggetto proprietario di una risorsa, ovvero, il **SyncLockWithStatusT** oggetto è *bloccato*.

## <a name="return-value"></a>Valore restituito

**true** se il **SyncLockWithStatusT** oggetto è bloccato; in caso contrario, **false**.

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers::Details

## <a name="see-also"></a>Vedere anche

[Classe SyncLockWithStatusT](../windows/synclockwithstatust-class.md)