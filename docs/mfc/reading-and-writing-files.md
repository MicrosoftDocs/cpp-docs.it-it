---
title: Durante la lettura e scrittura di file | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CFile class [MFC], objects
- examples [MFC], reading files
- files [MFC], writing to
- examples [MFC], writing to files
- files [MFC], reading
- MFC, file operations
- CFile class [MFC], reading and writing CFile objects
- reading files
- writing to files [MFC]
ms.assetid: cac0c826-ba56-495f-99b3-ce6336f65763
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e30ee5b326833b45365c422238ecfcd4f82c556d
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930911"
---
# <a name="reading-and-writing-files"></a>Lettura e scrittura di file
Se è stata usata le funzioni di gestione dei file di libreria run-time C, MFC la lettura e scrittura apparirà familiare. Questo articolo descrive direttamente la lettura e scrittura direttamente a un `CFile` oggetto. È possibile anche con memorizzazione nel buffer i/o file con il [CArchive](../mfc/reference/carchive-class.md) classe.  
  
#### <a name="to-read-from-and-write-to-the-file"></a>Per leggere e scrivere nel file  
  
1.  Usare la `Read` e `Write` funzioni membro per leggere e scrivere dati nel file.  
  
     oppure  
  
2.  Il `Seek` funzione membro disponibile anche per lo spostamento di un offset specifico all'interno del file.  
  
 `Read` accetta un puntatore a un buffer e il numero di byte da leggere e restituisce il numero effettivo di byte letti. Se il numero di byte richiesto potrebbe non essere letto perché la fine del file (EOF) viene raggiunto, viene restituito il numero effettivo di byte letti. Se si verifica un errore di lettura, viene generata un'eccezione. `Write` è simile a `Read`, ma non viene restituito il numero di byte scritti. Se si verifica un errore di scrittura, tra cui la scrittura non di tutti i byte specificati, viene generata un'eccezione. Se si dispone di un valore valido `CFile` dell'oggetto, è possibile leggervi o scrivere come illustrato nell'esempio seguente:  
  
 [!code-cpp[NVC_MFCFiles#2](../atl-mfc-shared/reference/codesnippet/cpp/reading-and-writing-files_1.cpp)]  
  
> [!NOTE]
>  In genere è necessario effettuare operazioni di input/output all'interno di un **provare**/**catch** blocco delle eccezioni. Per altre informazioni, vedere [gestione delle eccezioni (MFC)](../mfc/exception-handling-in-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [File](../mfc/files-in-mfc.md)

