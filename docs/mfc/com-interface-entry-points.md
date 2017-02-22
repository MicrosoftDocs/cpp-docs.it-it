---
title: "Punti di ingresso all&#39;interfaccia COM | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COM (interfacce), punti di ingresso"
  - "punti di ingresso, COM (interfacce)"
  - "MFC COM, punti di ingresso all'interfaccia COM"
  - "MFC, gestione dei dati sullo stato"
  - "OLE, punti di ingresso all'interfaccia"
  - "gestione dello stato, interfacce OLE/COM"
ms.assetid: 9e7421dc-0731-4748-9e1b-90acbaf26d77
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Punti di ingresso all&#39;interfaccia COM
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per le funzioni membro di un'interfaccia COM, utilizzare la macro di [METHOD\_PROLOGUE](../Topic/METHOD_PROLOGUE.md) per gestire lo stato complessivo appropriato quando si chiamano metodi di interfaccia esportata.  
  
 In genere, le funzioni membro delle interfacce implementate da `CCmdTarget`agli oggetti derivati già utilizza questa macro per consentire l'inizializzazione automatica del puntatore di `pThis`.  Di seguito è riportato un esempio.  
  
 [!code-cpp[NVC_MFCConnectionPoints#5](../mfc/codesnippet/CPP/com-interface-entry-points_1.cpp)]  
  
 Per ulteriori informazioni, vedere [Nota tecnica 38](../mfc/tn038-mfc-ole-iunknown-implementation.md) l'implementazione di MFC\/OLE **IUnknown**.  
  
 La macro di `METHOD_PROLOGUE` viene definita come segue:  
  
 `#define METHOD_PROLOGUE(theClass, localClass) \`  
  
 `theClass* pThis = \`  
  
 `((theClass*)((BYTE*)this - offsetof(theClass, m_x##localClass))); \`  
  
 `AFX_MANAGE_STATE(pThis->m_pModuleState) \`  
  
 La parte della macro responsabile della gestione dello stato complessivo è:  
  
 `AFX_MANAGE_STATE( pThis->m_pModuleState )`  
  
 In questa espressione, *il m\_pModuleState* sia una variabile membro oggetto contenitore.  Viene implementato dalla classe base `CCmdTarget` e viene inizializzato sul valore appropriato da `COleObjectFactory`, quando si crea un'istanza dell'oggetto.  
  
## Vedere anche  
 [Gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)