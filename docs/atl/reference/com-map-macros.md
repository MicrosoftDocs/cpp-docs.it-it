---
title: "COM Map Macros | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COM (interfacce), COM map macros"
ms.assetid: 0f33656d-321f-4996-90cc-9a7f21ab73c3
caps.latest.revision: 16
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COM Map Macros
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Queste macro consentono di definire i mapping dell'interfaccia COM.  
  
|||  
|-|-|  
|[BEGIN\_COM\_MAP](../Topic/BEGIN_COM_MAP.md)|Contrassegna l'inizio delle voci della mappa dell'interfaccia COM.|  
|[COM\_INTERFACE\_ENTRY](../Topic/COM_INTERFACE_ENTRY%20Macros.md)|Fornisce interfacce nella mappa dell'interfaccia COM.|  
|[COM\_INTERFACE\_ENTRY2](../Topic/COM_INTERFACE_ENTRY2.md)|Utilizzare questa macro per evitare ambiguità due branch di ereditarietà.|  
|[COM\_INTERFACE\_ENTRY\_IID](../Topic/COM_INTERFACE_ENTRY_IID.md)|Utilizzare questa macro per fornire l'interfaccia nella mappa COM e per specificare il relativo IID.|  
|[COM\_INTERFACE\_ENTRY2\_IID](../Topic/COM_INTERFACE_ENTRY2_IID.md)|Equivalente a [COM\_INTERFACE\_ENTRY2](../Topic/COM_INTERFACE_ENTRY2.md), a meno che non sia possibile specificare un IID diverso.|  
|[COM\_INTERFACE\_ENTRY\_AGGREGATE](../Topic/COM_INTERFACE_ENTRY_AGGREGATE.md)|Quando l'interfaccia identificata da `iid` viene eseguita una query per, `COM_INTERFACE_ENTRY_AGGREGATE` inoltra a `punk`.|  
|[COM\_INTERFACE\_ENTRY\_AGGREGATE\_BLIND](../Topic/COM_INTERFACE_ENTRY_AGGREGATE_BLIND.md)|Stesso [COM\_INTERFACE\_ENTRY\_AGGREGATE](../Topic/COM_INTERFACE_ENTRY_AGGREGATE.md), eccetto di query per qualsiasi IID di inoltro la query a `punk`.|  
|[COM\_INTERFACE\_ENTRY\_AUTOAGGREGATE](../Topic/COM_INTERFACE_ENTRY_AUTOAGGREGATE.md)|Equivalente a [COM\_INTERFACE\_ENTRY\_AGGREGATE](../Topic/COM_INTERFACE_ENTRY_AGGREGATE.md), tranne se `punk` è **NULL**, crea automaticamente l'aggregazione descritta da `clsid`.|  
|[COM\_INTERFACE\_ENTRY\_AUTOAGGREGATE\_BLIND](../Topic/COM_INTERFACE_ENTRY_AUTOAGGREGATE_BLIND.md)|Stesso [COM\_INTERFACE\_ENTRY\_AUTOAGGREGATE](../Topic/COM_INTERFACE_ENTRY_AUTOAGGREGATE.md), eccetto di query per qualsiasi IID di inoltro la query a `punk`e se `punk` è **NULL**, creando automaticamente l'aggregazione descritta da `clsid`.|  
|[COM\_INTERFACE\_ENTRY\_BREAK](../Topic/COM_INTERFACE_ENTRY_BREAK.md)|Fa sì che il programma a chiamare [DebugBreak](http://msdn.microsoft.com/library/windows/desktop/ms679297) quando l'interfaccia specificata è possibile eseguire una query per.|  
|[COM\_INTERFACE\_ENTRY\_CACHED\_TEAR\_OFF](../Topic/COM_INTERFACE_ENTRY_CACHED_TEAR_OFF.md)|Salva i dati venga gestita specifici per ogni istanza.|  
|[COM\_INTERFACE\_ENTRY\_TEAR\_OFF](../Topic/COM_INTERFACE_ENTRY_TEAR_OFF.md)|Espone i un'interfaccia tear\-off.|  
|[COM\_INTERFACE\_ENTRY\_CHAIN](../Topic/COM_INTERFACE_ENTRY_CHAIN.md)|Elabora la mappa COM della classe base durante l'elaborazione raggiunge questa voce nella mappa COM.|  
|[COM\_INTERFACE\_ENTRY\_FUNC](../Topic/COM_INTERFACE_ENTRY_FUNC.md)|Un meccanismo generale per l'associazione viene eseguita dall'in `QueryInterface` ATL la logica.|  
|[COM\_INTERFACE\_ENTRY\_FUNC\_BLIND](../Topic/COM_INTERFACE_ENTRY_FUNC_BLIND.md)|Equivalente a [COM\_INTERFACE\_ENTRY\_FUNC](../Topic/COM_INTERFACE_ENTRY_FUNC.md), eccetto di query per i risultati di IID in una chiamata a `func`.|  
|[COM\_INTERFACE\_ENTRY\_NOINTERFACE](../Topic/COM_INTERFACE_ENTRY_NOINTERFACE.md)|Restituisce **E\_NOINTERFACE** e termina l'elaborazione della mappa COM quando l'interfaccia specificata è possibile eseguire una query per.|  
|[END\_COM\_MAP](../Topic/END_COM_MAP.md)|Contrassegna la fine delle voci della mappa dell'interfaccia COM.|  
  
## Vedere anche  
 [Macros](../../atl/reference/atl-macros.md)   
 [COM Map Global Functions](../../atl/reference/com-map-global-functions.md)