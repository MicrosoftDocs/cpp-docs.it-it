---
title: 'Operator IUnknown * * operatore comptrrefbase:: | Microsoft Docs'
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
ms.openlocfilehash: c2ec20dca7bb0a37adae576a8b5a9adfad027b21
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39465815"
---
# <a name="comptrrefbaseoperator-iunknown-operator"></a>Operatore ComPtrRefBase::operator IUnknown**
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
operator IUnknown**() const;  
```  
  
## <a name="remarks"></a>Note  
 L'oggetto corrente viene eseguito il cast [PTR _](../windows/comptrrefbase-ptr-data-member.md) membro dati da un puntatore a un oggetto-puntatore-al `IUnknown` interfaccia.  
  
 Viene generato un errore se l'oggetto corrente **ComPtrRefBase** non deriva da `IUnknown`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [ComPtrRefBase (classe)](../windows/comptrrefbase-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)