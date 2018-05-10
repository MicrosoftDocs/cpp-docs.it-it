---
title: 'Metodo Implements:: cancastto | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Implements::CanCastTo
dev_langs:
- C++
helpviewer_keywords:
- CanCastTo method
ms.assetid: a8e85c7d-4dcd-446d-bebc-a97da46ce44a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 4fd6e6736c74e1ce895031e17c1d5268eb4ce646
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="implementscancastto-method"></a>Metodo Implements::CanCastTo
Ottiene un puntatore a interfaccia specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
__forceinline HRESULT CanCastTo(  
   REFIID riid,  
   _Deref_out_ void **ppv  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `riid`  
 Un riferimento all'ID di interfaccia.  
  
 `ppv`  
 Se ha esito positivo, un puntatore a interfaccia specificato da `riid`.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario, HRESULT che indica l'errore, ad esempio E_NOINTERFACE.  
  
## <a name="remarks"></a>Note  
 Si tratta di una funzione di supporto interno che esegue un'operazione QueryInterface.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura Implements](../windows/implements-structure.md)