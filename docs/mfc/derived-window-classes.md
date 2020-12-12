---
description: 'Altre informazioni su: classi finestra derivate'
title: Classi di finestre derivate
ms.date: 11/04/2016
helpviewer_keywords:
- window class hierarchy
- hierarchies, window classes
- classes [MFC], derived
- CWnd class [MFC], classes derived from
- derived classes [MFC], window classes
- window classes [MFC], derived
ms.assetid: 6f7e437e-fbde-4a06-bfab-72d9dbf05292
ms.openlocfilehash: 9219267b5351f972257d9770f8e8b38039b85788
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97335905"
---
# <a name="derived-window-classes"></a>Classi di finestre derivate

È possibile creare Windows direttamente da [CWnd](reference/cwnd-class.md)o derivare nuove classi della finestra da `CWnd` . Questo è il modo in cui vengono in genere create le finestre personalizzate. Tuttavia, la maggior parte delle finestre usate in un programma Framework viene invece creata da una delle `CWnd` classi della finestra cornice derivate da fornite da MFC.

## <a name="frame-window-classes"></a>Classi della finestra cornice

[CFrameWnd](reference/cframewnd-class.md)<br/>
Usato per le finestre cornice SDI che incorniciano un singolo documento e la relativa visualizzazione. La finestra cornice è sia la finestra cornice principale per l'applicazione che la finestra cornice per il documento corrente.

[CMDIFrameWnd](reference/cmdiframewnd-class.md)<br/>
Utilizzato come finestra cornice principale per le applicazioni MDI. La finestra cornice principale è un contenitore per tutte le finestre di documento MDI e ne condivide la barra dei menu. Una finestra cornice MDI è una finestra di primo livello visualizzata sul desktop.

[CMDIChildWnd](reference/cmdichildwnd-class.md)<br/>
Utilizzato per i singoli documenti aperti in una finestra cornice principale MDI. Ogni documento e la relativa visualizzazione sono racchiusi da una finestra cornice figlio MDI contenuta nella finestra cornice principale MDI. Una finestra figlio MDI ha un aspetto simile a una tipica finestra cornice, ma è contenuta all'interno di una finestra cornice MDI anziché sul desktop. Tuttavia, la finestra figlio MDI non dispone di una barra dei menu autonoma e deve condividere la barra dei menu della finestra cornice MDI che la contiene.

Per altre informazioni, vedere [finestre cornice](frame-windows.md).

## <a name="other-window-classes-derived-from-cwnd"></a>Altre classi finestra derivate da CWnd

Oltre alle finestre cornice, diverse altre categorie principali di Windows sono derivate da `CWnd` :

*Visualizzazioni*<br/>
Le visualizzazioni vengono create usando la `CWnd` classe derivata da [CView](reference/cview-class.md) (o una delle relative classi derivate). Una vista è associata a un documento e funge da intermediario tra il documento e l'utente. Una vista è una finestra figlio, non un elemento figlio MDI, che in genere riempie l'area client di una finestra cornice SDI o di una finestra cornice figlio MDI (o la parte dell'area client non coperta da una barra degli strumenti e/o da una barra di stato).

*Finestre di dialogo*<br/>
Le finestre di dialogo vengono create utilizzando la `CWnd` classe derivata da [CDialog](reference/cdialog-class.md).

*Moduli*<br/>
Le visualizzazioni form basate sulle risorse del modello di finestra di dialogo, ad esempio le finestre di dialogo, vengono create utilizzando le classi [CFormView](reference/cformview-class.md), [CRecordView](reference/crecordview-class.md)o [CDaoRecordView](reference/cdaorecordview-class.md).

*Controlli*<br/>
I controlli quali pulsanti, caselle di riepilogo e caselle combinate vengono creati utilizzando altre classi derivate da `CWnd` . Vedere gli [argomenti del controllo](controls-mfc.md).

*Barre di controllo*<br/>
Finestre figlio che contengono i controlli. Gli esempi includono barre degli strumenti e barre di stato. Vedere [barre di controllo](control-bars.md).

## <a name="window-class-hierarchy"></a>Gerarchia delle classi della finestra

Fare riferimento al [grafico delle gerarchie MFC](hierarchy-chart.md) in *riferimenti a MFC*. Le visualizzazioni sono descritte nell' [architettura documento/visualizzazione](document-view-architecture.md). Le finestre di dialogo sono descritte nelle [finestre di dialogo](dialog-boxes.md).

## <a name="creating-your-own-special-purpose-window-classes"></a>Creazione di classi di finestra Special-Purpose personalizzate

Oltre alle classi della finestra fornite dalla libreria di classi, potrebbe essere necessario disporre di finestre figlio per scopi specifici. Per creare una finestra di questo tipo, creare una classe derivata da [CWnd](reference/cwnd-class.md)e impostarla come finestra figlio di un frame o di una vista. Tenere presente che il Framework gestisce l'ambito dell'area client di una finestra cornice del documento. La maggior parte dell'area client viene gestita da una vista, ma altre finestre, ad esempio le barre di controllo o le finestre personalizzate, possono condividere lo spazio con la visualizzazione. Potrebbe essere necessario interagire con i meccanismi nelle classi [CView](reference/cview-class.md) e [CControlBar](reference/ccontrolbar-class.md) per posizionare le finestre figlio nell'area client di una finestra cornice.

La [creazione di finestre](creating-windows.md) illustra la creazione di oggetti finestra e le finestre gestite.

## <a name="see-also"></a>Vedi anche

[Oggetti finestra](window-objects.md)
