---
title: "CComAutoThreadModule Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CComAutoThreadModule"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "apartment model modules"
  - "CComAutoThreadModule class"
ms.assetid: 13063ea5-a57e-4aac-97d3-227137262811
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CComAutoThreadModule Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

A partire da ATL 7,0, `CComAutoThreadModule` è obsoleto: vedere [Classi del modulo ATL](../../atl/atl-module-classes.md) per ulteriori informazioni.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template<  
class ThreadAllocator= CComSimpleThreadAllocator   
>  
class CComAutoThreadModule :  
public CComModule  
```  
  
#### Parametri  
 `ThreadAllocator`  
 \[in\] la classe che gestisce selezione del thread.  Il valore predefinito è [CComSimpleThreadAllocator](../../atl/reference/ccomsimplethreadallocator-class.md).  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[CreateInstance](../Topic/CComAutoThreadModule::CreateInstance.md)|Selezionare un thread e viene quindi creato un oggetto in apartment collegato.|  
|[GetDefaultThreads](../Topic/CComAutoThreadModule::GetDefaultThreads.md)|\(Proprietà statica\) calcola dinamicamente il numero di thread per il modulo in base al numero di processori.|  
|[L'implementazione](../Topic/CComAutoThreadModule::Init.md)|Crea i thread di modulo.|  
|[Blocca](../Topic/CComAutoThreadModule::Lock.md)|Incrementa il conteggio dei blocchi sul modulo e nel thread corrente.|  
|[Sblocca](../Topic/CComAutoThreadModule::Unlock.md)|Decrementa il conteggio dei blocchi sul modulo e nel thread corrente.|  
  
### Membri di dati  
  
### Membri di dati  
  
|||  
|-|-|  
|[dwThreadID](../Topic/CComAutoThreadModule::dwThreadID.md)|Contiene l'identificatore del thread corrente.|  
|[m\_Allocator](../Topic/CComAutoThreadModule::m_Allocator.md)|Gestisce la selezione del thread.|  
|[m\_nThreads](../Topic/CComAutoThreadModule::m_nThreads.md)|Contiene il numero di thread nel modulo.|  
|[m\_pApartments](../Topic/CComAutoThreadModule::m_pApartments.md)|Gestisce gli apartment di modulo.|  
  
## Note  
  
> [!NOTE]
>  Questa classe è obsoleta, essendo sostituendo le classi derivate [CAtlModule](../../atl/reference/catlmodule-class.md) e [CAtlAutoThreadModule](../../atl/reference/catlautothreadmodule-class.md).  Le informazioni che seguono forniscono con le versioni precedenti ATL.  
  
 `CComAutoThreadModule` deriva da [CComModule](../../atl/reference/ccommodule-class.md) per implementare un server di apartment\- modello e di raccolte COM per i file EXE e i servizi Windows.  `CComAutoThreadModule` utilizza [CComApartment](../../atl/reference/ccomapartment-class.md) per gestire un apartment per ogni thread nel modulo.  
  
 Derivare il form da `CComAutoThreadModule` quando si desidera creare oggetti in più apartment.  È necessario includere anche la macro [DECLARE\_CLASSFACTORY\_AUTO\_THREAD](../Topic/DECLARE_CLASSFACTORY_AUTO_THREAD.md) nella definizione di classe dell'oggetto per specificare [CComClassFactoryAutoThread](../../atl/reference/ccomclassfactoryautothread-class.md) come class factory.  
  
 Per impostazione predefinita, COM ATL AppWizard \(la creazione guidata progetto ATL in Visual Studio .NET\). derivare il form da `CComModule`.  Per utilizzare `CComAutoThreadModule`, modificare la definizione della classe.  Di seguito è riportato un esempio:  
  
 [!code-cpp[NVC_ATL_AxHost#2](../../atl/codesnippet/CPP/ccomautothreadmodule-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [\_ATL\_MODULE](../Topic/_ATL_MODULE.md)  
  
 [CAtlModule](../../atl/reference/catlmodule-class.md)  
  
 `IAtlAutoThreadModule`  
  
 [CAtlModuleT](../../atl/reference/catlmodulet-class.md)  
  
 [CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md)  
  
 [CComModule](../../atl/reference/ccommodule-class.md)  
  
 `CComAutoThreadModule`  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)   
 [Classi di modulo](../../atl/atl-module-classes.md)