---
title: 'Metodo asyncbase:: Trytransitiontocompleted | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: async/Microsoft::WRL::AsyncBase::TryTransitionToCompleted
dev_langs: C++
helpviewer_keywords: TryTransitionToCompleted method
ms.assetid: 8d038e0a-47ec-4cfc-8aeb-6821282df67a
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 6f278e88a3389016f5005106fd021ce5a67a016a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="asyncbasetrytransitiontocompleted-method"></a>Metodo AsyncBase::TryTransitionToCompleted
Indica se l'operazione asincrona corrente è stata completata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
bool TryTransitionToCompleted(  
   void  
);  
```  
  
## <a name="return-value"></a>Valore restituito  
 `true`Se l'operazione asincrona è stata completata; in caso contrario, `false`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)