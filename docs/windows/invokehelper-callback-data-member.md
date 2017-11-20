---
title: Membro dati InvokeHelper::callback_ | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: event/Microsoft::WRL::Details::InvokeHelper::callback_
dev_langs: C++
helpviewer_keywords: callback_ data member
ms.assetid: 6f0cbf6d-0448-46f8-ba71-bd6fd8702e3a
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 6fc6f6876bffbad693d05c4f1154df2dbba77811
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="invokehelpercallback-data-member"></a>Membro dati InvokeHelper::callback_
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
TCallback callback_;  
```  
  
## <a name="remarks"></a>Note  
 Rappresenta il gestore eventi da chiamare quando si verifica un evento.  
  
 Il `TCallback` modello parametro specifica il tipo del gestore dell'evento.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [InvokeHelper (struttura)](../windows/invokehelper-structure.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)