---
title: 'Metodo interfacetraits:: Fillarraywithiid | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::InterfaceTraits::FillArrayWithIid
dev_langs:
- C++
helpviewer_keywords:
- FillArrayWithIid method
ms.assetid: 73583177-adc9-4fcb-917d-fa7e6d07c990
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1ef552e5025a18eb4c778f9d08389d2b7e3634d5
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39605656"
---
# <a name="interfacetraitsfillarraywithiid-method"></a>Metodo InterfaceTraits::FillArrayWithIid
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
__forceinline static void FillArrayWithIid(  
   _Inout_ unsigned long &index,  
   _In_ IID* iids  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *index*  
 Puntatore a un campo che contiene un valore di indice in base zero.  
  
 *IID*  
 Matrice ID di interfaccia.  
  
## <a name="remarks"></a>Note  
 Assegna l'ID dell'interfaccia `Base` all'elemento della matrice specificata dall'argomento dell'indice.  
  
 Diversamente dal nome di questa API, un solo array è stato modificato; non l'intera matrice.  
  
 Per altre informazioni sulle `Base`, vedere la sezione typedef pubblici [InterfaceTraits (struttura)](../windows/interfacetraits-structure.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [InterfaceTraits (struttura)](../windows/interfacetraits-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)