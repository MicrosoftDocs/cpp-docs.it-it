---
title: 'Metodo interfacetraits:: Fillarraywithiid | Documenti Microsoft'
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
ms.openlocfilehash: e6e32b2e40ba9dc2b8085f8edc99beb899e90ace
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33877497"
---
# <a name="interfacetraitsfillarraywithiid-method"></a>Metodo InterfaceTraits::FillArrayWithIid
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
__forceinline static void FillArrayWithIid(  
   _Inout_ unsigned long &index,  
   _In_ IID* iids  
);  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `index`  
 Puntatore a un campo che contiene un valore di indice in base zero.  
  
 `iids`  
 Matrice di ID di interfaccia.  
  
## <a name="remarks"></a>Note  
 Assegna l'ID di interfaccia di `Base` all'elemento della matrice specificata dall'argomento dell'indice.  
  
 Conflitto con il nome di questa API, solo un array è stato modificato; non è l'intera matrice.  
  
 Per ulteriori informazioni su `Base`, vedere la sezione typedef pubblici in [InterfaceTraits (struttura)](../windows/interfacetraits-structure.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [InterfaceTraits (struttura)](../windows/interfacetraits-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)