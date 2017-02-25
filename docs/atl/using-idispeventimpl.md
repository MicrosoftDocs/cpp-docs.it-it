---
title: "Using IDispEventImpl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IDispEventImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IDispEventImpl class, utilizzo"
ms.assetid: 82d53b61-9d0d-45c5-aff9-2fafa468a9ca
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Using IDispEventImpl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si utilizza `IDispEventImpl` per gestire gli eventi, sarà necessario:  
  
-   Derivare la classe da [IDispEventImpl](../atl/reference/idispeventimpl-class.md).  
  
-   Aggiungere [mappa del sink di eventi](../Topic/BEGIN_SINK_MAP.md) alla classe.  
  
-   Aggiungere voci alla mappa del sink di eventi utilizzando la macro [SINK\_ENTRY\_EX](../Topic/SINK_ENTRY_EX.md) o [SINK\_ENTRY](../Topic/SINK_ENTRY.md).  
  
-   Implementare i metodi desiderato gestione.  
  
-   Consigli e unadvise origine eventi.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come gestire l'evento **DocumentChange** generato dall'oggetto **Applicazione** di Word.  Questo evento viene definito come metodo sull'interfaccia dispatch **ApplicationEvents**.  
  
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
  
 [!code-cpp[NVC_ATL_EventHandlingSample#1](../atl/codesnippet/CPP/using-idispeventimpl_1.h)]  
  
 Verrà visualizzato il codice seguente in NotSoSimple.h.  Il codice rilevante è indicato dai commenti:  
  
 [!code-cpp[NVC_ATL_EventHandlingSample#2](../atl/codesnippet/CPP/using-idispeventimpl_2.h)]  
  
## Vedere anche  
 [Gestione di eventi](../atl/event-handling-and-atl.md)   
 [Esempio ATLEventHandling](../top/visual-cpp-samples.md)