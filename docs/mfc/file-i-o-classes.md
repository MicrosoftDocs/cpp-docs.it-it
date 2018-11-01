---
title: Classi dei / O file
ms.date: 11/04/2016
f1_keywords:
- vc.classes.file
helpviewer_keywords:
- disk file classes [MFC]
- stdio classes [MFC]
- OLE streams [MFC]
- I/O [MFC], MFC classes
- translated stream classes [MFC]
- file I/O classes [MFC]
- I/O [MFC], classes
- sockets classes [MFC]
- stream classes [MFC]
- memory file classes [MFC]
ms.assetid: 92821c3f-d9e1-47f6-98c9-3b632d86e811
ms.openlocfilehash: a6a47372e77ca8b6adee44125705dc3f4d6b267b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50443108"
---
# <a name="file-io-classes"></a>Classi I/O di file

Queste classi forniscono un'interfaccia per i file su disco tradizionali, i file in memoria, flussi attivi e socket di Windows. Tutte le classi derivate da `CFile` può essere usato con un `CArchive` oggetto per eseguire la serializzazione.

Usare le classi seguenti, in particolare `CArchive` e `CFile`, se si scrive l'elaborazione di input/output. In genere non è necessario derivare da queste classi. Se si usa il framework dell'applicazione, le implementazioni predefinite del **Open** e **salvare** comandi il **File** menu gestirà i/o file (usando classi `CArchive`), purché si esegue l'override del documento `Serialize` funzione per fornire informazioni dettagliate su come un documento serializza il contenuto. Per altre informazioni sulle classi di file e la serializzazione, vedere l'articolo [file in MFC](../mfc/files-in-mfc.md) e l'articolo [serializzazione](../mfc/serialization-in-mfc.md).

[CFile](../mfc/reference/cfile-class.md)<br/>
Fornisce un'interfaccia di file per i file del disco binario.

[CStdioFile](../mfc/reference/cstdiofile-class.md)<br/>
Fornisce un `CFile` interfaccia ai file di disco flusso memorizzato nel buffer, in genere in modalità testo.

[CMemFile](../mfc/reference/cmemfile-class.md)<br/>
Fornisce un `CFile` interfaccia ai file in memoria.

[CSharedFile](../mfc/reference/csharedfile-class.md)<br/>
Fornisce un `CFile` interfaccia ai file condivisi in memoria.

[COleStreamFile](../mfc/reference/colestreamfile-class.md)<br/>
Utilizza l'interfaccia COM `IStream` per fornire un accesso `CFile` ai file compositi.

[CSocketFile](../mfc/reference/csocketfile-class.md)<br/>
Fornisce un `CFile` interfaccia a un Socket di Windows.

## <a name="related-classes"></a>Classi correlate

[CArchive](../mfc/reference/carchive-class.md)<br/>
Collabora con un `CFile` oggetto di implementare un archivio permanente per gli oggetti tramite serializzazione (vedere [CObject:: Serialize](../mfc/reference/cobject-class.md#serialize)).

[CArchiveException](../mfc/reference/carchiveexception-class.md)<br/>
Eccezione di archiviazione.

[CFileException](../mfc/reference/cfileexception-class.md)<br/>
Eccezione orientata a un file.

[CFileDialog](../mfc/reference/cfiledialog-class.md)<br/>
Fornisce una finestra di dialogo standard per l'apertura o salvataggio di un file.

[CRecentFileList](../mfc/reference/crecentfilelist-class.md)<br/>
Gestisce più recente (MRU) elenco file usati.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)

