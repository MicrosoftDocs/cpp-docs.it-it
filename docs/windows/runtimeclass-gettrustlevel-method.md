---
title: 'Metodo runtimeclass:: Gettrustlevel | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::RuntimeClass::GetTrustLevel
dev_langs:
- C++
helpviewer_keywords:
- GetTrustLevel method
ms.assetid: bd90407e-6dd7-41c3-9ea0-c402c276014a
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 89a00c052ec1191cd57057f52401954397169b88
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="runtimeclassgettrustlevel-method"></a>Metodo RuntimeClass::GetTrustLevel

Ottiene il livello di attendibilità dell'oggetto RuntimeClass corrente.

## <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(GetTrustLevel)(
    _Out_ TrustLevel* trustLvl
);
```

### <a name="parameters"></a>Parametri

*trustLvl*  
Quando questa operazione viene completata, il livello di attendibilità dell'oggetto RuntimeClass corrente.

## <a name="return-value"></a>Valore restituito

Sempre S_OK.

## <a name="remarks"></a>Note

Un errore di asserzione viene generato se &#95; &#95; WRL_STRICT &#95; &#95; o &#95; &#95; WRL_FORCE_INSPECTABLE_CLASS_MACRO &#95; &#95; non è definito.

## <a name="requirements"></a>Requisiti

**Intestazione:** h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe RuntimeClass](../windows/runtimeclass-class.md)