---
description: 'Altre informazioni su: trascinamento della selezione OLE e classi di Trasferimento dati'
title: Classi di trasferimento dati e trascinamento della selezione OLE
ms.date: 11/04/2016
helpviewer_keywords:
- ActiveX classes [MFC]
- OLE drag and drop [MFC], and data transfer classes
- drag and drop [MFC], classes
- data transfer [MFC], OLE
- data transfer classes [MFC]
ms.assetid: c8ab2825-ed69-4b88-8ae6-f368b94726b8
ms.openlocfilehash: ea19efd05fe4b85a5c0e2ff57412f7eb1d05fcfe
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97244108"
---
# <a name="ole-drag-and-drop-and-data-transfer-classes"></a>Classi di trasferimento dati e trascinamento della selezione OLE

Queste classi sono utilizzate nei trasferimenti di dati OLE. Consentono il trasferimento dei dati tra le applicazioni usando gli Appunti o tramite il trascinamento della selezione.

[COleDropSource](reference/coledropsource-class.md)<br/>
Controlla l'operazione di trascinamento della selezione dall'inizio alla fine. Questa classe determina quando l'operazione di trascinamento viene avviata e quando termina. Viene inoltre visualizzato il feedback del cursore durante l'operazione di trascinamento della selezione.

[COleDataSource](reference/coledatasource-class.md)<br/>
Utilizzato quando un'applicazione fornisce dati per un trasferimento di dati. `COleDataSource` potrebbe essere visualizzato come oggetto appunti orientato a oggetti.

[COleDropTarget](reference/coledroptarget-class.md)<br/>
Rappresenta la destinazione di un'operazione di trascinamento della selezione. Un `COleDropTarget` oggetto corrisponde a una finestra sullo schermo. Determina se accettare i dati rilasciati su di esso e implementa l'effettiva operazione di rilascio.

[COleDataObject](reference/coledataobject-class.md)<br/>
Utilizzato come lato ricevitore per `COleDataSource` . `COleDataObject` gli oggetti consentono di accedere ai dati archiviati da un `COleDataSource` oggetto.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](class-library-overview.md)
