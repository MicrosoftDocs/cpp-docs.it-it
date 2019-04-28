---
title: Classi di trasferimento dati e trascinamento della selezione OLE
ms.date: 11/04/2016
f1_keywords:
- vc.classes.ole
helpviewer_keywords:
- ActiveX classes [MFC]
- OLE drag and drop [MFC], and data transfer classes
- drag and drop [MFC], classes
- data transfer [MFC], OLE
- data transfer classes [MFC]
ms.assetid: c8ab2825-ed69-4b88-8ae6-f368b94726b8
ms.openlocfilehash: e30a358da55b29f9519bc1ab8ee5c93ada308d98
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62186062"
---
# <a name="ole-drag-and-drop-and-data-transfer-classes"></a>Classi di trasferimento dati e trascinamento della selezione OLE

Queste classi vengono usate nei trasferimenti di dati OLE. Consentono di dati da trasferire tra le applicazioni usando gli Appunti o tramite trascinamento e rilascio.

[COleDropSource](../mfc/reference/coledropsource-class.md)<br/>
Controlla l'operazione di trascinamento e rilascio dall'inizio alla fine. Questa classe determina quando l'operazione di trascinamento viene avviato e quando termina. Risposta del cursore vengono inoltre visualizzati durante l'operazione di trascinamento e rilascio.

[COleDataSource](../mfc/reference/coledatasource-class.md)<br/>
Utilizzato quando un'applicazione fornisce i dati per un trasferimento di dati. `COleDataSource` potrebbe essere visualizzato come un oggetto orientate a oggetti negli Appunti.

[COleDropTarget](../mfc/reference/coledroptarget-class.md)<br/>
Rappresenta la destinazione di un'operazione di trascinamento e rilascio. Oggetto `COleDropTarget` oggetto corrisponde a una finestra sullo schermo. Determina se accettare tutti i dati rilasciati in esso e implementa l'operazione di rilascio effettivo.

[COleDataObject](../mfc/reference/coledataobject-class.md)<br/>
Utilizzato come il lato ricevitore `COleDataSource`. `COleDataObject` oggetti forniscono l'accesso ai dati archiviati da un `COleDataSource` oggetto.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
