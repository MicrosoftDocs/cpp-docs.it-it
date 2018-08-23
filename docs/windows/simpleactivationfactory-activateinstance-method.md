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
ms.openlocfilehash: f83c98d35ce64ef51a15bccf0f33695fd266d0af
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42609570"
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