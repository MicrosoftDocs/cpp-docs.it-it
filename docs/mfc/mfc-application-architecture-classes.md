---
title: Classi architettura dell'applicazione MFC
ms.date: 11/04/2016
f1_keywords:
- vc.classes.mfc
helpviewer_keywords:
- MFC, classes
- MFC, application development
- classes [MFC], MFC
- application architecture classes [MFC]
ms.assetid: 71b2de54-b44d-407e-9c71-9baf954e18d9
ms.openlocfilehash: 3287ac31744506720f1c5c1080a6225311f0e3a7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50512762"
---
# <a name="mfc-application-architecture-classes"></a>Classi architettura dell'applicazione MFC

Le classi in questa categoria contribuiscono all'architettura di un'applicazione di framework. Forniscono funzionalità comuni alla maggior parte delle applicazioni. Riempire del Framework per aggiungere funzionalità specifiche dell'applicazione. In genere, si scopo, la derivazione di nuove classi dalle classi di architettura e quindi aggiungere nuovi membri o si esegue l'override di funzioni membro esistente.

[Creazioni guidate applicazione](../mfc/reference/mfc-application-wizard.md) generare diversi tipi di applicazioni, ognuno dei quali utilizzerà il framework dell'applicazione in diversi modi. SDI (interfaccia a documento singolo) e le applicazioni MDI (interfaccia a documenti multipli) le funzionalità complete di una parte del framework denominato architettura documento/visualizzazione. Altri tipi di applicazioni, ad esempio applicazioni basate su finestra di dialogo, le applicazioni basate su form e le DLL, usano solo alcune delle funzionalità di architettura documento/visualizzazione.

Documento/visualizzazione applicazioni contengono uno o più set di documenti, visualizzazioni e finestre cornice. Un oggetto modello di documento associa le classi per ogni set di documenti/visualizzazione/frame.

Anche se non è necessario utilizzare l'architettura documento/visualizzazione nell'applicazione MFC, esistono una serie di vantaggi di questa operazione. Il contenitore e il server il supporto OLE MFC dipende architettura documento/visualizzazione, nonché il supporto per la stampa e anteprima di stampa.

Tutte le applicazioni MFC sono disponibili almeno due oggetti: un oggetto applicazione derivato dalla [CWinApp](../mfc/reference/cwinapp-class.md)e una sorta di oggetto della finestra principale, derivato (spesso indirettamente) da [CWnd](../mfc/reference/cwnd-class.md). (In genere, la finestra principale è derivata da [CFrameWnd](../mfc/reference/cframewnd-class.md), [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md), o [CDialog](../mfc/reference/cdialog-class.md), che derivano da `CWnd`.)

Le applicazioni che usano l'architettura documento/visualizzazione contengono altri oggetti. Gli oggetti principali sono:

- Un oggetto applicazione derivata dalla classe [CWinApp](../mfc/reference/cwinapp-class.md), come indicato in precedenza.

- Uno o più oggetti di classe documento derivato dalla classe [CDocument](../mfc/reference/cdocument-class.md). Oggetti di classe documento sono responsabili per la rappresentazione interna dei dati modificati nella visualizzazione. Potrebbero essere associati a un file di dati.

- Uno o più oggetti di visualizzazione derivata dalla classe [CView](../mfc/reference/cview-class.md). Ogni visualizzazione è una finestra che viene associata a un documento e associata a una finestra cornice. Viste di visualizzano e manipolare i dati contenuti in un oggetto di classe documento.

Documento/visualizzazione applicazioni contengono anche le finestre cornice (derivato da [CFrameWnd](../mfc/reference/cframewnd-class.md)) e modelli di documento (derivato da [CDocTemplate](../mfc/reference/cdoctemplate-class.md)).

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)

