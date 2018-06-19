---
title: Classi documento | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.document
dev_langs:
- C++
helpviewer_keywords:
- document classes [MFC]
ms.assetid: 4bf19b02-0a4f-4319-b68e-cddcba2705cb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2073e432dd0d0792e358a3f159892aea405197c9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33346617"
---
# <a name="document-classes"></a>Classi documento
Oggetti della classe documento, creati da oggetti modello di documento, gestiscono i dati dell'applicazione. Si verrà derivare una classe per i documenti da una di queste classi.  
  
 Oggetti della classe documento interagiscono con gli oggetti di visualizzazione. Visualizza oggetti rappresentano l'area client di una finestra, visualizzano i dati del documento e consentono agli utenti di interagire con esso. Documenti e visualizzazioni vengono create da un oggetto modello di documento.  
  
 [CDocument](../mfc/reference/cdocument-class.md)  
 La classe base per documenti specifici dell'applicazione. Derivare la classe di documento o le classi da **CDocument**.  
  
 [COleDocument](../mfc/reference/coledocument-class.md)  
 Utilizzato per l'implementazione di documenti compositi, nonché il supporto di contenitore di base. Funge da contenitore per le classi derivate da [CDocItem](../mfc/reference/cdocitem-class.md). Questa classe può essere utilizzata come classe base per contenitore di documenti ed è la classe base per `COleServerDoc`.  
  
 [COleLinkingDoc](../mfc/reference/colelinkingdoc-class.md)  
 Una classe derivata da `COleDocument` che fornisce l'infrastruttura per il collegamento. È necessario derivare le classi di documenti per le applicazioni contenitore da questa classe invece che da `COleDocument` se si desidera che per supportare i collegamenti a oggetti incorporati.  
  
 [CRichEditDoc](../mfc/reference/cricheditdoc-class.md)  
 Gestisce l'elenco di elementi contenuti nel controllo rich edit client OLE. Utilizzato con [CRichEditView](../mfc/reference/cricheditview-class.md) e [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md).  
  
 [COleServerDoc](../mfc/reference/coleserverdoc-class.md)  
 Utilizzata come classe di base per le classi documento applicazione server. `COleServerDoc` gli oggetti forniscono la maggior parte del supporto di server tramite le interazioni con [COleServerItem](../mfc/reference/coleserveritem-class.md) oggetti. La funzionalità di modifica Visual è fornita mediante architettura documento/visualizzazione della libreria di classi.  
  
 [CHtmlEditDoc](../mfc/reference/chtmleditdoc-class.md)  
 Fornisce, con [CHtmlEditView](../mfc/reference/chtmleditview-class.md), la funzionalità della piattaforma di modifica HTML WebBrowser nel contesto dell'architettura documento / visualizzazione MFC.  
  
## <a name="related-classes"></a>Classi correlate  
 Oggetti di classe di documento possono essere persistenti, in altre parole, è possibile scrivere il proprio stato su un supporto di archiviazione e leggerli. MFC fornisce la `CArchive` classe per facilitare il trasferimento dei dati del documento su un supporto di archiviazione.  
  
 [CArchive](../mfc/reference/carchive-class.md)  
 Collabora con un [CFile](../mfc/reference/cfile-class.md) oggetto per implementare un archivio permanente per gli oggetti mediante la serializzazione (vedere [CObject:: Serialize](../mfc/reference/cobject-class.md#serialize)).  
  
 Documenti possono anche contenere oggetti OLE. `CDocItem` è la classe di base degli elementi client e server.  
  
 [CDocItem](../mfc/reference/cdocitem-class.md)  
 Classe di base di astratta [COleClientItem](../mfc/reference/coleclientitem-class.md) e [COleServerItem](../mfc/reference/coleserveritem-class.md). Oggetti di classi derivate da `CDocItem` rappresentano parti di documenti.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

