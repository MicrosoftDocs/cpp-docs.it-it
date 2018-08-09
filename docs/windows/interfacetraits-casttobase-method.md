---
title: 'Metodo interfacetraits:: Casttobase | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::InterfaceTraits::CastToBase
dev_langs:
- C++
helpviewer_keywords:
- CastToBase method
ms.assetid: 0591a017-0adf-4358-b946-eb0a307ce7f2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 32c45c5445b6258f1ed2e1da220b2899a76aa9c9
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40017071"
---
# <a name="interfacetraitscasttobase-method"></a>Metodo InterfaceTraits::CastToBase
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template<typename T>  
static __forceinline Base* CastToBase(  
   _In_ T* ptr  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *T*  
 Il tipo del parametro *ptr*.  
  
 *ptr*  
 Puntatore a un tipo *T*.  
  
## <a name="return-value"></a>Valore restituito  
 Un puntatore a `Base`.  
  
## <a name="remarks"></a>Note  
 Viene eseguito il cast il puntatore specificato a un puntatore a `Base`.  
  
 Per altre informazioni sulle `Base`, vedere la sezione typedef pubblici [InterfaceTraits (struttura)](../windows/interfacetraits-structure.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [InterfaceTraits (struttura)](../windows/interfacetraits-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)