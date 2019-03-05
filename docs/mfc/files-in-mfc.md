---
title: File in MFC
ms.date: 11/04/2016
helpviewer_keywords:
- serialization [MFC], MFC files
- I/O [MFC], MFC classes
- files [MFC], MFC
- files [MFC], serialization
- binary access, binary file operations in MFC
- file I/O classes [MFC]
- I/O [MFC]
- persistence [MFC]
- MFC, file operations
- files [MFC], manipulating
- binary access [MFC]
ms.assetid: ae25e2c5-2859-4679-ab97-438824e93ce1
ms.openlocfilehash: cf53c498e61bdf0a233d7638649b30e498e27cc5
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57297931"
---
# <a name="files-in-mfc"></a>File in MFC

Nel MFC Microsoft Foundation Class Library (), classe [CFile](../mfc/reference/cfile-class.md) gestisce le operazioni dei / o file normali. Questa serie di articoli illustra come aprire e chiudere i file, nonché leggere e scrivere dati a tali file. Illustra anche le operazioni dello stato di file. Per una descrizione di come usare le funzionalità di serializzazione e basato sugli oggetti di MFC come un modo alternativo per la lettura e scrittura dei dati nei file, vedere l'articolo [serializzazione](../mfc/serialization-in-mfc.md).

> [!NOTE]
>  Quando si Usa MFC `CDocument` oggetti, il framework esegue molte delle operazioni di serializzazione per l'utente. In particolare, il framework crea e Usa il `CFile` oggetto. È necessario scrivere codice nell'override della `Serialize` funzione membro di classe `CDocument`.

Il `CFile` classe fornisce un'interfaccia per operazioni su file binari per utilizzo generico. Il `CStdioFile` e `CMemFile` le classi derivate da `CFile` e il `CSharedFile` classe derivata da `CMemFile` fornire servizi più specializzati di file.

Per altre informazioni sulle alternative disponibili per la gestione dei file MFC, vedere [gestione File](../c-runtime-library/file-handling.md) nel *Run-Time Library Reference*.

Per informazioni su derivato `CFile` le classi, vedere la [grafico delle gerarchie MFC](../mfc/hierarchy-chart.md).

## <a name="what-do-you-want-to-do"></a>Ciò che si desidera eseguire

*Usare CFile*

- [Aprire un file con CFile](../mfc/opening-files.md)

- [Leggere e scrivere un file con CFile](../mfc/reading-and-writing-files.md)

- [Chiudere un file con CFile](../mfc/closing-files.md)

- [Stato del file di Access con CFile](../mfc/accessing-file-status.md)

*Utilizzare la serializzazione di MFC (la persistenza degli oggetti)*

- [Creare una classe serializzabile](../mfc/serialization-making-a-serializable-class.md)

- [Serializzare un oggetto tramite un oggetto CArchive](../mfc/serialization-serializing-an-object.md)

- [Creare un oggetto CArchive](../mfc/two-ways-to-create-a-carchive-object.md)

- [Utilizzare CArchive <\< e >> operatori](../mfc/using-the-carchive-output-and-input-operators.md)

- [Store e caricamento di oggetti derivati da CObject tramite un archivio](../mfc/storing-and-loading-cobjects-via-an-archive.md)

## <a name="see-also"></a>Vedere anche

[Concetti](../mfc/mfc-concepts.md)<br/>
[Argomenti MFC generali](../mfc/general-mfc-topics.md)<br/>
[Classe CArchive](../mfc/reference/carchive-class.md)<br/>
[Classe CObject](../mfc/reference/cobject-class.md)
