---
title: 'Metodo WeakReference:: Resolve | Documenti Microsoft'
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
ms.openlocfilehash: dccdf7554f8d102230bedc18231feb74625d621b
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33890474"
---
# <a name="weakreferenceresolve-method"></a>Metodo WeakReference::Resolve
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
STDMETHOD(Resolve)  
   (REFIID riid,   
   _Deref_out_opt_ IInspectable **ppvObject  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `riid`  
 ID di interfaccia.  
  
 `ppvObject`  
 Quando questa operazione viene completata, una copia del riferimento forte corrente se il conteggio dei riferimenti forti è diverso da zero.  
  
## <a name="return-value"></a>Valore restituito  
  
-   S_OK se l'operazione ha esito positivo e il conteggio dei riferimenti forti è zero. Il parametro `ppvObject` viene impostato su `nullptr`.  
  
-   S_OK se l'operazione ha esito positivo e il conteggio dei riferimenti forti è diverso da zero. Il `ppvObject` parametro è impostato per il riferimento sicuro.  
  
-   In caso contrario, HRESULT che indica il motivo per questa operazione non riuscita.  
  
## <a name="remarks"></a>Note  
 Imposta il puntatore specificato per il valore di riferimento forte corrente se il conteggio dei riferimenti forti è diverso da zero.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [WeakReference Class1](../windows/weakreference-class1.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)