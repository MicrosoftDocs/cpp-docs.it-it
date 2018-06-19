---
title: 'Metodo ClassFactory:: Release | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ClassFactory::Release
dev_langs:
- C++
helpviewer_keywords:
- Release method
ms.assetid: 49da2002-f9d6-4d7f-8a65-48c20b1bf99f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6aa548bcca7f443a311e594eb3a68b4f7f2f03d1
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33866765"
---
# <a name="classfactoryrelease-method"></a>Metodo ClassFactory::Release
Decrementa il conteggio dei riferimenti per l'oggetto ClassFactory corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHOD_(  
   ULONG,  
   Release  
)();  
```  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe ClassFactory](../windows/classfactory-class.md)