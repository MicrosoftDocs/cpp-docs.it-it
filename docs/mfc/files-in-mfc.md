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
ms.openlocfilehash: 3a99c4143bbd27ba765b0289b80be8870a940f63
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365305"
---
# <a name="files-in-mfc"></a>File in MFC

Nella libreria MFC (Microsoft Foundation Class), la classe [CFile](../mfc/reference/cfile-class.md) gestisce le normali operazioni di I/O dei file. Questa famiglia di articoli spiega come aprire e chiudere i file, nonché leggere e scrivere dati in tali file. Vengono inoltre illustrate le operazioni relative allo stato dei file. Per una descrizione di come utilizzare le funzionalità di serializzazione basata su oggetti di MFC come modo alternativo di leggere e scrivere dati nei file, vedere l'articolo [Serializzazione](../mfc/serialization-in-mfc.md).

> [!NOTE]
> Quando si `CDocument` utilizzano oggetti MFC, il framework esegue gran parte del lavoro di serializzazione per l'utente. In particolare, il framework `CFile` crea e utilizza l'oggetto. È sufficiente scrivere codice nell'override `Serialize` della funzione `CDocument`membro della classe .

La `CFile` classe fornisce un'interfaccia per le operazioni sui file binari di uso generale. Le `CStdioFile` `CMemFile` classi e `CFile` derivate da e dalla `CSharedFile` classe derivata da `CMemFile` forniscono servizi file più specializzati.

Per ulteriori informazioni sulle alternative alla gestione dei file MFC, vedere [Gestione dei file](../c-runtime-library/file-handling.md) in Riferimenti alla libreria di *runtime*.

Per informazioni `CFile` sulle classi derivate, vedere il [grafico della gerarchia MFC](../mfc/hierarchy-chart.md).

## <a name="what-do-you-want-to-do"></a>Cosa vuoi fare

*Utilizzare CFile*

- [Aprire un file con CFileOpen a file with CFile](../mfc/opening-files.md)

- [Leggere e scrivere un file con CFileRead and write a file with CFile](../mfc/reading-and-writing-files.md)

- [Chiudere un file con CFile](../mfc/closing-files.md)

- [Accesso allo stato del file con CFileAccess file status with CFile](../mfc/accessing-file-status.md)

*Utilizzare la serializzazione MFC (persistenza degli oggetti)Use MFC Serialization (Object Persistence)*

- [Creare una classe serializzabileCreate a serializable class](../mfc/serialization-making-a-serializable-class.md)

- [Serializzare un oggetto tramite un oggetto CArchiveSerialize an object via a CArchive object](../mfc/serialization-serializing-an-object.md)

- [Creare un oggetto CArchiveCreate a CArchive object](../mfc/two-ways-to-create-a-carchive-object.md)

- [Usare gli \< operatori di <e >> CArchiveUse CArchive <and >> operators](../mfc/using-the-carchive-output-and-input-operators.md)

- [Archiviare e caricare CObjects e oggetti derivati da CObject tramite un archivio](../mfc/storing-and-loading-cobjects-via-an-archive.md)

## <a name="see-also"></a>Vedere anche

[Concetti](../mfc/mfc-concepts.md)<br/>
[Argomenti MFC generali](../mfc/general-mfc-topics.md)<br/>
[Classe CArchive](../mfc/reference/carchive-class.md)<br/>
[Classe CObject](../mfc/reference/cobject-class.md)
