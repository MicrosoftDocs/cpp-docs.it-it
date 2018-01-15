---
title: Classi di contenitori OLE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.classes.ole
dev_langs: C++
helpviewer_keywords:
- ActiveX classes [MFC]
- container classes [MFC]
- OLE classes [MFC]
- visual editing [MFC], classes
- OLE [MFC], classes
- containers [MFC], OLE container applications
ms.assetid: 1e27e1ab-4c22-41eb-8547-6915c72668ae
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: df809971ecf8bdd8700217cf6a1965e2973de754
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ole-container-classes"></a>Classi di contenitori OLE
Queste classi vengono utilizzate dalle applicazioni contenitore. Entrambi `COleLinkingDoc` e `COleDocument` gestire le raccolte di `COleClientItem` oggetti. Anziché derivare la classe documento da **CDocument**, verrà derivare da `COleLinkingDoc` o `COleDocument`, a seconda se si desidera il supporto per i collegamenti agli oggetti incorporati nel documento.  
  
 Utilizzare un `COleClientItem` oggetto per rappresentare ogni elemento OLE nel documento è incorporato da un altro documento o un collegamento a un altro documento.  
  
 [COleDocObjectItem](../mfc/reference/coledocobjectitem-class.md)  
 Supporta l'indipendenza del documento attivo.  
  
 [COleDocument](../mfc/reference/coledocument-class.md)  
 Utilizzato per l'implementazione di documenti compositi, nonché il supporto di contenitore di base. Funge da contenitore per le classi derivate da `CDocItem`. Questa classe può essere utilizzata come classe base per contenitore di documenti ed è la classe base per `COleServerDoc`.  
  
 [COleLinkingDoc](../mfc/reference/colelinkingdoc-class.md)  
 Una classe derivata da `COleDocument` che fornisce l'infrastruttura per il collegamento. È necessario derivare le classi di documenti per le applicazioni contenitore da questa classe invece che da `COleDocument` se si desidera che per supportare i collegamenti a oggetti incorporati.  
  
 [CRichEditDoc](../mfc/reference/cricheditdoc-class.md)  
 Gestisce l'elenco di elementi contenuti nel controllo rich edit client OLE. Utilizzato con [CRichEditView](../mfc/reference/cricheditview-class.md) e [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md).  
  
 [CDocItem](../mfc/reference/cdocitem-class.md)  
 Classe di base di astratta `COleClientItem` e `COleServerItem`. Oggetti di classi derivate da `CDocItem` rappresentano parti di documenti.  
  
 [COleClientItem](../mfc/reference/coleclientitem-class.md)  
 Una classe di elemento di client che rappresenta il lato del client della connessione a un elemento OLE incorporato o collegato. Da questa classe, derivare gli elementi client.  
  
 [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md)  
 Fornisce l'accesso sul lato client a un elemento archiviato in un controllo rich edit quando si utilizza di OLE `CRichEditView` e `CRichEditDoc`.  
  
 [COleException](../mfc/reference/coleexception-class.md)  
 Eccezione generata da un errore nell'elaborazione OLE. Questa classe viene utilizzata sia dai contenitori sia dai server.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

