---
title: 'Metodo WeakReference:: Setunknown | Microsoft Docs'
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
ms.openlocfilehash: 2a46db38bf17b1af5ae748cf90689509d6d21b0d
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39647680"
---
# <a name="weakreferencesetunknown-method"></a>Metodo WeakReference::SetUnknown
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void SetUnknown(  
   _In_ IUnknown* unk  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *UNK*  
 Un puntatore al `IUnknown` interfaccia di un oggetto.  
  
## <a name="remarks"></a>Note  
 Imposta il riferimento sicuro dell'oggetto corrente **WeakReference** oggetto al puntatore a interfaccia specificato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche
 [Classe WeakReference](../windows/weakreference-class1.md)  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)