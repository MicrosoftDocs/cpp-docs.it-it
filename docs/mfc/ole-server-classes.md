---
title: Classi server OLE
ms.date: 11/04/2016
helpviewer_keywords:
- OLE server applications [MFC], server classes
- OLE server documents
- COM components, classes [MFC]
- component classes [MFC]
ms.assetid: 8e9b67a2-c0ff-479c-a8d6-19b36c5e6fc6
ms.openlocfilehash: 92dec514611dcce7d6c666fdd271843e69561637
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447597"
---
# <a name="ole-server-classes"></a>Classi server OLE

Queste classi vengono usate dalle applicazioni server. I documenti server derivano da `COleServerDoc` anziché da `CDocument`. Si noti che poiché `COleServerDoc` deriva da `COleLinkingDoc`, i documenti server possono anche essere contenitori che supportano il collegamento.

La classe `COleServerItem` rappresenta un documento o una parte di un documento che può essere incorporato in un altro documento o collegato a.

`COleIPFrameWnd` e `COleResizeBar` supportano la modifica sul posto mentre l'oggetto si trova in un contenitore e `COleTemplateServer` supporta la creazione di coppie documento/visualizzazione, in modo da poter modificare gli oggetti OLE di altre applicazioni.

[COleServerDoc](../mfc/reference/coleserverdoc-class.md)<br/>
Utilizzato come classe base per le classi di documenti dell'applicazione server. gli oggetti `COleServerDoc` offrono la maggior parte del supporto server tramite interazioni con oggetti `COleServerItem`. La funzionalità di modifica visiva viene fornita utilizzando l'architettura documento/visualizzazione della libreria di classi.

[CDocItem](../mfc/reference/cdocitem-class.md)<br/>
Classe di base astratta di `COleClientItem` e `COleServerItem`. Gli oggetti delle classi derivate da `CDocItem` rappresentano parti dei documenti.

[COleServerItem](../mfc/reference/coleserveritem-class.md)<br/>
Utilizzato per rappresentare l'interfaccia OLE per `COleServerDoc` elementi. In genere è presente un oggetto `COleServerDoc`, che rappresenta la parte incorporata di un documento. Nei server che supportano i collegamenti a parti di documenti, possono essere presenti molti oggetti `COleServerItem`, ognuno dei quali rappresenta un collegamento a una parte del documento.

[COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md)<br/>
Fornisce la finestra cornice per una visualizzazione quando un documento server viene modificato sul posto.

[COleResizeBar](../mfc/reference/coleresizebar-class.md)<br/>
Fornisce l'interfaccia utente standard per il ridimensionamento sul posto. Gli oggetti di questa classe vengono sempre utilizzati insieme a oggetti `COleIPFrameWnd`.

[COleTemplateServer](../mfc/reference/coletemplateserver-class.md)<br/>
Utilizzato per creare documenti utilizzando l'architettura documento/visualizzazione del Framework. Un oggetto `COleTemplateServer` delega la maggior parte del lavoro a un oggetto `CDocTemplate` associato.

[COleException](../mfc/reference/coleexception-class.md)<br/>
Eccezione generata da un errore nell'elaborazione OLE. Questa classe viene utilizzata sia dai contenitori sia dai server.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
