---
title: 'Metodo simpleactivationfactory:: Activateinstance | Documenti Microsoft'
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
ms.openlocfilehash: 5af4bfd22302b7694b9bafbc1452d636b19cb3c7
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33889423"
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
Al termine di questa operazione, puntatore a un'istanza dell'oggetto specificato da di `Base` il parametro di modello di classe.

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="remarks"></a>Note

Se &#95; &#95;WRL_STRICT&#95; &#95; è definito, assert viene generato un errore se la classe base specificata nel parametro di modello di classe non è derivata da [RuntimeClass](../windows/runtimeclass-class.md), o non è configurato con il nome WinRt o WinRtClassicComMix [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) valore di enumerazione.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe SimpleActivationFactory](../windows/simpleactivationfactory-class.md)