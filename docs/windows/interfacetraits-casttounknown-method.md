---
title: 'Metodo interfacetraits:: Casttounknown | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::InterfaceTraits::CastToUnknown
dev_langs:
- C++
helpviewer_keywords:
- CastToUnknown method
ms.assetid: aca47fa0-3c60-47f2-a73c-258f7160adff
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a2fdc46f57f834c3e8217049574ea504aae16f03
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33878125"
---
# <a name="interfacetraitscasttounknown-method"></a>Metodo InterfaceTraits::CastToUnknown
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<typename T>  
static __forceinline IUnknown* CastToUnknown(  
   _In_ T* ptr  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Il tipo di parametro `ptr`.  
  
 `ptr`  
 Puntatore al tipo `T`.  
  
## <a name="return-value"></a>Valore restituito  
 Puntatore per l'interfaccia IUnknown da cui `Base` derivato.  
  
## <a name="remarks"></a>Note  
 Esegue il cast il puntatore specificato a un puntatore a IUnknown.  
  
 Per ulteriori informazioni su `Base`, vedere la sezione typedef pubblici in [InterfaceTraits (struttura)](../windows/interfacetraits-structure.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [InterfaceTraits (struttura)](../windows/interfacetraits-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)