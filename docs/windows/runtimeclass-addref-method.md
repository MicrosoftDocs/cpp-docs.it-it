---
title: 'Metodo runtimeclass:: AddRef | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: implements/Microsoft::WRL::RuntimeClass::AddRef
dev_langs: C++
helpviewer_keywords: AddRef method
ms.assetid: 9c705749-680b-4308-bbec-5b601e8e7dbd
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: d99623b75aabf17a0f23090889077db5196924ac
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="runtimeclassaddref-method"></a>Metodo RuntimeClass::AddRef
Incrementa il conteggio dei riferimenti per l'oggetto RuntimeClass corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHOD_(  
   ULONG,  
   AddRef  
)();  
```  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT indica un errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe RuntimeClass](../windows/runtimeclass-class.md)