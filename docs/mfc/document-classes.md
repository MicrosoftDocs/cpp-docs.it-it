---
title: Classi documento
ms.date: 11/04/2016
f1_keywords:
- vc.classes.document
helpviewer_keywords:
- document classes [MFC]
ms.assetid: 4bf19b02-0a4f-4319-b68e-cddcba2705cb
ms.openlocfilehash: a7034a99bfefe8f4c11cdf8f99dc4b0c31fac10a
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57289715"
---
# <a name="document-classes"></a>Classi documento

Oggetti di classe documento, creati da oggetti modello di documento e gestiscono i dati dell'applicazione. Si verrà derivare una classe per i documenti da una di queste classi.

Oggetti di classe documento interagiscono con gli oggetti di visualizzazione. Visualizza oggetti rappresentano l'area client di una finestra, la visualizzazione dei dati del documento e consentono agli utenti di interagire con esso. Documenti e visualizzazioni vengono create da un oggetto modello di documento.

[CDocument](../mfc/reference/cdocument-class.md)<br/>
Classe di base per i documenti specifici dell'applicazione. Derivare la classe del documento o le classi da `CDocument`.

[COleDocument](../mfc/reference/coledocument-class.md)<br/>
Utilizzato per l'implementazione di documento composito, nonché il supporto di contenitore di base. Funge da contenitore per le classi derivate da [CDocItem](../mfc/reference/cdocitem-class.md). Questa classe può essere utilizzata come classe base per contenitore di documenti ed è la classe base per `COleServerDoc`.

[COleLinkingDoc](../mfc/reference/colelinkingdoc-class.md)<br/>
Una classe derivata da `COleDocument` che fornisce l'infrastruttura per il collegamento. È consigliabile derivare le classi di documenti per le applicazioni contenitore da questa classe anziché da `COleDocument` se si desidera che il supporto di collegamenti a oggetti incorporati.

[CRichEditDoc](../mfc/reference/cricheditdoc-class.md)<br/>
Gestisce l'elenco di elementi di client OLE in controllo rich edit. Utilizzato con [CRichEditView](../mfc/reference/cricheditview-class.md) e [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md).

[COleServerDoc](../mfc/reference/coleserverdoc-class.md)<br/>
Utilizzato come classe base per classi documento applicazione server. `COleServerDoc` la maggior parte del supporto di server tramite le interazioni con di fornire gli oggetti [COleServerItem](../mfc/reference/coleserveritem-class.md) oggetti. La funzionalità di modifica Visual viene fornita tramite l'architettura documento/visualizzazione della libreria di classi.

[CHtmlEditDoc](../mfc/reference/chtmleditdoc-class.md)<br/>
Fornisce, con [CHtmlEditView](../mfc/reference/chtmleditview-class.md), la funzionalità della piattaforma di modifica WebBrowser HTML all'interno del contesto dell'architettura documento / visualizzazione MFC.

## <a name="related-classes"></a>Classi correlate

Oggetti di classe documento possono essere persistenti, in altre parole, è possibile scrivere il proprio stato in un supporto di archiviazione e leggerli. MFC fornisce il `CArchive` classe per facilitare il trasferimento dei dati del documento in un supporto di archiviazione.

[CArchive](../mfc/reference/carchive-class.md)<br/>
Collabora con un [CFile](../mfc/reference/cfile-class.md) oggetto di implementare un archivio permanente per gli oggetti tramite serializzazione (vedere [CObject:: Serialize](../mfc/reference/cobject-class.md#serialize)).

I documenti possono anche contenere oggetti OLE. `CDocItem` è la classe di base degli elementi di server e client.

[CDocItem](../mfc/reference/cdocitem-class.md)<br/>
Classe di base di astratta [COleClientItem](../mfc/reference/coleclientitem-class.md) e [COleServerItem](../mfc/reference/coleserveritem-class.md). Gli oggetti di classi derivate da `CDocItem` rappresentano le parti di documenti.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
