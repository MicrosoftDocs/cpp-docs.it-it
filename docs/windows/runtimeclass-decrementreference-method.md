---
title: 'Metodo runtimeclass:: Decrementreference | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::RuntimeClass::DecrementReference
dev_langs:
- C++
ms.assetid: f5ecfeaa-2865-455b-9208-94a0685fd2c6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3c2b83d64315ed03fce0527dc11668265c1db461
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42613143"
---
# <a name="runtimeclassdecrementreference-method"></a>Metodo RuntimeClass::DecrementReference

Decrementa il conteggio dei riferimenti per l'oggetto corrente **RuntimeClass** oggetto.

## <a name="syntax"></a>Sintassi

```cpp
ULONG DecrementReference();
```

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe RuntimeClass](../windows/runtimeclass-class.md)