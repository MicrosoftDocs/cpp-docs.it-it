---
title: "COleMessageFilter Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleMessageFilter"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "applicazioni [OLE], managing interactions"
  - "COleMessageFilter class"
  - "message filters [C++]"
  - "messaggi [C++], OLE"
  - "OLE [C++], managing concurrency"
  - "applicazioni OLE [C++], managing interactions"
  - "OLE messages"
ms.assetid: b1fd1639-fac4-4fd0-bf17-15172deba13c
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# COleMessageFilter Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Gestione della concorrenza richiesta dall'interazione delle applicazioni OLE.  
  
## Sintassi  
  
```  
class COleMessageFilter : public CCmdTarget  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleMessageFilter::COleMessageFilter](../Topic/COleMessageFilter::COleMessageFilter.md)|Costruisce un oggetto `COleMessageFilter`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleMessageFilter::BeginBusyState](../Topic/COleMessageFilter::BeginBusyState.md)|Imposta l'applicazione nello stato occupato.|  
|[COleMessageFilter::EnableBusyDialog](../Topic/COleMessageFilter::EnableBusyDialog.md)|Abilita e disabilita la finestra di dialogo quando un'applicazione denominata è occupata.|  
|[COleMessageFilter::EnableNotRespondingDialog](../Topic/COleMessageFilter::EnableNotRespondingDialog.md)|Abilita e disabilita la finestra di dialogo quando un'applicazione chiamata non risponde.|  
|[COleMessageFilter::EndBusyState](../Topic/COleMessageFilter::EndBusyState.md)|Termina occupato lo stato dell'applicazione.|  
|[COleMessageFilter::OnMessagePending](../Topic/COleMessageFilter::OnMessagePending.md)|Chiamato dal framework per elaborare i messaggi mentre una chiamata OLE è in corso.|  
|[COleMessageFilter::Register](../Topic/COleMessageFilter::Register.md)|Registra il filtro messaggi con le DLL di sistema OLE.|  
|[COleMessageFilter::Revoke](../Topic/COleMessageFilter::Revoke.md)|Revoca la registrazione del filtro messaggi con le DLL di sistema OLE.|  
|[COleMessageFilter::SetBusyReply](../Topic/COleMessageFilter::SetBusyReply.md)|Determina la risposta occupata dell'applicazione in una chiamata OLE.|  
|[COleMessageFilter::SetMessagePendingDelay](../Topic/COleMessageFilter::SetMessagePendingDelay.md)|Determina per quanto tempo di attesa dell'applicazione una risposta a una chiamata OLE.|  
|[COleMessageFilter::SetRetryReply](../Topic/COleMessageFilter::SetRetryReply.md)|Determina la risposta dell'applicazione chiamante a un'applicazione occupata.|  
  
## Note  
 La classe `COleMessageFilter` è utile in server di modifica visiva e nelle applicazioni contenitori nonché le applicazioni di automazione OLE.  Per le applicazioni server che vengono chiamate, questa classe può essere utilizzata per renderla "impegnata" in modo da rendere più avanti o riprovato le chiamate in ingresso da altre applicazioni contenitori.  Questa classe può essere utilizzata per determinare l'azione da intraprendere da un'applicazione chiamante quando l'applicazione chiamata è occupata.  
  
 L'utilizzo comune è un'applicazione server chiamare [BeginBusyState](../Topic/COleMessageFilter::BeginBusyState.md) e [EndBusyState](../Topic/COleMessageFilter::EndBusyState.md) quando è unsafe perché un documento o un altro oggetto accessibile OLE viene eliminato.  Queste chiamate effettuate in [CWinApp::OnIdle](../Topic/CWinApp::OnIdle.md) durante gli aggiornamenti dell'interfaccia utente.  
  
 Per impostazione predefinita, un oggetto `COleMessageFilter` allocata quando l'applicazione viene inizializzata.  È possibile recuperare con [AfxOleGetMessageFilter](../Topic/AfxOleGetMessageFilter.md).  
  
 Questa è una classe avanzata, raramente è necessario utilizzare direttamente.  
  
 Per ulteriori informazioni, vedere l'articolo [server: Implementazione di un server](../../mfc/servers-implementing-a-server.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleMessageFilter`  
  
## Requisiti  
 **Header:** afxole.h  
  
## Vedere anche  
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)