---
title: OLE trascinamento e rilascio di trasferimento dati e le classi | Documenti Microsoft
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
- OLE drag and drop [MFC], and data transfer classes
- drag and drop [MFC], classes
- data transfer [MFC], OLE
- data transfer classes [MFC]
ms.assetid: c8ab2825-ed69-4b88-8ae6-f368b94726b8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d55d6d171f490631afe17a605f50607fb55f070b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33347042"
---
# <a name="ole-drag-and-drop-and-data-transfer-classes"></a>Classi di trasferimento dati e trascinamento della selezione OLE
Queste classi vengono utilizzate nei trasferimenti di dati OLE. Consentono il trasferimento tra applicazioni utilizzando negli Appunti o mediante trascinamento e rilascio di dati.  
  
 [COleDropSource](../mfc/reference/coledropsource-class.md)  
 Controlla l'operazione di trascinamento e rilascio dall'inizio alla fine. Questa classe determina l'avvio dell'operazione di trascinamento e alla data di fine. Visualizza anche i commenti e suggerimenti del cursore durante l'operazione di trascinamento e rilascio.  
  
 [COleDataSource](../mfc/reference/coledatasource-class.md)  
 Utilizzato quando un'applicazione fornisce dati per un trasferimento di dati. `COleDataSource` può essere considerato come un oggetto di Appunti orientata agli oggetti.  
  
 [COleDropTarget](../mfc/reference/coledroptarget-class.md)  
 Rappresenta la destinazione di un'operazione di trascinamento e rilascio. Oggetto `COleDropTarget` oggetto corrisponde a una finestra sullo schermo. Determina se accettare tutti i dati trascinati su di esso e implementa l'operazione di rilascio effettivo.  
  
 [COleDataObject](../mfc/reference/coledataobject-class.md)  
 Utilizzato come lato ricevitore `COleDataSource`. `COleDataObject` gli oggetti forniscono l'accesso ai dati archiviati da un `COleDataSource` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

