---
title: Classi server OLE
ms.date: 11/04/2016
helpviewer_keywords:
- OLE server applications [MFC], server classes
- OLE server documents
- COM components, classes [MFC]
- component classes [MFC]
ms.assetid: 8e9b67a2-c0ff-479c-a8d6-19b36c5e6fc6
ms.openlocfilehash: 06f5cf0985756506e42c7ad9fde24641b5a0ce93
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619860"
---
# <a name="ole-server-classes"></a>Classi server OLE

Queste classi vengono usate dalle applicazioni server. I documenti server derivano da `COleServerDoc` anziché da `CDocument` . Si noti che poiché `COleServerDoc` è derivato da `COleLinkingDoc` , i documenti server possono anche essere contenitori che supportano il collegamento.

La `COleServerItem` classe rappresenta un documento o una parte di un documento che può essere incorporata in un altro documento o collegato a.

`COleIPFrameWnd`e `COleResizeBar` supportano la modifica sul posto mentre l'oggetto si trova in un contenitore e `COleTemplateServer` supporta la creazione di coppie documento/visualizzazione in modo che gli oggetti OLE di altre applicazioni possano essere modificati.

[COleServerDoc](reference/coleserverdoc-class.md)<br/>
Utilizzato come classe base per le classi di documenti dell'applicazione server. `COleServerDoc`gli oggetti forniscono la maggior parte del supporto server tramite interazioni con `COleServerItem` gli oggetti. La funzionalità di modifica visiva viene fornita utilizzando l'architettura documento/visualizzazione della libreria di classi.

[CDocItem](reference/cdocitem-class.md)<br/>
Classe di base astratta di `COleClientItem` e `COleServerItem` . Gli oggetti delle classi derivate da `CDocItem` rappresentano parti dei documenti.

[COleServerItem](reference/coleserveritem-class.md)<br/>
Utilizzato per rappresentare l'interfaccia OLE per `COleServerDoc` gli elementi. In genere è presente un `COleServerDoc` oggetto che rappresenta la parte incorporata di un documento. Nei server che supportano i collegamenti a parti di documenti, possono essere presenti molti `COleServerItem` oggetti, ognuno dei quali rappresenta un collegamento a una parte del documento.

[COleIPFrameWnd](reference/coleipframewnd-class.md)<br/>
Fornisce la finestra cornice per una visualizzazione quando un documento server viene modificato sul posto.

[COleResizeBar](reference/coleresizebar-class.md)<br/>
Fornisce l'interfaccia utente standard per il ridimensionamento sul posto. Gli oggetti di questa classe vengono sempre utilizzati insieme agli `COleIPFrameWnd` oggetti.

[COleTemplateServer](reference/coletemplateserver-class.md)<br/>
Utilizzato per creare documenti utilizzando l'architettura documento/visualizzazione del Framework. Un `COleTemplateServer` oggetto delega la maggior parte del lavoro a un `CDocTemplate` oggetto associato.

[COleException](reference/coleexception-class.md)<br/>
Eccezione generata da un errore nell'elaborazione OLE. Questa classe viene utilizzata sia dai contenitori sia dai server.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](class-library-overview.md)
