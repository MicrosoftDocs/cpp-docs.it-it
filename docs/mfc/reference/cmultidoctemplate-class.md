---
title: "CMultiDocTemplate Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMultiDocTemplate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMultiDocTemplate class"
  - "MDI, modello"
ms.assetid: 5b8aa328-e461-41d0-b388-00594535e119
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# CMultiDocTemplate Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Definisce un modello di documento che implementa l'interfaccia a più documenti \(MDI\).  
  
## Sintassi  
  
```  
  
class CMultiDocTemplate : public CDocTemplate  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMultiDocTemplate::CMultiDocTemplate](../Topic/CMultiDocTemplate::CMultiDocTemplate.md)|Costruisce un oggetto `CMultiDocTemplate`.|  
  
## Note  
 Un'applicazione MDI viene utilizzata la finestra cornice principale come un'area di lavoro in cui l'utente può aprire zero o più applicazioni utilizzano il documento, ciascuno visualizzare un documento.  Per una descrizione più dettagliata di MDI, vedere *le linee guida dell'interfaccia Windows per progettazione software*.  
  
 Un modello di documento definisce le relazioni tra tre tipi di classi:  
  
-   Una classe di documento, derivata da [CDocument](../../mfc/reference/cdocument-class.md).  
  
-   Una classe di visualizzazione, che visualizza i dati dalla classe del documento elencata sopra.  È possibile derivare la classe da [CView](../../mfc/reference/cview-class.md), da `CScrollView`, da `CFormView`, o da `CEditView`.  È possibile anche utilizzare direttamente `CEditView` \).  
  
-   Una classe della finestra cornice, che contiene la visualizzazione.  Per un modello di documento MDI, è possibile derivare la classe da `CMDIChildWnd`, o, se non è necessario personalizzare il comportamento delle applicazioni utilizzano di documento, è possibile utilizzare [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md) direttamente senza derivare la classe.  
  
 Un'applicazione MDI può supportare più di un tipo di documento e documenti di diversi tipi possono essere aperti contemporaneamente.  L'applicazione include un modello di documento per ogni tipo di documento che supporta.  Ad esempio, se l'applicazione MDI supporta i fogli di calcolo che i documenti di testo, l'applicazione dispone di due oggetti `CMultiDocTemplate`.  
  
 l'applicazione utilizza il modello di documento quando l'utente crea un nuovo documento.  Se l'applicazione supporta più di un tipo di documento, il framework ottiene i nomi dei tipi di documento supportati dai modelli di documento e visualizzarli in un elenco della nuova finestra di dialogo dei file.  Una volta che l'utente ha selezionato un tipo di documento, l'applicazione crea un oggetto classe di documento, un oggetto finestra cornice e un oggetto visualizzazione e li collega tra loro.  
  
 Non è necessario chiamare funzioni membro `CMultiDocTemplate` tranne il costruttore.  Il framework gestisce gli oggetti `CMultiDocTemplate` internamente.  
  
 Per ulteriori informazioni su `CMultiDocTemplate`, vedere [Modelli di documento e il processo di creazione documento\/visualizzazione](../../mfc/document-templates-and-the-document-view-creation-process.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocTemplate](../../mfc/reference/cdoctemplate-class.md)  
  
 `CMultiDocTemplate`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [CDocTemplate Class](../../mfc/reference/cdoctemplate-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDocTemplate Class](../../mfc/reference/cdoctemplate-class.md)   
 [CSingleDocTemplate Class](../../mfc/reference/csingledoctemplate-class.md)   
 [CWinApp Class](../../mfc/reference/cwinapp-class.md)