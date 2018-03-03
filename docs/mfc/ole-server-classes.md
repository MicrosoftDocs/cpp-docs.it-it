---
title: Classi Server OLE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.classes.ole
dev_langs:
- C++
helpviewer_keywords:
- OLE server applications [MFC], server classes
- OLE server documents
- COM components, classes [MFC]
- component classes [MFC]
ms.assetid: 8e9b67a2-c0ff-479c-a8d6-19b36c5e6fc6
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d23c7cb23d9221f8f2183c666a99c70ef149db3e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ole-server-classes"></a>Classi server OLE
Queste classi vengono utilizzate dalle applicazioni server. I documenti del server sono derivati da `COleServerDoc` piuttosto che da **CDocument**. Si noti che poiché `COleServerDoc` è derivato da `COleLinkingDoc`, i documenti del server possono anche essere contenitori che supportano il collegamento.  
  
 La `COleServerItem` classe rappresenta un documento o parte di un documento che può essere incorporato in un altro documento o collegato.  
  
 `COleIPFrameWnd`e `COleResizeBar` supporta la modifica sul posto quando l'oggetto è in un contenitore, e `COleTemplateServer` supporta la creazione di coppie di documento/visualizzazione, in modo gli oggetti OLE da altre applicazioni possono essere modificati.  
  
 [COleServerDoc](../mfc/reference/coleserverdoc-class.md)  
 Utilizzata come classe di base per le classi documento applicazione server. `COleServerDoc`gli oggetti forniscono la maggior parte del supporto di server tramite le interazioni con `COleServerItem` oggetti. La funzionalità di modifica Visual è fornita mediante architettura documento/visualizzazione della libreria di classi.  
  
 [CDocItem](../mfc/reference/cdocitem-class.md)  
 Classe di base di astratta `COleClientItem` e `COleServerItem`. Oggetti di classi derivate da `CDocItem` rappresentano parti di documenti.  
  
 [COleServerItem](../mfc/reference/coleserveritem-class.md)  
 Utilizzato per rappresentare l'interfaccia OLE `COleServerDoc` elementi. È in genere presente `COleServerDoc` oggetto che rappresenta la parte di un documento incorporata. Nel server che supportano collegamenti a parti di documenti, possono esistere molte `COleServerItem` oggetti, ognuno dei quali rappresenta un collegamento a una parte del documento.  
  
 [COleIPFrameWnd](../mfc/reference/coleipframewnd-class.md)  
 Fornisce la finestra cornice per una visualizzazione durante la modifica sul posto di un documento server.  
  
 [COleResizeBar](../mfc/reference/coleresizebar-class.md)  
 Fornisce l'interfaccia utente standard per il ridimensionamento sul posto. Gli oggetti di questa classe vengono sempre utilizzati in combinazione con `COleIPFrameWnd` oggetti.  
  
 [COleTemplateServer](../mfc/reference/coletemplateserver-class.md)  
 Utilizzato per creare documenti con architettura documento/visualizzazione del framework. Oggetto `COleTemplateServer` oggetto delega la maggior parte del lavoro a un oggetto associato `CDocTemplate` oggetto.  
  
 [COleException](../mfc/reference/coleexception-class.md)  
 Eccezione generata da un errore nell'elaborazione OLE. Questa classe viene utilizzata sia dai contenitori sia dai server.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

