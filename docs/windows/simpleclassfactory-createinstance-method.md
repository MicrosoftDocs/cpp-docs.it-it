---
title: 'Metodo simpleclassfactory:: CreateInstance | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: module/Microsoft::WRL::SimpleClassFactory::CreateInstance
dev_langs: C++
helpviewer_keywords: CreateInstance method
ms.assetid: 17b7947a-2608-49d9-b730-fef76501c9bc
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 68778eb1b5421cfcf22261d8b1c1efd99bc32c50
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
Deve essere `nullptr`; in caso contrario, il valore restituito è CLASS_E_NOAGGREGATION.

SimpleClassFactory non supporta l'aggregazione. Se sono supportati l'aggregazione e l'oggetto creato faceva parte di un'aggregazione, `pUnkOuter` sarebbe un puntatore a interfaccia IUnknown di controllo della funzione di aggregazione.

*riid*  
ID di interfaccia dell'oggetto da creare.

*ppvObject*  
Quando questa operazione viene completata, puntatore a un'istanza dell'oggetto specificato per il `riid` parametro.

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="remarks"></a>Note

Se &#95; &#95; WRL_STRICT &#95; &#95; è definito, assert viene generato un errore se la classe base specificata nel parametro di modello di classe non è derivata da [RuntimeClass](../windows/runtimeclass-class.md), o non è configurato con il ClassicCom o WinRtClassicComMix [RuntimeClassType ](../windows/runtimeclasstype-enumeration.md) valore di enumerazione.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe SimpleClassFactory](../windows/simpleclassfactory-class.md)