---
title: 'Operatore comptrref:: T * operatore | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::ComPtrRef::operator T*
dev_langs:
- C++
helpviewer_keywords:
- operator T* operator
ms.assetid: b4f83370-0ebc-4d56-87c6-1a8ea2d0079b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 472cdaeec78c30d49f3160ac4d632eb95ef8e71a
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39641873"
---
# <a name="comptrrefoperator-t-operator"></a>Operatore ComPtrRef::operator T*
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
operator T*();  
```  
  
## <a name="remarks"></a>Note  
 Restituisce il valore della [PTR _](../windows/comptrrefbase-ptr-data-member.md) membro dei dati dell'oggetto corrente **ComPtrRef** oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [ComPtrRef (classe)](../windows/comptrref-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)