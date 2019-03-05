---
title: Classi server OLE
ms.date: 11/04/2016
f1_keywords:
- vc.classes.ole
helpviewer_keywords:
- OLE server applications [MFC], server classes
- OLE server documents
- COM components, classes [MFC]
- component classes [MFC]
ms.assetid: 8e9b67a2-c0ff-479c-a8d6-19b36c5e6fc6
ms.openlocfilehash: 99dd7f58b862fadc86ee2515bb8ef2008bc538fa
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57289581"
---
# <a name="ole-server-classes"></a>Classi server OLE

Queste classi vengono usate dalle applicazioni server. I documenti del server sono derivati da `COleServerDoc` piuttosto che da `CDocument`. Si noti che, poiché `COleServerDoc` è derivato da `COleLinkingDoc`, i documenti del server possono anche essere contenitori che supportano il collegamento.

Il `COleServerItem` classe rappresenta un documento o parte di un documento che può essere incorporato in un altro documento o collegato.

`COleIPFrameWnd` e `COleResizeBar` supporta la modifica sul posto mentre l'oggetto è in un contenitore, e `COleTemplateServer` supporta la creazione di coppie di documenti/visualizzazioni in modo che gli oggetti OLE da altre applicazioni possono essere modificati.

[COleServerDoc](../mfc/reference/coleserverdoc-class.md)<br/>
Utilizzato come classe base per classi documento applicazione server. `COleServerDoc` la maggior parte del supporto di server tramite le interazioni con di fornire oggetti `COleServerItem` oggetti. La funzionalità di modifica Visual viene fornita tramite l'architettura documento/visualizzazione della libreria di classi.

[CDocItem](../mfc/reference/cdocitem-class.md)<br/>
Classe di base di astratta `COleClientItem` e `COleServerItem`. Gli oggetti di classi derivate da `CDocItem` rappresentano le parti di documenti.

[COleServerItem](../mfc/reference/coleserveritem-class.md)<br/>
Utilizzato per rappresentare l'interfaccia OLE da `COleServerDoc` elementi. Generalmente è presente uno `COleServerDoc` oggetto, che rappresenta la parte di un documento incorporata. In server che supportano i collegamenti alle parti di documenti, possono essere presenti molti `COleServerItem` oggetti, ognuno dei quali rappresenta un collegamento a una parte del documento.

[COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md)<br/>
Fornisce la finestra cornice per una visualizzazione quando viene modificato un documento del server sul posto.

[COleResizeBar](../mfc/reference/coleresizebar-class.md)<br/>
Fornisce l'interfaccia utente standard per il ridimensionamento sul posto. Gli oggetti di questa classe vengono sempre utilizzati in combinazione con `COleIPFrameWnd` oggetti.

[COleTemplateServer](../mfc/reference/coletemplateserver-class.md)<br/>
Utilizzato per creare documenti con architettura documento/visualizzazione del framework. Oggetto `COleTemplateServer` oggetto delega la maggior parte del lavoro a un oggetto associato `CDocTemplate` oggetto.

[COleException](../mfc/reference/coleexception-class.md)<br/>
Eccezione generata da un errore nell'elaborazione OLE. Questa classe viene utilizzata sia dai contenitori sia dai server.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
