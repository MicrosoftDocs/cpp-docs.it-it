---
title: 'Metodo simpleactivationfactory:: Gettrustlevel | Microsoft Docs'
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
ms.openlocfilehash: 22fa30a3662897b171245da194573ec17da2f64e
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39645188"
---
# <a name="simpleactivationfactorygettrustlevel-method"></a>Metodo SimpleActivationFactory::GetTrustLevel
Ottiene il livello di attendibilità di un'istanza della classe specificata per il `Base` parametro di modello di classe.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHOD(  
   GetTrustLevel  
)(_Out_ TrustLevel* trustLvl);  
```  
  
### <a name="parameters"></a>Parametri  
 *trustLvl*  
 Quando questa operazione viene completata, il livello di attendibilità dell'oggetto della classe corrente.  
  
## <a name="return-value"></a>Valore restituito  
 Sempre S_OK.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe SimpleActivationFactory](../windows/simpleactivationfactory-class.md)