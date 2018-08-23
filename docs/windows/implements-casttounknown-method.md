---
title: 'Metodo Implements:: casttounknown | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Implements::CastToUnknown
dev_langs:
- C++
helpviewer_keywords:
- CastToUnknown method
ms.assetid: ca3324f7-4136-406b-8698-7389f4f3d3c7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 988580a34c030c84c50adfff2741408be4b249cd
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42586358"
---
# <a name="implementscasttounknown-method"></a>Metodo Implements::CastToUnknown

Ottiene un puntatore sottostante `IUnknown` interfaccia.

## <a name="syntax"></a>Sintassi

```cpp
__forceinline IUnknown* CastToUnknown();
```

## <a name="return-value"></a>Valore restituito

Questa operazione ha esito positivo e restituisce sempre il `IUnknown` puntatore.

## <a name="remarks"></a>Note

Funzione di supporto interno.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Struttura Implements](../windows/implements-structure.md)