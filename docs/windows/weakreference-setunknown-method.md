---
title: 'Metodo WeakReference:: Setunknown | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::WeakReference::SetUnknown
dev_langs:
- C++
helpviewer_keywords:
- SetUnknown method
ms.assetid: 5dddb9e3-a7c1-4195-8166-97c5ab6e972f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 28b25645b21d3101e2f2b2004f02f29482320808
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33891020"
---
# <a name="weakreferencesetunknown-method"></a>Metodo WeakReference::SetUnknown
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void SetUnknown(  
   _In_ IUnknown* unk  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `unk`  
 Un puntatore al `IUnknown` interfaccia di un oggetto.  
  
## <a name="remarks"></a>Note  
 Imposta il riferimento sicuro corrente `WeakReference` oggetto al puntatore a interfaccia specificato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche
[WeakReference (classe)](../windows/weakreference-class1.md)  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)