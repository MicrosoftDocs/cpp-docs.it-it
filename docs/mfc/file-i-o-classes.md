---
title: I-O classi di file | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.file
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b11996aadd58b456aa919d4ff888c783b4ba486e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33356186"
---
# <a name="file-io-classes"></a>Classi I/O di file
Queste classi forniscono un'interfaccia per i file su disco tradizionali, i file in memoria, flussi attivi e Windows sockets. Tutte le classi derivate da `CFile` può essere utilizzato con un `CArchive` oggetto per eseguire la serializzazione.  
  
 Utilizzare le classi seguenti, in particolare `CArchive` e `CFile`, se si scrittura l'elaborazione di input/output. In genere non è necessario derivare da queste classi. Se si utilizza il framework dell'applicazione, le implementazioni predefinite del **aprire** e **salvare** i comandi nel **File** menu gestirà i/o file (mediante la classe `CArchive`), purché si esegue l'override del documento `Serialize` funzione per fornire informazioni dettagliate su come un documento serializza il contenuto. Per ulteriori informazioni sulle classi di file e la serializzazione, vedere l'articolo [file in MFC](../mfc/files-in-mfc.md) e l'articolo [serializzazione](../mfc/serialization-in-mfc.md).  
  
 [CFile](../mfc/reference/cfile-class.md)  
 Fornisce un'interfaccia di file su file binari del disco.  
  
 [CStdioFile](../mfc/reference/cstdiofile-class.md)  
 Fornisce un `CFile` interfaccia per i file di disco flusso memorizzato nel buffer, in genere in modalità testo.  
  
 [CMemFile](../mfc/reference/cmemfile-class.md)  
 Fornisce un `CFile` interfaccia per i file in memoria.  
  
 [CSharedFile](../mfc/reference/csharedfile-class.md)  
 Fornisce un `CFile` interfaccia per i file condivisi in memoria.  
  
 [COleStreamFile](../mfc/reference/colestreamfile-class.md)  
 Utilizza l'interfaccia COM `IStream` per fornire un accesso `CFile` ai file compositi.  
  
 [CSocketFile](../mfc/reference/csocketfile-class.md)  
 Fornisce un `CFile` interfaccia a un Socket di Windows.  
  
## <a name="related-classes"></a>Classi correlate  
 [CArchive](../mfc/reference/carchive-class.md)  
 Collabora con un `CFile` oggetto per implementare un archivio permanente per gli oggetti mediante la serializzazione (vedere [CObject:: Serialize](../mfc/reference/cobject-class.md#serialize)).  
  
 [Eccezione CArchiveException](../mfc/reference/carchiveexception-class.md)  
 Eccezione di archiviazione.  
  
 [CFileException](../mfc/reference/cfileexception-class.md)  
 Eccezione orientata a un file.  
  
 [CFileDialog](../mfc/reference/cfiledialog-class.md)  
 Fornisce una finestra di dialogo standard per l'apertura o salvataggio di un file.  
  
 [CRecentFileList](../mfc/reference/crecentfilelist-class.md)  
 Mantiene più recente (MRU) elenco dei file usati.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

