---
title: 'Metodo runtimeclass:: QueryInterface | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: implements/Microsoft::WRL::RuntimeClass::QueryInterface
dev_langs: C++
helpviewer_keywords: QueryInterface method
ms.assetid: 8f01f4a1-3fa2-4a8e-88c6-03629236cb9f
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f1a103ed6b8c71a285f01cec11d900ee36c21b65
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="runtimeclassqueryinterface-method"></a>Metodo RuntimeClass::QueryInterface
Recupera un puntatore all'ID di interfaccia specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
STDMETHOD(  
   QueryInterface  
)  
   (REFIID riid,   
   _Deref_out_ void **ppvObject);  
```  
  
#### <a name="parameters"></a>Parametri  
 `riid`  
 ID di interfaccia.  
  
 `ppvObject`  
 Al termine di questo opereation, un puntatore a interfaccia specificato per il `riid` parametro.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe RuntimeClass](../windows/runtimeclass-class.md)