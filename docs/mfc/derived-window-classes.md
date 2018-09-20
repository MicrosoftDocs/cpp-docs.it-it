---
title: Classi di finestre derivate | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- window class hierarchy
- hierarchies, window classes
- classes [MFC], derived
- CWnd class [MFC], classes derived from
- derived classes [MFC], window classes
- window classes [MFC], derived
ms.assetid: 6f7e437e-fbde-4a06-bfab-72d9dbf05292
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2840a78844f42481389ba868b6ab1bc5713a2c0b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46448013"
---
# <a name="derived-window-classes"></a>Classi di finestre derivate

È possibile creare finestre direttamente dal [CWnd](../mfc/reference/cwnd-class.md), o derivare nuove classi di finestra da `CWnd`. Si tratta di come si crea in genere il proprio windows personalizzate. Tuttavia, la maggior parte delle finestre usate in un programma con framework vengono invece create da uno del `CWnd`-derivato classi frame-window fornite da MFC.

## <a name="frame-window-classes"></a>Classi di finestre cornice

[CFrameWnd](../mfc/reference/cframewnd-class.md)<br/>
Utilizzato per le finestre cornice SDI che circondano un unico documento e la relativa visualizzazione. La finestra cornice è la finestra cornice principale per l'applicazione sia la finestra cornice del documento corrente.

[CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md)<br/>
Usato come finestra cornice principale per le applicazioni MDI. La finestra cornice principale è un contenitore per tutte le finestre di documento MDI e condivide la barra dei menu con essi. Una finestra cornice MDI è una finestra di primo livello che viene visualizzata sul desktop.

[CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md)<br/>
Utilizzato per i singoli documenti aperti in una finestra cornice principale MDI. Ogni documento e la relativa visualizzazione sono racchiusi in una finestra cornice del figlio MDI contenuta in una finestra cornice principale MDI. Una finestra figlia MDI risulta molto simile a una normale finestra cornice, ma è contenuta all'interno di una finestra cornice MDI anziché sul desktop. Tuttavia, la finestra figlio MDI non dispone di una barra dei menu propri e deve condividere la barra dei menu della finestra cornice MDI che lo contiene.

Per altre informazioni, vedere [Frame Windows](../mfc/frame-windows.md).

## <a name="other-window-classes-derived-from-cwnd"></a>Altre classi di finestre derivate da CWnd

Oltre alle finestre cornice, diverse altre categorie principali di windows sono derivati da `CWnd`:

*Visualizzazioni*<br/>
Le visualizzazioni vengono create usando il `CWnd`-classe derivata [CView](../mfc/reference/cview-class.md) (o una delle relative classi derivate). Una vista è associata a un documento e funge da intermediario tra il documento e l'utente. Una vista è una finestra figlio (non un figlio MDI) che in genere riempie l'area client di una finestra cornice SDI o una finestra cornice figlio MDI (o parte dell'area client non coperto da una barra degli strumenti e/o una barra di stato).

*Finestre di dialogo*<br/>
Finestre di dialogo vengono create utilizzando il `CWnd`-classe derivata [CDialog](../mfc/reference/cdialog-class.md).

*Form*<br/>
Le visualizzazioni di form in base alle risorse di modello di finestra, ad esempio le finestre di dialogo vengono create utilizzando le classi [CFormView](../mfc/reference/cformview-class.md), [CRecordView](../mfc/reference/crecordview-class.md), o [CDaoRecordView](../mfc/reference/cdaorecordview-class.md).

*Controlli*<br/>
Vengono creati controlli quali pulsanti, caselle di riepilogo e caselle combinate con altre classi derivate da `CWnd`. Visualizzare [controllare gli argomenti](../mfc/controls-mfc.md).

*Barre di controllo*<br/>
Finestre figlio che contengono controlli. Ad esempio le barre degli strumenti e le barre di stato. Visualizzare [barre di controllo](../mfc/control-bars.md).

## <a name="window-class-hierarchy"></a>Gerarchia di classi di finestra

Vedere il [grafico delle gerarchie MFC](../mfc/hierarchy-chart.md) nel *riferimenti alla libreria MFC*. Le viste sono illustrate in [architettura documento/visualizzazione](../mfc/document-view-architecture.md). Finestre di dialogo sono illustrate nella [finestre di dialogo](../mfc/dialog-boxes.md).

## <a name="creating-your-own-special-purpose-window-classes"></a>Creare le classi di finestra con finalità speciali

Oltre alle classi di finestra fornite dalla libreria di classi, potrebbe essere necessario finestre figlio con scopi speciali. Per creare tale finestra, creare il proprio [CWnd](../mfc/reference/cwnd-class.md)-classe derivata e impostarlo come una finestra figlio di una vista o un frame. Tenere presente che il framework gestisce l'extent dell'area client di una finestra cornice di documento. La maggior parte dell'area client è gestito da una vista, ma altre finestre, ad esempio controllo barre o il proprio windows personalizzata, possono condividere lo spazio con la visualizzazione. Potrebbe essere necessario interagire con i meccanismi di nelle classi [CView](../mfc/reference/cview-class.md) e [CControlBar](../mfc/reference/ccontrolbar-class.md) per il posizionamento di finestre figlio nell'area client della finestra cornice.

[Creazione di Windows](../mfc/creating-windows.md) illustra la creazione di oggetti finestra e le finestre che gestiscono.

## <a name="see-also"></a>Vedere anche

[Oggetti finestra](../mfc/window-objects.md)

