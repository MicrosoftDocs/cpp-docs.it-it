---
title: 'Operatore comptrref:: InterfaceType * * (operatore) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: client/Microsoft::WRL::Details::ComPtrRef::operator InterfaceType**
dev_langs: C++
helpviewer_keywords: operator InterfaceType** operator
ms.assetid: b32e3240-a4f0-4998-a55f-d4e35dc9a15a
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c2b88451bfad07c76b40f85b6512dc7f01147911
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="comptrrefoperator-interfacetype-operator"></a>Operatore ComPtrRef::operator InterfaceType**
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
operator InterfaceType**();  
```  
  
## <a name="remarks"></a>Note  
 Elimina l'oggetto ComPtrRef corrente e restituisce un puntatore-a-a-puntatore all'interfaccia rappresentata dall'oggetto ComPtrRef.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Comptrref (classe)](../windows/comptrref-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)