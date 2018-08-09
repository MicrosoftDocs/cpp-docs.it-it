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
ms.openlocfilehash: 9c8bc1962e946a48b6ebebaf072e4cb32559a6de
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40014708"
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

Se `__WRL_STRICT__` è definito, assert viene generato un errore se la classe specificata per il `Base` parametro di modello di classe non è derivato da [RuntimeClass](../windows/runtimeclass-class.md), o non è configurato con il WinRt o WinRtClassicComMix [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) valore di enumerazione.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche
 [Classe SimpleActivationFactory](../windows/simpleactivationfactory-class.md)