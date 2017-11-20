---
title: 'Operatore comptrref:: * (operatore) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: client/Microsoft::WRL::Details::ComPtrRef::operator*
dev_langs: C++
helpviewer_keywords: operator* operator
ms.assetid: 0287ca7a-4ce1-47f7-bab6-714fca3e04bb
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 543f0099a3c6b60d8e6ec289ff560b1ffc4169e2
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="comptrrefoperator-operator"></a>Operatore ComPtrRef::operator*
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
InterfaceType* operator *();  
```  
  
## <a name="return-value"></a>Valore restituito  
 Puntatore all'interfaccia rappresentata dall'oggetto ComPtrRef corrente.  
  
## <a name="remarks"></a>Note  
 Recupera il puntatore all'interfaccia rappresentata dall'oggetto ComPtrRef corrente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Comptrref (classe)](../windows/comptrref-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)