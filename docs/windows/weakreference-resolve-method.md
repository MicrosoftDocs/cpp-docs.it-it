---
title: 'Metodo WeakReference:: Resolve | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::WeakReference::Resolve
dev_langs:
- C++
helpviewer_keywords:
- Resolve method
ms.assetid: fc65a4b7-48a0-4d64-a793-37f566fdd8e7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 93df4ebf46b187cab63fbfaed2e273c55e7c0d84
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40013249"
---
# <a name="weakreferenceresolve-method"></a>Metodo WeakReference::Resolve
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
STDMETHOD(Resolve)  
   (REFIID riid,   
   _Deref_out_opt_ IInspectable **ppvObject  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *riid*  
 ID di interfaccia.  
  
 *ppvObject*  
 Quando questa operazione viene completata, una copia del riferimento forte corrente se il conteggio dei riferimenti forti è diverso da zero.  
  
## <a name="return-value"></a>Valore restituito  
  
-   S_OK se l'operazione ha esito positivo e il conteggio dei riferimenti forti è uguale a zero. Il *ppvObject* parametro è impostato su **nullptr**.  
  
-   S_OK se l'operazione ha esito positivo e il conteggio dei riferimenti forti è diverso da zero. Il *ppvObject* parametro è impostato per il riferimento sicuro.  
  
-   In caso contrario, HRESULT che indica il motivo per questa operazione non riuscita.  
  
## <a name="remarks"></a>Note  
 Imposta il puntatore specificato per il valore di riferimento forte corrente se il conteggio dei riferimenti forti è diverso da zero.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [WeakReference Class1](../windows/weakreference-class1.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)