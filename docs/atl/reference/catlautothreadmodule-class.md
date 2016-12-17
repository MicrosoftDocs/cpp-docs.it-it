---
title: "CAtlAutoThreadModule Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CAtlAutoThreadModule"
  - "CAtlAutoThreadModule"
  - "ATL::CAtlAutoThreadModule"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlAutoThreadModule class"
ms.assetid: 3be834aa-55ef-403e-94ae-41979691b15f
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAtlAutoThreadModule Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa i thread raccolte, server COM apartment\- modello.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      class CAtlAutoThreadModule :  
public CAtlAutoThreadModuleT< CAtlAutoThreadModule >  
```  
  
## Note  
 `CAtlAutoThreadModule` deriva da [CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md) e implementa i thread raccolte, server COM apartment\- modello.  `CAtlAutoThreadModule` utilizza [CComApartment](../../atl/reference/ccomapartment-class.md) per gestire un apartment per ogni thread nel modulo.  
  
 È necessario utilizzare la macro [DECLARE\_CLASSFACTORY\_AUTO\_THREAD](../Topic/DECLARE_CLASSFACTORY_AUTO_THREAD.md) nella definizione di classe dell'oggetto per specificare [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) come class factory.  È quindi necessario aggiungere una singola istanza di una classe derivata da `CAtlAutoThreadModuleT` come `CAtlAutoThreadModule`.  Di seguito è riportato un esempio:  
  
 `CAtlAutoThreadModule _AtlAutoModule; // name is immaterial.`  
  
> [!NOTE]
>  Questa classe sostituisce la classe precedente [CComAutoThreadModule](../../atl/reference/ccomautothreadmodule-class.md).  
  
## Gerarchia di ereditarietà  
 `IAtlAutoThreadModule`  
  
 [CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md)  
  
 `CAtlAutoThreadModule`  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [CAtlAutoThreadModuleT Class](../../atl/reference/catlautothreadmodulet-class.md)   
 [IAtlAutoThreadModule Class](../../atl/reference/iatlautothreadmodule-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Classi di modulo](../../atl/atl-module-classes.md)