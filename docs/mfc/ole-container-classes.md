---
title: "Classi di contenitori OLE | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi ActiveX [C++]"
  - "classi di contenitori [C++]"
  - "contenitori [C++], applicazioni contenitore OLE"
  - "OLE [C++], classi"
  - "classi OLE [C++]"
  - "modifica visiva [C++], classi"
ms.assetid: 1e27e1ab-4c22-41eb-8547-6915c72668ae
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi di contenitori OLE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Queste classi sono utilizzate dalle applicazioni contenitore.  Sia `COleLinkingDoc` che `COleDocument` gestiscono raccolte di oggetti `COleClientItem`.  Anziché derivare la classe documento da **CDocument**, lo si deriva da `COleLinkingDoc` o da `COleDocument`, a seconda se si desidera il supporto per i collegamenti agli oggetti incorporati nel documento.  
  
 Utilizzare un oggetto `COleClientItem` per rappresentare ciascun elemento OLE nel documento che è incorporato da un altro documento o è un collegamento a un altro documento.  
  
 [COleDocObjectItem](../mfc/reference/coledocobjectitem-class.md)  
 Supporta Active Document Containment.  
  
 [COleDocument](../mfc/reference/coledocument-class.md)  
 Utilizzato per l'implementazione del documento composito, nonché il supporto di base del contenitore.  Funge da contenitore per le classi derivate da `CDocItem`.  Questa classe può essere utilizzata come classe base per i documenti contenitore ed è la classe base per `COleServerDoc`.  
  
 [COleLinkingDoc](../mfc/reference/colelinkingdoc-class.md)  
 Classe derivata da `COleDocument` che fornisce l'infrastruttura per il collegamento.  È necessario derivare classi di documento per le applicazioni contenitore da questa classe anziché da `COleDocument` se si desidera supportare i collegamenti agli oggetti incorporati.  
  
 [CRichEditDoc](../mfc/reference/cricheditdoc-class.md)  
 Mantiene l'elenco di elementi client OLE presenti nel controllo Rich Edit.  Utilizzato con [CRichEditView](../mfc/reference/cricheditview-class.md) e [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md).  
  
 [CDocItem](../mfc/reference/cdocitem-class.md)  
 Classe di base astratta di `COleClientItem` e `COleServerItem`.  Gli oggetti di classi derivate da `CDocItem` rappresentano parti dei documenti.  
  
 [COleClientItem](../mfc/reference/coleclientitem-class.md)  
 Una classe client dell'elemento che rappresenta il lato client della connessione ad un elemento OLE incorporato o collegato.  Derivare gli elementi client da questa classe.  
  
 [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md)  
 Fornisce l'accesso al lato client ad un elemento OLE archiviato in un controllo Rich Edit in caso di utilizzo con `CRichEditView` e `CRichEditDoc`.  
  
 [COleException](../mfc/reference/coleexception-class.md)  
 Un'eccezione generata da un errore all'interno di un processo OLE.  Questa classe viene utilizzata dai contenitori e dal server.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)