---
title: 'Metodo comptrref:: Releaseandgetaddressof | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::ComPtrRef::ReleaseAndGetAddressOf
dev_langs:
- C++
helpviewer_keywords:
- ReleaseAndGetAddressOf method
ms.assetid: 004aac42-e135-41ce-8d1d-4c5969d55004
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 273c8aaded45e04f1564d434c1a4f4a6920c3883
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39647801"
---
# <a name="comptrrefreleaseandgetaddressof-method"></a>Metodo ComPtrRef::ReleaseAndGetAddressOf
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
InterfaceType** ReleaseAndGetAddressOf();  
```  
  
## <a name="return-value"></a>Valore restituito  
 Puntatore all'interfaccia rappresentata da eliminati **ComPtrRef** oggetto.  
  
## <a name="remarks"></a>Note  
 Elimina l'oggetto corrente **ComPtrRef** dell'oggetto e restituisce un puntatore-a-a-puntatore all'interfaccia rappresentata dalle **ComPtrRef** oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [ComPtrRef (classe)](../windows/comptrref-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)