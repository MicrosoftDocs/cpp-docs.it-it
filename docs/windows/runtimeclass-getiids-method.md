---
title: 'Metodo runtimeclass:: Getiids | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::RuntimeClass::GetIids
dev_langs:
- C++
helpviewer_keywords:
- GetIids method
ms.assetid: 826a67d1-ebc4-4940-b5d5-7cd66885e4a1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c309c97b9c9ce057ca67ab4b5d729c61d803ea5a
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33888419"
---
# <a name="runtimeclassgetiids-method"></a>Metodo RuntimeClass::GetIids
Ottiene una matrice che può contenere l'interfaccia implementato da ID dell'oggetto RuntimeClass corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHOD(  
   GetIids  
)  
   (_Out_ ULONG *iidCount,   
   _Deref_out_ _Deref_post_cap_(*iidCount) IID **iids);  
```  
  
#### <a name="parameters"></a>Parametri  
 `iidCount`  
 Al termine di questa operazione, il numero totale di elementi nella matrice `iids`.  
  
 `iids`  
 Quando questa operazione viene completata, un puntatore a una matrice di ID di interfaccia.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario, E_OUTOFMEMORY.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe RuntimeClass](../windows/runtimeclass-class.md)