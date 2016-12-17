---
title: "CDocTemplate Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDocTemplate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDocTemplate class"
  - "modelli di documento"
  - "modelli, documento"
ms.assetid: 14b41a1f-bf9d-4eac-b6a8-4c54ffcc77f6
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDocTemplate Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una classe base astratta che definisce le funzionalità di base per i modelli di documento.  
  
## Sintassi  
  
```  
class CDocTemplate : public CCmdTarget  
```  
  
## Membri  
  
### Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocTemplate::CDocTemplate](../Topic/CDocTemplate::CDocTemplate.md)|Costruisce un oggetto `CDocTemplate`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDocTemplate::AddDocument](../Topic/CDocTemplate::AddDocument.md)|Aggiunge un documento a un modello.|  
|[CDocTemplate::CloseAllDocuments](../Topic/CDocTemplate::CloseAllDocuments.md)|Chiude tutti i documenti associati a questo modello.|  
|[CDocTemplate::CreateNewDocument](../Topic/CDocTemplate::CreateNewDocument.md)|Crea un nuovo documento.|  
|[CDocTemplate::CreateNewFrame](../Topic/CDocTemplate::CreateNewFrame.md)|Crea una nuova finestra cornice contenente un documento e una visualizzazione.|  
|[CDocTemplate::CreateOleFrame](../Topic/CDocTemplate::CreateOleFrame.md)|Crea una finestra cornice OLE\-abilitata.|  
|[CDocTemplate::CreatePreviewFrame](../Topic/CDocTemplate::CreatePreviewFrame.md)|Crea un frame figlio utilizzato per l'anteprima complesso.|  
|[CDocTemplate::GetDocString](../Topic/CDocTemplate::GetDocString.md)|Recupera una stringa associata al tipo di documento.|  
|[CDocTemplate::GetFirstDocPosition](../Topic/CDocTemplate::GetFirstDocPosition.md)|Recupera la posizione del primo documento associato a questo modello.|  
|[CDocTemplate::GetNextDoc](../Topic/CDocTemplate::GetNextDoc.md)|Recupera un documento e la posizione del successivo.|  
|[CDocTemplate::InitialUpdateFrame](../Topic/CDocTemplate::InitialUpdateFrame.md)|Inizializza la finestra cornice e facoltativamente lo rende visibile.|  
|[CDocTemplate::LoadTemplate](../Topic/CDocTemplate::LoadTemplate.md)|Carica le risorse per `CDocTemplate` o una classe derivata specificato.|  
|[CDocTemplate::MatchDocType](../Topic/CDocTemplate::MatchDocType.md)|Determina il grado attendibili nella corrispondenza tra un tipo di documento e questo modello.|  
|[CDocTemplate::OpenDocumentFile](../Topic/CDocTemplate::OpenDocumentFile.md)|Aprire il file specificato dal nome del percorso.|  
|[CDocTemplate::RemoveDocument](../Topic/CDocTemplate::RemoveDocument.md)|Rimuove un documento da un modello.|  
|[CDocTemplate::SaveAllModified](../Topic/CDocTemplate::SaveAllModified.md)|Salvare tutti i documenti associati a questo modello che sono stati modificati.|  
|[CDocTemplate::SetContainerInfo](../Topic/CDocTemplate::SetContainerInfo.md)|Determina le risorse per i contenitori OLE quando si modifica un elemento OLE sul posto.|  
|[CDocTemplate::SetDefaultTitle](../Topic/CDocTemplate::SetDefaultTitle.md)|Visualizzare il titolo predefinito nella barra del titolo della finestra del documento.|  
|[CDocTemplate::SetPreviewInfo](../Topic/CDocTemplate::SetPreviewInfo.md)|Installazione dal gestore di anteprima di processo.|  
|[CDocTemplate::SetServerInfo](../Topic/CDocTemplate::SetServerInfo.md)|Determina le risorse e le classi quando il documento server è incorporato o sul posto modificato.|  
  
## Note  
 Generalmente si crea uno o più modelli di documentoimplementazione della funzione `InitInstance` dell'applicazione.  Un modello di documento definisce le relazioni tra tre tipi di classi:  
  
