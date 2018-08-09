---
title: 'Metodo simpleclassfactory:: CreateInstance | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::SimpleClassFactory::CreateInstance
dev_langs:
- C++
helpviewer_keywords:
- CreateInstance method
ms.assetid: 17b7947a-2608-49d9-b730-fef76501c9bc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f25e85e59769f822a6c732cc0911c564c0104f96
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39651080"
---
# <a name="simpleclassfactorycreateinstance-method"></a>Metodo SimpleClassFactory::CreateInstance

Crea un'istanza dell'interfaccia specificata.

## <a name="syntax"></a>Sintassi

```cpp
STDMETHOD( CreateInstance )(
   _Inout_opt_ IUnknown* pUnkOuter,
   REFIID riid,
   _Deref_out_ void** ppvObject
);
```

### <a name="parameters"></a>Parametri

*pUnkOuter*  
Deve essere **nullptr**; in caso contrario, il valore restituito è CLASS_E_NOAGGREGATION.

SimpleClassFactory non supporta l'aggregazione. Se erano supportate aggregazione e l'oggetto da creare faceva parte di un'aggregazione *pUnkOuter* sarebbe un puntatore all'interfaccia di controllo `IUnknown` interfaccia dell'aggregazione.

*riid*  
ID di interfaccia dell'oggetto da creare.

*ppvObject*  
Quando questa operazione viene completata, puntatore a un'istanza dell'oggetto specificato per il *riid* parametro.

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="remarks"></a>Note

Se &#95; &#95;WRL_STRICT&#95; &#95; è definito, assert viene generato un errore se la classe base specificata nel parametro di modello di classe non è derivata da [RuntimeClass](../windows/runtimeclass-class.md), o non è configurato con il ClassicCom o WinRtClassicComMix [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) valore di enumerazione.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche
 [Classe SimpleClassFactory](../windows/simpleclassfactory-class.md)