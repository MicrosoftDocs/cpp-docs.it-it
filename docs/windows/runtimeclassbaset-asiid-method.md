---
title: 'Metodo runtimeclassbaset:: Asiid | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::RuntimeClassBaseT::AsIID
dev_langs:
- C++
helpviewer_keywords:
- AsIID method
ms.assetid: 90d7df8a-cf9e-4eef-8837-bc1a25f3fa1a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 35d218666f785685e95d737574ff44e276ce84b3
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33892130"
---
# <a name="runtimeclassbasetasiid-method"></a>Metodo RuntimeClassBaseT::AsIID
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename T>  
__forceinline static HRESULT AsIID(  
   _In_ T* implements,  
   REFIID riid,  
   _Deref_out_ void **ppvObject  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Un tipo che implementa l'ID di interfaccia specificato dal parametro `riid`.  
  
 `implements`  
 Una variabile del tipo specificato dal parametro di modello `T`.  
  
 `riid`  
 Per recuperare l'ID di interfaccia.  
  
 `ppvObject`  
 Se questa operazione ha esito positivo, un puntatore-a-a-puntatore all'interfaccia specificata dal parametro `riid`.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario, HRESULT che descrive l'errore.  
  
## <a name="remarks"></a>Note  
 Recupera un puntatore all'ID di interfaccia specificato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura RuntimeClassBaseT](../windows/runtimeclassbaset-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)