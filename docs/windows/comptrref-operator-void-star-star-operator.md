---
title: 'Operatore comptrref:: void * Operator | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::ComPtrRef::operator void**
dev_langs:
- C++
helpviewer_keywords:
- operator void** operator
ms.assetid: f020045c-9de4-4392-8783-73f0fc0761c6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9fb3cd0a4c180073499ec1bdde1ea4703ffbf9e8
ms.sourcegitcommit: 7eadb968405bcb92ffa505e3ad8ac73483e59685
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/23/2018
ms.locfileid: "39207852"
---
# <a name="comptrrefoperator-void-operator"></a>Operatore comptrref:: void\* \* operatore
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
operator void**() const;  
```  
  
## <a name="remarks"></a>Note  
 Elimina l'oggetto ComPtrRef corrente, viene eseguito il cast di puntatore a interfaccia che è stato rappresentato dall'oggetto ComPtrRef come un puntatore a puntatore-a `void`e quindi restituisce il puntatore di cast.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [ComPtrRef (classe)](../windows/comptrref-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)
