---
title: "COleCmdUI Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleCmdUI"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX documents [C++], document server"
  - "COleCmdUI class"
  - "docobject server"
  - "document object server"
  - "servers [C++], ActiveX documents"
  - "servers [C++], doc objects"
ms.assetid: a2d5ce08-6657-45d3-8673-2a9f32d50eec
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# COleCmdUI Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa un metodo a MFC aggiornare lo stato degli oggetti dell'interfaccia utente correlati alle funzionalità guidate `IOleCommandTarget`dell'applicazione.  
  
## Sintassi  
  
```  
class COleCmdUI : public CCmdUI  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleCmdUI::COleCmdUI](../Topic/COleCmdUI::COleCmdUI.md)|Costruisce un oggetto `COleCmdUI`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleCmdUI::Enable](../Topic/COleCmdUI::Enable.md)|Imposta o cancella il flag del comando di attivare.|  
|[COleCmdUI::SetCheck](../Topic/COleCmdUI::SetCheck.md)|Imposta lo stato di un comando di utilizzare o.|  
|[COleCmdUI::SetText](../Topic/COleCmdUI::SetText.md)|Restituisce una stringa del nome o dello stato del testo per un comando.|  
  
## Note  
 In un'applicazione non attivata per DocObjects, quando un utente visualizza un menu nell'applicazione, MFC elabora i notifcations **UPDATE\_COMMAND\_UI**.  Ogni notifica viene fornito un oggetto [CCmdUI](../../mfc/reference/ccmdui-class.md) che può essere modificato per visualizzare lo stato di un determinato comando.  Tuttavia, quando l'applicazione è abilitata di DocObjects, le notifiche **UPDATE\_OLE\_COMMAND\_UI** processi di MFC e assegna oggetti `COleCmdUI`.  
  
 `COleCmdUI` consente un DocObject ai controlli di ricezione provenienti dall'interfaccia utente del contenitore \(come FileNew, aprire, stampa, e così via\) e consente un contenitore per i controlli di ricezione provenienti dall'interfaccia utente di DocObject.  Sebbene `IDispatch` può essere utilizzato per inviare gli stessi controlli, `IOleCommandTarget` fornisce un modo più semplice per eseguire una query ed eseguire poiché si basa su uno di comandi standard, in genere senza argomenti e su nessun informazioni sul tipo è implicito.  `COleCmdUI` può essere utilizzato per attivare, aggiornare e impostare altre proprietà dei controlli dell'interfaccia utente di DocObject.  Quando si desidera richiamare il comando, chiamare [COleServerDoc::OnExecOleCmd](../Topic/COleServerDoc::OnExecOleCmd.md).  
  
 Per ulteriori informazioni su DocObjects, vedere [CDocObjectServer](../../mfc/reference/cdocobjectserver-class.md) e [CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md).  Vedere anche [Primi passaggi Internet: documenti attivi](../../mfc/active-documents-on-the-internet.md) e [documenti attivi](../../mfc/active-documents-on-the-internet.md).  
  
## Gerarchia di ereditarietà  
 [CCmdUI](../../mfc/reference/ccmdui-class.md)  
  
 `COleCmdUI`  
  
## Requisiti  
 **Header:** afxdocobj.h  
  
## Vedere anche  
 [CCmdUI Class](../../mfc/reference/ccmdui-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)