-   Una classe di documento, derivata da **CDocument**.  
  
-   Una classe di visualizzazione, che visualizza i dati dalla classe del documento elencata sopra.  È possibile derivare la classe da `CView`, da `CScrollView`, da `CFormView`, o da `CEditView`.  È possibile anche utilizzare direttamente `CEditView` \).  
  
-   Una classe della finestra cornice, che contiene la visualizzazione.  Per un'applicazione di \(SDI\) di interfaccia a documento singolo, derivare la classe da `CFrameWnd`.  Per un'applicazione di \(MDI\) l'interfaccia a documenti multipli, derivare la classe da `CMDIChildWnd`.  Se non è necessario personalizzare il comportamento della finestra cornice, è possibile utilizzare `CFrameWnd` o `CMDIChildWnd` direttamente senza derivazione il proprio classe.  
  
 L'applicazione include un modello di documento per ogni tipo di documento che supporta.  Ad esempio, se l'applicazione supporta i fogli di calcolo che i documenti di testo, l'applicazione dispone di due oggetti modello di documento.  Ogni modello di documento è responsabile della creazione e di gestire tutti i documenti del tipo.  
  
 Il modello di documento memorizza i puntatori a oggetti `CRuntimeClass` per il documento, la visualizzazione e le classi della finestra cornice.  Questi oggetti `CRuntimeClass` vengono specificati quando si crea un modello di documento.  
  
 Il modello di documento contiene l'id delle risorse utilizzate dal tipo di documento \(come il menu, l'icona, o risorse tabella dei tasti di scelta rapida\).  Il modello di documento dispone anche di stringhe che contengono ulteriori informazioni sul tipo di documento.  Questi includono il nome del tipo di documento, ad esempio "foglio di lavoro"\) e l'estensione di file, ad esempio "xls"\).  Facoltativamente, può contenere altre stringhe utilizzate dall'interfaccia utente dell'applicazione, il File Manager di Windows e dall'oggetto collegare e incorporare il supporto \(OLE\).  
  
 Se l'applicazione è un contenitore OLE e\/o un server, il modello di documento definisce inoltre l'id del menu utilizzato per l'attivazione sul posto.  Se l'applicazione è un server OLE, il modello di documento definisce l'id della barra degli strumenti e del menu utilizzati durante l'attivazione sul posto.  È possibile specificare queste risorse aggiuntive OLE chiamando `SetContainerInfo` e `SetServerInfo`.  
  
 Poiché `CDocTemplate` è una classe astratta, non è possibile utilizzare direttamente la classe.  Un'applicazione tipica utilizza uno dei due `CDocTemplate`di classi derivate fornite dalla libreria MFC: `CSingleDocTemplate`, che implementa lo SDI e `CMultiDocTemplate`, che implementa MDI.  Vedere le classi per ulteriori informazioni sull'utilizzo dei modelli di documento.  
  
 Se l'applicazione richiede un paradigma dell'interfaccia utente che è fondamentalmente diversa da SDI o da MDI, è possibile derivare la classe da `CDocTemplate`.  
  
 Per ulteriori informazioni su `CDocTemplate`, vedere [Modelli di documento e il processo di creazione documento\/visualizzazione](../../mfc/document-templates-and-the-document-view-creation-process.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CDocTemplate`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CSingleDocTemplate Class](../../mfc/reference/csingledoctemplate-class.md)   
 [CMultiDocTemplate Class](../../mfc/reference/cmultidoctemplate-class.md)   
 [CDocument Class](../../mfc/reference/cdocument-class.md)   
 [CView Class](../../mfc/reference/cview-class.md)   
 [CScrollView Class](../../mfc/reference/cscrollview-class.md)   
 [CEditView Class](../../mfc/reference/ceditview-class.md)   
 [CFormView Class](../../mfc/reference/cformview-class.md)   
 [CFrameWnd Class](../../mfc/reference/cframewnd-class.md)   
 [CMDIChildWnd Class](../../mfc/reference/cmdichildwnd-class.md)