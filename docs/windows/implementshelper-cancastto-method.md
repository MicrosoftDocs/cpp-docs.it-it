---
title: 'Metodo implementshelper:: Cancastto | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: implements/Microsoft::WRL::Details::ImplementsHelper::CanCastTo
dev_langs: C++
helpviewer_keywords: CanCastTo method
ms.assetid: 9ae6fa17-d0b1-4e31-9ae5-da6ae4026e32
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 85efecee06794badaa155a988234aa602ba7fd6a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="implementshelpercancastto-method"></a>Metodo ImplementsHelper::CanCastTo
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
HRESULT CanCastTo(  
   REFIID riid,  
   _Deref_out_ void **ppv  
);  
  
HRESULT CanCastTo(  
   _In_ const IID &iid,  
   _Deref_out_ void **ppv  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `riid`  
 Riferimento all'ID di interfaccia.  
  
 `ppv`  
 Se questa operazione ha esito positivo, un puntatore a interfaccia specificato da `riid` o `iid`.  
  
 `iid`  
 Riferimento all'ID di interfaccia.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="remarks"></a>Note  
 Ottiene un puntatore all'ID di interfaccia specificato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [ImplementsHelper (struttura)](../windows/implementshelper-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)