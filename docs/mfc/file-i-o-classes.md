---
title: "Classi I/O di file | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.file"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi di file su disco"
  - "classi di I/O file [C++]"
  - "I/O [C++], classi MFC"
  - "I/O [MFC], classi"
  - "classi di file di memoria"
  - "flussi OLE"
  - "classi socket"
  - "classi stdio"
  - "classi di flusso"
  - "classi di flusso tradotte"
ms.assetid: 92821c3f-d9e1-47f6-98c9-3b632d86e811
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi I/O di file
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Queste classi forniscono un'interfaccia ai file su disco tradizionali, ai file in memoria, i flussi attivi e ai socket di windows.  Tutte le classi derivate da `CFile` possono essere utilizzate con un oggetto di `CArchive` per eseguire la serializzazione.  
  
 Utilizzare le seguenti classi, in particolare `CArchive` e `CFile`, si scrive una propria finestra di output.  Generalmente non è necessario derivare da queste classi.  Se si utilizza il framework applicazione, le implementazioni predefinite dei comandi **Salva** e **Apri** dal menu **File** gestiranno l'I\/O di file \(utilizzando classe `CArchive`\), purché eseguire l'override di una funzione `Serializza` del documento per fornire i dettagli su come un documento serializza il contenuto.  Per ulteriori informazioni sulle classi e sulla serializzazione di file, vedere l'articolo [File in MFC](../mfc/files-in-mfc.md) e l'articolo [Serializzazione](../mfc/serialization-in-mfc.md).  
  
 [File C](../mfc/reference/cfile-class.md)  
 Fornisce un'interfaccia del file ai file su disco binari.  
  
 [CStdioFile](../mfc/reference/cstdiofile-class.md)  
 Fornisce un'interfaccia di `CFile` ai file su disco del flusso buffering, in genere in modalità testo.  
  
 [CMemFile](../mfc/reference/cmemfile-class.md)  
 Fornisce un'interfaccia di `CFile` ai file in memoria.  
  
 [CSharedFile](../mfc/reference/csharedfile-class.md)  
 Fornisce un'interfaccia di `CFile` ai file in memoria condivisi.  
  
 [COleStreamFile](../mfc/reference/colestreamfile-class.md)  
 Utilizza l'interfaccia COM `IStream` per fornire un accesso di `CFile` ai file compositi.  
  
 [CSocketFile](../mfc/reference/csocketfile-class.md)  
 Fornisce un'interfaccia di `CFile` a un socket di windows.  
  
## Classi correlate  
 [CArchive](../mfc/reference/carchive-class.md)  
 Coopera con un oggetto di `CFile` in un archivio permanente di implementazione per gli oggetti con la serializzazione \(vedere [CObject::Serialize](../Topic/CObject::Serialize.md)\).  
  
 [CArchiveException](../mfc/reference/carchiveexception-class.md)  
 Un'eccezione store.  
  
 [CFileException](../mfc/reference/cfileexception-class.md)  
 A un'eccezione orientata a file.  
  
 [CFileDialog](../mfc/reference/cfiledialog-class.md)  
 Fornisce una finestra di dialogo standard per aprire o salvare un file.  
  
 [CRecentFileList](../mfc/reference/crecentfilelist-class.md)  
 Gestisce l'elenco dei file utilizzati di recente di \(MRU\).  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)