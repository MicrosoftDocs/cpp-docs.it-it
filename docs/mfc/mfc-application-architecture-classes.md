---
title: Classi di architettura delle applicazioni Microsoft Foundation Classes (MFC)
description: Panoramica delle classi di architettura delle applicazioni della libreria MFC (Microsoft Foundation Class).
ms.date: 12/08/2020
helpviewer_keywords:
- MFC, classes
- MFC, application development
- classes [MFC], MFC
- application architecture classes [MFC]
ms.openlocfilehash: 65aa9707d361c6d014c67c0f9ff1af86e19087de
ms.sourcegitcommit: 754df5278f795f661d4eeb0d4cacc908aa630159
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/09/2020
ms.locfileid: "96933196"
---
# <a name="mfc-application-architecture-classes"></a>Classi di architettura dell'applicazione MFC

Le classi MFC (Microsoft Foundation Class Library) di questa categoria contribuiscono all'architettura di un'applicazione MFC. Forniscono funzionalità comuni alla maggior parte delle applicazioni. Compilare il Framework per aggiungere funzionalità specifiche dell'applicazione. Questa operazione viene in genere eseguita mediante la derivazione di nuove classi dalle classi di architettura, quindi l'aggiunta di nuovi membri o l'override di funzioni membro esistenti.

Le [creazioni guidate dell'applicazione](reference/mfc-application-wizard.md) generano diversi tipi di applicazioni, che usano tutti il Framework dell'applicazione in modi diversi. Le applicazioni SDI (interfaccia a documento singolo) e MDI (interfaccia a più documenti) utilizzano completamente la parte di documento/visualizzazione del Framework. Altri tipi di applicazioni, ad esempio applicazioni basate su finestre di dialogo, applicazioni basate su form e dll, usano solo alcune funzionalità di architettura documento/visualizzazione.

Le applicazioni documento/visualizzazione contengono uno o più set di documenti, visualizzazioni e finestre cornice. Un oggetto modello di documento associa le classi per ciascun set di documenti/visualizzazioni/frame.

Non è necessario usare l'architettura documento/visualizzazione nell'applicazione MFC, ma esistono diversi vantaggi. Il supporto per il contenitore e il server OLE MFC è basato sull'architettura documento/visualizzazione, così come è il supporto per la stampa e l'anteprima di stampa.

Tutte le applicazioni MFC hanno almeno due oggetti: un oggetto applicazione derivato da [`CWinApp`](reference/cwinapp-class.md) e un tipo di oggetto finestra principale, derivato (spesso indirettamente) da [`CWnd`](reference/cwnd-class.md) . Generalmente, la finestra principale è derivata da [`CFrameWnd`](reference/cframewnd-class.md) , [`CMDIFrameWnd`](reference/cmdiframewnd-class.md) o [`CDialog`](reference/cdialog-class.md) , tutte derivate da `CWnd` .

Le applicazioni che utilizzano l'architettura documento/visualizzazione contengono oggetti aggiuntivi. Gli oggetti principali sono:

- Oggetto applicazione derivato dalla classe [`CWinApp`](reference/cwinapp-class.md) , come indicato in precedenza.
- Uno o più oggetti della classe Document derivati dalla classe [`CDocument`](reference/cdocument-class.md) . Gli oggetti della classe Document sono responsabili della rappresentazione interna dei dati modificati nella visualizzazione. Possono essere associati a un file di dati.
- Uno o più oggetti View derivati dalla classe [`CView`](reference/cview-class.md) . Ogni visualizzazione è una finestra collegata a un documento e associata a una finestra cornice. Le visualizzazioni visualizzano e modificano i dati contenuti in un oggetto classe documento.

Le applicazioni documento/visualizzazione contengono anche finestre cornice (derivate da [`CFrameWnd`](reference/cframewnd-class.md) ) e modelli di documento (derivati da [`CDocTemplate`](reference/cdoctemplate-class.md) ).

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](class-library-overview.md)