---
title: Classi di trasferimento dati e trascinamento della selezione OLE
ms.date: 11/04/2016
helpviewer_keywords:
- ActiveX classes [MFC]
- OLE drag and drop [MFC], and data transfer classes
- drag and drop [MFC], classes
- data transfer [MFC], OLE
- data transfer classes [MFC]
ms.assetid: c8ab2825-ed69-4b88-8ae6-f368b94726b8
ms.openlocfilehash: 7e01b6d5a7d14e0af4ca760e6e601e91359c8ab1
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447621"
---
# <a name="ole-drag-and-drop-and-data-transfer-classes"></a>Classi di trasferimento dati e trascinamento della selezione OLE

Queste classi sono utilizzate nei trasferimenti di dati OLE. Consentono il trasferimento dei dati tra le applicazioni usando gli Appunti o tramite il trascinamento della selezione.

[COleDropSource](../mfc/reference/coledropsource-class.md)<br/>
Controlla l'operazione di trascinamento della selezione dall'inizio alla fine. Questa classe determina quando l'operazione di trascinamento viene avviata e quando termina. Viene inoltre visualizzato il feedback del cursore durante l'operazione di trascinamento della selezione.

[COleDataSource](../mfc/reference/coledatasource-class.md)<br/>
Utilizzato quando un'applicazione fornisce dati per un trasferimento di dati. `COleDataSource` possibile visualizzare come oggetto appunti orientato a oggetti.

[COleDropTarget](../mfc/reference/coledroptarget-class.md)<br/>
Rappresenta la destinazione di un'operazione di trascinamento della selezione. Un oggetto `COleDropTarget` corrisponde a una finestra sullo schermo. Determina se accettare i dati rilasciati su di esso e implementa l'effettiva operazione di rilascio.

[COleDataObject](../mfc/reference/coledataobject-class.md)<br/>
Utilizzato come lato ricevitore per `COleDataSource`. gli oggetti `COleDataObject` consentono di accedere ai dati archiviati da un oggetto `COleDataSource`.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
