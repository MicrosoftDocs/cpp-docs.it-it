---
title: Classi di contenitori OLE
ms.date: 11/04/2016
helpviewer_keywords:
- ActiveX classes [MFC]
- container classes [MFC]
- OLE classes [MFC]
- visual editing [MFC], classes
- OLE [MFC], classes
- containers [MFC], OLE container applications
ms.assetid: 1e27e1ab-4c22-41eb-8547-6915c72668ae
ms.openlocfilehash: 61db5310637d13da2d2cc183f12f8f62aa60e328
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447662"
---
# <a name="ole-container-classes"></a>Classi di contenitori OLE

Queste classi vengono usate dalle applicazioni contenitore. Sia `COleLinkingDoc` che `COleDocument` gestiscono raccolte di oggetti di `COleClientItem`. Anziché derivare la classe del documento da `CDocument`, sarà necessario derivarlo da `COleLinkingDoc` o `COleDocument`, a seconda che si desideri il supporto per collegamenti a oggetti incorporati nel documento.

Utilizzare un oggetto `COleClientItem` per rappresentare ogni elemento OLE nel documento incorporato da un altro documento o un collegamento a un altro documento.

[COleDocObjectItem](../mfc/reference/coledocobjectitem-class.md)<br/>
Supporta il contenimento di documenti attivi.

[COleDocument](../mfc/reference/coledocument-class.md)<br/>
Usato per l'implementazione di documenti compositi e per il supporto dei contenitori di base. Funge da contenitore per le classi derivate da `CDocItem`. Questa classe può essere usata come classe di base per i documenti contenitore ed è la classe di base per `COleServerDoc`.

[COleLinkingDoc](../mfc/reference/colelinkingdoc-class.md)<br/>
Classe derivata da `COleDocument` che fornisce l'infrastruttura per il collegamento. È necessario derivare le classi del documento per le applicazioni contenitore da questa classe anziché da `COleDocument` se si desidera che supportino collegamenti a oggetti incorporati.

[CRichEditDoc](../mfc/reference/cricheditdoc-class.md)<br/>
Mantiene l'elenco di elementi client OLE presenti nel controllo Rich Edit. Utilizzato con [CRichEditView](../mfc/reference/cricheditview-class.md) e [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md).

[CDocItem](../mfc/reference/cdocitem-class.md)<br/>
Classe di base astratta di `COleClientItem` e `COleServerItem`. Gli oggetti delle classi derivate da `CDocItem` rappresentano parti dei documenti.

[COleClientItem](../mfc/reference/coleclientitem-class.md)<br/>
Classe di elementi client che rappresenta il lato client della connessione a un elemento OLE incorporato o collegato. Derivare gli elementi client da questa classe.

[CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md)<br/>
Fornisce accesso sul lato client a un elemento OLE archiviato in un controllo Rich Edit quando viene utilizzato con `CRichEditView` e `CRichEditDoc`.

[COleException](../mfc/reference/coleexception-class.md)<br/>
Eccezione generata da un errore nell'elaborazione OLE. Questa classe viene utilizzata sia dai contenitori sia dai server.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
