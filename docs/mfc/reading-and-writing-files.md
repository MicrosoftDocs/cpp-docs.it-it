---
title: Lettura e scrittura di file
ms.date: 11/04/2016
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
ms.openlocfilehash: ab1ddc58ec6cc2b67e5843f46afbead3ead54eba
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57267673"
---
# <a name="reading-and-writing-files"></a>Lettura e scrittura di file

Se hai già usato le funzioni di gestione dei file di libreria di runtime C, MFC la lettura e scrittura apparirà familiare. Questo articolo descrive la lettura direttamente da e scrivere direttamente su un `CFile` oggetto. È possibile inoltre memorizzati nel buffer i/o file con il [CArchive](../mfc/reference/carchive-class.md) classe.

#### <a name="to-read-from-and-write-to-the-file"></a>Per leggere e scrivere nel file

1. Usare la `Read` e `Write` funzioni membro per leggere e scrivere dati nel file.

     -oppure-

1. Il `Seek` funzione membro è disponibile anche per lo spostamento in un offset specifico all'interno del file.

`Read` accetta un puntatore a un buffer e il numero di byte da leggere e restituisce il numero effettivo di byte letti. Se il numero di byte richiesto potrebbe non essere letto perché la fine del file (EOF) viene raggiunta, viene restituito il numero effettivo di byte letti. Se si verifica un errore di lettura, viene generata un'eccezione. `Write` è simile a `Read`, ma non viene restituito il numero di byte scritti. Se si verifica un errore di scrittura, tra cui non scrive tutti i byte specificati, viene generata un'eccezione. Se si dispone di un valore valido `CFile` dell'oggetto, è possibile leggere da essa o scrivere a esso, come illustrato nell'esempio seguente:

[!code-cpp[NVC_MFCFiles#2](../atl-mfc-shared/reference/codesnippet/cpp/reading-and-writing-files_1.cpp)]

> [!NOTE]
>  In genere è necessario effettuare operazioni di input/output all'interno di un **provare**/**catch** blocco gestione delle eccezioni. Per altre informazioni, vedere [gestione delle eccezioni (MFC)](../mfc/exception-handling-in-mfc.md).

## <a name="see-also"></a>Vedere anche

[File](../mfc/files-in-mfc.md)
