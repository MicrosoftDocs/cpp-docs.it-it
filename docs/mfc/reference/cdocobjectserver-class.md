---
title: "CDocObjectServer Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDocObjectServer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX documents [C++], document server"
  - "CDocObjectServer class"
  - "docobject server"
  - "document object server"
  - "servers [C++], ActiveX documents"
  - "servers [C++], doc objects"
ms.assetid: 18cd0dff-0616-4472-b8d9-66c081bc383a
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CDocObjectServer Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa OLE collega aggiuntivo necessario per trasformare un server normale `COleDocument` un server completo di DocObject: `IOleDocument`, `IOleDocumentView`, `IOleCommandTarget`e `IPrint`.  
  
## Sintassi  
  
```  
class CDocObjectServer : public CCmdTarget  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocObjectServer::CDocObjectServer](../Topic/CDocObjectServer::CDocObjectServer.md)|Costruisce un oggetto `CDocObjectServer`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocObjectServer::ActivateDocObject](../Topic/CDocObjectServer::ActivateDocObject.md)|Attiva il server oggetto del documento, ma non la seguente.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocObjectServer::OnActivateView](../Topic/CDocObjectServer::OnActivateView.md)|Viene visualizzato il punto di vista di DocObject.|  
|[CDocObjectServer::OnApplyViewState](../Topic/CDocObjectServer::OnApplyViewState.md)|Ripristina lo stato di visualizzazione di DocObject.|  
|[CDocObjectServer::OnSaveViewState](../Topic/CDocObjectServer::OnSaveViewState.md)|Salvare lo stato di visualizzazione di DocObject.|  
  
## Note  
 `CDocObjectServer` viene derivato in modo migliore da `CCmdTarget` e da funziona con `COleServerDoc` per esporre le interfacce.  
  
 Un documento server di DocObject può contenere oggetti [CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md), che rappresentano l'interfaccia server agli elementi di DocObject.  
  
 Per personalizzare il server di DocObject, derivare la classe da `CDocObjectServer` ed eseguire l'override delle funzioni, [OnActivateView](../Topic/CDocObjectServer::OnActivateView.md), [OnApplyViewState](../Topic/CDocObjectServer::OnApplyViewState.md)e [OnSaveViewState](../Topic/CDocObjectServer::OnSaveViewState.md)di visualizzazione di installazione.  È necessario fornire una nuova istanza della classe in risposta alle chiamate del framework.  
  
 Per ulteriori informazioni su DocObjects, vedere [CDocObjectServerItem](../../mfc/reference/cdocobjectserveritem-class.md) e [COleCmdUI](../../mfc/reference/colecmdui-class.md)*in riferimenti alla libreria MFC*.  Vedere anche [Primi passaggi Internet: documenti attivi](../../mfc/active-documents-on-the-internet.md) e [documenti attivi](../../mfc/active-documents-on-the-internet.md).  
  
 Inoltre vedere il seguente articolo della Knowledge Base:  
  
-   Q247382: PRB: Le descrizioni comandi per i controlli server nel documento ActiveX sono nascoste dal contenitore di documenti ActiveX  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CDocObjectServer`  
  
## Requisiti  
 **Header:** afxdocob.h  
  
## Vedere anche  
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDocObjectServerItem Class](../../mfc/reference/cdocobjectserveritem-class.md)