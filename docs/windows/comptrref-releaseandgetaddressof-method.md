---
title: 'Metodo comptrref:: Releaseandgetaddressof | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::ComPtrRef::ReleaseAndGetAddressOf
dev_langs:
- C++
helpviewer_keywords:
- ReleaseAndGetAddressOf method
ms.assetid: 004aac42-e135-41ce-8d1d-4c5969d55004
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 03f709feddb1c0e9c82cf80a4bd5f24e531414d3
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42611219"
---
# <a name="comptrrefreleaseandgetaddressof-method"></a>Metodo ComPtrRef::ReleaseAndGetAddressOf

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
InterfaceType** ReleaseAndGetAddressOf();
```

## <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia rappresentata da eliminati **ComPtrRef** oggetto.

## <a name="remarks"></a>Note

Elimina l'oggetto corrente **ComPtrRef** dell'oggetto e restituisce un puntatore-a-a-puntatore all'interfaccia rappresentata dalle **ComPtrRef** oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Classe ComPtrRef](../windows/comptrref-class.md)  
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)