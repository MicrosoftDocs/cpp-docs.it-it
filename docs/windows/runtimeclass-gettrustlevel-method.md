---
title: 'Metodo runtimeclass:: Gettrustlevel | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::RuntimeClass::GetTrustLevel
dev_langs:
- C++
helpviewer_keywords:
- GetTrustLevel method
ms.assetid: bd90407e-6dd7-41c3-9ea0-c402c276014a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c714f37a53e111c90333352610fd73532ac86fe7
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42599832"
---
# <a name="runtimeclassgettrustlevel-method"></a>Metodo RuntimeClass::GetTrustLevel

Ottiene il livello di attendibilità dell'oggetto corrente **RuntimeClass** oggetto.

## <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetTrustLevel)(
    _Out_ TrustLevel* trustLvl
);
```

### <a name="parameters"></a>Parametri

*trustLvl*  
Al termine di questa operazione, il livello di attendibilità dell'oggetto corrente **RuntimeClass** oggetto.

## <a name="return-value"></a>Valore restituito

Sempre S_OK.

## <a name="remarks"></a>Note

Viene generato un errore di asserzione se `__WRL_STRICT__` o `__WRL_FORCE_INSPECTABLE_CLASS_MACRO__` non è definito.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe RuntimeClass](../windows/runtimeclass-class.md)