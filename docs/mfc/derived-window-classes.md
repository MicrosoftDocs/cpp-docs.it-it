---
title: Classi di finestre derivate | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- window class hierarchy
- hierarchies, window classes
- classes [MFC], derived
- CWnd class [MFC], classes derived from
- derived classes [MFC], window classes
- window classes [MFC], derived
ms.assetid: 6f7e437e-fbde-4a06-bfab-72d9dbf05292
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: d75a6692eadaa3a080803b9aa69d30e4b384307a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="derived-window-classes"></a>Classi di finestre derivate
È possibile creare finestre direttamente da [CWnd](../mfc/reference/cwnd-class.md), o derivare nuove classi di finestra da `CWnd`. Si tratta in genere creazione per il propria windows personalizzata. Tuttavia, la maggior parte delle finestre usate in un programma con framework vengono invece create da uno del `CWnd`-classi di finestre cornice fornite da MFC derivate.  
  
## <a name="frame-window-classes"></a>Classi finestra cornice  
 [CFrameWnd](../mfc/reference/cframewnd-class.md)  
 Utilizzato per le finestre cornice SDI che circondano un singolo documento e la relativa visualizzazione. La finestra cornice è la finestra cornice principale per l'applicazione sia la finestra cornice del documento corrente.  
  
 [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md)  
 Utilizzato come finestra cornice principale per le applicazioni MDI. La finestra cornice principale è un contenitore per tutte le finestre di documento MDI e condivide la barra dei menu con essi. Una finestra cornice MDI è una finestra di primo livello che appare sul desktop.  
  
 [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md)  
 Utilizzato per singoli documenti aperti in una finestra cornice principale MDI. Ogni documento e la relativa visualizzazione vengono inserite in una finestra cornice del figlio MDI contenuta in una finestra cornice principale MDI. Una finestra figlio MDI molto simile a una normale finestra cornice, ma è contenuta all'interno di una finestra cornice MDI anziché sul desktop. Tuttavia, la finestra figlio MDI non dispone di una barra dei menu del proprio e deve condividere la barra dei menu della finestra cornice MDI che lo contiene.  
  
 Per ulteriori informazioni, vedere [finestre cornice](../mfc/frame-windows.md).  
  
## <a name="other-window-classes-derived-from-cwnd"></a>Altre classi di finestre derivano da CWnd  
 Oltre alle finestre cornice, derivati da diverse altre categorie principali di windows `CWnd`:  
  
 *Visualizzazioni*  
 Le visualizzazioni vengono create utilizzando il `CWnd`-classe derivata [CView](../mfc/reference/cview-class.md) (o una delle relative classi derivate). Una vista è associata a un documento e funge da intermediario tra il documento e l'utente. Una vista è una finestra figlio (non è un figlio MDI) che in genere riempie l'area client di una finestra cornice SDI o una finestra cornice del figlio MDI (o la parte dell'area client non coperto da una barra degli strumenti e/o una barra di stato).  
  
 *Finestre di dialogo*  
 Finestre di dialogo vengono create utilizzando il `CWnd`-classe derivata [CDialog](../mfc/reference/cdialog-class.md).  
  
 *Form*  
 Visualizzazioni di form in base alle risorse di modello di finestra di dialogo, ad esempio le finestre di dialogo, vengono create utilizzando le classi [CFormView](../mfc/reference/cformview-class.md), [CRecordView](../mfc/reference/crecordview-class.md), o [CDaoRecordView](../mfc/reference/cdaorecordview-class.md).  
  
 *Controlli*  
 Vengono creati controlli quali pulsanti, caselle di riepilogo e caselle combinate con altre classi derivate da `CWnd`. Vedere [controllare argomenti](../mfc/controls-mfc.md).  
  
 *Barre di controllo*  
 Finestre figlio che contengono controlli. Sono esempi di barre degli strumenti e le barre di stato. Vedere [barre di controllo](../mfc/control-bars.md).  
  
## <a name="window-class-hierarchy"></a>Gerarchia di classi di finestra  
 Vedere il [grafico della gerarchia MFC](../mfc/hierarchy-chart.md) nel *riferimenti alla libreria MFC*. Vengono descritte le visualizzazioni in [architettura documento/visualizzazione](../mfc/document-view-architecture.md). Vengono descritte le finestre di dialogo in [finestre di dialogo](../mfc/dialog-boxes.md).  
  
## <a name="creating-your-own-special-purpose-window-classes"></a>Creazione di classi di finestra speciale  
 Oltre alle classi di finestra fornite dalla libreria di classi, potrebbe essere necessario finestre figlio speciale. Per creare tale finestra, crearne di proprie [CWnd](../mfc/reference/cwnd-class.md)-classe derivata e renderla una finestra figlio di una cornice o una vista. Tenere presente che il framework gestisce l'extent dell'area client di una finestra cornice di documento. La maggior parte dell'area client è gestito da una vista, ma altre finestre, come il controllo delle barre o la propria windows personalizzata, possono condividere lo spazio con la visualizzazione. Potrebbe essere necessario interagire con i meccanismi di classi [CView](../mfc/reference/cview-class.md) e [CControlBar](../mfc/reference/ccontrolbar-class.md) per il posizionamento delle finestre figlio nell'area client di una finestra cornice.  
  
 [Creazione di finestre](../mfc/creating-windows.md) illustra la creazione di oggetti finestra e di windows gestiti.  
  
## <a name="see-also"></a>Vedere anche  
 [Oggetti finestra](../mfc/window-objects.md)

