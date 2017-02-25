---
title: "Using IDispEventSimpleImpl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IDispEventSimpleImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IDispEventSimpleImpl class, utilizzo"
ms.assetid: 8640ad1a-4bd0-40a5-b5e4-7322685d7aab
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Using IDispEventSimpleImpl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si utilizza `IDispEventSimpleImpl` per gestire gli eventi, sarà necessario:  
  
-   Derivare la classe da [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md).  
  
-   Aggiungere [mappa del sink di eventi](../Topic/BEGIN_SINK_MAP.md) alla classe.  
  
-   Definire le strutture [\_ATL\_FUNC\_INFORMATION](../atl/reference/atl-func-info-structure.md) che descrivono gli eventi.  
  
-   Aggiungere voci alla mappa del sink di eventi utilizzando la macro [SINK\_ENTRY\_INFORMATION](../Topic/SINK_ENTRY_INFO.md).  
  
-   Implementare i metodi desiderato gestione.  
  
-   Consigli e unadvise origine eventi.  
  
## Esempio  
 L'esempio riportato di seguito viene illustrato come gestire l'evento **DocumentChange** generato dall'oggetto **Applicazione** di Word.  Questo evento viene definito come metodo sull'interfaccia dispatch **ApplicationEvents**.  
  
 l'esempio proviene da [Esempio ATLEventHandling](../top/visual-cpp-samples.md).  
  
 `[`  
  
 `uuid(000209F7-0000-0000-C000-000000000046),`  
  
 `hidden`  
  
 `]`  
  
 `dispinterface ApplicationEvents {`  
  
 `properties:`  
  
 `methods:`  
  
 `[id(0x00000001), restricted, hidden]`  
  
 `void Startup();`  
  
 `[id(0x00000002)]`  
  
 `void Quit();`  
  
 `[id(0x00000003)]`  
  
 `void DocumentChange();`  
  
 `};`  
  
 L'esempio utilizza `#import` per generare file di intestazione necessari dalla libreria dei tipi di Word.  Se si desidera utilizzare questo esempio con altre versioni di Word, è necessario specificare il file corretto della DLL mso.  Ad esempio, Office 2000 fornisce mso9.dll e Office XP fornisce mso.dll.  Questo codice viene semplificato in stdafx.h:  
  
 [!code-cpp[NVC_ATL_EventHandlingSample#1](../atl/codesnippet/CPP/using-idispeventsimpleimpl_1.h)]  
  
 Le uniche informazioni dalla libreria dei tipi effettivamente utilizzata in questo esempio vengono il CLSID dell'oggetto di Word **Applicazione** e dell'IID dell'interfaccia **ApplicationEvents**.  Queste informazioni sono utilizzate solo in fase di compilazione.  
  
 Verrà visualizzato il codice seguente in Simple.h.  Il codice rilevante è indicato dai commenti:  
  
 [!code-cpp[NVC_ATL_EventHandlingSample#3](../atl/codesnippet/CPP/using-idispeventsimpleimpl_2.h)]  
  
 Il codice seguente proviene da Simple.cpp:  
  
 [!code-cpp[NVC_ATL_EventHandlingSample#4](../atl/codesnippet/CPP/using-idispeventsimpleimpl_3.cpp)]  
  
## Vedere anche  
 [Gestione di eventi](../atl/event-handling-and-atl.md)   
 [Esempio ATLEventHandling](../top/visual-cpp-samples.md)