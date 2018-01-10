---
title: 'MakeAllocator:: ~ MakeAllocator distruttore | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: implements/Microsoft::WRL::Details::MakeAllocator::~MakeAllocator
dev_langs: C++
helpviewer_keywords: ~MakeAllocator, destructor
ms.assetid: f1299c5f-cc6b-4d4e-85d4-aee1be0e2b0a
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b56dd9c45aee094d32acb654e32cf5f24a3beb10
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="makeallocatormakeallocator-destructor"></a>Distruttore MakeAllocator::~MakeAllocator
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
~MakeAllocator();  
```  
  
## <a name="remarks"></a>Note  
 Deinizializza l'istanza corrente della classe MakeAllocator.  
  
 Questo distruttore elimina anche la memoria allocata sottostante, se necessario.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [MakeAllocator (classe)](../windows/makeallocator-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)