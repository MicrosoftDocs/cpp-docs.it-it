---
title: 'Operatore comptrrefbase:: IUnknown * * (operatore) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::ComPtrRefBase::operator IUnknown**
dev_langs:
- C++
helpviewer_keywords:
- operator IUnknown** operator
ms.assetid: c2950abf-a7aa-480a-ba41-615703e7f931
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 816c71d2c14b373e63de2b2c8725eb87b40d91e7
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="comptrrefbaseoperator-iunknown-operator"></a>Operatore ComPtrRefBase::operator IUnknown**
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
operator IUnknown**() const;  
```  
  
## <a name="remarks"></a>Note  
 Esegue il cast corrente [PTR _](../windows/comptrrefbase-ptr-data-member.md) membro dati da un puntatore a un-puntatore-a interfaccia IUnknown.  
  
 Viene generato un errore se il ComPtrRefBase corrente non deriva da IUnknown.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [ComPtrRefBase (classe)](../windows/comptrrefbase-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)