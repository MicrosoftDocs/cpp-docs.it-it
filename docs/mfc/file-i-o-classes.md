---
description: 'Altre informazioni su: classi I/O di file'
title: Classi I/O di file
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
ms.openlocfilehash: b2a0404864cd63ea3992ebada643b15531bcfc3e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97228014"
---
# <a name="file-io-classes"></a>Classi I/O di file

Queste classi forniscono un'interfaccia per i file su disco tradizionali, i file in memoria, i flussi attivi e i socket di Windows. Tutte le classi derivate da `CFile` possono essere utilizzate con un `CArchive` oggetto per eseguire la serializzazione.

Usare le classi seguenti, in particolare `CArchive` e `CFile` , se si scrive un'elaborazione di input/output personalizzata. In genere non è necessario derivare da queste classi. Se si usa il Framework applicazione, le implementazioni predefinite dei comandi **Apri** e **Salva** del menu **file** gestiranno l'i/O dei file (usando la classe `CArchive` ), purché si esegua l'override della `Serialize` funzione del documento per fornire informazioni dettagliate sul modo in cui un documento serializza il contenuto. Per ulteriori informazioni sulle classi di file e sulla serializzazione, vedere l'articolo relativo ai [file in MFC](files-in-mfc.md) e alla [serializzazione](serialization-in-mfc.md)degli articoli.

[CFile](reference/cfile-class.md)<br/>
Fornisce un'interfaccia di file per i file su disco binario.

[CStdioFile](reference/cstdiofile-class.md)<br/>
Fornisce un' `CFile` interfaccia per i file su disco del flusso memorizzati nel buffer, in genere in modalità testo.

[CMemFile](reference/cmemfile-class.md)<br/>
Fornisce un' `CFile` interfaccia per i file in memoria.

[CSharedFile](reference/csharedfile-class.md)<br/>
Fornisce un' `CFile` interfaccia per i file in memoria condivisi.

[COleStreamFile](reference/colestreamfile-class.md)<br/>
Utilizza l'interfaccia COM `IStream` per fornire un accesso `CFile` ai file compositi.

[CSocketFile](reference/csocketfile-class.md)<br/>
Fornisce un' `CFile` interfaccia a un socket di Windows.

## <a name="related-classes"></a>Classi correlate

[CArchive](reference/carchive-class.md)<br/>
Coopera con un `CFile` oggetto per implementare l'archiviazione permanente per gli oggetti tramite la serializzazione (vedere [CObject:: Serialize](reference/cobject-class.md#serialize)).

[CArchiveException](reference/carchiveexception-class.md)<br/>
Eccezione di archiviazione.

[CFileException](reference/cfileexception-class.md)<br/>
Eccezione orientata a un file.

[CFileDialog](reference/cfiledialog-class.md)<br/>
Fornisce una finestra di dialogo standard per l'apertura o il salvataggio di un file.

[CRecentFileList](reference/crecentfilelist-class.md)<br/>
Gestisce l'elenco dei file utilizzati più di recente (MRU).

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](class-library-overview.md)
