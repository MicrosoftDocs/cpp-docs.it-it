---
title: Lettura e scrittura di file | Documenti Microsoft
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 770dfe28b3f0278ba2682b37b71d1dd89d02ae2e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="reading-and-writing-files"></a>Lettura e scrittura di file
Se è stata usata le funzioni di gestione dei file di libreria di runtime C, MFC la lettura e scrittura risultano familiari. In questo articolo viene direttamente la lettura e scrittura direttamente a un `CFile` oggetto. Si possono inoltre memorizzati nel buffer i/o file con il [CArchive](../mfc/reference/carchive-class.md) classe.  
  
#### <a name="to-read-from-and-write-to-the-file"></a>Per leggere e scrivere nel file  
  
1.  Utilizzare il **lettura** e **scrivere** funzioni membro per leggere e scrivere dati nel file.  
  
     oppure  
  
2.  Il `Seek` funzione membro è disponibile anche per lo spostamento di un determinato offset all'interno del file.  
  
 **Lettura** accetta un puntatore a un buffer e il numero di byte da leggere e restituisce il numero effettivo di byte letti. Se il numero di byte richiesto potrebbe non essere letto perché la fine del file (EOF) viene raggiunto, viene restituito il numero effettivo di byte letti. Se si verifica un errore di lettura, viene generata un'eccezione. **Scrivere** è simile a **lettura**, ma non viene restituito il numero di byte scritti. Se si verifica un errore di scrittura, inclusi non di scrivere tutti i byte specificati, viene generata un'eccezione. Se si dispone di un oggetto valido `CFile` dell'oggetto, è possibile leggerlo o scrivere come illustrato nell'esempio seguente:  
  
 [!code-cpp[NVC_MFCFiles#2](../atl-mfc-shared/reference/codesnippet/cpp/reading-and-writing-files_1.cpp)]  
  
> [!NOTE]
>  In genere è necessario effettuare le operazioni di input/output all'interno di un **provare**/**catch** blocco di eccezioni. Per ulteriori informazioni, vedere [gestione delle eccezioni (MFC)](../mfc/exception-handling-in-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [File](../mfc/files-in-mfc.md)

