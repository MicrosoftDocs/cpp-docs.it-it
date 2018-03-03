---
title: File in MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4d2cd6344f11a9c32ade0fc3241225a8763c18b9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="files-in-mfc"></a>File in MFC
Classe in di Microsoft Foundation libreria MFC (Class), [CFile](../mfc/reference/cfile-class.md) gestisce le operazioni dei / o file normali. Questa serie di articoli viene illustrato come aprire e chiudere i file, nonché leggere e scrivere dati in tali file. Illustra anche le operazioni di stato di file. Per una descrizione di come utilizzare le funzionalità di serializzazione basato su oggetti di MFC come metodo alternativo di lettura e scrittura dei dati nei file, vedere l'articolo [serializzazione](../mfc/serialization-in-mfc.md).  
  
> [!NOTE]
>  Quando si utilizza MFC **CDocument** oggetti, il framework esegue molte delle operazioni di serializzazione per l'utente. In particolare, il framework crea e Usa il `CFile` oggetto. È necessario scrivere codice nell'override del `Serialize` funzione membro di classe **CDocument**.  
  
 La `CFile` classe fornisce un'interfaccia per le operazioni di file binari generica. Il `CStdioFile` e `CMemFile` le classi derivate da `CFile` e `CSharedFile` classe derivata da `CMemFile` fornire servizi di file più specializzati.  
  
 Per ulteriori informazioni sulle alternative per la gestione dei file MFC, vedere [gestione File](../c-runtime-library/file-handling.md) nel *riferimenti alla libreria di Run-Time*.  
  
 Per informazioni su derivato `CFile` classi, vedere il [grafico della gerarchia MFC](../mfc/hierarchy-chart.md).  
  
## <a name="what-do-you-want-to-do"></a>Ciò che si desidera eseguire  
 *Utilizzare CFile*  
  
-   [Aprire un file con CFile](../mfc/opening-files.md)  
  
-   [Leggere e scrivere un file con CFile](../mfc/reading-and-writing-files.md)  
  
-   [Chiudere un file con CFile](../mfc/closing-files.md)  
  
-   [Stato del file di Access con CFile](../mfc/accessing-file-status.md)  
  
 *Utilizzare la serializzazione di MFC (persistenza degli oggetti)*  
  
-   [Creare una classe serializzabile](../mfc/serialization-making-a-serializable-class.md)  
  
-   [Serializzare un oggetto tramite un oggetto CArchive](../mfc/serialization-serializing-an-object.md)  
  
-   [Creare un oggetto CArchive](../mfc/two-ways-to-create-a-carchive-object.md)  
  
-   [Utilizzare CArchive <\< e >> operatori](../mfc/using-the-carchive-output-and-input-operators.md)  
  
-   [Archiviare e caricamento di oggetti derivati da CObject tramite un archivio](../mfc/storing-and-loading-cobjects-via-an-archive.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../mfc/mfc-concepts.md)   
 [Argomenti MFC generali](../mfc/general-mfc-topics.md)   
 [CArchive (classe)](../mfc/reference/carchive-class.md)   
 [Classe CObject](../mfc/reference/cobject-class.md)
