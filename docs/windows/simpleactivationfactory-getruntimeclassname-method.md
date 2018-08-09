---
title: 'Metodo simpleactivationfactory:: Getruntimeclassname | Microsoft Docs'
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
ms.openlocfilehash: 1c6c6731c4c7787f3d81a4e67eac2861a46bfe1a
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39644408"
---
# <a name="simpleactivationfactorygetruntimeclassname-method"></a>Metodo SimpleActivationFactory::GetRuntimeClassName

Ottiene il nome di classe di runtime di un'istanza della classe specificata per il `Base` parametro di modello di classe.

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

Se &#95; &#95;WRL_STRICT&#95; &#95; è definito, assert viene generato un errore se la classe specificata dalle `Base` parametro di modello di classe non è derivato da [RuntimeClass](../windows/runtimeclass-class.md), o non è configurato con il WinRt o WinRtClassicComMix [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) valore di enumerazione.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche
 [Classe SimpleActivationFactory](../windows/simpleactivationfactory-class.md)