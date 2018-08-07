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
ms.openlocfilehash: 98bd73d2c067e6d5bbb4425782de594bbaa47bc1
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39606624"
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

Viene generato un errore di asserzione se &#95; &#95;WRL_STRICT&#95; &#95; o &#95; &#95;WRL_FORCE_INSPECTABLE_CLASS_MACRO&#95; &#95; non è definito.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche
 [Classe RuntimeClass](../windows/runtimeclass-class.md)