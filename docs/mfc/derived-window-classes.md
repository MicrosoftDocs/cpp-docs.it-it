---
title: "Classi di finestre derivate | Microsoft Docs"
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
  - "classi [C++], derivati"
  - "CWnd (classe), classi derivate da"
  - "classi derivate, classi di finestra"
  - "gerarchie, classi di finestra"
  - "gerarchia di classi di finestra"
  - "classi di finestra, derivati"
ms.assetid: 6f7e437e-fbde-4a06-bfab-72d9dbf05292
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Classi di finestre derivate
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile creare finestre direttamente da [CWnd](../mfc/reference/cwnd-class.md) oppure derivare nuove classi di finestre da `CWnd`.  In questo modo si creano tipicamente le proprie finestre personalizzate.  Tuttavia, la maggior parte delle finestre utilizzate in un programma framework vengono create da una delle classi di finestre cornice derivate da `CWnd` fornite da MFC.  
  
## Classi di finestre cornice  
 [CFrameWnd](../mfc/reference/cframewnd-class.md)  
 Viene utilizzata per le finestre cornice SDI che circondano un singolo documento e la visualizzazione corrispondente.  La finestra cornice è sia la finestra cornice principale per l'applicazione che la finestra cornice per il documento corrente.  
  
 [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md)  
 Viene utilizzata come finestra cornice principale per applicazioni MDI.  La finestra cornice principale è un contenitore per tutte le finestre dei documenti MDI e condivide la barra dei menu con esse.  Una finestra cornice MDI è una finestra di primo livello che viene visualizzata sul desktop.  
  
 [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md)  
 Viene utilizzata per i singoli documenti aperti in una finestra cornice principale MDI.  Ogni documento e la visualizzazione corrispondente vengono incorniciati da una finestra cornice figlio MDI contenuta dalla finestra cornice principale MDI.  Una finestra figlio MDI è molto simile a una finestra cornice usuale ma è contenuta in una finestra cornice MDI invece di trovarsi sul desktop.  Tuttavia, la finestra figlio MDI è priva di una barra dei menu e quindi deve condividere la barra dei menu della finestra cornice MDI che la contiene.  
  
 Per ulteriori informazioni, vedere [Finestre cornice](../mfc/frame-windows.md).  
  
## Altre classi di finestre derivate da CWnd  
 Oltre alle finestre cornice, molte altre categorie principali di finestre vengono derivate da `CWnd`:  
  
 *Visualizzazioni*  
 Le visualizzazioni vengono create utilizzando la classe [CView](../mfc/reference/cview-class.md) \(oppure una delle relative classi derivate\) derivata da `CWnd`.  Una visualizzazione viene associata a un documento e funge da intermediario tra il documento e l'utente.  Una visualizzazione è una finestra figlio \(non un figlio MDI\) che in genere riempie l'area client di una finestra cornice SDI o di una finestra cornice figlio MDI \(o quella parte dell'area client non coperta da una barra degli strumenti e\/o da una barra di stato\).  
  
 *Finestre di dialogo*  
 Le finestre di dialogo vengono create utilizzando la classe [CDialog](../mfc/reference/cdialog-class.md) derivata da `CWnd`.  
  
 *Form*  
 Le visualizzazioni basate su form sulle risorse modello di finestre di dialogo, come le finestre di dialogo, vengono create utilizzando le classi [CFormView](../mfc/reference/cformview-class.md), [CRecordView](../mfc/reference/crecordview-class.md) o [CDaoRecordView](../mfc/reference/cdaorecordview-class.md).  
  
 *Controlli*  
 Controlli come pulsanti, caselle di riepilogo e caselle combinate vengono create utilizzando altre classi derivate da `CWnd`.  Vedere [Argomenti di controllo](../mfc/controls-mfc.md).  
  
 *Barre di controllo*  
 Finestre figlio che contengono controlli.  Ne sono un esempio le barre degli strumenti e le barre di stato.  Vedere [Barre di controllo](../mfc/control-bars.md).  
  
## Gerarchia di classi di finestra  
 Vedere il [grafico della gerarchia MFC](../mfc/hierarchy-chart.md) nei *Riferimenti alla libreria MFC*.  Le visualizzazioni vengono descritte nell'[Architettura documento\/visualizzazione](../mfc/document-view-architecture.md).  Le finestre di dialogo vengono descritte in [Finestre di dialogo](../mfc/dialog-boxes.md).  
  
## Creazione di classi di finestra personalizzate per uno scopo specifico  
 Oltre alle classi di finestre fornite dalla libreria di classi, potrebbe essere necessario disporre di finestre figlio per scopi specifici.  Per creare una finestra con queste caratteristiche, creare una classe personalizzata che derivi da [CWnd](../mfc/reference/cwnd-class.md) e renderla una finestra figlio di una cornice o una visualizzazione.  Si tenga presente che il framework gestisce l'estensione dell'area client di una finestra cornice di documento.  La maggior parte dell'area client viene gestita da una visualizzazione, ma altre finestre, come ad esempio barre di controllo o proprie finestre personalizzate, possono condividere lo spazio con la visualizzazione.  Potrebbe essere necessario interagire con i meccanismi nelle classi [CView](../mfc/reference/cview-class.md) e [CControlBar](../mfc/reference/ccontrolbar-class.md) per il posizionamento delle finestre figlio nell'area client di una finestra cornice.  
  
 [Creazione finestre](../mfc/creating-windows.md) illustra la creazione di oggetti finestra e le finestre che li gestiscono.  
  
## Vedere anche  
 [Oggetti finestra](../mfc/window-objects.md)