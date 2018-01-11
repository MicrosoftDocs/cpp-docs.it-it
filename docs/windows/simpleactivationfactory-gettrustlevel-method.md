---
title: 'Metodo simpleactivationfactory:: Gettrustlevel | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: module/Microsoft::WRL::SimpleActivationFactory::GetTrustLevel
dev_langs: C++
ms.assetid: 99aa9bc9-d954-4a6f-902b-4abe00e43039
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 608f67267b8a82341ff3beb3e27f8e0eb9891c8a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe SimpleActivationFactory](../windows/simpleactivationfactory-class.md)