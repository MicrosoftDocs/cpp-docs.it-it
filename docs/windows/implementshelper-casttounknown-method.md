---
title: 'Metodo implementshelper:: Casttounknown | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::ImplementsHelper::CastToUnknown
dev_langs:
- C++
helpviewer_keywords:
- CastToUnknown method
ms.assetid: 5bcfcbaf-c75f-4d43-87b3-0d6838c838d9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b786bb41e9f0667ebbb81329b2f0977525d4ba96
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42598062"
---
# <a name="implementshelpercasttounknown-method"></a>Metodo ImplementsHelper::CastToUnknown

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
IUnknown* CastToUnknown();
```

## <a name="return-value"></a>Valore restituito

Puntatore sottostante `IUnknown` interfaccia.

## <a name="remarks"></a>Note

Ottiene un puntatore sottostante `IUnknown` interfaccia per l'oggetto corrente `Implements` struttura.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Struttura ImplementsHelper](../windows/implementshelper-structure.md)  
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)