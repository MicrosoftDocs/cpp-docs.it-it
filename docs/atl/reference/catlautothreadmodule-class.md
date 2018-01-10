---
title: Classe CAtlAutoThreadModule | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAtlAutoThreadModule
- atlbase/ATL::CAtlAutoThreadModule
dev_langs: C++
helpviewer_keywords: CAtlAutoThreadModule class
ms.assetid: 3be834aa-55ef-403e-94ae-41979691b15f
caps.latest.revision: "19"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 1845ecea273ece212b65d61b169cbd8f894a60a0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="catlautothreadmodule-class"></a>Classe CAtlAutoThreadModule
Questa classe implementa un server di pool di thread, modello di apartment COM.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CAtlAutoThreadModule : public CAtlAutoThreadModuleT<CAtlAutoThreadModule>
```  
  
## <a name="remarks"></a>Note  
 `CAtlAutoThreadModule`deriva da [CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md) e implementazione di un server di pool di thread, modello di apartment COM. `CAtlAutoThreadModule`Usa [CComApartment](../../atl/reference/ccomapartment-class.md) per gestire un apartment per ogni thread nel modulo.  
  
 È necessario utilizzare il [: DECLARE_CLASSFACTORY_AUTO_THREAD](aggregation-and-class-factory-macros.md#declare_classfactory_auto_thread) macro nella definizione di classe dell'oggetto per specificare [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) come la class factory. È quindi necessario aggiungere una singola istanza di una classe derivata da `CAtlAutoThreadModuleT` , ad esempio `CAtlAutoThreadModule`. Ad esempio:  
  
 `CAtlAutoThreadModule _AtlAutoModule; // name is immaterial.`  
  
> [!NOTE]
>  Questa classe sostituisce obsoleta [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md) classe.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IAtlAutoThreadModule`  
  
 [CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md)  
  
 `CAtlAutoThreadModule`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md)   
 [Classe IAtlAutoThreadModule](../../atl/reference/iatlautothreadmodule-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Classi Module](../../atl/atl-module-classes.md)
