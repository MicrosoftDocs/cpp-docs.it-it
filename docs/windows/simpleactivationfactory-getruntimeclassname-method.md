---
title: 'Metodo simpleactivationfactory:: Getruntimeclassname | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::SimpleActivationFactory::GetRuntimeClassName
dev_langs:
- C++
ms.assetid: 3aa07487-9a42-46f8-8893-37ba6315e50b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e001d0269c21026bdd00abcdd4d257f11d601cf6
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33889033"
---
# <a name="simpleactivationfactorygetruntimeclassname-method"></a>Metodo SimpleActivationFactory::GetRuntimeClassName

Ottiene il nome della classe di runtime di un'istanza della classe specificata per il `Base` il parametro di modello di classe.

## <a name="syntax"></a>Sintassi

```cpp
STDMETHOD( GetRuntimeClassName )(
    _Out_ HSTRING* runtimeName
);
```

### <a name="parameters"></a>Parametri

*runtimeName*  
Quando questa operazione viene completata, il nome di classe di runtime.

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="remarks"></a>Note

Se &#95; &#95;WRL_STRICT&#95; &#95; è definito, assert viene generato un errore se la classe specificata dal `Base` parametro di modello di classe non è derivato da [RuntimeClass](../windows/runtimeclass-class.md), o non è configurato con il WinRt o WinRtClassicComMix [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) valore di enumerazione.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe SimpleActivationFactory](../windows/simpleactivationfactory-class.md)