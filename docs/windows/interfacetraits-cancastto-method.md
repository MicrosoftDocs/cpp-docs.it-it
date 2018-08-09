---
title: 'Metodo interfacetraits:: Cancastto | Microsoft Docs'
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
ms.openlocfilehash: a2f8712e06838fb2d2269ba307a551997d7bd57c
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40018231"
---
# <a name="interfacetraitscancastto-method"></a>Metodo InterfaceTraits::CanCastTo
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template<typename T>  
static __forceinline bool CanCastTo(  
   _In_ T* ptr,  
   REFIID riid,  
   _Deref_out_ void **ppv  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *ptr*  
 Il nome di un puntatore a un tipo.  
  
 *riid*  
 ID dell'interfaccia `Base`.  
  
 *ppv*  
 Se questa operazione ha esito positivo, *ppv* punta a un'interfaccia specificata da `Base`. In caso contrario, *ppv* è impostata su **nullptr**.  
  
## <a name="return-value"></a>Valore restituito  
 **true** se questa operazione ha esito positivo e *ptr* viene eseguito il cast a un puntatore al `Base`; in caso contrario, **false** .  
  
## <a name="remarks"></a>Note  
 Indica se il puntatore specificato può essere convertito in un puntatore a `Base`.  
  
 Per altre informazioni sulle `Base`, vedere la **typedef pubblici** sezione [InterfaceTraits (struttura)](../windows/interfacetraits-structure.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [InterfaceTraits (struttura)](../windows/interfacetraits-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)