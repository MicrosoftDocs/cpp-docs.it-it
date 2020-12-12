---
description: 'Altre informazioni su: classi di documenti'
title: Classi documento
ms.date: 11/04/2016
f1_keywords:
- vc.classes.document
helpviewer_keywords:
- document classes [MFC]
ms.assetid: 4bf19b02-0a4f-4319-b68e-cddcba2705cb
ms.openlocfilehash: 7f5bd3011dec84cad20b10668e0a997838e79dbb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330284"
---
# <a name="document-classes"></a>Classi documento

Gli oggetti della classe Document, creati dagli oggetti Document-Template, gestiscono i dati dell'applicazione. Viene derivata una classe per i documenti da una di queste classi.

Gli oggetti della classe Document interagiscono con gli oggetti visualizzazione. Gli oggetti visualizzazione rappresentano l'area client di una finestra, visualizzano i dati di un documento e consentono agli utenti di interagire con esso. Documenti e viste vengono creati da un oggetto modello documento.

[CDocument](reference/cdocument-class.md)<br/>
Classe base per i documenti specifici dell'applicazione. Derivare la classe o le classi del documento da `CDocument` .

[COleDocument](reference/coledocument-class.md)<br/>
Usato per l'implementazione di documenti compositi e per il supporto dei contenitori di base. Funge da contenitore per le classi derivate da [CDocItem](reference/cdocitem-class.md). Questa classe può essere usata come classe di base per i documenti contenitore ed è la classe di base per `COleServerDoc` .

[COleLinkingDoc](reference/colelinkingdoc-class.md)<br/>
Classe derivata da `COleDocument` che fornisce l'infrastruttura per il collegamento. È necessario derivare le classi del documento per le applicazioni contenitore da questa classe anziché da `COleDocument` se si desidera che supportino collegamenti a oggetti incorporati.

[CRichEditDoc](reference/cricheditdoc-class.md)<br/>
Mantiene l'elenco di elementi client OLE presenti nel controllo Rich Edit. Utilizzato con [CRichEditView](reference/cricheditview-class.md) e [CRichEditCntrItem](reference/cricheditcntritem-class.md).

[COleServerDoc](reference/coleserverdoc-class.md)<br/>
Utilizzato come classe base per le classi di documenti dell'applicazione server. `COleServerDoc` gli oggetti forniscono la maggior parte del supporto server tramite interazioni con gli oggetti [COleServerItem](reference/coleserveritem-class.md) . La funzionalità di modifica visiva viene fornita utilizzando l'architettura documento/visualizzazione della libreria di classi.

[CHtmlEditDoc](reference/chtmleditdoc-class.md)<br/>
Fornisce, con [CHtmlEditView](reference/chtmleditview-class.md), la funzionalità della piattaforma di modifica HTML WebBrowser nel contesto dell'architettura documento/visualizzazione MFC.

## <a name="related-classes"></a>Classi correlate

Gli oggetti della classe Document possono essere permanenti. in altre parole, possono scrivere il proprio stato in un supporto di archiviazione e leggerlo di nuovo. MFC fornisce la `CArchive` classe per facilitare il trasferimento dei dati del documento in un supporto di archiviazione.

[CArchive](reference/carchive-class.md)<br/>
Coopera con un oggetto [CFile](reference/cfile-class.md) per implementare l'archiviazione permanente per gli oggetti tramite la serializzazione (vedere [CObject:: Serialize](reference/cobject-class.md#serialize)).

I documenti possono inoltre contenere oggetti OLE. `CDocItem` è la classe base degli elementi server e client.

[CDocItem](reference/cdocitem-class.md)<br/>
Classe di base astratta di [COleClientItem](reference/coleclientitem-class.md) e [COleServerItem](reference/coleserveritem-class.md). Gli oggetti delle classi derivate da `CDocItem` rappresentano parti dei documenti.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](class-library-overview.md)
