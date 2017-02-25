---
title: "CSingleDocTemplate Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSingleDocTemplate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSingleDocTemplate class"
  - "modelli di documento, single"
  - "Single Document Interface (SDI), applicazioni"
  - "modelli, SDI"
ms.assetid: 4f3a8212-81ee-48a0-ad22-e0ed7c36a391
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# CSingleDocTemplate Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Definisce un modello di documento che implementa l'interfaccia a documento singolo \(SDI\).  
  
## Sintassi  
  
```  
class CSingleDocTemplate : public CDocTemplate  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSingleDocTemplate::CSingleDocTemplate](../Topic/CSingleDocTemplate::CSingleDocTemplate.md)|Costruisce un oggetto `CSingleDocTemplate`.|  
  
## Note  
 Un'applicazione SDI utilizza la finestra cornice principale per visualizzare un documento; solo un documento può essere aperto per volta.  
  
 Un modello di documento definisce la relazione tra tre tipi di classi:  
  
-   Una classe di documento, derivata da **CDocument**.  
  
-   Una classe di visualizzazione, che visualizza i dati dalla classe del documento elencata sopra.  È possibile derivare la classe da `CView`, da `CScrollView`, da `CFormView`, o da `CEditView`.  È possibile anche utilizzare direttamente `CEditView` \).  
  
-   Una classe della finestra cornice, che contiene la visualizzazione.  Per un modello di documento SDI, è possibile derivare la classe da `CFrameWnd`; se non è necessario personalizzare il comportamento della finestra cornice principale, è possibile utilizzare `CFrameWnd` direttamente senza derivare la classe.  
  
 Un'applicazione SDI in genere supporta un tipo di documento, pertanto dispone di un solo oggetto `CSingleDocTemplate`.  Solo un documento può essere aperto per volta.  
  
 Non è necessario chiamare funzioni membro `CSingleDocTemplate` tranne il costruttore.  Il framework gestisce gli oggetti `CSingleDocTemplate` internamente.  
  
 Per ulteriori informazioni su l `CSingleDocTemplate`, vedere [Modelli di documento e il processo di creazione documento\/visualizzazione](../../mfc/document-templates-and-the-document-view-creation-process.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CDocTemplate](../../mfc/reference/cdoctemplate-class.md)  
  
 `CSingleDocTemplate`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [Esempio DOCKTOOL MFC](../../top/visual-cpp-samples.md)   
 [CDocTemplate Class](../../mfc/reference/cdoctemplate-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CDocTemplate Class](../../mfc/reference/cdoctemplate-class.md)   
 [CDocument Class](../../mfc/reference/cdocument-class.md)   
 [CFrameWnd Class](../../mfc/reference/cframewnd-class.md)   
 [CMultiDocTemplate Class](../../mfc/reference/cmultidoctemplate-class.md)   
 [CView Class](../../mfc/reference/cview-class.md)   
 [CWinApp Class](../../mfc/reference/cwinapp-class.md)