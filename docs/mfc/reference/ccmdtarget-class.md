---
title: "CCmdTarget Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CCmdTarget"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCmdTarget class"
  - "comandi (routing), command targets"
  - "command targets"
  - "message maps, CCmdTarget base class"
  - "destinazioni, comando"
ms.assetid: 8883b132-2057-4ce0-a5f2-88979f8f2b13
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CCmdTarget Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe base per l'architettura della mappa messaggi della libreria MFC.  
  
## Sintassi  
  
```  
class CCmdTarget : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCmdTarget::CCmdTarget](../Topic/CCmdTarget::CCmdTarget.md)|Costruisce un oggetto `CCmdTarget`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCmdTarget::BeginWaitCursor](../Topic/CCmdTarget::BeginWaitCursor.md)|Visualizzare il cursore come cursore di clessidra.|  
|[CCmdTarget::DoOleVerb](../Topic/CCmdTarget::DoOleVerb.md)|Causa un'azione specificata da un verbo OLE da eseguire.|  
|[CCmdTarget::EnableAutomation](../Topic/CCmdTarget::EnableAutomation.md)|Consente all'automazione OLE per l'oggetto `CCmdTarget`.|  
|[CCmdTarget::EnableConnections](../Topic/CCmdTarget::EnableConnections.md)|Attiva l'evento che viene generato sui punti di connessione.|  
|[CCmdTarget::EnableTypeLib](../Topic/CCmdTarget::EnableTypeLib.md)|Abilita la libreria dei tipi di un oggetto.|  
|[CCmdTarget::EndWaitCursor](../Topic/CCmdTarget::EndWaitCursor.md)|Restituisce il cursore precedente.|  
|[CCmdTarget::EnumOleVerbs](../Topic/CCmdTarget::EnumOleVerbs.md)|Enumera i verbi OLE di un oggetto.|  
|[CCmdTarget::FromIDispatch](../Topic/CCmdTarget::FromIDispatch.md)|Restituisce un puntatore a un oggetto `CCmdTarget` associato al puntatore `IDispatch`.|  
|[CCmdTarget::GetDispatchIID](../Topic/CCmdTarget::GetDispatchIID.md)|Ottiene l'id principale dell'interfaccia dispatch|  
|[CCmdTarget::GetIDispatch](../Topic/CCmdTarget::GetIDispatch.md)|Restituisce un puntatore a un oggetto `IDispatch` associato all'oggetto `CCmdTarget`.|  
|[CCmdTarget::GetTypeInfoCount](../Topic/CCmdTarget::GetTypeInfoCount.md)|Recupera il numero di interfacce di informazioni sui tipi che un oggetto.|  
|[CCmdTarget::GetTypeInfoOfGuid](../Topic/CCmdTarget::GetTypeInfoOfGuid.md)|Recupera la descrizione del tipo che corrisponde al GUID specificato.|  
|[CCmdTarget::GetTypeLib](../Topic/CCmdTarget::GetTypeLib.md)|Ottiene un puntatore a una libreria dei tipi.|  
|[CCmdTarget::GetTypeLibCache](../Topic/CCmdTarget::GetTypeLibCache.md)|Ottiene la cache della libreria dei tipi.|  
|[CCmdTarget::IsInvokeAllowed](../Topic/CCmdTarget::IsInvokeAllowed.md)|Consente la chiamata di metodo di automazione.|  
|[CCmdTarget::IsResultExpected](../Topic/CCmdTarget::IsResultExpected.md)|Restituisce diverso da zero se una funzione di automazione restituisce un valore.|  
|[CCmdTarget::OnCmdMsg](../Topic/CCmdTarget::OnCmdMsg.md)|Messaggi di comando di spedizione e della route.|  
|[CCmdTarget::OnFinalRelease](../Topic/CCmdTarget::OnFinalRelease.md)|Pulisce dopo l'ultimo riferimento OLE viene rilasciato.|  
|[CCmdTarget::RestoreWaitCursor](../Topic/CCmdTarget::RestoreWaitCursor.md)|Ripristina il cursore di clessidra.|  
  
## Note  
 Una mappa messaggi ai controlli o i messaggi alle funzioni membro che occorre scrivere per gestirli.  \(Il comando di un oggetto è un messaggio da una voce di menu, da un pulsante, o un tasto di scelta rapida.\)  
  
 Le principali classi del framework derivano da `CCmdTarget` includono [CView](../../mfc/reference/cview-class.md), [CWinApp](../../mfc/reference/cwinapp-class.md), [CDocument](../../mfc/reference/cdocument-class.md), [CWnd](../../mfc/reference/cwnd-class.md)e [CFrameWnd](../../mfc/reference/cframewnd-class.md).  Se si intende una nuova classe per gestire i messaggi, derivare la classe da una di questo `CCmdTarget`di classi derivate.  Si deriverà riferimento diretto la classe da `CCmdTarget`.  
  
 Per una panoramica delle destinazioni comando e `OnCmdMsg` destinate a, vedere [Destinazioni comando](../../mfc/command-targets.md), [Routing dei comandi](../../mfc/command-routing.md)e [Messaggi di mapping](../../mfc/mapping-messages.md).  
  
 `CCmdTarget` include le funzioni membro che gestiscono la visualizzazione di un cursore di clessidra.  Visualizzare il cursore di clessidra quando si prevede un comando accettare un intervallo di tempo significativa per l'esecuzione.  
  
 Le mappe di invio, simili alle mappe messaggi, vengono utilizzate per esporre la funzionalità `IDispatch` di automazione OLE.  Esponendo questa interfaccia, altre applicazioni \(in Visual Basic\) possono chiamare nell'applicazione.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CCmdTarget`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [Esempio ACDUAL MFC](../../top/visual-cpp-samples.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CCmdUI Class](../../mfc/reference/ccmdui-class.md)   
 [CDocument Class](../../mfc/reference/cdocument-class.md)   
 [CDocTemplate Class](../../mfc/reference/cdoctemplate-class.md)   
 [CWinApp Class](../../mfc/reference/cwinapp-class.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [CView Class](../../mfc/reference/cview-class.md)   
 [CFrameWnd Class](../../mfc/reference/cframewnd-class.md)   
 [COleDispatchDriver Class](../../mfc/reference/coledispatchdriver-class.md)