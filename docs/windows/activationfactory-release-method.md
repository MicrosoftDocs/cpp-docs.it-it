---
title: 'Metodo activationfactory:: Release | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ActivationFactory::Release
dev_langs:
- C++
helpviewer_keywords:
- Release method
ms.assetid: 5bc25ff0-ee3c-4a2d-a9b6-2d8f158033ad
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f2617df132f31d63379a3bd27a49409b1599a090
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33854837"
---
# <a name="activationfactoryrelease-method"></a>Metodo ActivationFactory::Release
Decrementa il conteggio dei riferimenti dell'oggetto ActivationFactory corrente.  
  
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
 [Classe ActivationFactory](../windows/activationfactory-class.md)