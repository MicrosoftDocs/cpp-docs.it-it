---
title: 'Metodo runtimeclass:: Gettrustlevel | Documenti Microsoft'
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
ms.openlocfilehash: bc588950cc8752a7c2b8e1ddf00b2193aaf0f395
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33892631"
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

Viene generato un errore di asserzione se &#95; &#95;WRL_STRICT&#95; &#95; o &#95; &#95;WRL_FORCE_INSPECTABLE_CLASS_MACRO&#95; &#95; non è definito.

## <a name="requirements"></a>Requisiti

**Intestazione:** FTM.

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe RuntimeClass](../windows/runtimeclass-class.md)