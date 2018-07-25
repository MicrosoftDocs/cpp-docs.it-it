---
title: 'Metodo interfacetraits:: Cancastto | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::InterfaceTraits::CanCastTo
dev_langs:
- C++
helpviewer_keywords:
- CanCastTo method
ms.assetid: 275847cb-69ea-42bf-910f-05ba6ef8b48d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e2a0a37f4ef9fa8f2aa92405b4b2c01d99386555
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33879581"
---
# <a name="interfacetraitscancastto-method"></a>Metodo InterfaceTraits::CanCastTo
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
template<typename T>  
static __forceinline bool CanCastTo(  
   _In_ T* ptr,  
   REFIID riid,  
   _Deref_out_ void **ppv  
);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `ptr`  
 Il nome di un puntatore a un tipo.  
  
 `riid`  
 L'ID di interfaccia di `Base`.  
  
 `ppv`  
 Se questa operazione ha esito positivo, `ppv` punta all'interfaccia specificata da `Base`. In caso contrario, `ppv` è impostato su `nullptr`.  
  
## <a name="return-value"></a>Valore restituito  
 `true` Se questa operazione ha esito positivo e `ptr` viene eseguito il cast a un puntatore a `Base`; in caso contrario, `false` .  
  
## <a name="remarks"></a>Note  
 Indica se il puntatore specificato può essere convertito in un puntatore a `Base`.  
  
 Per ulteriori informazioni su `Base`, vedere la sezione typedef pubblici in [InterfaceTraits (struttura)](../windows/interfacetraits-structure.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [InterfaceTraits (struttura)](../windows/interfacetraits-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)