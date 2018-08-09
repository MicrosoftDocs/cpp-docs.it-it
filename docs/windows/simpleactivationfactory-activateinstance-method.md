---
title: 'Metodo simpleactivationfactory:: Activateinstance | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::SimpleActivationFactory::ActivateInstance
dev_langs:
- C++
helpviewer_keywords:
- ActivateInstance method
ms.assetid: 4f836e51-5a6c-4bad-b871-9f25199298b4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 260d7e2993bd92297167c23458d37ba80919306f
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40013385"
---
# <a name="simpleactivationfactoryactivateinstance-method"></a>Metodo SimpleActivationFactory::ActivateInstance

Crea un'istanza dell'interfaccia specificata.

## <a name="syntax"></a>Sintassi

```cpp
STDMETHOD( ActivateInstance )(
    _Deref_out_ IInspectable **ppvObject
);
```

### <a name="parameters"></a>Parametri
*ppvObject*  
Quando questa operazione viene completata, puntatore a un'istanza dell'oggetto specificato da di `Base` parametro di modello di classe.

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="remarks"></a>Note

Se `__WRL_STRICT__` è definito, assert viene generato un errore se la classe base specificata nel parametro di modello di classe non è derivata da [RuntimeClass](../windows/runtimeclass-class.md), o non è configurato con il WinRt o WinRtClassicComMix [ RuntimeClassType](../windows/runtimeclasstype-enumeration.md) valore di enumerazione.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche
 [Classe SimpleActivationFactory](../windows/simpleactivationfactory-class.md)