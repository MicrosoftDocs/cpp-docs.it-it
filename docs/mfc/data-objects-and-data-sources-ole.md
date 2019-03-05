---
title: Oggetti dati e origini dati (OLE)
ms.date: 11/04/2016
helpviewer_keywords:
- data objects [MFC], definition
- data transfer [MFC]
- OLE [MFC], data transfer
- data sources [MFC], definition
- data transfer [MFC], definition
- OLE [MFC], data objects
- OLE [MFC], data sources
ms.assetid: 8f68eed8-0ce8-4489-a4cc-f95554f89090
ms.openlocfilehash: 485fa5c62aafa4c116a76547238325d2979bfdc4
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57298269"
---
# <a name="data-objects-and-data-sources-ole"></a>Oggetti dati e origini dati (OLE)

Quando si esegue un trasferimento di dati, tramite l'utilizzo negli Appunti o trascinamento della selezione, i dati abbiano un'origine e una destinazione. Un'applicazione fornisce i dati per la copia e l'accetta un'altra applicazione per incollare. Ogni lato del trasferimento è necessario eseguire diverse operazioni sugli stessi dati per il trasferimento abbia esito positivo. La libreria Microsoft Foundation classi (MFC) fornisce due classi che rappresentano ogni lato di questo trasferimento:

- Origini dati (come implementato dalla `COleDataSource` oggetti) rappresentano l'origine del trasferimento dei dati. Vengono create dall'applicazione di origine quando i dati deve essere copiato negli Appunti oppure quando vengono forniti dati per un'operazione di trascinamento e rilascio.

- Gli oggetti di data (come implementato dalla `COleDataObject` oggetti) rappresentano la destinazione del trasferimento dei dati. Vengono creati quando l'applicazione di destinazione ha dati trascinati al suo interno oppure quando viene richiesto di eseguire un'operazione Incolla dagli Appunti.

Gli articoli seguenti illustrano come usare gli oggetti dati e origini dati nelle applicazioni. Queste informazioni si applicano alle applicazioni contenitore sia il server, poiché entrambi possono essere utilizzate per copiare e incollare i dati.

- [Oggetti dati e origini dati: Creazione e distruzione](../mfc/data-objects-and-data-sources-creation-and-destruction.md)

- [Oggetti dati e origini dati: Manipolazione](../mfc/data-objects-and-data-sources-manipulation.md)

## <a name="in-this-section"></a>In questa sezione

[Trascinamento della selezione](../mfc/drag-and-drop-ole.md)

[Appunti](../mfc/clipboard.md)

## <a name="see-also"></a>Vedere anche

[OLE](../mfc/ole-in-mfc.md)<br/>
[Classe COleDataObject](../mfc/reference/coledataobject-class.md)<br/>
[Classe COleDataSource](../mfc/reference/coledatasource-class.md)
