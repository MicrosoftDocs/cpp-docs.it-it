---
description: 'Altre informazioni su: oggetti dati e origini dati (OLE)'
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
ms.openlocfilehash: 719053e2a75b18fbf54440403351198acc66b9d3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97291207"
---
# <a name="data-objects-and-data-sources-ole"></a>Oggetti dati e origini dati (OLE)

Quando si esegue un trasferimento dati, usando gli Appunti o il trascinamento della selezione, i dati hanno un'origine e una destinazione. Un'applicazione fornisce i dati per la copia e un'altra applicazione la accetta per incollarli. Ogni lato del trasferimento deve eseguire operazioni diverse sugli stessi dati perché il trasferimento abbia esito positivo. La libreria MFC (Microsoft Foundation Class) fornisce due classi che rappresentano ogni lato del trasferimento:

- Le origini dati (implementate da `COleDataSource` oggetti) rappresentano il lato di origine del trasferimento dei dati. Vengono creati dall'applicazione di origine quando i dati devono essere copiati negli Appunti o quando i dati vengono forniti per un'operazione di trascinamento della selezione.

- Gli oggetti dati (come implementato da `COleDataObject` oggetti) rappresentano il lato di destinazione del trasferimento dei dati. Vengono creati quando nell'applicazione di destinazione sono stati rilasciati dati o quando viene richiesto di eseguire un'operazione Incolla dagli Appunti.

Negli articoli seguenti viene illustrato come utilizzare gli oggetti dati e le origini dati nelle applicazioni. Queste informazioni si applicano sia alle applicazioni del server che al contenitore, perché entrambi possono essere chiamati per copiare e incollare i dati.

- [Oggetti dati e origini dati: creazione e distruzione](data-objects-and-data-sources-creation-and-destruction.md)

- [Oggetti dati e origini dati: manipolazione](data-objects-and-data-sources-manipulation.md)

## <a name="in-this-section"></a>Contenuto della sezione

[Trascinamento della selezione](drag-and-drop-ole.md)

[Appunti](clipboard.md)

## <a name="see-also"></a>Vedi anche

[OLE](ole-in-mfc.md)<br/>
[Classe COleDataObject](reference/coledataobject-class.md)<br/>
[Classe COleDataSource](reference/coledatasource-class.md)
