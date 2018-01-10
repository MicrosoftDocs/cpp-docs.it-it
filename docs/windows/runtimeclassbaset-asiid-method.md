---
title: 'Metodo runtimeclassbaset:: Asiid | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: implements/Microsoft::WRL::Details::RuntimeClassBaseT::AsIID
dev_langs: C++
helpviewer_keywords: AsIID method
ms.assetid: 90d7df8a-cf9e-4eef-8837-bc1a25f3fa1a
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 482edbcabf368f68a720910717650be78ac11c62
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="runtimeclassbasetasiid-method"></a>Metodo RuntimeClassBaseT::AsIID
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<  
   typename T  
>  
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
 **Intestazione:** h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura RuntimeClassBaseT](../windows/runtimeclassbaset-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)