---
title: Classi di contenitori OLE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.ole
dev_langs:
- C++
helpviewer_keywords:
- ActiveX classes [MFC]
- container classes [MFC]
- OLE classes [MFC]
- visual editing [MFC], classes
- OLE [MFC], classes
- containers [MFC], OLE container applications
ms.assetid: 1e27e1ab-4c22-41eb-8547-6915c72668ae
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6f8214b2f40926cc4ab1471dce99ce5215362011
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930490"
---
# <a name="ole-container-classes"></a>Classi di contenitori OLE
Queste classi vengono usate dalle applicazioni contenitore. Entrambi `COleLinkingDoc` e `COleDocument` gestire le raccolte di `COleClientItem` oggetti. Anziché derivare la classe documento da `CDocument`, è necessario derivare dalla `COleLinkingDoc` o `COleDocument`, a seconda che si voglia supporto per i collegamenti agli oggetti incorporati nel documento.  
  
 Utilizzare un `COleClientItem` oggetto per rappresentare ogni elemento OLE nel documento è incorporato da un altro documento o un collegamento a un altro documento.  
  
 [COleDocObjectItem](../mfc/reference/coledocobjectitem-class.md)  
 Supporta contenimento dei documenti attivi.  
  
 [COleDocument](../mfc/reference/coledocument-class.md)  
 Utilizzato per l'implementazione di documenti compositi, nonché il supporto di contenitore di base. Funge da contenitore per le classi derivate da `CDocItem`. Questa classe può essere utilizzata come classe base per contenitore documenti ed è la classe base per `COleServerDoc`.  
  
 [COleLinkingDoc](../mfc/reference/colelinkingdoc-class.md)  
 Una classe derivata da `COleDocument` che fornisce l'infrastruttura per il collegamento. È necessario derivare le classi di documento per le applicazioni contenitore da questa classe anziché da `COleDocument` se si desidera che supportano collegamenti a oggetti incorporati.  
  
 [CRichEditDoc](../mfc/reference/cricheditdoc-class.md)  
 Gestisce l'elenco di elementi OLE sul client presenti nel controllo rich edit. Utilizzato con [CRichEditView](../mfc/reference/cricheditview-class.md) e [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md).  
  
 [CDocItem](../mfc/reference/cdocitem-class.md)  
 Classe di base di astratta `COleClientItem` e `COleServerItem`. Oggetti di classi derivate da `CDocItem` rappresentano parti di documenti.  
  
 [COleClientItem](../mfc/reference/coleclientitem-class.md)  
 Una classe di elemento di client che rappresenta il lato del client della connessione a un elemento OLE incorporato o collegato. Derivare gli elementi client da questa classe.  
  
 [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md)  
 Fornisce l'accesso client-side a OLE elemento archiviato in un controllo rich edit quando abbinata `CRichEditView` e `CRichEditDoc`.  
  
 [COleException](../mfc/reference/coleexception-class.md)  
 Eccezione generata da un errore nell'elaborazione OLE. Questa classe viene utilizzata sia dai contenitori sia dai server.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

