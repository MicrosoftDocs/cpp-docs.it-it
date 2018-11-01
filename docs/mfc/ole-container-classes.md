---
title: Classi di contenitori OLE
ms.date: 11/04/2016
f1_keywords:
- vc.classes.ole
helpviewer_keywords:
- ActiveX classes [MFC]
- container classes [MFC]
- OLE classes [MFC]
- visual editing [MFC], classes
- OLE [MFC], classes
- containers [MFC], OLE container applications
ms.assetid: 1e27e1ab-4c22-41eb-8547-6915c72668ae
ms.openlocfilehash: 518ae4889a2c5d9dae10e5b5cba6845010ba883c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50517143"
---
# <a name="ole-container-classes"></a>Classi di contenitori OLE

Queste classi vengono usate dalle applicazioni contenitore. Entrambe `COleLinkingDoc` e `COleDocument` gestire gli insiemi di `COleClientItem` oggetti. Anziché derivare la classe documento da `CDocument`, si sarà derivarlo da `COleLinkingDoc` o `COleDocument`, a seconda che si voglia supporto per i collegamenti agli oggetti incorporati nel documento.

Usare un `COleClientItem` oggetti per rappresentare ogni elemento OLE nel documento per cui è incorporato da un altro documento o un collegamento a un altro documento.

[COleDocObjectItem](../mfc/reference/coledocobjectitem-class.md)<br/>
Supporta contenimento dei documenti attivi.

[COleDocument](../mfc/reference/coledocument-class.md)<br/>
Utilizzato per l'implementazione di documento composito, nonché il supporto di contenitore di base. Funge da contenitore per le classi derivate da `CDocItem`. Questa classe può essere utilizzata come classe base per contenitore di documenti ed è la classe base per `COleServerDoc`.

[COleLinkingDoc](../mfc/reference/colelinkingdoc-class.md)<br/>
Una classe derivata da `COleDocument` che fornisce l'infrastruttura per il collegamento. È consigliabile derivare le classi di documenti per le applicazioni contenitore da questa classe anziché da `COleDocument` se si desidera che il supporto di collegamenti a oggetti incorporati.

[CRichEditDoc](../mfc/reference/cricheditdoc-class.md)<br/>
Gestisce l'elenco di elementi di client OLE in controllo rich edit. Utilizzato con [CRichEditView](../mfc/reference/cricheditview-class.md) e [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md).

[CDocItem](../mfc/reference/cdocitem-class.md)<br/>
Classe di base di astratta `COleClientItem` e `COleServerItem`. Gli oggetti di classi derivate da `CDocItem` rappresentano le parti di documenti.

[COleClientItem](../mfc/reference/coleclientitem-class.md)<br/>
Una classe di elemento di client che rappresenta il lato del client della connessione a un elemento OLE incorporato o collegato. Da questa classe, derivare gli elementi client.

[CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md)<br/>
Fornisce l'accesso lato client a un elemento archiviato in un controllo rich edit quando usato con oggetto OLE `CRichEditView` e `CRichEditDoc`.

[COleException](../mfc/reference/coleexception-class.md)<br/>
Eccezione generata da un errore nell'elaborazione OLE. Questa classe viene utilizzata sia dai contenitori sia dai server.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)

