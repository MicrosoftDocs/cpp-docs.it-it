---
title: Classi architettura dell'applicazione MFC
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, classes
- MFC, application development
- classes [MFC], MFC
- application architecture classes [MFC]
ms.assetid: 71b2de54-b44d-407e-9c71-9baf954e18d9
ms.openlocfilehash: 1e09447623b32e9b10063af5bc91ac9589f45e44
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447728"
---
# <a name="mfc-application-architecture-classes"></a>Classi architettura dell'applicazione MFC

Le classi di questa categoria contribuiscono all'architettura di un'applicazione Framework. Forniscono funzionalità comuni alla maggior parte delle applicazioni. Compilare il Framework per aggiungere funzionalità specifiche dell'applicazione. Questa operazione viene in genere eseguita mediante la derivazione di nuove classi dalle classi di architettura, quindi l'aggiunta di nuovi membri o l'override di funzioni membro esistenti.

Le [creazioni guidate dell'applicazione](../mfc/reference/mfc-application-wizard.md) generano diversi tipi di applicazioni, che usano tutti il Framework dell'applicazione in modi diversi. Le applicazioni SDI (interfaccia a documento singolo) e MDI (interfaccia a più documenti) utilizzano completamente una parte del Framework denominata architettura documento/visualizzazione. Altri tipi di applicazioni, ad esempio applicazioni basate su finestre di dialogo, applicazioni basate su form e dll, usano solo alcune funzionalità di architettura documento/visualizzazione.

Le applicazioni documento/visualizzazione contengono uno o più set di documenti, visualizzazioni e finestre cornice. Un oggetto modello di documento associa le classi per ciascun set di documenti/visualizzazioni/frame.

Sebbene non sia necessario utilizzare l'architettura documento/visualizzazione nell'applicazione MFC, i vantaggi di questa operazione sono diversi. Il supporto per il contenitore e il server OLE MFC è basato sull'architettura documento/visualizzazione, così come è il supporto per la stampa e l'anteprima di stampa.

Tutte le applicazioni MFC hanno almeno due oggetti: un oggetto applicazione derivato da [CWinApp](../mfc/reference/cwinapp-class.md)e un tipo di oggetto finestra principale, derivato (spesso indirettamente) da [CWnd](../mfc/reference/cwnd-class.md). Generalmente, la finestra principale è derivata da [CFrameWnd](../mfc/reference/cframewnd-class.md), [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md)o [CDialog](../mfc/reference/cdialog-class.md), tutti derivati da `CWnd`.

Le applicazioni che utilizzano l'architettura documento/visualizzazione contengono oggetti aggiuntivi. Gli oggetti Principal sono:

- Oggetto applicazione derivato dalla classe [CWinApp](../mfc/reference/cwinapp-class.md), come indicato in precedenza.

- Uno o più oggetti della classe Document derivati dalla classe [CDocument](../mfc/reference/cdocument-class.md). Gli oggetti della classe Document sono responsabili della rappresentazione interna dei dati modificati nella visualizzazione. Possono essere associati a un file di dati.

- Uno o più oggetti View derivati dalla classe [CView](../mfc/reference/cview-class.md). Ogni visualizzazione è una finestra collegata a un documento e associata a una finestra cornice. Le visualizzazioni visualizzano e modificano i dati contenuti in un oggetto classe documento.

Le applicazioni documento/visualizzazione contengono anche finestre cornice (derivate da [CFrameWnd](../mfc/reference/cframewnd-class.md)) e modelli di documento (derivati da [CDocTemplate](../mfc/reference/cdoctemplate-class.md)).

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
