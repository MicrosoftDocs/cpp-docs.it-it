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
ms.openlocfilehash: 1234c667426937f5d40937c5f2bcc72949e827ae
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40012394"
---
# <a name="simpleactivationfactorygettrustlevel-method"></a>Metodo SimpleActivationFactory::GetTrustLevel
Ottiene il livello di attendibilità di un'istanza della classe specificata per il `Base` parametro di modello di classe.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
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