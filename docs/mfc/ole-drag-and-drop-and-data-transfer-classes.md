---
title: OLE trascinamento e rilascio di trasferimento dati e le classi | Microsoft Docs
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
ms.openlocfilehash: a4b5d694d0081fbe2d852884c4a379e962c22f2a
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46444138"
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

