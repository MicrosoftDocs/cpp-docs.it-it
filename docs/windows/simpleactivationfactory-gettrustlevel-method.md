---
title: 'Metodo simpleactivationfactory:: Gettrustlevel | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::SimpleActivationFactory::GetTrustLevel
dev_langs:
- C++
ms.assetid: 99aa9bc9-d954-4a6f-902b-4abe00e43039
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b08ce574a8370eb0029a702f8fa4a4b12c6e93c1
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33892618"
---
# <a name="simpleactivationfactorygettrustlevel-method"></a>Metodo SimpleActivationFactory::GetTrustLevel
Ottiene il livello di attendibilità di un'istanza della classe specificata per il `Base` il parametro di modello di classe.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHOD(  
   GetTrustLevel  
)(_Out_ TrustLevel* trustLvl);  
```  
  
#### <a name="parameters"></a>Parametri  
 `trustLvl`  
 Quando questa operazione viene completata, il livello di attendibilità dell'oggetto della classe corrente.  
  
## <a name="return-value"></a>Valore restituito  
 Sempre S_OK.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe SimpleActivationFactory](../windows/simpleactivationfactory-class.md)