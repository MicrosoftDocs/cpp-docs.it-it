---
title: "COleDispatchDriver Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleDispatchDriver"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Automation clients, implementing Automation"
  - "COleDispatchDriver class"
  - "OLE dispatch interface"
ms.assetid: 3ed98daf-cdc7-4374-8a0c-cf695a8d3657
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# COleDispatchDriver Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa il lato client di automazione OLE.  
  
## Sintassi  
  
```  
class COleDispatchDriver  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDispatchDriver::COleDispatchDriver](../Topic/COleDispatchDriver::COleDispatchDriver.md)|Costruisce un oggetto `COleDispatchDriver`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDispatchDriver::AttachDispatch](../Topic/COleDispatchDriver::AttachDispatch.md)|Specifica una connessione `IDispatch`oggetto `COleDispatchDriver`.|  
|[COleDispatchDriver::CreateDispatch](../Topic/COleDispatchDriver::CreateDispatch.md)|Creazione di una connessione `IDispatch` e allegarlo all'oggetto `COleDispatchDriver`.|  
|[COleDispatchDriver::DetachDispatch](../Topic/COleDispatchDriver::DetachDispatch.md)|Rimuove una connessione `IDispatch`, senza rilasciarla.|  
|[COleDispatchDriver::GetProperty](../Topic/COleDispatchDriver::GetProperty.md)|Ottiene una proprietà di automazione.|  
|[COleDispatchDriver::InvokeHelper](../Topic/COleDispatchDriver::InvokeHelper.md)|Supporto per i metodi di automazione chiamante.|  
|[COleDispatchDriver::ReleaseDispatch](../Topic/COleDispatchDriver::ReleaseDispatch.md)|Rilascia una connessione `IDispatch`.|  
|[COleDispatchDriver::SetProperty](../Topic/COleDispatchDriver::SetProperty.md)|Impostare una proprietà di automazione.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDispatchDriver::operator \=](../Topic/COleDispatchDriver::operator%20=.md)|Copia il valore di origine nell'oggetto `COleDispatchDriver`.|  
|[COleDispatchDriver::operator LPDISPATCH](../Topic/COleDispatchDriver::operator%20LPDISPATCH.md)|Accede al puntatore sottostante `IDispatch`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDispatchDriver::m\_bAutoRelease](../Topic/COleDispatchDriver::m_bAutoRelease.md)|Specifica se il `IDispatch` durante `ReleaseDispatch` un oggetto o la distruzione.|  
|[COleDispatchDriver::m\_lpDispatch](../Topic/COleDispatchDriver::m_lpDispatch.md)|Indica il puntatore all'interfaccia `IDispatch` associata a questo `COleDispatchDriver`.|  
  
## Note  
 `COleDispatchDriver` non dispone di una classe base.  
  
 Le interfacce dispatch OLE l'accesso ai metodi e le proprietà di un oggetto.  Le funzioni membro di connessione `COleDispatchDriver`, rimuovere, creare e rilasciano una connessione di invio di tipo `IDispatch`.  Altre funzioni membro utilizzano elenchi di argomenti variabili per semplificare chiamare **IDispatch::Invoke**.  
  
 Questa classe può essere utilizzata direttamente, ma è solitamente utilizzato solo dalle classi create dalla procedura guidata della classe aggiunta.  Quando si crea il nuovo le classi C\+\+ mediante l'importazione di una libreria dei tipi, le nuove classi è derivato da `COleDispatchDriver`.  
  
 Per ulteriori informazioni su l `COleDispatchDriver`, vedere i seguenti articoli:  
  
-   [Client di automazione](../../mfc/automation-clients.md)  
  
-   [Server di automazione](../../mfc/automation-servers.md)  
  
## Gerarchia di ereditarietà  
 `COleDispatchDriver`  
  
## Requisiti  
 **Header:** afxdisp.h  
  
## Vedere anche  
 [L'esempio CALCDRIV MFC](../../top/visual-cpp-samples.md)   
 [Esempio ACDUAL MFC](../../top/visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)