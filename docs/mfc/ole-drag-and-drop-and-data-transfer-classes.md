---
title: OLE trascinamento e rilascio di trasferimento dati e le classi | Documenti Microsoft
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
- OLE drag and drop [MFC], and data transfer classes
- drag and drop [MFC], classes
- data transfer [MFC], OLE
- data transfer classes [MFC]
ms.assetid: c8ab2825-ed69-4b88-8ae6-f368b94726b8
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0e8c5a54184bcf6450bf39b39a6b90d7865c09d3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ole-drag-and-drop-and-data-transfer-classes"></a>Classi di trasferimento dati e trascinamento della selezione OLE
Queste classi vengono utilizzate nei trasferimenti di dati OLE. Consentono il trasferimento tra applicazioni utilizzando negli Appunti o mediante trascinamento e rilascio di dati.  
  
 [COleDropSource](../mfc/reference/coledropsource-class.md)  
 Controlla l'operazione di trascinamento e rilascio dall'inizio alla fine. Questa classe determina l'avvio dell'operazione di trascinamento e alla data di fine. Visualizza anche i commenti e suggerimenti del cursore durante l'operazione di trascinamento e rilascio.  
  
 [COleDataSource](../mfc/reference/coledatasource-class.md)  
 Utilizzato quando un'applicazione fornisce dati per un trasferimento di dati. `COleDataSource`può essere considerato come un oggetto Clipboard orientata agli oggetti.  
  
 [COleDropTarget](../mfc/reference/coledroptarget-class.md)  
 Rappresenta la destinazione di un'operazione di trascinamento e rilascio. Oggetto `COleDropTarget` oggetto corrisponde a una finestra sullo schermo. Determina se accettare tutti i dati trascinati su di esso e implementa l'operazione di rilascio effettivo.  
  
 [COleDataObject](../mfc/reference/coledataobject-class.md)  
 Utilizzato come lato ricevitore `COleDataSource`. `COleDataObject`oggetti forniscono l'accesso ai dati archiviati da un `COleDataSource` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

