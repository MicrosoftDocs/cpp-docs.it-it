---
title: "Classi documento | Microsoft Docs"
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
  - "vc.classes.document"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi documento"
ms.assetid: 4bf19b02-0a4f-4319-b68e-cddcba2705cb
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi documento
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Documentare gli oggetti di classe, creati dagli oggetti modello di documento, gestire i dati dell'applicazione.  Utilizzata una classe per i documenti da una di queste classi.  
  
 Gli oggetti di classe document interagiscono con gli oggetti.  Gli oggetti visualizzazione rappresentano l'area client di una finestra, che visualizzano dati di un documento e che consentono agli utenti di interagire con.  Documenti e visualizzazioni vengono creati da un oggetto modello di documento.  
  
 [CDocument](../mfc/reference/cdocument-class.md)  
 La classe base per i documenti specifici.  Derivare la classe o le classi del documento da **CDocument**.  
  
 [COleDocument](../mfc/reference/coledocument-class.md)  
 Utilizzato per l'implementazione composta del documento nonché il supporto di base del contenitore.  Funge da contenitore per le classi derivate da [CDocItem](../mfc/reference/cdocitem-class.md).  Questa classe può essere utilizzata come classe base per i documenti contenitore ed è la classe base per `COleServerDoc`.  
  
 [COleLinkingDoc](../mfc/reference/colelinkingdoc-class.md)  
 Classe derivata da `COleDocument` che fornisce l'infrastruttura per il collegamento.  È necessario derivare classi di documento per le applicazioni contenitori da questa classe anziché da `COleDocument` se si desidera collegamenti di supporto agli oggetti incorporati.  
  
 [CRichEditDoc](../mfc/reference/cricheditdoc-class.md)  
 Gestisce l'elenco di elementi client OLE presenti nel controllo Rich Edit.  Utilizzato con [CRichEditView](../mfc/reference/cricheditview-class.md) e [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md).  
  
 [COleServerDoc](../mfc/reference/coleserverdoc-class.md)  
 Utilizzata come classe base per il documento di applicazione server classe.  gli oggetti di`COleServerDoc` forniscono il supporto di massa di server con le interazioni con oggetti di [COleServerItem](../mfc/reference/coleserveritem-class.md).  La funzionalità di modifica visiva viene fornita utilizzando l'architettura documento\/visualizzazione della libreria di classi.  
  
 [CHtmlEditDoc](../mfc/reference/chtmleditdoc-class.md)  
 Offre, con [CHtmlEditView](../mfc/reference/chtmleditview-class.md), la funzionalità della piattaforma di modifica HTML di WebBrowser nel contesto dell'architettura del visualizzazione MFC.  
  
## Classi correlate  
 Documentare gli oggetti di classe può essere persistente ovvero possono scrivere il relativo stato a un supporto di archiviazione e leggerlo indietro.  MFC fornisce la classe di `CArchive` per facilitare trasferire i dati del documento a un supporto di archiviazione.  
  
 [CArchive](../mfc/reference/carchive-class.md)  
 Coopera con un oggetto di [File C](../mfc/reference/cfile-class.md) in un archivio permanente di implementazione per gli oggetti con la serializzazione \(vedere [CObject::Serialize](../Topic/CObject::Serialize.md)\).  
  
 I documenti possono anche contenere oggetti OLE.  `CDocItem` è la classe base degli elementi server e client.  
  
 [CDocItem](../mfc/reference/cdocitem-class.md)  
 Classe base astratta t [COleClientItem](../mfc/reference/coleclientitem-class.md) e di [COleServerItem](../mfc/reference/coleserveritem-class.md).  Gli oggetti di classi derivate da `CDocItem` rappresentano parti dei documenti.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)