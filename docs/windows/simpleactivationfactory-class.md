---
title: Classe SimpleActivationFactory | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: module/Microsoft::WRL::SimpleActivationFactory
dev_langs: C++
helpviewer_keywords: SimpleActivationFactory class
ms.assetid: aff768e0-0038-4fd7-95d2-ad7d308da41c
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 991d428e90654fd29cfbb9c5c7e110708a05de01
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="simpleactivationfactory-class"></a>SimpleActivationFactory (classe)
Fornisce un meccanismo semplice per creare una classe base di Windows Runtime o COM classica.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<  
   typename Base  
>  
class SimpleActivationFactory : public ActivationFactory<>;  
```  
  
#### <a name="parameters"></a>Parametri  
 `Base`  
 Classe di base.  
  
## <a name="remarks"></a>Note  
 La classe di base deve fornire un costruttore predefinito.  
  
 Esempio di codice riportato di seguito viene illustrato come utilizzare SimpleActivationFactory con la [ActivatableClassWithFactoryEx](../windows/activatableclass-macros.md) (macro).  
  
 `ActivatableClassWithFactoryEx(MyClass, SimpleActivationFactory, MyServerName);`  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo SimpleActivationFactory::ActivateInstance](../windows/simpleactivationfactory-activateinstance-method.md)|Crea un'istanza dell'interfaccia specificata.|  
|[Metodo SimpleActivationFactory::GetRuntimeClassName](../windows/simpleactivationfactory-getruntimeclassname-method.md)|Ottiene il nome della classe di runtime di un'istanza della classe specificata per il `Base` il parametro di modello di classe.|  
|[Metodo SimpleActivationFactory::GetTrustLevel](../windows/simpleactivationfactory-gettrustlevel-method.md)|Ottiene il livello di attendibilità di un'istanza della classe specificata per il `Base` il parametro di modello di classe.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `I0`  
  
 `ChainInterfaces`  
  
 `I0`  
  
 `RuntimeClassBase`  
  
 `ImplementsHelper`  
  
 `DontUseNewUseMake`  
  
 `RuntimeClassFlags`  
  
 `RuntimeClassBaseT`  
  
 `RuntimeClass`  
  
 `ActivationFactory`  
  
 `SimpleActivationFactory`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** module.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)